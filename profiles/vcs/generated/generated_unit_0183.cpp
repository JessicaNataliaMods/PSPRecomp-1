#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0183[64] = {
    0x0001411252414013ull, 0x16805A0000025500ull, 0x3221D25A48861845ull, 0x45A20945890022A9ull,
    0x2259200A244B2401ull, 0x55502A8912802451ull, 0x100082200A000804ull, 0x3400001002454909ull,
    0x528488254AAA5455ull, 0x56950AA12A84AB02ull, 0x480000142C551282ull, 0x2A952A805A92552Bull,
    0x0551424AAA4250AAull, 0xA228A22882208820ull, 0xA88A5444A2288A28ull, 0xA2228AA4512A228Aull,
    0x45114511548A2288ull, 0x90441112A88A8A51ull, 0xA28AA8A514554528ull, 0x55228A8A54515514ull,
    0x6C4A2A2945114514ull, 0x114AA411128A8A51ull, 0x2294444511115511ull, 0x0000000222222A22ull,
    0x0410410410410400ull, 0x1203410100045041ull, 0x214305284400D2A2ull, 0x880408004004050Aull,
    0x01009504A0555548ull, 0x5555484028118008ull, 0x55240440000402B5ull, 0x0080800040200AD2ull,
    0x0004100202000104ull, 0x1020808255250880ull, 0x0084042A52880401ull, 0x44290100C5541000ull,
    0x304A8844000040D5ull, 0x0410020200010080ull, 0x48800A5000842201ull, 0x5A404298850A5221ull,
    0x28295242AAA40008ull, 0x2B04454C88A28092ull, 0x4914A45291414A92ull, 0x2532228A0248A0A5ull,
    0x8500000054915822ull, 0x92A9692A9692A8A4ull, 0x24529692A9692A96ull, 0x5A4A5A4A5A4A5245ull,
    0x800C145491205A4Aull, 0x1000000000000000ull, 0x5000000000000000ull, 0x1490052820415243ull,
    0x0040544112020202ull, 0x0542000102109404ull, 0x9400020B82002001ull, 0x4864800A10081080ull,
    0x0202801030800812ull, 0x8000A001920408A4ull, 0x5A9552A22A052240ull, 0x005114A04046AA05ull,
    0x2010111000080951ull, 0x0004080004000411ull, 0x2216A88500408008ull, 0x04000008D4545542ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0183[64] = {
    1u, 15u, 28u, 51u, 71u, 89u, 109u, 117u, 130u, 154u, 178u, 193u, 219u, 241u, 257u, 278u,
    300u, 320u, 340u, 364u, 388u, 411u, 432u, 452u, 462u, 471u, 483u, 501u, 511u, 529u, 546u, 561u,
    571u, 577u, 591u, 604u, 618u, 633u, 639u, 651u, 671u, 689u, 709u, 731u, 751u, 765u, 792u, 819u,
    846u, 865u, 866u, 868u, 885u, 896u, 907u, 918u, 930u, 940u, 952u, 974u, 991u, 1002u, 1008u, 1022u,
};
void recomp_unit_0183_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,6,16,29 fprs=12,13,20,0 gpr_occ=4716 fpr_occ=100 gpr_total=6292 fpr_total=106
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_0 = ctx.fpr[0];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.gpr[29] = aot_gpr_29; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[0] = aot_fpr_0; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_29 = ctx.gpr[29]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_0 = ctx.fpr[0]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE0000u;
        entry_id = 0u;
        if (entry_delta < 16364u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0183[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0183[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08AE0000;
    case 2u: goto L_08AE0004;
    case 3u: goto L_08AE0010;
    case 4u: goto L_08AE0038;
    case 5u: goto L_08AE0040;
    case 6u: goto L_08AE0058;
    case 7u: goto L_08AE0064;
    case 8u: goto L_08AE0070;
    case 9u: goto L_08AE0078;
    case 10u: goto L_08AE0084;
    case 11u: goto L_08AE0090;
    case 12u: goto L_08AE00A0;
    case 13u: goto L_08AE00B8;
    case 14u: goto L_08AE00C0;
    case 15u: goto L_08AE0120;
    case 16u: goto L_08AE0128;
    case 17u: goto L_08AE0130;
    case 18u: goto L_08AE0138;
    case 19u: goto L_08AE0144;
    case 20u: goto L_08AE01A4;
    case 21u: goto L_08AE01AC;
    case 22u: goto L_08AE01B0;
    case 23u: goto L_08AE01B8;
    case 24u: goto L_08AE01DC;
    case 25u: goto L_08AE01E4;
    case 26u: goto L_08AE01E8;
    case 27u: goto L_08AE01F0;
    case 28u: goto L_08AE0200;
    case 29u: goto L_08AE0208;
    case 30u: goto L_08AE0218;
    case 31u: goto L_08AE022C;
    case 32u: goto L_08AE0230;
    case 33u: goto L_08AE0244;
    case 34u: goto L_08AE0248;
    case 35u: goto L_08AE025C;
    case 36u: goto L_08AE026C;
    case 37u: goto L_08AE0278;
    case 38u: goto L_08AE0284;
    case 39u: goto L_08AE028C;
    case 40u: goto L_08AE0290;
    case 41u: goto L_08AE0298;
    case 42u: goto L_08AE02A4;
    case 43u: goto L_08AE02B0;
    case 44u: goto L_08AE02B8;
    case 45u: goto L_08AE02BC;
    case 46u: goto L_08AE02C0;
    case 47u: goto L_08AE02D4;
    case 48u: goto L_08AE02E4;
    case 49u: goto L_08AE02F0;
    case 50u: goto L_08AE02F4;
    case 51u: goto L_08AE0300;
    case 52u: goto L_08AE030C;
    case 53u: goto L_08AE0314;
    case 54u: goto L_08AE031C;
    case 55u: goto L_08AE0324;
    case 56u: goto L_08AE0334;
    case 57u: goto L_08AE0360;
    case 58u: goto L_08AE036C;
    case 59u: goto L_08AE037C;
    case 60u: goto L_08AE0380;
    case 61u: goto L_08AE0388;
    case 62u: goto L_08AE0398;
    case 63u: goto L_08AE03A0;
    case 64u: goto L_08AE03AC;
    case 65u: goto L_08AE03C4;
    case 66u: goto L_08AE03D4;
    case 67u: goto L_08AE03DC;
    case 68u: goto L_08AE03E0;
    case 69u: goto L_08AE03E8;
    case 70u: goto L_08AE03F8;
    case 71u: goto L_08AE0400;
    case 72u: goto L_08AE0428;
    case 73u: goto L_08AE0434;
    case 74u: goto L_08AE0440;
    case 75u: goto L_08AE0444;
    case 76u: goto L_08AE044C;
    case 77u: goto L_08AE0458;
    case 78u: goto L_08AE0468;
    case 79u: goto L_08AE0474;
    case 80u: goto L_08AE0484;
    case 81u: goto L_08AE048C;
    case 82u: goto L_08AE04B4;
    case 83u: goto L_08AE04C0;
    case 84u: goto L_08AE04CC;
    case 85u: goto L_08AE04D0;
    case 86u: goto L_08AE04D8;
    case 87u: goto L_08AE04E4;
    case 88u: goto L_08AE04F4;
    case 89u: goto L_08AE0500;
    case 90u: goto L_08AE0510;
    case 91u: goto L_08AE0518;
    case 92u: goto L_08AE0528;
    case 93u: goto L_08AE0534;
    case 94u: goto L_08AE055C;
    case 95u: goto L_08AE0564;
    case 96u: goto L_08AE0570;
    case 97u: goto L_08AE0580;
    case 98u: goto L_08AE058C;
    case 99u: goto L_08AE059C;
    case 100u: goto L_08AE05A4;
    case 101u: goto L_08AE05AC;
    case 102u: goto L_08AE05B4;
    case 103u: goto L_08AE05D0;
    case 104u: goto L_08AE05D8;
    case 105u: goto L_08AE05E0;
    case 106u: goto L_08AE05E8;
    case 107u: goto L_08AE05F0;
    case 108u: goto L_08AE05F8;
    case 109u: goto L_08AE0608;
    case 110u: goto L_08AE062C;
    case 111u: goto L_08AE0664;
    case 112u: goto L_08AE066C;
    case 113u: goto L_08AE0694;
    case 114u: goto L_08AE06A4;
    case 115u: goto L_08AE06BC;
    case 116u: goto L_08AE06F0;
    case 117u: goto L_08AE0700;
    case 118u: goto L_08AE070C;
    case 119u: goto L_08AE0720;
    case 120u: goto L_08AE072C;
    case 121u: goto L_08AE0738;
    case 122u: goto L_08AE0740;
    case 123u: goto L_08AE0748;
    case 124u: goto L_08AE0758;
    case 125u: goto L_08AE0764;
    case 126u: goto L_08AE0790;
    case 127u: goto L_08AE07E8;
    case 128u: goto L_08AE07F0;
    case 129u: goto L_08AE07F4;
    case 130u: goto L_08AE0800;
    case 131u: goto L_08AE0808;
    case 132u: goto L_08AE0810;
    case 133u: goto L_08AE0818;
    case 134u: goto L_08AE0828;
    case 135u: goto L_08AE0830;
    case 136u: goto L_08AE0838;
    case 137u: goto L_08AE0844;
    case 138u: goto L_08AE084C;
    case 139u: goto L_08AE0854;
    case 140u: goto L_08AE085C;
    case 141u: goto L_08AE0864;
    case 142u: goto L_08AE086C;
    case 143u: goto L_08AE0878;
    case 144u: goto L_08AE0880;
    case 145u: goto L_08AE0888;
    case 146u: goto L_08AE0894;
    case 147u: goto L_08AE08AC;
    case 148u: goto L_08AE08BC;
    case 149u: goto L_08AE08C8;
    case 150u: goto L_08AE08DC;
    case 151u: goto L_08AE08E4;
    case 152u: goto L_08AE08F0;
    case 153u: goto L_08AE08F8;
    case 154u: goto L_08AE0904;
    case 155u: goto L_08AE0920;
    case 156u: goto L_08AE0924;
    case 157u: goto L_08AE092C;
    case 158u: goto L_08AE0934;
    case 159u: goto L_08AE093C;
    case 160u: goto L_08AE0948;
    case 161u: goto L_08AE095C;
    case 162u: goto L_08AE0964;
    case 163u: goto L_08AE096C;
    case 164u: goto L_08AE0974;
    case 165u: goto L_08AE0980;
    case 166u: goto L_08AE0994;
    case 167u: goto L_08AE099C;
    case 168u: goto L_08AE09A4;
    case 169u: goto L_08AE09AC;
    case 170u: goto L_08AE09C0;
    case 171u: goto L_08AE09C8;
    case 172u: goto L_08AE09D0;
    case 173u: goto L_08AE09DC;
    case 174u: goto L_08AE09E4;
    case 175u: goto L_08AE09E8;
    case 176u: goto L_08AE09F0;
    case 177u: goto L_08AE09F8;
    case 178u: goto L_08AE0A04;
    case 179u: goto L_08AE0A1C;
    case 180u: goto L_08AE0A24;
    case 181u: goto L_08AE0A30;
    case 182u: goto L_08AE0A40;
    case 183u: goto L_08AE0A48;
    case 184u: goto L_08AE0A50;
    case 185u: goto L_08AE0A58;
    case 186u: goto L_08AE0A68;
    case 187u: goto L_08AE0A6C;
    case 188u: goto L_08AE0A74;
    case 189u: goto L_08AE0A88;
    case 190u: goto L_08AE0A90;
    case 191u: goto L_08AE0AEC;
    case 192u: goto L_08AE0AF8;
    case 193u: goto L_08AE0B00;
    case 194u: goto L_08AE0B04;
    case 195u: goto L_08AE0B0C;
    case 196u: goto L_08AE0B14;
    case 197u: goto L_08AE0B20;
    case 198u: goto L_08AE0B28;
    case 199u: goto L_08AE0B30;
    case 200u: goto L_08AE0B38;
    case 201u: goto L_08AE0B44;
    case 202u: goto L_08AE0B50;
    case 203u: goto L_08AE0B5C;
    case 204u: goto L_08AE0B64;
    case 205u: goto L_08AE0B6C;
    case 206u: goto L_08AE0B70;
    case 207u: goto L_08AE0B78;
    case 208u: goto L_08AE0B9C;
    case 209u: goto L_08AE0BA4;
    case 210u: goto L_08AE0BAC;
    case 211u: goto L_08AE0BB4;
    case 212u: goto L_08AE0BC0;
    case 213u: goto L_08AE0BC8;
    case 214u: goto L_08AE0BD0;
    case 215u: goto L_08AE0BDC;
    case 216u: goto L_08AE0BE4;
    case 217u: goto L_08AE0BEC;
    case 218u: goto L_08AE0BF4;
    case 219u: goto L_08AE0C04;
    case 220u: goto L_08AE0C0C;
    case 221u: goto L_08AE0C14;
    case 222u: goto L_08AE0C1C;
    case 223u: goto L_08AE0C30;
    case 224u: goto L_08AE0C38;
    case 225u: goto L_08AE0C44;
    case 226u: goto L_08AE0C58;
    case 227u: goto L_08AE0C64;
    case 228u: goto L_08AE0C6C;
    case 229u: goto L_08AE0C74;
    case 230u: goto L_08AE0C7C;
    case 231u: goto L_08AE0C84;
    case 232u: goto L_08AE0C8C;
    case 233u: goto L_08AE0C98;
    case 234u: goto L_08AE0CA4;
    case 235u: goto L_08AE0CB8;
    case 236u: goto L_08AE0CC0;
    case 237u: goto L_08AE0CD0;
    case 238u: goto L_08AE0CD8;
    case 239u: goto L_08AE0CE0;
    case 240u: goto L_08AE0CE8;
    case 241u: goto L_08AE0D14;
    case 242u: goto L_08AE0D2C;
    case 243u: goto L_08AE0D3C;
    case 244u: goto L_08AE0D54;
    case 245u: goto L_08AE0D64;
    case 246u: goto L_08AE0D7C;
    case 247u: goto L_08AE0D8C;
    case 248u: goto L_08AE0D94;
    case 249u: goto L_08AE0DA4;
    case 250u: goto L_08AE0DB4;
    case 251u: goto L_08AE0DBC;
    case 252u: goto L_08AE0DCC;
    case 253u: goto L_08AE0DD4;
    case 254u: goto L_08AE0DE4;
    case 255u: goto L_08AE0DF4;
    case 256u: goto L_08AE0DFC;
    case 257u: goto L_08AE0E0C;
    case 258u: goto L_08AE0E14;
    case 259u: goto L_08AE0E24;
    case 260u: goto L_08AE0E2C;
    case 261u: goto L_08AE0E3C;
    case 262u: goto L_08AE0E4C;
    case 263u: goto L_08AE0E54;
    case 264u: goto L_08AE0E64;
    case 265u: goto L_08AE0E74;
    case 266u: goto L_08AE0E7C;
    case 267u: goto L_08AE0E88;
    case 268u: goto L_08AE0E98;
    case 269u: goto L_08AE0EA8;
    case 270u: goto L_08AE0EB0;
    case 271u: goto L_08AE0EB8;
    case 272u: goto L_08AE0EC4;
    case 273u: goto L_08AE0ECC;
    case 274u: goto L_08AE0EDC;
    case 275u: goto L_08AE0EEC;
    case 276u: goto L_08AE0EF4;
    case 277u: goto L_08AE0EFC;
    case 278u: goto L_08AE0F04;
    case 279u: goto L_08AE0F0C;
    case 280u: goto L_08AE0F1C;
    case 281u: goto L_08AE0F24;
    case 282u: goto L_08AE0F34;
    case 283u: goto L_08AE0F44;
    case 284u: goto L_08AE0F4C;
    case 285u: goto L_08AE0F54;
    case 286u: goto L_08AE0F60;
    case 287u: goto L_08AE0F70;
    case 288u: goto L_08AE0F78;
    case 289u: goto L_08AE0F88;
    case 290u: goto L_08AE0F94;
    case 291u: goto L_08AE0F9C;
    case 292u: goto L_08AE0FA4;
    case 293u: goto L_08AE0FAC;
    case 294u: goto L_08AE0FBC;
    case 295u: goto L_08AE0FC4;
    case 296u: goto L_08AE0FD4;
    case 297u: goto L_08AE0FE4;
    case 298u: goto L_08AE0FF4;
    case 299u: goto L_08AE0FFC;
    case 300u: goto L_08AE100C;
    case 301u: goto L_08AE101C;
    case 302u: goto L_08AE1024;
    case 303u: goto L_08AE1034;
    case 304u: goto L_08AE1044;
    case 305u: goto L_08AE104C;
    case 306u: goto L_08AE105C;
    case 307u: goto L_08AE1068;
    case 308u: goto L_08AE1070;
    case 309u: goto L_08AE1078;
    case 310u: goto L_08AE1080;
    case 311u: goto L_08AE1090;
    case 312u: goto L_08AE10A0;
    case 313u: goto L_08AE10A8;
    case 314u: goto L_08AE10B8;
    case 315u: goto L_08AE10C0;
    case 316u: goto L_08AE10D0;
    case 317u: goto L_08AE10E0;
    case 318u: goto L_08AE10E8;
    case 319u: goto L_08AE10F8;
    case 320u: goto L_08AE1100;
    case 321u: goto L_08AE1110;
    case 322u: goto L_08AE1118;
    case 323u: goto L_08AE1124;
    case 324u: goto L_08AE112C;
    case 325u: goto L_08AE113C;
    case 326u: goto L_08AE1144;
    case 327u: goto L_08AE114C;
    case 328u: goto L_08AE115C;
    case 329u: goto L_08AE116C;
    case 330u: goto L_08AE1174;
    case 331u: goto L_08AE117C;
    case 332u: goto L_08AE1184;
    case 333u: goto L_08AE1190;
    case 334u: goto L_08AE11A0;
    case 335u: goto L_08AE11B0;
    case 336u: goto L_08AE11C8;
    case 337u: goto L_08AE11D8;
    case 338u: goto L_08AE11F0;
    case 339u: goto L_08AE11FC;
    case 340u: goto L_08AE120C;
    case 341u: goto L_08AE1214;
    case 342u: goto L_08AE1220;
    case 343u: goto L_08AE1228;
    case 344u: goto L_08AE1238;
    case 345u: goto L_08AE1240;
    case 346u: goto L_08AE1248;
    case 347u: goto L_08AE1250;
    case 348u: goto L_08AE1258;
    case 349u: goto L_08AE1268;
    case 350u: goto L_08AE1270;
    case 351u: goto L_08AE1280;
    case 352u: goto L_08AE1288;
    case 353u: goto L_08AE1294;
    case 354u: goto L_08AE129C;
    case 355u: goto L_08AE12AC;
    case 356u: goto L_08AE12B4;
    case 357u: goto L_08AE12BC;
    case 358u: goto L_08AE12C4;
    case 359u: goto L_08AE12CC;
    case 360u: goto L_08AE12DC;
    case 361u: goto L_08AE12E4;
    case 362u: goto L_08AE12F4;
    case 363u: goto L_08AE12FC;
    case 364u: goto L_08AE1308;
    case 365u: goto L_08AE1310;
    case 366u: goto L_08AE1320;
    case 367u: goto L_08AE1328;
    case 368u: goto L_08AE1330;
    case 369u: goto L_08AE1338;
    case 370u: goto L_08AE1340;
    case 371u: goto L_08AE1350;
    case 372u: goto L_08AE1358;
    case 373u: goto L_08AE1368;
    case 374u: goto L_08AE1370;
    case 375u: goto L_08AE1378;
    case 376u: goto L_08AE1384;
    case 377u: goto L_08AE138C;
    case 378u: goto L_08AE139C;
    case 379u: goto L_08AE13A4;
    case 380u: goto L_08AE13AC;
    case 381u: goto L_08AE13BC;
    case 382u: goto L_08AE13C4;
    case 383u: goto L_08AE13D4;
    case 384u: goto L_08AE13E0;
    case 385u: goto L_08AE13E8;
    case 386u: goto L_08AE13F0;
    case 387u: goto L_08AE13F8;
    case 388u: goto L_08AE1408;
    case 389u: goto L_08AE1410;
    case 390u: goto L_08AE1420;
    case 391u: goto L_08AE1428;
    case 392u: goto L_08AE1438;
    case 393u: goto L_08AE1440;
    case 394u: goto L_08AE1450;
    case 395u: goto L_08AE1460;
    case 396u: goto L_08AE1468;
    case 397u: goto L_08AE1478;
    case 398u: goto L_08AE1480;
    case 399u: goto L_08AE148C;
    case 400u: goto L_08AE1494;
    case 401u: goto L_08AE14A4;
    case 402u: goto L_08AE14AC;
    case 403u: goto L_08AE14B4;
    case 404u: goto L_08AE14C4;
    case 405u: goto L_08AE14CC;
    case 406u: goto L_08AE14D8;
    case 407u: goto L_08AE14E8;
    case 408u: goto L_08AE14EC;
    case 409u: goto L_08AE14F4;
    case 410u: goto L_08AE14F8;
    case 411u: goto L_08AE1500;
    case 412u: goto L_08AE1510;
    case 413u: goto L_08AE1518;
    case 414u: goto L_08AE1524;
    case 415u: goto L_08AE152C;
    case 416u: goto L_08AE153C;
    case 417u: goto L_08AE1544;
    case 418u: goto L_08AE154C;
    case 419u: goto L_08AE155C;
    case 420u: goto L_08AE1564;
    case 421u: goto L_08AE1570;
    case 422u: goto L_08AE1580;
    case 423u: goto L_08AE1590;
    case 424u: goto L_08AE15A8;
    case 425u: goto L_08AE15B4;
    case 426u: goto L_08AE15BC;
    case 427u: goto L_08AE15C4;
    case 428u: goto L_08AE15CC;
    case 429u: goto L_08AE15D8;
    case 430u: goto L_08AE15E0;
    case 431u: goto L_08AE15F0;
    case 432u: goto L_08AE1600;
    case 433u: goto L_08AE1610;
    case 434u: goto L_08AE1620;
    case 435u: goto L_08AE1628;
    case 436u: goto L_08AE1630;
    case 437u: goto L_08AE1638;
    case 438u: goto L_08AE1640;
    case 439u: goto L_08AE1650;
    case 440u: goto L_08AE1660;
    case 441u: goto L_08AE1670;
    case 442u: goto L_08AE1680;
    case 443u: goto L_08AE1688;
    case 444u: goto L_08AE1698;
    case 445u: goto L_08AE16A8;
    case 446u: goto L_08AE16B8;
    case 447u: goto L_08AE16C8;
    case 448u: goto L_08AE16D0;
    case 449u: goto L_08AE16DC;
    case 450u: goto L_08AE16E4;
    case 451u: goto L_08AE16F4;
    case 452u: goto L_08AE1704;
    case 453u: goto L_08AE1714;
    case 454u: goto L_08AE1724;
    case 455u: goto L_08AE172C;
    case 456u: goto L_08AE1734;
    case 457u: goto L_08AE1744;
    case 458u: goto L_08AE1754;
    case 459u: goto L_08AE1764;
    case 460u: goto L_08AE1774;
    case 461u: goto L_08AE1784;
    case 462u: goto L_08AE1828;
    case 463u: goto L_08AE1840;
    case 464u: goto L_08AE1858;
    case 465u: goto L_08AE1870;
    case 466u: goto L_08AE1888;
    case 467u: goto L_08AE18A0;
    case 468u: goto L_08AE18B8;
    case 469u: goto L_08AE18D0;
    case 470u: goto L_08AE18E8;
    case 471u: goto L_08AE1900;
    case 472u: goto L_08AE1918;
    case 473u: goto L_08AE1930;
    case 474u: goto L_08AE1938;
    case 475u: goto L_08AE1948;
    case 476u: goto L_08AE1980;
    case 477u: goto L_08AE19A0;
    case 478u: goto L_08AE19B8;
    case 479u: goto L_08AE19C0;
    case 480u: goto L_08AE19C4;
    case 481u: goto L_08AE19E4;
    case 482u: goto L_08AE19F0;
    case 483u: goto L_08AE1A04;
    case 484u: goto L_08AE1A14;
    case 485u: goto L_08AE1A1C;
    case 486u: goto L_08AE1A24;
    case 487u: goto L_08AE1A30;
    case 488u: goto L_08AE1A38;
    case 489u: goto L_08AE1A3C;
    case 490u: goto L_08AE1A68;
    case 491u: goto L_08AE1A78;
    case 492u: goto L_08AE1A8C;
    case 493u: goto L_08AE1A94;
    case 494u: goto L_08AE1AA0;
    case 495u: goto L_08AE1AA8;
    case 496u: goto L_08AE1AC0;
    case 497u: goto L_08AE1AC4;
    case 498u: goto L_08AE1AD8;
    case 499u: goto L_08AE1AE0;
    case 500u: goto L_08AE1AF4;
    case 501u: goto L_08AE1B04;
    case 502u: goto L_08AE1B0C;
    case 503u: goto L_08AE1B20;
    case 504u: goto L_08AE1B28;
    case 505u: goto L_08AE1B48;
    case 506u: goto L_08AE1B78;
    case 507u: goto L_08AE1BAC;
    case 508u: goto L_08AE1BC8;
    case 509u: goto L_08AE1BEC;
    case 510u: goto L_08AE1BFC;
    case 511u: goto L_08AE1C0C;
    case 512u: goto L_08AE1C18;
    case 513u: goto L_08AE1C20;
    case 514u: goto L_08AE1C28;
    case 515u: goto L_08AE1C30;
    case 516u: goto L_08AE1C38;
    case 517u: goto L_08AE1C40;
    case 518u: goto L_08AE1C48;
    case 519u: goto L_08AE1C50;
    case 520u: goto L_08AE1C58;
    case 521u: goto L_08AE1C74;
    case 522u: goto L_08AE1C7C;
    case 523u: goto L_08AE1C88;
    case 524u: goto L_08AE1CA0;
    case 525u: goto L_08AE1CA8;
    case 526u: goto L_08AE1CB0;
    case 527u: goto L_08AE1CBC;
    case 528u: goto L_08AE1CE0;
    case 529u: goto L_08AE1D0C;
    case 530u: goto L_08AE1D3C;
    case 531u: goto L_08AE1D40;
    case 532u: goto L_08AE1D50;
    case 533u: goto L_08AE1D6C;
    case 534u: goto L_08AE1D74;
    case 535u: goto L_08AE1D98;
    case 536u: goto L_08AE1DAC;
    case 537u: goto L_08AE1DB8;
    case 538u: goto L_08AE1DC0;
    case 539u: goto L_08AE1DC8;
    case 540u: goto L_08AE1DD0;
    case 541u: goto L_08AE1DD8;
    case 542u: goto L_08AE1DE0;
    case 543u: goto L_08AE1DE8;
    case 544u: goto L_08AE1DF0;
    case 545u: goto L_08AE1DF8;
    case 546u: goto L_08AE1E00;
    case 547u: goto L_08AE1E08;
    case 548u: goto L_08AE1E10;
    case 549u: goto L_08AE1E14;
    case 550u: goto L_08AE1E1C;
    case 551u: goto L_08AE1E24;
    case 552u: goto L_08AE1E48;
    case 553u: goto L_08AE1E98;
    case 554u: goto L_08AE1EA8;
    case 555u: goto L_08AE1EC8;
    case 556u: goto L_08AE1ED4;
    case 557u: goto L_08AE1EE0;
    case 558u: goto L_08AE1EE8;
    case 559u: goto L_08AE1EF0;
    case 560u: goto L_08AE1EF8;
    case 561u: goto L_08AE1F04;
    case 562u: goto L_08AE1F10;
    case 563u: goto L_08AE1F18;
    case 564u: goto L_08AE1F1C;
    case 565u: goto L_08AE1F24;
    case 566u: goto L_08AE1F2C;
    case 567u: goto L_08AE1F54;
    case 568u: goto L_08AE1F78;
    case 569u: goto L_08AE1FBC;
    case 570u: goto L_08AE1FDC;
    case 571u: goto L_08AE2008;
    case 572u: goto L_08AE2020;
    case 573u: goto L_08AE2064;
    case 574u: goto L_08AE2084;
    case 575u: goto L_08AE20B0;
    case 576u: goto L_08AE20C8;
    case 577u: goto L_08AE211C;
    case 578u: goto L_08AE212C;
    case 579u: goto L_08AE2140;
    case 580u: goto L_08AE2148;
    case 581u: goto L_08AE2154;
    case 582u: goto L_08AE2160;
    case 583u: goto L_08AE2168;
    case 584u: goto L_08AE2170;
    case 585u: goto L_08AE2178;
    case 586u: goto L_08AE2184;
    case 587u: goto L_08AE219C;
    case 588u: goto L_08AE21BC;
    case 589u: goto L_08AE21D4;
    case 590u: goto L_08AE21F0;
    case 591u: goto L_08AE2200;
    case 592u: goto L_08AE2228;
    case 593u: goto L_08AE224C;
    case 594u: goto L_08AE225C;
    case 595u: goto L_08AE2264;
    case 596u: goto L_08AE2270;
    case 597u: goto L_08AE2278;
    case 598u: goto L_08AE2284;
    case 599u: goto L_08AE228C;
    case 600u: goto L_08AE2294;
    case 601u: goto L_08AE22A8;
    case 602u: goto L_08AE22C8;
    case 603u: goto L_08AE22DC;
    case 604u: goto L_08AE2330;
    case 605u: goto L_08AE2348;
    case 606u: goto L_08AE2350;
    case 607u: goto L_08AE2358;
    case 608u: goto L_08AE2360;
    case 609u: goto L_08AE2368;
    case 610u: goto L_08AE2378;
    case 611u: goto L_08AE237C;
    case 612u: goto L_08AE23A0;
    case 613u: goto L_08AE23C0;
    case 614u: goto L_08AE23CC;
    case 615u: goto L_08AE23D4;
    case 616u: goto L_08AE23E8;
    case 617u: goto L_08AE23F8;
    case 618u: goto L_08AE2400;
    case 619u: goto L_08AE2408;
    case 620u: goto L_08AE2410;
    case 621u: goto L_08AE2418;
    case 622u: goto L_08AE241C;
    case 623u: goto L_08AE2438;
    case 624u: goto L_08AE2488;
    case 625u: goto L_08AE2498;
    case 626u: goto L_08AE24AC;
    case 627u: goto L_08AE24BC;
    case 628u: goto L_08AE24C4;
    case 629u: goto L_08AE24CC;
    case 630u: goto L_08AE24D8;
    case 631u: goto L_08AE24F0;
    case 632u: goto L_08AE24F4;
    case 633u: goto L_08AE251C;
    case 634u: goto L_08AE2540;
    case 635u: goto L_08AE2584;
    case 636u: goto L_08AE25A4;
    case 637u: goto L_08AE25D0;
    case 638u: goto L_08AE25E8;
    case 639u: goto L_08AE2600;
    case 640u: goto L_08AE2624;
    case 641u: goto L_08AE2634;
    case 642u: goto L_08AE2648;
    case 643u: goto L_08AE265C;
    case 644u: goto L_08AE2690;
    case 645u: goto L_08AE2698;
    case 646u: goto L_08AE26A4;
    case 647u: goto L_08AE26AC;
    case 648u: goto L_08AE26DC;
    case 649u: goto L_08AE26EC;
    case 650u: goto L_08AE26F8;
    case 651u: goto L_08AE2700;
    case 652u: goto L_08AE2714;
    case 653u: goto L_08AE2724;
    case 654u: goto L_08AE2730;
    case 655u: goto L_08AE2738;
    case 656u: goto L_08AE2744;
    case 657u: goto L_08AE274C;
    case 658u: goto L_08AE2760;
    case 659u: goto L_08AE2768;
    case 660u: goto L_08AE277C;
    case 661u: goto L_08AE278C;
    case 662u: goto L_08AE2790;
    case 663u: goto L_08AE279C;
    case 664u: goto L_08AE27A4;
    case 665u: goto L_08AE27B8;
    case 666u: goto L_08AE27D8;
    case 667u: goto L_08AE27E4;
    case 668u: goto L_08AE27EC;
    case 669u: goto L_08AE27F0;
    case 670u: goto L_08AE27F8;
    case 671u: goto L_08AE280C;
    case 672u: goto L_08AE2848;
    case 673u: goto L_08AE2854;
    case 674u: goto L_08AE285C;
    case 675u: goto L_08AE2864;
    case 676u: goto L_08AE286C;
    case 677u: goto L_08AE2874;
    case 678u: goto L_08AE287C;
    case 679u: goto L_08AE2884;
    case 680u: goto L_08AE2898;
    case 681u: goto L_08AE28A4;
    case 682u: goto L_08AE28B0;
    case 683u: goto L_08AE28B8;
    case 684u: goto L_08AE28C0;
    case 685u: goto L_08AE28CC;
    case 686u: goto L_08AE28D4;
    case 687u: goto L_08AE28EC;
    case 688u: goto L_08AE28F4;
    case 689u: goto L_08AE2904;
    case 690u: goto L_08AE2910;
    case 691u: goto L_08AE291C;
    case 692u: goto L_08AE293C;
    case 693u: goto L_08AE2944;
    case 694u: goto L_08AE2954;
    case 695u: goto L_08AE295C;
    case 696u: goto L_08AE296C;
    case 697u: goto L_08AE297C;
    case 698u: goto L_08AE2988;
    case 699u: goto L_08AE298C;
    case 700u: goto L_08AE2998;
    case 701u: goto L_08AE29A0;
    case 702u: goto L_08AE29A8;
    case 703u: goto L_08AE29B8;
    case 704u: goto L_08AE29C8;
    case 705u: goto L_08AE29E0;
    case 706u: goto L_08AE29E4;
    case 707u: goto L_08AE29EC;
    case 708u: goto L_08AE29F4;
    case 709u: goto L_08AE2A04;
    case 710u: goto L_08AE2A10;
    case 711u: goto L_08AE2A1C;
    case 712u: goto L_08AE2A24;
    case 713u: goto L_08AE2A2C;
    case 714u: goto L_08AE2A38;
    case 715u: goto L_08AE2A40;
    case 716u: goto L_08AE2A58;
    case 717u: goto L_08AE2A60;
    case 718u: goto L_08AE2A70;
    case 719u: goto L_08AE2A7C;
    case 720u: goto L_08AE2A84;
    case 721u: goto L_08AE2A90;
    case 722u: goto L_08AE2A98;
    case 723u: goto L_08AE2AA8;
    case 724u: goto L_08AE2AB4;
    case 725u: goto L_08AE2ABC;
    case 726u: goto L_08AE2AC8;
    case 727u: goto L_08AE2AD0;
    case 728u: goto L_08AE2AE0;
    case 729u: goto L_08AE2AEC;
    case 730u: goto L_08AE2AF8;
    case 731u: goto L_08AE2B00;
    case 732u: goto L_08AE2B08;
    case 733u: goto L_08AE2B14;
    case 734u: goto L_08AE2B1C;
    case 735u: goto L_08AE2B34;
    case 736u: goto L_08AE2B3C;
    case 737u: goto L_08AE2B4C;
    case 738u: goto L_08AE2B58;
    case 739u: goto L_08AE2B64;
    case 740u: goto L_08AE2B84;
    case 741u: goto L_08AE2B8C;
    case 742u: goto L_08AE2B9C;
    case 743u: goto L_08AE2BA4;
    case 744u: goto L_08AE2BB4;
    case 745u: goto L_08AE2BC4;
    case 746u: goto L_08AE2BD0;
    case 747u: goto L_08AE2BD4;
    case 748u: goto L_08AE2BE0;
    case 749u: goto L_08AE2BE8;
    case 750u: goto L_08AE2BF4;
    case 751u: goto L_08AE2C04;
    case 752u: goto L_08AE2C14;
    case 753u: goto L_08AE2C2C;
    case 754u: goto L_08AE2C30;
    case 755u: goto L_08AE2C38;
    case 756u: goto L_08AE2C40;
    case 757u: goto L_08AE2C50;
    case 758u: goto L_08AE2C5C;
    case 759u: goto L_08AE2C68;
    case 760u: goto L_08AE2C70;
    case 761u: goto L_08AE2C78;
    case 762u: goto L_08AE2CE0;
    case 763u: goto L_08AE2CE8;
    case 764u: goto L_08AE2CFC;
    case 765u: goto L_08AE2D08;
    case 766u: goto L_08AE2D14;
    case 767u: goto L_08AE2D1C;
    case 768u: goto L_08AE2D2C;
    case 769u: goto L_08AE2D34;
    case 770u: goto L_08AE2D3C;
    case 771u: goto L_08AE2D44;
    case 772u: goto L_08AE2D50;
    case 773u: goto L_08AE2D5C;
    case 774u: goto L_08AE2D64;
    case 775u: goto L_08AE2D68;
    case 776u: goto L_08AE2D70;
    case 777u: goto L_08AE2D7C;
    case 778u: goto L_08AE2D84;
    case 779u: goto L_08AE2D8C;
    case 780u: goto L_08AE2D94;
    case 781u: goto L_08AE2DA0;
    case 782u: goto L_08AE2DAC;
    case 783u: goto L_08AE2DB4;
    case 784u: goto L_08AE2DB8;
    case 785u: goto L_08AE2DC0;
    case 786u: goto L_08AE2DCC;
    case 787u: goto L_08AE2DD4;
    case 788u: goto L_08AE2DDC;
    case 789u: goto L_08AE2DE4;
    case 790u: goto L_08AE2DF0;
    case 791u: goto L_08AE2DFC;
    case 792u: goto L_08AE2E04;
    case 793u: goto L_08AE2E08;
    case 794u: goto L_08AE2E10;
    case 795u: goto L_08AE2E1C;
    case 796u: goto L_08AE2E24;
    case 797u: goto L_08AE2E2C;
    case 798u: goto L_08AE2E34;
    case 799u: goto L_08AE2E40;
    case 800u: goto L_08AE2E4C;
    case 801u: goto L_08AE2E54;
    case 802u: goto L_08AE2E58;
    case 803u: goto L_08AE2E60;
    case 804u: goto L_08AE2E6C;
    case 805u: goto L_08AE2E74;
    case 806u: goto L_08AE2E7C;
    case 807u: goto L_08AE2E84;
    case 808u: goto L_08AE2E90;
    case 809u: goto L_08AE2E9C;
    case 810u: goto L_08AE2EA4;
    case 811u: goto L_08AE2EA8;
    case 812u: goto L_08AE2EB0;
    case 813u: goto L_08AE2EBC;
    case 814u: goto L_08AE2EC4;
    case 815u: goto L_08AE2ED0;
    case 816u: goto L_08AE2ED8;
    case 817u: goto L_08AE2EE8;
    case 818u: goto L_08AE2EF4;
    case 819u: goto L_08AE2F00;
    case 820u: goto L_08AE2F08;
    case 821u: goto L_08AE2F18;
    case 822u: goto L_08AE2F24;
    case 823u: goto L_08AE2F30;
    case 824u: goto L_08AE2F38;
    case 825u: goto L_08AE2F44;
    case 826u: goto L_08AE2F4C;
    case 827u: goto L_08AE2F58;
    case 828u: goto L_08AE2F64;
    case 829u: goto L_08AE2F6C;
    case 830u: goto L_08AE2F70;
    case 831u: goto L_08AE2F78;
    case 832u: goto L_08AE2F84;
    case 833u: goto L_08AE2F8C;
    case 834u: goto L_08AE2F98;
    case 835u: goto L_08AE2FA4;
    case 836u: goto L_08AE2FAC;
    case 837u: goto L_08AE2FB0;
    case 838u: goto L_08AE2FB8;
    case 839u: goto L_08AE2FC4;
    case 840u: goto L_08AE2FCC;
    case 841u: goto L_08AE2FD8;
    case 842u: goto L_08AE2FE4;
    case 843u: goto L_08AE2FEC;
    case 844u: goto L_08AE2FF0;
    case 845u: goto L_08AE2FF8;
    case 846u: goto L_08AE3004;
    case 847u: goto L_08AE300C;
    case 848u: goto L_08AE3018;
    case 849u: goto L_08AE3024;
    case 850u: goto L_08AE302C;
    case 851u: goto L_08AE3030;
    case 852u: goto L_08AE3038;
    case 853u: goto L_08AE3054;
    case 854u: goto L_08AE3060;
    case 855u: goto L_08AE3070;
    case 856u: goto L_08AE307C;
    case 857u: goto L_08AE3088;
    case 858u: goto L_08AE3090;
    case 859u: goto L_08AE3098;
    case 860u: goto L_08AE30A8;
    case 861u: goto L_08AE30B0;
    case 862u: goto L_08AE30C8;
    case 863u: goto L_08AE30CC;
    case 864u: goto L_08AE30FC;
    case 865u: goto L_08AE31F0;
    case 866u: goto L_08AE32F0;
    case 867u: goto L_08AE32F8;
    case 868u: goto L_08AE3300;
    case 869u: goto L_08AE3304;
    case 870u: goto L_08AE3318;
    case 871u: goto L_08AE3324;
    case 872u: goto L_08AE3330;
    case 873u: goto L_08AE3338;
    case 874u: goto L_08AE3340;
    case 875u: goto L_08AE3358;
    case 876u: goto L_08AE3374;
    case 877u: goto L_08AE338C;
    case 878u: goto L_08AE3394;
    case 879u: goto L_08AE33A0;
    case 880u: goto L_08AE33A8;
    case 881u: goto L_08AE33D0;
    case 882u: goto L_08AE33DC;
    case 883u: goto L_08AE33E8;
    case 884u: goto L_08AE33F0;
    case 885u: goto L_08AE3404;
    case 886u: goto L_08AE3424;
    case 887u: goto L_08AE3444;
    case 888u: goto L_08AE3464;
    case 889u: goto L_08AE3470;
    case 890u: goto L_08AE3480;
    case 891u: goto L_08AE3498;
    case 892u: goto L_08AE34A8;
    case 893u: goto L_08AE34B0;
    case 894u: goto L_08AE34B8;
    case 895u: goto L_08AE34D8;
    case 896u: goto L_08AE3508;
    case 897u: goto L_08AE3528;
    case 898u: goto L_08AE3530;
    case 899u: goto L_08AE353C;
    case 900u: goto L_08AE3550;
    case 901u: goto L_08AE3564;
    case 902u: goto L_08AE3580;
    case 903u: goto L_08AE35C4;
    case 904u: goto L_08AE35D8;
    case 905u: goto L_08AE35E0;
    case 906u: goto L_08AE35E8;
    case 907u: goto L_08AE3600;
    case 908u: goto L_08AE3634;
    case 909u: goto L_08AE3664;
    case 910u: goto L_08AE367C;
    case 911u: goto L_08AE3680;
    case 912u: goto L_08AE3684;
    case 913u: goto L_08AE368C;
    case 914u: goto L_08AE36A4;
    case 915u: goto L_08AE36E8;
    case 916u: goto L_08AE36F0;
    case 917u: goto L_08AE36FC;
    case 918u: goto L_08AE371C;
    case 919u: goto L_08AE3730;
    case 920u: goto L_08AE374C;
    case 921u: goto L_08AE3770;
    case 922u: goto L_08AE3784;
    case 923u: goto L_08AE378C;
    case 924u: goto L_08AE37BC;
    case 925u: goto L_08AE37C8;
    case 926u: goto L_08AE37D4;
    case 927u: goto L_08AE37D8;
    case 928u: goto L_08AE37EC;
    case 929u: goto L_08AE37F8;
    case 930u: goto L_08AE3804;
    case 931u: goto L_08AE3810;
    case 932u: goto L_08AE382C;
    case 933u: goto L_08AE385C;
    case 934u: goto L_08AE3870;
    case 935u: goto L_08AE3874;
    case 936u: goto L_08AE3890;
    case 937u: goto L_08AE38BC;
    case 938u: goto L_08AE38C4;
    case 939u: goto L_08AE38E4;
    case 940u: goto L_08AE3908;
    case 941u: goto L_08AE3914;
    case 942u: goto L_08AE391C;
    case 943u: goto L_08AE392C;
    case 944u: goto L_08AE3948;
    case 945u: goto L_08AE3964;
    case 946u: goto L_08AE3970;
    case 947u: goto L_08AE397C;
    case 948u: goto L_08AE3980;
    case 949u: goto L_08AE39B4;
    case 950u: goto L_08AE39BC;
    case 951u: goto L_08AE39FC;
    case 952u: goto L_08AE3A18;
    case 953u: goto L_08AE3A24;
    case 954u: goto L_08AE3A34;
    case 955u: goto L_08AE3A40;
    case 956u: goto L_08AE3A48;
    case 957u: goto L_08AE3A64;
    case 958u: goto L_08AE3A6C;
    case 959u: goto L_08AE3A74;
    case 960u: goto L_08AE3A84;
    case 961u: goto L_08AE3A94;
    case 962u: goto L_08AE3A9C;
    case 963u: goto L_08AE3AA4;
    case 964u: goto L_08AE3AB0;
    case 965u: goto L_08AE3AB8;
    case 966u: goto L_08AE3AC0;
    case 967u: goto L_08AE3AC8;
    case 968u: goto L_08AE3AD0;
    case 969u: goto L_08AE3ADC;
    case 970u: goto L_08AE3AE4;
    case 971u: goto L_08AE3AEC;
    case 972u: goto L_08AE3AF0;
    case 973u: goto L_08AE3AF8;
    case 974u: goto L_08AE3B00;
    case 975u: goto L_08AE3B08;
    case 976u: goto L_08AE3B24;
    case 977u: goto L_08AE3B2C;
    case 978u: goto L_08AE3B34;
    case 979u: goto L_08AE3B3C;
    case 980u: goto L_08AE3B44;
    case 981u: goto L_08AE3B48;
    case 982u: goto L_08AE3B58;
    case 983u: goto L_08AE3B78;
    case 984u: goto L_08AE3B94;
    case 985u: goto L_08AE3B9C;
    case 986u: goto L_08AE3BA8;
    case 987u: goto L_08AE3BB0;
    case 988u: goto L_08AE3BC0;
    case 989u: goto L_08AE3BD0;
    case 990u: goto L_08AE3BD8;
    case 991u: goto L_08AE3C00;
    case 992u: goto L_08AE3C10;
    case 993u: goto L_08AE3C18;
    case 994u: goto L_08AE3C20;
    case 995u: goto L_08AE3C2C;
    case 996u: goto L_08AE3C4C;
    case 997u: goto L_08AE3C90;
    case 998u: goto L_08AE3CA0;
    case 999u: goto L_08AE3CB0;
    case 1000u: goto L_08AE3CD0;
    case 1001u: goto L_08AE3CF4;
    case 1002u: goto L_08AE3D00;
    case 1003u: goto L_08AE3D10;
    case 1004u: goto L_08AE3D28;
    case 1005u: goto L_08AE3D68;
    case 1006u: goto L_08AE3DAC;
    case 1007u: goto L_08AE3DC8;
    case 1008u: goto L_08AE3E0C;
    case 1009u: goto L_08AE3E3C;
    case 1010u: goto L_08AE3E58;
    case 1011u: goto L_08AE3E80;
    case 1012u: goto L_08AE3E88;
    case 1013u: goto L_08AE3E9C;
    case 1014u: goto L_08AE3EAC;
    case 1015u: goto L_08AE3EB4;
    case 1016u: goto L_08AE3EBC;
    case 1017u: goto L_08AE3EC4;
    case 1018u: goto L_08AE3EC8;
    case 1019u: goto L_08AE3ED0;
    case 1020u: goto L_08AE3EE4;
    case 1021u: goto L_08AE3EF4;
    case 1022u: goto L_08AE3F04;
    case 1023u: goto L_08AE3F18;
    case 1024u: goto L_08AE3F20;
    case 1025u: goto L_08AE3F28;
    case 1026u: goto L_08AE3F30;
    case 1027u: goto L_08AE3F38;
    case 1028u: goto L_08AE3F48;
    case 1029u: goto L_08AE3F50;
    case 1030u: goto L_08AE3F58;
    case 1031u: goto L_08AE3F68;
    case 1032u: goto L_08AE3F70;
    case 1033u: goto L_08AE3F78;
    case 1034u: goto L_08AE3F7C;
    case 1035u: goto L_08AE3F8C;
    case 1036u: goto L_08AE3FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08AE0000:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    goto L_08AE0004;
L_08AE0004:
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
L_08AE0010:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AE0040;
      }
      goto L_08AE0038;
    }
L_08AE0038:
    aot_gpr_31 = (0x08AE0040u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0040u) goto L_08AE0040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16456));
    aot_gpr_31 = (0x08AE0058u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0058u) goto L_08AE0058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0058:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE0064u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0064u) goto L_08AE0064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0064:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE0070u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0070u) goto L_08AE0070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0070:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AE00A0;
      }
      goto L_08AE0078;
    }
L_08AE0078:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE0084u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0196_entry, 196u, 284u, 0x08B156A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0084u) goto L_08AE0084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0084:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    aot_gpr_31 = (0x08AE0090u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0196_entry, 196u, 284u, 0x08B156A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0090u) goto L_08AE0090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0090:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AE00A0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 299u, 0x089753F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE00A0u) goto L_08AE00A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE00A0:
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
L_08AE00B8:
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
L_08AE00C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    { const std::uint32_t aot_run_words[9]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-56));
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-20));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[23] = (2237u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-28416));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AE0128;
      }
      goto L_08AE0120;
    }
L_08AE0120:
    aot_gpr_31 = (0x08AE0128u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0128u) goto L_08AE0128;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0128:
    aot_gpr_31 = (0x08AE0130u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 881u, 0x08953F1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0130u) goto L_08AE0130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0130:
    aot_gpr_31 = (0x08AE0138u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 984u, 0x08ADFDB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0138u) goto L_08AE0138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0138:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08AE0144u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 391u, 0x08A39A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0144u) goto L_08AE0144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0144:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(136), aot_gpr_4);
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE01B0;
      }
      goto L_08AE01A4;
    }
L_08AE01A4:
    aot_gpr_31 = (0x08AE01ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE01ACu) goto L_08AE01AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE01AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AE01B0;
L_08AE01B0:
    aot_gpr_31 = (0x08AE01B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE01B8u) goto L_08AE01B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE01B8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE01E8;
      }
      goto L_08AE01DC;
    }
L_08AE01DC:
    aot_gpr_31 = (0x08AE01E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE01E4u) goto L_08AE01E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE01E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AE01E8;
L_08AE01E8:
    aot_gpr_31 = (0x08AE01F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE01F0u) goto L_08AE01F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE01F0:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AE0200u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B73074u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0200:
    aot_gpr_31 = (0x08AE0208u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0208u) goto L_08AE0208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0208:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AE0218u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0218u) goto L_08AE0218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0218:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (0u | 58u);
      if (branch_taken) {
          goto L_08AE025C;
      }
      goto L_08AE022C;
    }
L_08AE022C:
    ctx.gpr[7] = (0u | 46u);
    goto L_08AE0230;
L_08AE0230:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_08AE0248;
      }
      goto L_08AE0244;
    }
L_08AE0244:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AE0248;
L_08AE0248:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AE0230;
      }
      goto L_08AE025C;
    }
L_08AE025C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE0298;
      }
      goto L_08AE026C;
    }
L_08AE026C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08AE0278u);
    aot_gpr_4 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0278u) goto L_08AE0278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0278:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AE0290;
      }
      goto L_08AE0284;
    }
L_08AE0284:
    aot_gpr_31 = (0x08AE028Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 114u, 0x08804D84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE028Cu) goto L_08AE028C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE028C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AE0290;
L_08AE0290:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(280), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE02C0;
      }
      goto L_08AE0298;
    }
L_08AE0298:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08AE02A4u);
    aot_gpr_4 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE02A4u) goto L_08AE02A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE02A4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AE02BC;
      }
      goto L_08AE02B0;
    }
L_08AE02B0:
    aot_gpr_31 = (0x08AE02B8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 114u, 0x08804D84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE02B8u) goto L_08AE02B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE02B8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AE02BC;
L_08AE02BC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    goto L_08AE02C0;
L_08AE02C0:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_31 = (0x08AE02D4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2440));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE02D4u) goto L_08AE02D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE02D4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (22089u << 16u);
      if (branch_taken) {
          goto L_08AE02F4;
      }
      goto L_08AE02E4;
    }
L_08AE02E4:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17221));
    aot_gpr_31 = (0x08AE02F0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 580u, 0x08A87AC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE02F0u) goto L_08AE02F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE02F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    goto L_08AE02F4;
L_08AE02F4:
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AE0300u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 634u, 0x08A87E54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0300u) goto L_08AE0300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0300:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AE031C;
      }
      goto L_08AE030C;
    }
L_08AE030C:
    aot_gpr_31 = (0x08AE0314u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0314u) goto L_08AE0314;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_08AE031C;
L_08AE031C:
    aot_gpr_31 = (0x08AE0324u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 496u, 0x08A52C54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0324u) goto L_08AE0324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0324:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4156)));
    aot_gpr_31 = (0x08AE0334u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 11u, 0x08A88108u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0334u) goto L_08AE0334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0334:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-272)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-268)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, aot_gpr_5, aot_gpr_4, aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_4);
    aot_gpr_31 = (0x08AE0360u);
    aot_gpr_4 = (0u | 20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0360u) goto L_08AE0360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0360:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AE0380;
      }
      goto L_08AE036C;
    }
L_08AE036C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(76));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AE037Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 139u, 0x08B70BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE037Cu) goto L_08AE037C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE037C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08AE0380;
L_08AE0380:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
      if (branch_taken) {
          goto L_08AE0398;
      }
      goto L_08AE0388;
    }
L_08AE0388:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08AE0398;
L_08AE0398:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_4);
      if (branch_taken) {
          goto L_08AE03AC;
      }
      goto L_08AE03A0;
    }
L_08AE03A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08AE03AC;
L_08AE03AC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
        goto L_08AE03E0;
    }
    goto L_08AE03C4;
L_08AE03C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08AE03DC;
      }
      goto L_08AE03D4;
    }
L_08AE03D4:
    aot_gpr_31 = (0x08AE03DCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE03DCu) goto L_08AE03DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE03DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08AE03E0;
L_08AE03E0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE0400;
      }
      goto L_08AE03E8;
    }
L_08AE03E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08AE0400;
      }
      goto L_08AE03F8;
    }
L_08AE03F8:
    aot_gpr_31 = (0x08AE0400u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0400u) goto L_08AE0400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0400:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10338))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-264)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-260)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, aot_gpr_5, aot_gpr_4, aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_run_words); }
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08AE0428u);
    aot_gpr_4 = (0u | 20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0428u) goto L_08AE0428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0428:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08AE0444;
      }
      goto L_08AE0434;
    }
L_08AE0434:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AE0440u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 139u, 0x08B70BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0440u) goto L_08AE0440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0440:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AE0444;
L_08AE0444:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE0458;
      }
      goto L_08AE044C;
    }
L_08AE044C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08AE0458;
L_08AE0458:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE0468u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0468u) goto L_08AE0468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0468:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AE048C;
      }
      goto L_08AE0474;
    }
L_08AE0474:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AE048C;
      }
      goto L_08AE0484;
    }
L_08AE0484:
    aot_gpr_31 = (0x08AE048Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE048Cu) goto L_08AE048C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE048C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8618))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-256)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-252)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_4, aot_gpr_5, aot_gpr_4, aot_gpr_5};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_run_words); }
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08AE04B4u);
    aot_gpr_4 = (0u | 20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE04B4u) goto L_08AE04B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE04B4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08AE04D0;
      }
      goto L_08AE04C0;
    }
L_08AE04C0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AE04CCu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 139u, 0x08B70BC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE04CCu) goto L_08AE04CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE04CC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AE04D0;
L_08AE04D0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE04E4;
      }
      goto L_08AE04D8;
    }
L_08AE04D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08AE04E4;
L_08AE04E4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE04F4u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE04F4u) goto L_08AE04F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE04F4:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08AE0518;
      }
      goto L_08AE0500;
    }
L_08AE0500:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AE0518;
      }
      goto L_08AE0510;
    }
L_08AE0510:
    aot_gpr_31 = (0x08AE0518u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0518u) goto L_08AE0518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0518:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10336))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08AE0528u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0528u) goto L_08AE0528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0528:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08AE055C;
      }
      goto L_08AE0534;
    }
L_08AE0534:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2222u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_08AE055C;
L_08AE055C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE0570;
      }
      goto L_08AE0564;
    }
L_08AE0564:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08AE0570;
L_08AE0570:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AE0580u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0580u) goto L_08AE0580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0580:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AE05A4;
      }
      goto L_08AE058C;
    }
L_08AE058C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AE05A4;
      }
      goto L_08AE059C;
    }
L_08AE059C:
    aot_gpr_31 = (0x08AE05A4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE05A4u) goto L_08AE05A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE05A4:
    aot_gpr_31 = (0x08AE05ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 963u, 0x08A37E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE05ACu) goto L_08AE05AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE05AC:
    aot_gpr_31 = (0x08AE05B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887CD60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE05B4u) goto L_08AE05B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE05B4:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4203), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4204), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4208), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4209), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08AE05D0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 572u, 0x08B4262Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE05D0u) goto L_08AE05D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE05D0:
    aot_gpr_31 = (0x08AE05D8u);
    aot_gpr_4 = (0u | 20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 571u, 0x08B42624u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE05D8u) goto L_08AE05D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE05D8:
    aot_gpr_31 = (0x08AE05E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 530u, 0x0886A6D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE05E0u) goto L_08AE05E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE05E0:
    aot_gpr_31 = (0x08AE05E8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 318u, 0x08A35524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE05E8u) goto L_08AE05E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE05E8:
    aot_gpr_31 = (0x08AE05F0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0156_entry, 156u, 470u, 0x08A762B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE05F0u) goto L_08AE05F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE05F0:
    aot_gpr_31 = (0x08AE05F8u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(208));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 170u, 0x089414D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE05F8u) goto L_08AE05F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE05F8:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(116));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08AE0608u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0608u) goto L_08AE0608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0608:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08AE062Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE062Cu) goto L_08AE062C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE062C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08AE0664u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 905u, 0x08ADFA58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0664u) goto L_08AE0664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0664:
    aot_gpr_31 = (0x08AE066Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 540u, 0x08AD3204u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE066Cu) goto L_08AE066C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE066C:
    aot_gpr_4 = (0u | 100u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_31 = (0x08AE0694u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 350u, 0x088DE1D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0694u) goto L_08AE0694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0694:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08AE06A4u);
    aot_gpr_4 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE06A4u) goto L_08AE06A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE06A4:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_31 = (0x08AE06BCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 47u, 0x089D03FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE06BCu) goto L_08AE06BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE06BC:
    aot_gpr_4 = (18371u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20352u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(252)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AE0720;
      }
      goto L_08AE06F0;
    }
L_08AE06F0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AE070C;
      }
      goto L_08AE0700;
    }
L_08AE0700:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(252)));
    goto L_08AE070C;
L_08AE070C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AE06F0;
      }
      goto L_08AE0720;
    }
L_08AE0720:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE0740;
      }
      goto L_08AE072C;
    }
L_08AE072C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AE0738u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0738u) goto L_08AE0738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0738:
    aot_gpr_31 = (0x08AE0740u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-248));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0740u) goto L_08AE0740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0740:
    aot_gpr_31 = (0x08AE0748u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 341u, 0x0882DAD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0748u) goto L_08AE0748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0748:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08AE0764;
      }
      goto L_08AE0758;
    }
L_08AE0758:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    aot_gpr_31 = (0x08AE0764u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0764u) goto L_08AE0764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0764:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_run_words);
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
L_08AE0790:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32304));
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(25856));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(31984));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AE07F0;
      }
      goto L_08AE07E8;
    }
L_08AE07E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AE07F4;
      }
      goto L_08AE07F0;
    }
L_08AE07F0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    goto L_08AE07F4;
L_08AE07F4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08AE0800u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0800u) goto L_08AE0800;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0800:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AE0818;
      }
      goto L_08AE0808;
    }
L_08AE0808:
    aot_gpr_31 = (0x08AE0810u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0810u) goto L_08AE0810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0810:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3336), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AE0818;
L_08AE0818:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8360), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2052), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08AE0828u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0828u) goto L_08AE0828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0828:
    aot_gpr_31 = (0x08AE0830u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 42u, 0x088703ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0830u) goto L_08AE0830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0830:
    aot_gpr_31 = (0x08AE0838u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0838u) goto L_08AE0838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0838:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_31 = (0x08AE0844u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 116u, 0x089E8AF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0844u) goto L_08AE0844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0844:
    aot_gpr_31 = (0x08AE084Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE084Cu) goto L_08AE084C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE084C:
    aot_gpr_31 = (0x08AE0854u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0156_entry, 156u, 593u, 0x08A76D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0854u) goto L_08AE0854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0854:
    aot_gpr_31 = (0x08AE085Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE085Cu) goto L_08AE085C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE085C:
    aot_gpr_31 = (0x08AE0864u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(208));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 207u, 0x08941748u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0864u) goto L_08AE0864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0864:
    aot_gpr_31 = (0x08AE086Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE086Cu) goto L_08AE086C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE086C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08AE0878u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 530u, 0x0886A6D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0878u) goto L_08AE0878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0878:
    aot_gpr_31 = (0x08AE0880u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 318u, 0x08A35524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0880u) goto L_08AE0880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0880:
    aot_gpr_31 = (0x08AE0888u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887CD60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0888u) goto L_08AE0888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0888:
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_31 = (0x08AE0894u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 47u, 0x089D03FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0894u) goto L_08AE0894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0894:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(252)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AE08DC;
      }
      goto L_08AE08AC;
    }
L_08AE08AC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AE08C8;
      }
      goto L_08AE08BC;
    }
L_08AE08BC:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(252)));
    goto L_08AE08C8;
L_08AE08C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AE08AC;
      }
      goto L_08AE08DC;
    }
L_08AE08DC:
    aot_gpr_31 = (0x08AE08E4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE08E4u) goto L_08AE08E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE08E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE0924;
      }
      goto L_08AE08F0;
    }
L_08AE08F0:
    aot_gpr_31 = (0x08AE08F8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE08F8u) goto L_08AE08F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE08F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE0920;
      }
      goto L_08AE0904;
    }
L_08AE0904:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE0920u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0920u) goto L_08AE0920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0920:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(224), 0u);
    goto L_08AE0924;
L_08AE0924:
    aot_gpr_31 = (0x08AE092Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE092Cu) goto L_08AE092C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE092C:
    aot_gpr_31 = (0x08AE0934u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 887u, 0x08ADF9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0934u) goto L_08AE0934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0934:
    aot_gpr_31 = (0x08AE093Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE093Cu) goto L_08AE093C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE093C:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10340)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08AE0974;
      }
      goto L_08AE0948;
    }
L_08AE0948:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE096C;
      }
      goto L_08AE095C;
    }
L_08AE095C:
    aot_gpr_31 = (0x08AE0964u);
    ctx.pc = 0x08B7363Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0964:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AE0974;
      }
      goto L_08AE096C;
    }
L_08AE096C:
    aot_gpr_31 = (0x08AE0974u);
    ctx.pc = 0x08B7368Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0974:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10344)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08AE09AC;
      }
      goto L_08AE0980;
    }
L_08AE0980:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE09A4;
      }
      goto L_08AE0994;
    }
L_08AE0994:
    aot_gpr_31 = (0x08AE099Cu);
    ctx.pc = 0x08B7363Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE099C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AE09AC;
      }
      goto L_08AE09A4;
    }
L_08AE09A4:
    aot_gpr_31 = (0x08AE09ACu);
    ctx.pc = 0x08B7368Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE09AC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10344), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10340), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_31 = (0x08AE09C0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE09C0u) goto L_08AE09C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE09C0:
    aot_gpr_31 = (0x08AE09C8u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(116));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 735u, 0x08933CF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE09C8u) goto L_08AE09C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE09C8:
    aot_gpr_31 = (0x08AE09D0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE09D0u) goto L_08AE09D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE09D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE09E8;
      }
      goto L_08AE09DC;
    }
L_08AE09DC:
    aot_gpr_31 = (0x08AE09E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE09E4u) goto L_08AE09E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE09E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08AE09E8;
L_08AE09E8:
    aot_gpr_31 = (0x08AE09F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 497u, 0x08A52C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE09F0u) goto L_08AE09F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE09F0:
    aot_gpr_31 = (0x08AE09F8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE09F8u) goto L_08AE09F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE09F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE0A48;
      }
      goto L_08AE0A04;
    }
L_08AE0A04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AE0A48;
      }
      goto L_08AE0A1C;
    }
L_08AE0A1C:
    aot_gpr_31 = (0x08AE0A24u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A886C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0A24u) goto L_08AE0A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0A24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08AE0A30u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 585u, 0x08A87C3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0A30u) goto L_08AE0A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0A30:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_31 = (0x08AE0A40u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0A40u) goto L_08AE0A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0A40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(100), 0u);
      if (branch_taken) {
          goto L_08AE0A6C;
      }
      goto L_08AE0A48;
    }
L_08AE0A48:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE0A6C;
      }
      goto L_08AE0A50;
    }
L_08AE0A50:
    aot_gpr_31 = (0x08AE0A58u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 585u, 0x08A87C3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0A58u) goto L_08AE0A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0A58:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_31 = (0x08AE0A68u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0A68u) goto L_08AE0A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0A68:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(100), 0u);
    goto L_08AE0A6C;
L_08AE0A6C:
    aot_gpr_31 = (0x08AE0A74u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0A74u) goto L_08AE0A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0A74:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08AE0A88u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0A88u) goto L_08AE0A88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0A88:
    aot_gpr_31 = (0x08AE0A90u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0A90u) goto L_08AE0A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0A90:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(160), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_gpr_4 = (0u | 30u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(236), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), 0u);
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 200u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_31 = (0x08AE0AECu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0AECu) goto L_08AE0AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0AEC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08AE0B04;
      }
      goto L_08AE0AF8;
    }
L_08AE0AF8:
    aot_gpr_31 = (0x08AE0B00u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0B00u) goto L_08AE0B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0B00:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AE0B04;
L_08AE0B04:
    aot_gpr_31 = (0x08AE0B0Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 418u, 0x0880DCB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0B0Cu) goto L_08AE0B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0B0C:
    aot_gpr_31 = (0x08AE0B14u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0B14u) goto L_08AE0B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0B14:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6850), static_cast<std::uint8_t>(0u));
        goto L_08AE0B30;
    }
    goto L_08AE0B20;
L_08AE0B20:
    aot_gpr_31 = (0x08AE0B28u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0B28u) goto L_08AE0B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0B28:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6850), static_cast<std::uint8_t>(0u));
    goto L_08AE0B30;
L_08AE0B30:
    aot_gpr_31 = (0x08AE0B38u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 271u, 0x08AB9680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0B38u) goto L_08AE0B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0B38:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-196));
      if (branch_taken) {
          goto L_08AE0B70;
      }
      goto L_08AE0B44;
    }
L_08AE0B44:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AE0B50u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0B50u) goto L_08AE0B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0B50:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[20] == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_08AE0B6C;
    }
    goto L_08AE0B5C;
L_08AE0B5C:
    aot_gpr_31 = (0x08AE0B64u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0B64u) goto L_08AE0B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0B64:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AE0B6C;
L_08AE0B6C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-196));
    goto L_08AE0B70;
L_08AE0B70:
    aot_gpr_31 = (0x08AE0B78u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0B78u) goto L_08AE0B78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0B78:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08AE0B9Cu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0B9Cu) goto L_08AE0B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0B9C:
    aot_gpr_31 = (0x08AE0BA4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0BA4u) goto L_08AE0BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0BA4:
    aot_gpr_31 = (0x08AE0BACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 62u, 0x0882C3C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0BACu) goto L_08AE0BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0BAC:
    aot_gpr_31 = (0x08AE0BB4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0BB4u) goto L_08AE0BB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0BB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE0C0C;
      }
      goto L_08AE0BC0;
    }
L_08AE0BC0:
    aot_gpr_31 = (0x08AE0BC8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 984u, 0x08ADFDB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0BC8u) goto L_08AE0BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0BC8:
    aot_gpr_31 = (0x08AE0BD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 898u, 0x08ADFA14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0BD0u) goto L_08AE0BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0BD0:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08AE0BDCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 616u, 0x08AD372Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0BDCu) goto L_08AE0BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0BDC:
    aot_gpr_31 = (0x08AE0BE4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 575u, 0x08AD34BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0BE4u) goto L_08AE0BE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0BE4:
    aot_gpr_31 = (0x08AE0BECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 600u, 0x08AD3634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0BECu) goto L_08AE0BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0BEC:
    aot_gpr_31 = (0x08AE0BF4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 604u, 0x08AD3670u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0BF4u) goto L_08AE0BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0BF4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AE0C04u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C04u) goto L_08AE0C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C04:
    aot_gpr_31 = (0x08AE0C0Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C0Cu) goto L_08AE0C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C0C:
    aot_gpr_31 = (0x08AE0C14u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C14u) goto L_08AE0C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C14:
    aot_gpr_31 = (0x08AE0C1Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 842u, 0x08ABFF10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C1Cu) goto L_08AE0C1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C1C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(268), ctx.gpr[21]);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29156), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08AE0C30u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 396u, 0x08A39ACCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C30u) goto L_08AE0C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C30:
    aot_gpr_31 = (0x08AE0C38u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C38u) goto L_08AE0C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C38:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE0C64;
      }
      goto L_08AE0C44;
    }
L_08AE0C44:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE0C58u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C58u) goto L_08AE0C58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C58:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE0C64u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C64u) goto L_08AE0C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C64:
    aot_gpr_31 = (0x08AE0C6Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C6Cu) goto L_08AE0C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C6C:
    aot_gpr_31 = (0x08AE0C74u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 538u, 0x08AD31E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C74u) goto L_08AE0C74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C74:
    aot_gpr_31 = (0x08AE0C7Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C7Cu) goto L_08AE0C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C7C:
    aot_gpr_31 = (0x08AE0C84u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 519u, 0x0896E260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C84u) goto L_08AE0C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C84:
    aot_gpr_31 = (0x08AE0C8Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C8Cu) goto L_08AE0C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(280)));
    aot_gpr_31 = (0x08AE0C98u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 116u, 0x08804DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0C98u) goto L_08AE0C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0C98:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(280), 0u);
    aot_gpr_31 = (0x08AE0CA4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0CA4u) goto L_08AE0CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0CA4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AE0CB8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0CB8u) goto L_08AE0CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0CB8:
    aot_gpr_31 = (0x08AE0CC0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0CC0u) goto L_08AE0CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0CC0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE0CD8;
      }
      goto L_08AE0CD0;
    }
L_08AE0CD0:
    aot_gpr_31 = (0x08AE0CD8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 517u, 0x08ADDF74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0CD8u) goto L_08AE0CD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0CD8:
    aot_gpr_31 = (0x08AE0CE0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0CE0u) goto L_08AE0CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0CE0:
    aot_gpr_31 = (0x08AE0CE8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0CE8u) goto L_08AE0CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0CE8:
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
L_08AE0D14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AE0D2Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0D2Cu) goto L_08AE0D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0D2C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0D3C;
    }
L_08AE0D3C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16520)));
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
L_08AE0D54:
    aot_gpr_16 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0D64;
    }
L_08AE0D64:
    aot_gpr_16 = (aot_gpr_16 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_16);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16568)));
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
L_08AE0D7C:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0D8Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0D8Cu) goto L_08AE0D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0D8C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0D94;
    }
L_08AE0D94:
    aot_gpr_4 = (0u | 261u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0DA4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0DA4u) goto L_08AE0DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0DA4:
    aot_gpr_4 = (0u | 258u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0DB4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0DB4u) goto L_08AE0DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0DB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0DBC;
    }
L_08AE0DBC:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0DCCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0DCCu) goto L_08AE0DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0DCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0DD4;
    }
L_08AE0DD4:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0DE4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0DE4u) goto L_08AE0DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0DE4:
    aot_gpr_4 = (0u | 258u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0DF4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0DF4u) goto L_08AE0DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0DF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0DFC;
    }
L_08AE0DFC:
    aot_gpr_4 = (0u | 227u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0E0Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0E0Cu) goto L_08AE0E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0E0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0E14;
    }
L_08AE0E14:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0E24u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0E24u) goto L_08AE0E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0E24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0E2C;
    }
L_08AE0E2C:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0E3Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0E3Cu) goto L_08AE0E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0E3C:
    aot_gpr_4 = (0u | 258u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0E4Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0E4Cu) goto L_08AE0E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0E4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0E54;
    }
L_08AE0E54:
    aot_gpr_4 = (0u | 261u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0E64u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0E64u) goto L_08AE0E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0E64:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0E74u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0E74u) goto L_08AE0E74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0E74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0E7C;
    }
L_08AE0E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE0EA8;
      }
      goto L_08AE0E88;
    }
L_08AE0E88:
    aot_gpr_4 = (0u | 207u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0E98u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0E98u) goto L_08AE0E98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0E98:
    aot_gpr_4 = (0u | 234u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0EA8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0EA8u) goto L_08AE0EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0EA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0EB0;
    }
L_08AE0EB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0EB8;
    }
L_08AE0EB8:
    aot_gpr_16 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE0EF4;
      }
      goto L_08AE0EC4;
    }
L_08AE0EC4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08AE0F44;
      }
      goto L_08AE0ECC;
    }
L_08AE0ECC:
    aot_gpr_4 = (0u | 261u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0EDCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0EDCu) goto L_08AE0EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0EDC:
    aot_gpr_4 = (0u | 258u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0EECu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0EECu) goto L_08AE0EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0EEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE0F44;
      }
      goto L_08AE0EF4;
    }
L_08AE0EF4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE0F0C;
      }
      goto L_08AE0EFC;
    }
L_08AE0EFC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE0F24;
      }
      goto L_08AE0F04;
    }
L_08AE0F04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE0F44;
      }
      goto L_08AE0F0C;
    }
L_08AE0F0C:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0F1Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0F1Cu) goto L_08AE0F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0F1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE0F44;
      }
      goto L_08AE0F24;
    }
L_08AE0F24:
    aot_gpr_4 = (0u | 261u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0F34u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0F34u) goto L_08AE0F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0F34:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0F44u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0F44u) goto L_08AE0F44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0F44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0F4C;
    }
L_08AE0F4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0F54;
    }
L_08AE0F54:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE0F70;
      }
      goto L_08AE0F60;
    }
L_08AE0F60:
    aot_gpr_4 = (0u | 258u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0F70u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0F70u) goto L_08AE0F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0F70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0F78;
    }
L_08AE0F78:
    aot_gpr_16 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE1044;
      }
      goto L_08AE0F88;
    }
L_08AE0F88:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE0FC4;
      }
      goto L_08AE0F94;
    }
L_08AE0F94:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AE0FD4;
      }
      goto L_08AE0F9C;
    }
L_08AE0F9C:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE0FFC;
      }
      goto L_08AE0FA4;
    }
L_08AE0FA4:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08AE1024;
      }
      goto L_08AE0FAC;
    }
L_08AE0FAC:
    aot_gpr_4 = (0u | 246u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0FBCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0FBCu) goto L_08AE0FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0FBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1044;
      }
      goto L_08AE0FC4;
    }
L_08AE0FC4:
    aot_gpr_4 = (0u | 261u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0FD4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0FD4u) goto L_08AE0FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0FD4:
    aot_gpr_4 = (0u | 197u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0FE4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0FE4u) goto L_08AE0FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0FE4:
    aot_gpr_4 = (0u | 186u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE0FF4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE0FF4u) goto L_08AE0FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE0FF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1044;
      }
      goto L_08AE0FFC;
    }
L_08AE0FFC:
    aot_gpr_4 = (0u | 261u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE100Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE100Cu) goto L_08AE100C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE100C:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE101Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE101Cu) goto L_08AE101C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE101C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1044;
      }
      goto L_08AE1024;
    }
L_08AE1024:
    aot_gpr_4 = (0u | 197u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1034u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1034u) goto L_08AE1034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1034:
    aot_gpr_4 = (0u | 186u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1044u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1044u) goto L_08AE1044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1044:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE104C;
    }
L_08AE104C:
    aot_gpr_16 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE1110;
      }
      goto L_08AE105C;
    }
L_08AE105C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE10A8;
      }
      goto L_08AE1068;
    }
L_08AE1068:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AE10C0;
      }
      goto L_08AE1070;
    }
L_08AE1070:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE10E8;
      }
      goto L_08AE1078;
    }
L_08AE1078:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08AE1100;
      }
      goto L_08AE1080;
    }
L_08AE1080:
    aot_gpr_4 = (0u | 261u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1090u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1090u) goto L_08AE1090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1090:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE10A0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE10A0u) goto L_08AE10A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE10A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1110;
      }
      goto L_08AE10A8;
    }
L_08AE10A8:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE10B8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE10B8u) goto L_08AE10B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE10B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1110;
      }
      goto L_08AE10C0;
    }
L_08AE10C0:
    aot_gpr_4 = (0u | 261u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE10D0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE10D0u) goto L_08AE10D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE10D0:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE10E0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE10E0u) goto L_08AE10E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE10E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1110;
      }
      goto L_08AE10E8;
    }
L_08AE10E8:
    aot_gpr_4 = (0u | 180u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE10F8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE10F8u) goto L_08AE10F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE10F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1110;
      }
      goto L_08AE1100;
    }
L_08AE1100:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1110u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1110u) goto L_08AE1110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1110:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE1118;
    }
L_08AE1118:
    aot_gpr_16 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1144;
      }
      goto L_08AE1124;
    }
L_08AE1124:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08AE116C;
      }
      goto L_08AE112C;
    }
L_08AE112C:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE113Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE113Cu) goto L_08AE113C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE113C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE116C;
      }
      goto L_08AE1144;
    }
L_08AE1144:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE116C;
      }
      goto L_08AE114C;
    }
L_08AE114C:
    aot_gpr_4 = (0u | 233u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE115Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE115Cu) goto L_08AE115C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE115C:
    aot_gpr_4 = (0u | 258u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE116Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE116Cu) goto L_08AE116C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE116C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE1174;
    }
L_08AE1174:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE117C;
    }
L_08AE117C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE1184;
    }
L_08AE1184:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE1190;
    }
L_08AE1190:
    aot_gpr_4 = (0u | 275u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE11A0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE11A0u) goto L_08AE11A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE11A0:
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
L_08AE11B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AE11C8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE11C8u) goto L_08AE11C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE11C8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE11D8;
    }
L_08AE11D8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16600)));
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
L_08AE11F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE120C;
      }
      goto L_08AE11FC;
    }
L_08AE11FC:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE120Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE120Cu) goto L_08AE120C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE120C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1214;
    }
L_08AE1214:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1240;
      }
      goto L_08AE1220;
    }
L_08AE1220:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08AE1280;
      }
      goto L_08AE1228;
    }
L_08AE1228:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1238u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1238u) goto L_08AE1238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1238:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1280;
      }
      goto L_08AE1240;
    }
L_08AE1240:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1258;
      }
      goto L_08AE1248;
    }
L_08AE1248:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE1270;
      }
      goto L_08AE1250;
    }
L_08AE1250:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1280;
      }
      goto L_08AE1258;
    }
L_08AE1258:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1268u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1268u) goto L_08AE1268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1268:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1280;
      }
      goto L_08AE1270;
    }
L_08AE1270:
    aot_gpr_4 = (0u | 207u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1280u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1280u) goto L_08AE1280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1280:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1288;
    }
L_08AE1288:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE12B4;
      }
      goto L_08AE1294;
    }
L_08AE1294:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08AE12F4;
      }
      goto L_08AE129C;
    }
L_08AE129C:
    aot_gpr_4 = (0u | 265u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE12ACu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE12ACu) goto L_08AE12AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE12AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE12F4;
      }
      goto L_08AE12B4;
    }
L_08AE12B4:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE12CC;
      }
      goto L_08AE12BC;
    }
L_08AE12BC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE12E4;
      }
      goto L_08AE12C4;
    }
L_08AE12C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE12F4;
      }
      goto L_08AE12CC;
    }
L_08AE12CC:
    aot_gpr_4 = (0u | 227u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE12DCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE12DCu) goto L_08AE12DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE12DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE12F4;
      }
      goto L_08AE12E4;
    }
L_08AE12E4:
    aot_gpr_4 = (0u | 258u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE12F4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE12F4u) goto L_08AE12F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE12F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE12FC;
    }
L_08AE12FC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1328;
      }
      goto L_08AE1308;
    }
L_08AE1308:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08AE1368;
      }
      goto L_08AE1310;
    }
L_08AE1310:
    aot_gpr_4 = (0u | 242u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1320u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1320u) goto L_08AE1320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1320:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1368;
      }
      goto L_08AE1328;
    }
L_08AE1328:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1340;
      }
      goto L_08AE1330;
    }
L_08AE1330:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE1358;
      }
      goto L_08AE1338;
    }
L_08AE1338:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1368;
      }
      goto L_08AE1340;
    }
L_08AE1340:
    aot_gpr_4 = (0u | 184u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1350u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1350u) goto L_08AE1350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1350:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1368;
      }
      goto L_08AE1358;
    }
L_08AE1358:
    aot_gpr_4 = (0u | 197u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1368u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1368u) goto L_08AE1368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1368:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1370;
    }
L_08AE1370:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1378;
    }
L_08AE1378:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
        goto L_08AE13A4;
    }
    goto L_08AE1384;
L_08AE1384:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08AE13BC;
      }
      goto L_08AE138C;
    }
L_08AE138C:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE139Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE139Cu) goto L_08AE139C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE139C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE13BC;
      }
      goto L_08AE13A4;
    }
L_08AE13A4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE13BC;
      }
      goto L_08AE13AC;
    }
L_08AE13AC:
    aot_gpr_4 = (0u | 265u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE13BCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE13BCu) goto L_08AE13BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE13BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE13C4;
    }
L_08AE13C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE13D4;
    }
L_08AE13D4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE1410;
      }
      goto L_08AE13E0;
    }
L_08AE13E0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AE1428;
      }
      goto L_08AE13E8;
    }
L_08AE13E8:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE1440;
      }
      goto L_08AE13F0;
    }
L_08AE13F0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08AE1468;
      }
      goto L_08AE13F8;
    }
L_08AE13F8:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1408u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1408u) goto L_08AE1408;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1408:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE1410;
    }
L_08AE1410:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1420u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1420u) goto L_08AE1420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1420:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE1428;
    }
L_08AE1428:
    aot_gpr_4 = (0u | 228u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1438u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1438u) goto L_08AE1438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1438:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE1440;
    }
L_08AE1440:
    aot_gpr_4 = (0u | 261u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1450u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1450u) goto L_08AE1450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1450:
    aot_gpr_4 = (0u | 193u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1460u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1460u) goto L_08AE1460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1460:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE1468;
    }
L_08AE1468:
    aot_gpr_4 = (0u | 194u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1478u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1478u) goto L_08AE1478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1478:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1480;
    }
L_08AE1480:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
        goto L_08AE14AC;
    }
    goto L_08AE148C;
L_08AE148C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08AE14C4;
      }
      goto L_08AE1494;
    }
L_08AE1494:
    aot_gpr_4 = (0u | 209u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE14A4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE14A4u) goto L_08AE14A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE14A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE14C4;
      }
      goto L_08AE14AC;
    }
L_08AE14AC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE14C4;
      }
      goto L_08AE14B4;
    }
L_08AE14B4:
    aot_gpr_4 = (0u | 209u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE14C4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE14C4u) goto L_08AE14C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE14C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE14CC;
    }
L_08AE14CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE14EC;
      }
      goto L_08AE14D8;
    }
L_08AE14D8:
    aot_gpr_4 = (0u | 238u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE14E8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE14E8u) goto L_08AE14E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE14E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    goto L_08AE14EC;
L_08AE14EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE14F8;
      }
      goto L_08AE14F4;
    }
L_08AE14F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    goto L_08AE14F8;
L_08AE14F8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE1510;
      }
      goto L_08AE1500;
    }
L_08AE1500:
    aot_gpr_4 = (0u | 240u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1510u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1510u) goto L_08AE1510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1510:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1518;
    }
L_08AE1518:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    if (static_cast<std::int32_t>(aot_gpr_4) > 0) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
        goto L_08AE1544;
    }
    goto L_08AE1524;
L_08AE1524:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08AE155C;
      }
      goto L_08AE152C;
    }
L_08AE152C:
    aot_gpr_4 = (0u | 257u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE153Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE153Cu) goto L_08AE153C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE153C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE155C;
      }
      goto L_08AE1544;
    }
L_08AE1544:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE155C;
      }
      goto L_08AE154C;
    }
L_08AE154C:
    aot_gpr_4 = (0u | 278u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE155Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE155Cu) goto L_08AE155C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE155C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1564;
    }
L_08AE1564:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1570;
    }
L_08AE1570:
    aot_gpr_4 = (0u | 246u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1580u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1580u) goto L_08AE1580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1580:
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
L_08AE1590:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AE15A8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC754, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE15A8u) goto L_08AE15A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE15A8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_5 = (0u | 6u);
      if (branch_taken) {
          goto L_08AE15C4;
      }
      goto L_08AE15B4;
    }
L_08AE15B4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE15BC;
    }
L_08AE15BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE16D0;
      }
      goto L_08AE15C4;
    }
L_08AE15C4:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE15CC;
    }
L_08AE15CC:
    aot_gpr_16 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1628;
      }
      goto L_08AE15D8;
    }
L_08AE15D8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08AE16C8;
      }
      goto L_08AE15E0;
    }
L_08AE15E0:
    aot_gpr_4 = (0u | 197u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE15F0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE15F0u) goto L_08AE15F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE15F0:
    aot_gpr_4 = (0u | 212u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1600u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1600u) goto L_08AE1600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1600:
    aot_gpr_4 = (0u | 259u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1610u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1610u) goto L_08AE1610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1610:
    aot_gpr_4 = (0u | 215u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1620u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1620u) goto L_08AE1620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1620:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE16C8;
      }
      goto L_08AE1628;
    }
L_08AE1628:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1640;
      }
      goto L_08AE1630;
    }
L_08AE1630:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE1688;
      }
      goto L_08AE1638;
    }
L_08AE1638:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE16C8;
      }
      goto L_08AE1640;
    }
L_08AE1640:
    aot_gpr_4 = (0u | 233u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1650u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1650u) goto L_08AE1650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1650:
    aot_gpr_4 = (0u | 212u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1660u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1660u) goto L_08AE1660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1660:
    aot_gpr_4 = (0u | 258u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1670u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1670u) goto L_08AE1670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1670:
    aot_gpr_4 = (0u | 261u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1680u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1680u) goto L_08AE1680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1680:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE16C8;
      }
      goto L_08AE1688;
    }
L_08AE1688:
    aot_gpr_4 = (0u | 198u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1698u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1698u) goto L_08AE1698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1698:
    aot_gpr_4 = (0u | 215u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE16A8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE16A8u) goto L_08AE16A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE16A8:
    aot_gpr_4 = (0u | 191u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE16B8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE16B8u) goto L_08AE16B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE16B8:
    aot_gpr_4 = (0u | 233u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE16C8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE16C8u) goto L_08AE16C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE16C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE16D0;
    }
L_08AE16D0:
    aot_gpr_16 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE172C;
      }
      goto L_08AE16DC;
    }
L_08AE16DC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE16E4;
    }
L_08AE16E4:
    aot_gpr_4 = (0u | 205u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE16F4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE16F4u) goto L_08AE16F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE16F4:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1704u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1704u) goto L_08AE1704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1704:
    aot_gpr_4 = (0u | 198u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1714u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1714u) goto L_08AE1714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1714:
    aot_gpr_4 = (0u | 275u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1724u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1724u) goto L_08AE1724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1724:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE172C;
    }
L_08AE172C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE1734;
    }
L_08AE1734:
    aot_gpr_4 = (0u | 186u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1744u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1744u) goto L_08AE1744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1744:
    aot_gpr_4 = (0u | 212u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1754u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1754u) goto L_08AE1754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1754:
    aot_gpr_4 = (0u | 233u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1764u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1764u) goto L_08AE1764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1764:
    aot_gpr_4 = (0u | 270u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x08AE1774u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1774u) goto L_08AE1774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1774:
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
L_08AE1784:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10336), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-176));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10336)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-30144));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u | 14u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8618), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-164));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8618)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u | 16u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10337), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-152));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10337)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u | 17u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10338), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-140));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10338)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(13104));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 174u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AE1828u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1828u) goto L_08AE1828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1828:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (0u | 77u);
    aot_gpr_6 = (0u | 155u);
    ctx.gpr[7] = (0u | 210u);
    aot_gpr_31 = (0x08AE1840u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1840u) goto L_08AE1840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1840:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (0u | 75u);
    aot_gpr_6 = (0u | 151u);
    ctx.gpr[7] = (0u | 75u);
    aot_gpr_31 = (0x08AE1858u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1858u) goto L_08AE1858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1858:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (0u | 217u);
    aot_gpr_6 = (0u | 174u);
    ctx.gpr[7] = (0u | 87u);
    aot_gpr_31 = (0x08AE1870u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1870u) goto L_08AE1870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1870:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (0u | 252u);
    aot_gpr_6 = (0u | 116u);
    ctx.gpr[7] = (0u | 186u);
    aot_gpr_31 = (0x08AE1888u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1888u) goto L_08AE1888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1888:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (0u | 151u);
    aot_gpr_6 = (0u | 82u);
    ctx.gpr[7] = (0u | 197u);
    aot_gpr_31 = (0x08AE18A0u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE18A0u) goto L_08AE18A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE18A0:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 237u);
    aot_gpr_6 = (0u | 130u);
    ctx.gpr[7] = (0u | 180u);
    aot_gpr_31 = (0x08AE18B8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE18B8u) goto L_08AE18B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE18B8:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 153u);
    ctx.gpr[7] = (0u | 51u);
    aot_gpr_31 = (0x08AE18D0u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE18D0u) goto L_08AE18D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE18D0:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 227u);
    ctx.gpr[7] = (0u | 79u);
    aot_gpr_31 = (0x08AE18E8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE18E8u) goto L_08AE18E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE18E8:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (0u | 174u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AE1900u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1900u) goto L_08AE1900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1900:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x08AE1918u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1918u) goto L_08AE1918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1918:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(44));
    aot_gpr_5 = (0u | 153u);
    aot_gpr_6 = (0u | 153u);
    ctx.gpr[7] = (0u | 153u);
    aot_gpr_31 = (0x08AE1930u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1930u) goto L_08AE1930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1930:
    aot_gpr_31 = (0x08AE1938u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-188));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1938u) goto L_08AE1938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1938:
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
L_08AE1948:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AE1B48;
      }
      goto L_08AE1980;
    }
L_08AE1980:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE19B8;
      }
      goto L_08AE19A0;
    }
L_08AE19A0:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AE19C4;
      }
      goto L_08AE19B8;
    }
L_08AE19B8:
    aot_gpr_31 = (0x08AE19C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE19C0u) goto L_08AE19C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE19C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08AE19C4;
L_08AE19C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AE1AF4;
      }
      goto L_08AE19E4;
    }
L_08AE19E4:
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AE1A04;
      }
      goto L_08AE19F0;
    }
L_08AE19F0:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE1A14;
      }
      goto L_08AE1A04;
    }
L_08AE1A04:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AE1A14;
L_08AE1A14:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE1A3C;
      }
      goto L_08AE1A1C;
    }
L_08AE1A1C:
    aot_gpr_31 = (0x08AE1A24u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1A24u) goto L_08AE1A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1A24:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08AE1A3C;
      }
      goto L_08AE1A30;
    }
L_08AE1A30:
    aot_gpr_31 = (0x08AE1A38u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1A38u) goto L_08AE1A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1A38:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1A3C;
L_08AE1A3C:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AE1A68u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08AE27F8;
L_08AE1A68:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AE1A94;
      }
      goto L_08AE1A78;
    }
L_08AE1A78:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AE1A8Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1A8Cu) goto L_08AE1A8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AE1A94;
      }
      goto L_08AE1A94;
    }
L_08AE1A94:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    aot_gpr_5 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AE1AA8;
      }
      goto L_08AE1AA0;
    }
L_08AE1AA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AE1AC4;
      }
      goto L_08AE1AA8;
    }
L_08AE1AA8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08AE1AC0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1AC0u) goto L_08AE1AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1AC0:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_08AE1AC4;
L_08AE1AC4:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE1AE0;
      }
      goto L_08AE1AD8;
    }
L_08AE1AD8:
    aot_gpr_31 = (0x08AE1AE0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1AE0u) goto L_08AE1AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1AE0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08AE1B48;
      }
      goto L_08AE1AF4;
    }
L_08AE1AF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE1B0C;
      }
      goto L_08AE1B04;
    }
L_08AE1B04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AE1B28;
      }
      goto L_08AE1B0C;
    }
L_08AE1B0C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (ctx.gpr[18] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08AE1B20u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1B20u) goto L_08AE1B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1B20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    goto L_08AE1B28;
L_08AE1B28:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08AE1B48;
L_08AE1B48:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
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
L_08AE1B78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1056));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1028), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1044), ctx.gpr[20]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-116));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1032), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1036), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1040), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1048), aot_gpr_31);
    aot_gpr_31 = (0x08AE1BACu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1BACu) goto L_08AE1BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1BAC:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08AE1BC8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1BC8u) goto L_08AE1BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1BC8:
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[17] + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16676));
      if (branch_taken) {
          goto L_08AE1BFC;
      }
      goto L_08AE1BEC;
    }
L_08AE1BEC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x08AE1BFCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1BFCu) goto L_08AE1BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1BFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C0C;
    }
L_08AE1C0C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE1C38;
      }
      goto L_08AE1C18;
    }
L_08AE1C18:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AE1C40;
      }
      goto L_08AE1C20;
    }
L_08AE1C20:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE1C48;
      }
      goto L_08AE1C28;
    }
L_08AE1C28:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08AE1C50;
      }
      goto L_08AE1C30;
    }
L_08AE1C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-104));
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C38;
    }
L_08AE1C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-100));
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C40;
    }
L_08AE1C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C48;
    }
L_08AE1C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-92));
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C50;
    }
L_08AE1C50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-88));
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C58;
    }
L_08AE1C58:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AE1C74u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16648));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1C74u) goto L_08AE1C74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1C74:
    aot_gpr_31 = (0x08AE1C7Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1C7Cu) goto L_08AE1C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1C7C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08AE1CA8;
      }
      goto L_08AE1C88;
    }
L_08AE1C88:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AE1CA0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16700));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1CA0u) goto L_08AE1CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1CA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1CB0;
      }
      goto L_08AE1CA8;
    }
L_08AE1CA8:
    aot_gpr_31 = (0x08AE1CB0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1CB0u) goto L_08AE1CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1CB0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE1CBCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08AE280C;
L_08AE1CBC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1028), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1056));
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
L_08AE1CE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AE1E24;
      }
      goto L_08AE1D0C;
    }
L_08AE1D0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[20] = (aot_gpr_16 + static_cast<std::uint32_t>(36));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (aot_gpr_16 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AE1D98;
      }
      goto L_08AE1D3C;
    }
L_08AE1D3C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08AE1D40;
L_08AE1D40:
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
        goto L_08AE1D74;
    }
    goto L_08AE1D50;
L_08AE1D50:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE1D6Cu);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1D6Cu) goto L_08AE1D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1D6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    goto L_08AE1D74;
L_08AE1D74:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE1D40;
      }
      goto L_08AE1D98;
    }
L_08AE1D98:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), aot_gpr_5);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_08AE1DD0;
      }
      goto L_08AE1DAC;
    }
L_08AE1DAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE1DD0;
      }
      goto L_08AE1DB8;
    }
L_08AE1DB8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE1DD0;
      }
      goto L_08AE1DC0;
    }
L_08AE1DC0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE1DD0;
      }
      goto L_08AE1DC8;
    }
L_08AE1DC8:
    aot_gpr_31 = (0x08AE1DD0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1DD0u) goto L_08AE1DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1DD0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08AE1DF0;
      }
      goto L_08AE1DD8;
    }
L_08AE1DD8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AE1DF0;
      }
      goto L_08AE1DE0;
    }
L_08AE1DE0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE1DF0;
      }
      goto L_08AE1DE8;
    }
L_08AE1DE8:
    aot_gpr_31 = (0x08AE1DF0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1DF0u) goto L_08AE1DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1DF0:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08AE1E14;
      }
      goto L_08AE1DF8;
    }
L_08AE1DF8:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE1E10;
      }
      goto L_08AE1E00;
    }
L_08AE1E00:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[17] & 1u);
        goto L_08AE1E14;
    }
    goto L_08AE1E08;
L_08AE1E08:
    aot_gpr_31 = (0x08AE1E10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1E10u) goto L_08AE1E10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1E10:
    aot_gpr_4 = (ctx.gpr[17] & 1u);
    goto L_08AE1E14;
L_08AE1E14:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE1E24;
      }
      goto L_08AE1E1C;
    }
L_08AE1E1C:
    aot_gpr_31 = (0x08AE1E24u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1E24u) goto L_08AE1E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1E24:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08AE1E48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[21] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (2237u << 16u);
      if (branch_taken) {
          goto L_08AE1F54;
      }
      goto L_08AE1E98;
    }
L_08AE1E98:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-128));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28416));
    goto L_08AE1EA8;
L_08AE1EA8:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(40));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AE1EC8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1EC8u) goto L_08AE1EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1EC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE1EE8;
      }
      goto L_08AE1ED4;
    }
L_08AE1ED4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[19]);
    aot_gpr_31 = (0x08AE1EE0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1EE0u) goto L_08AE1EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1EE0:
    aot_gpr_31 = (0x08AE1EE8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1EE8u) goto L_08AE1EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1EE8:
    aot_gpr_31 = (0x08AE1EF0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1EF0u) goto L_08AE1EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1EF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AE1F24;
      }
      goto L_08AE1EF8;
    }
L_08AE1EF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
        goto L_08AE1F1C;
    }
    goto L_08AE1F04;
L_08AE1F04:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[19]);
    aot_gpr_31 = (0x08AE1F10u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1F10u) goto L_08AE1F10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1F10:
    aot_gpr_31 = (0x08AE1F18u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1F18u) goto L_08AE1F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1F18:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    goto L_08AE1F1C;
L_08AE1F1C:
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
        goto L_08AE1F2C;
    }
    goto L_08AE1F24;
L_08AE1F24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE1F54;
      }
      goto L_08AE1F2C;
    }
L_08AE1F2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[21] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE1EA8;
      }
      goto L_08AE1F54;
    }
L_08AE1F54:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08AE1F78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2008;
      }
      goto L_08AE1FBC;
    }
L_08AE1FBC:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AE1FDCu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE1FDCu) goto L_08AE1FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE1FDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE1FBC;
      }
      goto L_08AE2008;
    }
L_08AE2008:
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
L_08AE2020:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE20B0;
      }
      goto L_08AE2064;
    }
L_08AE2064:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AE2084u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2084u) goto L_08AE2084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2084:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE2064;
      }
      goto L_08AE20B0;
    }
L_08AE20B0:
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
L_08AE20C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[7]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[21] = (2237u << 16u);
      if (branch_taken) {
          goto L_08AE2200;
      }
      goto L_08AE211C;
    }
L_08AE211C:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-128));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28416));
    goto L_08AE212C;
L_08AE212C:
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AE2148;
      }
      goto L_08AE2140;
    }
L_08AE2140:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE21F0;
      }
      goto L_08AE2148;
    }
L_08AE2148:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE2168;
      }
      goto L_08AE2154;
    }
L_08AE2154:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[20]);
    aot_gpr_31 = (0x08AE2160u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2160u) goto L_08AE2160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2160:
    aot_gpr_31 = (0x08AE2168u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2168u) goto L_08AE2168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2168:
    aot_gpr_31 = (0x08AE2170u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2170u) goto L_08AE2170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2170:
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_16;
      if (branch_taken) {
          goto L_08AE21BC;
      }
      goto L_08AE2178;
    }
L_08AE2178:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AE21BC;
      }
      goto L_08AE2184;
    }
L_08AE2184:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(80));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AE219Cu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE219Cu) goto L_08AE219C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE219C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
      if (branch_taken) {
          goto L_08AE21F0;
      }
      goto L_08AE21BC;
    }
L_08AE21BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE21D4u);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE21D4u) goto L_08AE21D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE21D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    goto L_08AE21F0;
L_08AE21F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE212C;
      }
      goto L_08AE2200;
    }
L_08AE2200:
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
L_08AE2228:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AE2264;
      }
      goto L_08AE224C;
    }
L_08AE224C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08AE225Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE225Cu) goto L_08AE225C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE225C:
    aot_gpr_31 = (0x08AE2264u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-128));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2264u) goto L_08AE2264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2264:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE2270u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 553u, 0x0882E704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2270u) goto L_08AE2270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2270:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AE228C;
      }
      goto L_08AE2278;
    }
L_08AE2278:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE2294;
      }
      goto L_08AE2284;
    }
L_08AE2284:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE22C8;
      }
      goto L_08AE228C;
    }
L_08AE228C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE22C8;
      }
      goto L_08AE2294;
    }
L_08AE2294:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08AE22A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AE27D8;
L_08AE22A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE22C8u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE22C8u) goto L_08AE22C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE22C8:
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
L_08AE22DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    ctx.gpr[21] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2378;
      }
      goto L_08AE2330;
    }
L_08AE2330:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AE2348u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2348u) goto L_08AE2348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2348:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2358;
      }
      goto L_08AE2350;
    }
L_08AE2350:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE2358;
      }
      goto L_08AE2358;
    }
L_08AE2358:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE2368;
      }
      goto L_08AE2360;
    }
L_08AE2360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE237C;
      }
      goto L_08AE2368;
    }
L_08AE2368:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE2330;
      }
      goto L_08AE2378;
    }
L_08AE2378:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AE237C;
L_08AE237C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08AE23A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08AE23C0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08AE22DC;
L_08AE23C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AE2418;
      }
      goto L_08AE23CC;
    }
L_08AE23CC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AE2400;
      }
      goto L_08AE23D4;
    }
L_08AE23D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08AE23E8u);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE23E8u) goto L_08AE23E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE23E8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE23F8u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE23F8u) goto L_08AE23F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE23F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE2408;
      }
      goto L_08AE2400;
    }
L_08AE2400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2408;
      }
      goto L_08AE2408;
    }
L_08AE2408:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AE2418;
      }
      goto L_08AE2410;
    }
L_08AE2410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE241C;
      }
      goto L_08AE2418;
    }
L_08AE2418:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AE241C;
L_08AE241C:
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
L_08AE2438:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[19]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE251C;
      }
      goto L_08AE2488;
    }
L_08AE2488:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08AE24C4;
      }
      goto L_08AE2498;
    }
L_08AE2498:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08AE24ACu);
    ctx.gpr[21] = (ctx.gpr[19] + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE24ACu) goto L_08AE24AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE24AC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE24BCu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE24BCu) goto L_08AE24BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE24BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE24CC;
      }
      goto L_08AE24C4;
    }
L_08AE24C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE24CC;
      }
      goto L_08AE24CC;
    }
L_08AE24CC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
        goto L_08AE24F4;
    }
    goto L_08AE24D8;
L_08AE24D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(104));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE24F0u);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE24F0u) goto L_08AE24F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE24F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    goto L_08AE24F4;
L_08AE24F4:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[19]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE2488;
      }
      goto L_08AE251C;
    }
L_08AE251C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08AE2540:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE25D0;
      }
      goto L_08AE2584;
    }
L_08AE2584:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(72));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AE25A4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE25A4u) goto L_08AE25A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE25A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE2584;
      }
      goto L_08AE25D0;
    }
L_08AE25D0:
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
L_08AE25E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AE2600u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(24));
    goto L_08AE22DC;
L_08AE2600:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 6u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE2624u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2624u) goto L_08AE2624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2624:
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
L_08AE2634:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AE2648u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08AE22DC;
L_08AE2648:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
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
L_08AE265C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AE26AC;
      }
      goto L_08AE2690;
    }
L_08AE2690:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE26A4;
      }
      goto L_08AE2698;
    }
L_08AE2698:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_08AE26A4;
L_08AE26A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), aot_gpr_4);
      if (branch_taken) {
          goto L_08AE27B8;
      }
      goto L_08AE26AC;
    }
L_08AE26AC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_08AE26EC;
      }
      goto L_08AE26DC;
    }
L_08AE26DC:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_5 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE26F8;
      }
      goto L_08AE26EC;
    }
L_08AE26EC:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_gpr_5 + ctx.gpr[18]);
    goto L_08AE26F8;
L_08AE26F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2738;
      }
      goto L_08AE2700;
    }
L_08AE2700:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_31 = (0x08AE2714u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2714u) goto L_08AE2714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2714:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AE2738;
      }
      goto L_08AE2724;
    }
L_08AE2724:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_31 = (0x08AE2730u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2730u) goto L_08AE2730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2730:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08AE2738;
L_08AE2738:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    ctx.gpr[19] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AE274C;
      }
      goto L_08AE2744;
    }
L_08AE2744:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AE2768;
      }
      goto L_08AE274C;
    }
L_08AE274C:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AE2760u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2760u) goto L_08AE2760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2760:
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08AE2768;
L_08AE2768:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[17] = (aot_gpr_4 | 0u);
        goto L_08AE2790;
    }
    goto L_08AE277C;
L_08AE277C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE277C;
      }
      goto L_08AE278C;
    }
L_08AE278C:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08AE2790;
L_08AE2790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE27A4;
      }
      goto L_08AE279C;
    }
L_08AE279C:
    aot_gpr_31 = (0x08AE27A4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE27A4u) goto L_08AE27A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE27A4:
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    goto L_08AE27B8;
L_08AE27B8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08AE27D8:
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (0u | 3u);
      if (branch_taken) {
          goto L_08AE27EC;
      }
      goto L_08AE27E4;
    }
L_08AE27E4:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08AE27F0;
      }
      goto L_08AE27EC;
    }
L_08AE27EC:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), aot_gpr_5);
    goto L_08AE27F0;
L_08AE27F0:
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
L_08AE27F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
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
L_08AE280C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_16);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_run_words); }
    aot_gpr_31 = (0x08AE2848u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 436u, 0x08985908u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2848u) goto L_08AE2848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2848:
    ctx.gpr[20] = (2234u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22832));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AE2854;
L_08AE2854:
    aot_gpr_31 = (0x08AE285Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 440u, 0x089859A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE285Cu) goto L_08AE285C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE285C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE287C;
      }
      goto L_08AE2864;
    }
L_08AE2864:
    aot_gpr_31 = (0x08AE286Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE286Cu) goto L_08AE286C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE286C:
    aot_gpr_31 = (0x08AE2874u);
    aot_gpr_4 = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2874:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AE2854;
      }
      goto L_08AE287C;
    }
L_08AE287C:
    aot_gpr_31 = (0x08AE2884u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 127u, 0x089846E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2884u) goto L_08AE2884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2884:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 131u);
    aot_gpr_31 = (0x08AE2898u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2898u) goto L_08AE2898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2898:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AE28A4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE28A4u) goto L_08AE28A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE28A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE28B8;
      }
      goto L_08AE28B0;
    }
L_08AE28B0:
    aot_gpr_31 = (0x08AE28B8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE28B8u) goto L_08AE28B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE28B8:
    { const bool branch_taken = aot_gpr_16 != 0u;
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AE28F4;
      }
      goto L_08AE28C0;
    }
L_08AE28C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AE28D4;
      }
      goto L_08AE28CC;
    }
L_08AE28CC:
    aot_gpr_31 = (0x08AE28D4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE28D4u) goto L_08AE28D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE28D4:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AE28ECu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 69u, 0x089843C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE28ECu) goto L_08AE28EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE28EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE30CC;
      }
      goto L_08AE28F4;
    }
L_08AE28F4:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 171u);
    aot_gpr_31 = (0x08AE2904u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2904u) goto L_08AE2904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2904:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AE2910u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2910u) goto L_08AE2910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2910:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AE291Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE291Cu) goto L_08AE291C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE291C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_gpr_16 + ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[17] - aot_gpr_16);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_6 | 0u);
        goto L_08AE29A0;
    }
    goto L_08AE293C;
L_08AE293C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AE295C;
      }
      goto L_08AE2944;
    }
L_08AE2944:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AE2954u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2954u) goto L_08AE2954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2954:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_08AE295C;
L_08AE295C:
    ctx.gpr[18] = (aot_gpr_5 + ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_16;
      if (branch_taken) {
          goto L_08AE2998;
      }
      goto L_08AE296C;
    }
L_08AE296C:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AE298C;
      }
      goto L_08AE297C;
    }
L_08AE297C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AE2988u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2988u) goto L_08AE2988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2988:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_08AE298C;
L_08AE298C:
    aot_gpr_5 = (aot_gpr_16 - ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08AE2998;
L_08AE2998:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE29E4;
      }
      goto L_08AE29A0;
    }
L_08AE29A0:
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_6);
        goto L_08AE29C8;
    }
    goto L_08AE29A8;
L_08AE29A8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AE29B8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE29B8u) goto L_08AE29B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE29B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_6);
    goto L_08AE29C8;
L_08AE29C8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(121));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AE29E0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08AE1948;
L_08AE29E0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_08AE29E4;
L_08AE29E4:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE29F4;
      }
      goto L_08AE29EC;
    }
L_08AE29EC:
    aot_gpr_31 = (0x08AE29F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE29F4u) goto L_08AE29F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE29F4:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 130u);
    aot_gpr_31 = (0x08AE2A04u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2A04u) goto L_08AE2A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2A04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AE2A10u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2A10u) goto L_08AE2A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2A10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2A24;
      }
      goto L_08AE2A1C;
    }
L_08AE2A1C:
    aot_gpr_31 = (0x08AE2A24u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2A24u) goto L_08AE2A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2A24:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_08AE2A60;
      }
      goto L_08AE2A2C;
    }
L_08AE2A2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AE2A40;
      }
      goto L_08AE2A38;
    }
L_08AE2A38:
    aot_gpr_31 = (0x08AE2A40u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2A40u) goto L_08AE2A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2A40:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AE2A58u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 69u, 0x089843C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2A58u) goto L_08AE2A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2A58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE30CC;
      }
      goto L_08AE2A60;
    }
L_08AE2A60:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 175u);
    aot_gpr_31 = (0x08AE2A70u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2A70u) goto L_08AE2A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2A70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AE2A7Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2A7Cu) goto L_08AE2A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2A7C:
    aot_gpr_31 = (0x08AE2A84u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2A84u) goto L_08AE2A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2A84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE2A98;
      }
      goto L_08AE2A90;
    }
L_08AE2A90:
    aot_gpr_31 = (0x08AE2A98u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2A98u) goto L_08AE2A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2A98:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 176u);
    aot_gpr_31 = (0x08AE2AA8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2AA8u) goto L_08AE2AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2AA8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AE2AB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2AB4u) goto L_08AE2AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2AB4:
    aot_gpr_31 = (0x08AE2ABCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2ABCu) goto L_08AE2ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2ABC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE2AD0;
      }
      goto L_08AE2AC8;
    }
L_08AE2AC8:
    aot_gpr_31 = (0x08AE2AD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2AD0u) goto L_08AE2AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2AD0:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 132u);
    aot_gpr_31 = (0x08AE2AE0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2AE0u) goto L_08AE2AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2AE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AE2AECu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2AECu) goto L_08AE2AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2AEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2B00;
      }
      goto L_08AE2AF8;
    }
L_08AE2AF8:
    aot_gpr_31 = (0x08AE2B00u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2B00u) goto L_08AE2B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2B00:
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AE2B3C;
      }
      goto L_08AE2B08;
    }
L_08AE2B08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AE2B1C;
      }
      goto L_08AE2B14;
    }
L_08AE2B14:
    aot_gpr_31 = (0x08AE2B1Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2B1Cu) goto L_08AE2B1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2B1C:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AE2B34u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 69u, 0x089843C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2B34u) goto L_08AE2B34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE30CC;
      }
      goto L_08AE2B3C;
    }
L_08AE2B3C:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 171u);
    aot_gpr_31 = (0x08AE2B4Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2B4Cu) goto L_08AE2B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2B4C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AE2B58u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2B58u) goto L_08AE2B58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2B58:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AE2B64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2B64u) goto L_08AE2B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2B64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_gpr_16 + ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[17] - aot_gpr_16);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AE2BE8;
      }
      goto L_08AE2B84;
    }
L_08AE2B84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AE2BA4;
      }
      goto L_08AE2B8C;
    }
L_08AE2B8C:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AE2B9Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2B9Cu) goto L_08AE2B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2B9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    goto L_08AE2BA4;
L_08AE2BA4:
    ctx.gpr[18] = (aot_gpr_5 + ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_16;
      if (branch_taken) {
          goto L_08AE2BE0;
      }
      goto L_08AE2BB4;
    }
L_08AE2BB4:
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AE2BD4;
      }
      goto L_08AE2BC4;
    }
L_08AE2BC4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AE2BD0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2BD0u) goto L_08AE2BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2BD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    goto L_08AE2BD4;
L_08AE2BD4:
    aot_gpr_5 = (aot_gpr_16 - ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(28), aot_gpr_4);
    goto L_08AE2BE0;
L_08AE2BE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE2C30;
      }
      goto L_08AE2BE8;
    }
L_08AE2BE8:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_6);
        goto L_08AE2C14;
    }
    goto L_08AE2BF4;
L_08AE2BF4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AE2C04u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2C04u) goto L_08AE2C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2C04:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_6);
    goto L_08AE2C14;
L_08AE2C14:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(123));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AE2C2Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08AE1948;
L_08AE2C2C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_08AE2C30;
L_08AE2C30:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE2C40;
      }
      goto L_08AE2C38;
    }
L_08AE2C38:
    aot_gpr_31 = (0x08AE2C40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2C40u) goto L_08AE2C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2C40:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 133u);
    aot_gpr_31 = (0x08AE2C50u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2C50u) goto L_08AE2C50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2C50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AE2C5Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2C5Cu) goto L_08AE2C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2C5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2C70;
      }
      goto L_08AE2C68;
    }
L_08AE2C68:
    aot_gpr_31 = (0x08AE2C70u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2C70u) goto L_08AE2C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2C70:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (2232u << 16u);
      if (branch_taken) {
          goto L_08AE3098;
      }
      goto L_08AE2C78;
    }
L_08AE2C78:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16728));
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16752));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-76));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-60));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_5);
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16772));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-44));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16792));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_4);
    ctx.gpr[30] = (2232u << 16u);
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-116));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(108));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_5);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(16812));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(16836));
    goto L_08AE2CE0;
L_08AE2CE0:
    aot_gpr_31 = (0x08AE2CE8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2CE8u) goto L_08AE2CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2CE8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 134u);
    aot_gpr_31 = (0x08AE2CFCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2CFCu) goto L_08AE2CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2CFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x08AE2D08u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2D08u) goto L_08AE2D08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2D08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2D1C;
      }
      goto L_08AE2D14;
    }
L_08AE2D14:
    aot_gpr_31 = (0x08AE2D1Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2D1Cu) goto L_08AE2D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2D1C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE2D34;
      }
      goto L_08AE2D2C;
    }
L_08AE2D2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2D34;
      }
      goto L_08AE2D34;
    }
L_08AE2D34:
    aot_gpr_31 = (0x08AE2D3Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2D3Cu) goto L_08AE2D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2D3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE2D70;
      }
      goto L_08AE2D44;
    }
L_08AE2D44:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AE2D50u);
    aot_gpr_4 = (0u | 200u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2D50u) goto L_08AE2D50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2D50:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE2D68;
      }
      goto L_08AE2D5C;
    }
L_08AE2D5C:
    aot_gpr_31 = (0x08AE2D64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 377u, 0x08971F74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2D64u) goto L_08AE2D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2D64:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AE2D68;
L_08AE2D68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2D70;
    }
L_08AE2D70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE2D84;
      }
      goto L_08AE2D7C;
    }
L_08AE2D7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2D84;
      }
      goto L_08AE2D84;
    }
L_08AE2D84:
    aot_gpr_31 = (0x08AE2D8Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2D8Cu) goto L_08AE2D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2D8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE2DC0;
      }
      goto L_08AE2D94;
    }
L_08AE2D94:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AE2DA0u);
    aot_gpr_4 = (0u | 200u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2DA0u) goto L_08AE2DA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2DA0:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE2DB8;
      }
      goto L_08AE2DAC;
    }
L_08AE2DAC:
    aot_gpr_31 = (0x08AE2DB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 368u, 0x089B9D74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2DB4u) goto L_08AE2DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2DB4:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AE2DB8;
L_08AE2DB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2DC0;
    }
L_08AE2DC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE2DD4;
      }
      goto L_08AE2DCC;
    }
L_08AE2DCC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2DD4;
      }
      goto L_08AE2DD4;
    }
L_08AE2DD4:
    aot_gpr_31 = (0x08AE2DDCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2DDCu) goto L_08AE2DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2DDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE2E10;
      }
      goto L_08AE2DE4;
    }
L_08AE2DE4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AE2DF0u);
    aot_gpr_4 = (0u | 212u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2DF0u) goto L_08AE2DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2DF0:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE2E08;
      }
      goto L_08AE2DFC;
    }
L_08AE2DFC:
    aot_gpr_31 = (0x08AE2E04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 41u, 0x08904258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2E04u) goto L_08AE2E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2E04:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AE2E08;
L_08AE2E08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2E10;
    }
L_08AE2E10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE2E24;
      }
      goto L_08AE2E1C;
    }
L_08AE2E1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2E24;
      }
      goto L_08AE2E24;
    }
L_08AE2E24:
    aot_gpr_31 = (0x08AE2E2Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2E2Cu) goto L_08AE2E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2E2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE2E60;
      }
      goto L_08AE2E34;
    }
L_08AE2E34:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AE2E40u);
    aot_gpr_4 = (0u | 252u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2E40u) goto L_08AE2E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2E40:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE2E58;
      }
      goto L_08AE2E4C;
    }
L_08AE2E4C:
    aot_gpr_31 = (0x08AE2E54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 496u, 0x0884EA04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2E54u) goto L_08AE2E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2E54:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AE2E58;
L_08AE2E58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2E60;
    }
L_08AE2E60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE2E74;
      }
      goto L_08AE2E6C;
    }
L_08AE2E6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2E74;
      }
      goto L_08AE2E74;
    }
L_08AE2E74:
    aot_gpr_31 = (0x08AE2E7Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2E7Cu) goto L_08AE2E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2E7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE2EB0;
      }
      goto L_08AE2E84;
    }
L_08AE2E84:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AE2E90u);
    aot_gpr_4 = (0u | 276u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2E90u) goto L_08AE2E90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2E90:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE2EA8;
      }
      goto L_08AE2E9C;
    }
L_08AE2E9C:
    aot_gpr_31 = (0x08AE2EA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0206_entry, 206u, 637u, 0x08B3EE44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2EA4u) goto L_08AE2EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2EA4:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AE2EA8;
L_08AE2EA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2EB0;
    }
L_08AE2EB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_16 = (ctx.gpr[18] | 0u);
        goto L_08AE2EC4;
    }
    goto L_08AE2EBC;
L_08AE2EBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2EC4;
      }
      goto L_08AE2EC4;
    }
L_08AE2EC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_gpr_31 = (0x08AE2ED0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2ED0u) goto L_08AE2ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2ED0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2ED8;
    }
L_08AE2ED8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 170u);
    aot_gpr_31 = (0x08AE2EE8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2EE8u) goto L_08AE2EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2EE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_gpr_31 = (0x08AE2EF4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2EF4u) goto L_08AE2EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2EF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2F08;
      }
      goto L_08AE2F00;
    }
L_08AE2F00:
    aot_gpr_31 = (0x08AE2F08u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2F08u) goto L_08AE2F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2F08:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 171u);
    aot_gpr_31 = (0x08AE2F18u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2F18u) goto L_08AE2F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2F18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    aot_gpr_31 = (0x08AE2F24u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2F24u) goto L_08AE2F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2F24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2F38;
      }
      goto L_08AE2F30;
    }
L_08AE2F30:
    aot_gpr_31 = (0x08AE2F38u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2F38u) goto L_08AE2F38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2F38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_gpr_31 = (0x08AE2F44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2F44u) goto L_08AE2F44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2F44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE2F78;
      }
      goto L_08AE2F4C;
    }
L_08AE2F4C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AE2F58u);
    aot_gpr_4 = (0u | 236u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2F58u) goto L_08AE2F58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2F58:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE2F70;
      }
      goto L_08AE2F64;
    }
L_08AE2F64:
    aot_gpr_31 = (0x08AE2F6Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0093_entry, 93u, 446u, 0x0897B55Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2F6Cu) goto L_08AE2F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2F6C:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AE2F70;
L_08AE2F70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2F78;
    }
L_08AE2F78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_gpr_31 = (0x08AE2F84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2F84u) goto L_08AE2F84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2F84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE2FB8;
      }
      goto L_08AE2F8C;
    }
L_08AE2F8C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AE2F98u);
    aot_gpr_4 = (0u | 260u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2F98u) goto L_08AE2F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2F98:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE2FB0;
      }
      goto L_08AE2FA4;
    }
L_08AE2FA4:
    aot_gpr_31 = (0x08AE2FACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0210_entry, 210u, 580u, 0x08B4FF78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2FACu) goto L_08AE2FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2FAC:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AE2FB0;
L_08AE2FB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2FB8;
    }
L_08AE2FB8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AE2FC4u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2FC4u) goto L_08AE2FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2FC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE2FF8;
      }
      goto L_08AE2FCC;
    }
L_08AE2FCC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AE2FD8u);
    aot_gpr_4 = (0u | 184u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2FD8u) goto L_08AE2FD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2FD8:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE2FF0;
      }
      goto L_08AE2FE4;
    }
L_08AE2FE4:
    aot_gpr_31 = (0x08AE2FECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 677u, 0x08B1F920u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE2FECu) goto L_08AE2FEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE2FEC:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AE2FF0;
L_08AE2FF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2FF8;
    }
L_08AE2FF8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AE3004u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3004u) goto L_08AE3004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3004:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE300C;
    }
L_08AE300C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AE3018u);
    aot_gpr_4 = (0u | 332u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3018u) goto L_08AE3018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3018:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE3024;
    }
L_08AE3024:
    aot_gpr_31 = (0x08AE302Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 111u, 0x088B89FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE302Cu) goto L_08AE302C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE302C:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08AE3030;
L_08AE3030:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AE3060;
      }
      goto L_08AE3038;
    }
L_08AE3038:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08AE3054u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3054u) goto L_08AE3054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3054:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AE3060u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AE265C;
L_08AE3060:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 133u);
    aot_gpr_31 = (0x08AE3070u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3070u) goto L_08AE3070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3070:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x08AE307Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 113u, 0x08984650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE307Cu) goto L_08AE307C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE307C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE3090;
      }
      goto L_08AE3088;
    }
L_08AE3088:
    aot_gpr_31 = (0x08AE3090u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3090u) goto L_08AE3090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3090:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08AE2CE0;
      }
      goto L_08AE3098;
    }
L_08AE3098:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
      if (branch_taken) {
          goto L_08AE30B0;
      }
      goto L_08AE30A8;
    }
L_08AE30A8:
    aot_gpr_31 = (0x08AE30B0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE30B0u) goto L_08AE30B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE30B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_31 = (0x08AE30C8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 69u, 0x089843C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE30C8u) goto L_08AE30C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE30C8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AE30CC;
L_08AE30CC:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_run_words);
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
L_08AE30FC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[8]);
    ctx.gpr[9] = (0u | 65535u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[9]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[10] = (ctx.gpr[10] | 1u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[11]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5))))));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[10] = (ctx.gpr[10] | 192u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_gpr_5 = (ctx.gpr[11] & aot_gpr_6);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32352));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[7] = (ctx.gpr[10] & ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), 0u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[8]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(85))))));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[9]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.gpr[7] & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(aot_gpr_5));
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
L_08AE31F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[8]);
    ctx.gpr[8] = (0u | 65535u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[8]);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[9] = (ctx.gpr[9] | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5))))));
    aot_gpr_4 = (aot_gpr_4 | 192u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[9] & aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[9] = (ctx.gpr[10] | 2u);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32352));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84))))));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(85))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[8]);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[7] & aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AE3338;
      }
      goto L_08AE32F0;
    }
L_08AE32F0:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AE3304;
    }
    goto L_08AE32F8;
L_08AE32F8:
    aot_gpr_31 = (0x08AE3300u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3300u) goto L_08AE3300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3300:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08AE3304;
L_08AE3304:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE3318u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3318u) goto L_08AE3318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3318:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_31 = (0x08AE3324u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AE3D28;
L_08AE3324:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3338;
      }
      goto L_08AE3330;
    }
L_08AE3330:
    aot_gpr_31 = (0x08AE3338u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3338u) goto L_08AE3338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3338:
    aot_gpr_31 = (0x08AE3340u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AE3D28;
L_08AE3340:
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
L_08AE3358:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AE33F0;
      }
      goto L_08AE3374;
    }
L_08AE3374:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32352));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3394;
      }
      goto L_08AE338C;
    }
L_08AE338C:
    aot_gpr_31 = (0x08AE3394u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3394u) goto L_08AE3394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3394:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE33A8;
      }
      goto L_08AE33A0;
    }
L_08AE33A0:
    aot_gpr_31 = (0x08AE33A8u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE33A8u) goto L_08AE33A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE33A8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (19627u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr_5 = (aot_gpr_5 | 43344u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AE33DC;
      }
      goto L_08AE33D0;
    }
L_08AE33D0:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-30256));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08AE33DC;
L_08AE33DC:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE33F0;
      }
      goto L_08AE33E8;
    }
L_08AE33E8:
    aot_gpr_31 = (0x08AE33F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE33F0u) goto L_08AE33F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE33F0:
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
L_08AE3404:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AE3424u);
    goto L_08AE3BD8;
L_08AE3424:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
L_08AE3444:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
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
L_08AE3464:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AE3498;
      }
      goto L_08AE3470;
    }
L_08AE3470:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    aot_gpr_6 = (aot_gpr_6 & 8u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AE3498;
      }
      goto L_08AE3480;
    }
L_08AE3480:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(320));
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE34A8;
      }
      goto L_08AE3498;
    }
L_08AE3498:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words); }
    goto L_08AE34A8;
L_08AE34A8:
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
L_08AE34B0:
    jump_target = aot_gpr_31;
    aot_fpr_0 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
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
L_08AE34B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(85))))));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AE3508;
      }
      goto L_08AE34D8;
    }
L_08AE34D8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(64));
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
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(48);
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
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3530;
      }
      goto L_08AE3508;
    }
L_08AE3508:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08AE3528u);
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3528u) goto L_08AE3528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3528:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3530;
      }
      goto L_08AE3530;
    }
L_08AE3530:
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
L_08AE353C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AE3550u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08AE3BD8;
L_08AE3550:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
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
L_08AE3564:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_5));
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
L_08AE3580:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (ctx.gpr[7] & 192u);
    ctx.gpr[8] = (ctx.gpr[8] & 192u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] >> 6u);
    ctx.gpr[8] = (ctx.gpr[8] >> 6u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AE35E0;
      }
      goto L_08AE35C4;
    }
L_08AE35C4:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AE35E8;
    }
    goto L_08AE35D8;
L_08AE35D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE368C;
      }
      goto L_08AE35E0;
    }
L_08AE35E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3874;
      }
      goto L_08AE35E8;
    }
L_08AE35E8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(112));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08AE3600u);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3600u) goto L_08AE3600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3600:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(120));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08AE3634u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3634u) goto L_08AE3634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3634:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[15])) && ctx.fpr[14] == ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3680;
      }
      goto L_08AE3664;
    }
L_08AE3664:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08AE3684;
      }
      goto L_08AE367C;
    }
L_08AE367C:
    aot_gpr_4 = (0u | 1u);
    goto L_08AE3680;
L_08AE3680:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08AE3684;
L_08AE3684:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE36F0;
      }
      goto L_08AE368C;
    }
L_08AE368C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE36A4u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE36A4u) goto L_08AE36A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE36A4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    { const bool branch_taken = 0u != aot_gpr_16;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AE36FC;
      }
      goto L_08AE36E8;
    }
L_08AE36E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
      if (branch_taken) {
          goto L_08AE371C;
      }
      goto L_08AE36F0;
    }
L_08AE36F0:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AE3874;
      }
      goto L_08AE36FC;
    }
L_08AE36FC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    goto L_08AE371C;
L_08AE371C:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[19];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AE374C;
      }
      goto L_08AE3730;
    }
L_08AE3730:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AE374C;
L_08AE374C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_gpr_31 = (0x08AE3770u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr_5));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 597u, 0x08A2FBA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3770u) goto L_08AE3770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3770:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3964)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AE3870;
      }
      goto L_08AE3784;
    }
L_08AE3784:
    aot_gpr_31 = (0x08AE378Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 56u, 0x08B24720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE378Cu) goto L_08AE378C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE378C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AE3810;
      }
      goto L_08AE37BC;
    }
L_08AE37BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
        goto L_08AE37D8;
    }
    goto L_08AE37C8;
L_08AE37C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08AE37D4u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE37D4u) goto L_08AE37D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE37D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    goto L_08AE37D8;
L_08AE37D8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE37ECu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE37ECu) goto L_08AE37EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE37EC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_gpr_31 = (0x08AE37F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AE3D28;
L_08AE37F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3810;
      }
      goto L_08AE3804;
    }
L_08AE3804:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08AE3810u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3810u) goto L_08AE3810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3810:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(136));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(112));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08AE382Cu);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE382Cu) goto L_08AE382C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE382C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(140)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE385Cu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE385Cu) goto L_08AE385C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE385C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(84))))));
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AE3874;
      }
      goto L_08AE3870;
    }
L_08AE3870:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AE3874;
L_08AE3874:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
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
L_08AE3890:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 1u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE3964;
      }
      goto L_08AE38BC;
    }
L_08AE38BC:
    aot_gpr_31 = (0x08AE38C4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 61u, 0x08B2477Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE38C4u) goto L_08AE38C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE38C4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE38E4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE38E4u) goto L_08AE38E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE38E4:
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
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08AE3908;
    }
    goto L_08AE3908;
L_08AE3908:
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3964;
      }
      goto L_08AE3914;
    }
L_08AE3914:
    aot_gpr_31 = (0x08AE391Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 56u, 0x08B24720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE391Cu) goto L_08AE391C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE391C:
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_08AE3948;
      }
      goto L_08AE392C;
    }
L_08AE392C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (ctx.gpr[7] & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (ctx.gpr[7] & aot_gpr_4);
    ctx.gpr[7] = (ctx.gpr[7] | 16u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AE3948;
L_08AE3948:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AE3964;
L_08AE3964:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(84))))));
        goto L_08AE3980;
    }
    goto L_08AE3970;
L_08AE3970:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (0x08AE397Cu);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(28));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE397Cu) goto L_08AE397C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE397C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(84))))));
    goto L_08AE3980;
L_08AE3980:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (19627u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), 0u);
    aot_gpr_5 = (aot_gpr_5 | 43344u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08AE39B4:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), 0u);
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
L_08AE39BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE39FCu);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE39FCu) goto L_08AE39FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE39FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_4 = (aot_gpr_4 & 192u);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 >> 6u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08AE3A34;
      }
      goto L_08AE3A18;
    }
L_08AE3A18:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08AE3A24u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3A24u) goto L_08AE3A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3A24:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3A48;
      }
      goto L_08AE3A34;
    }
L_08AE3A34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE3A64;
      }
      goto L_08AE3A40;
    }
L_08AE3A40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3A48;
    }
L_08AE3A48:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3A64;
    }
L_08AE3A64:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08AE3A40;
      }
      goto L_08AE3A6C;
    }
L_08AE3A6C:
    aot_gpr_31 = (0x08AE3A74u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 597u, 0x08A2FBA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3A74u) goto L_08AE3A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3A74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_31 = (0x08AE3A84u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 602u, 0x08A9FC58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3A84u) goto L_08AE3A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3A84:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_0)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE3AF8;
      }
      goto L_08AE3A94;
    }
L_08AE3A94:
    aot_gpr_31 = (0x08AE3A9Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 583u, 0x08A9FAD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3A9Cu) goto L_08AE3A9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3A9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AE3AB8;
      }
      goto L_08AE3AA4;
    }
L_08AE3AA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AE3AB0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9FA5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3AB0u) goto L_08AE3AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3AB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE3AD0;
      }
      goto L_08AE3AB8;
    }
L_08AE3AB8:
    aot_gpr_31 = (0x08AE3AC0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 586u, 0x08A9FB14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3AC0u) goto L_08AE3AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3AC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE3ADC;
      }
      goto L_08AE3AC8;
    }
L_08AE3AC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3AF8;
      }
      goto L_08AE3AD0;
    }
L_08AE3AD0:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3ADC;
    }
L_08AE3ADC:
    aot_gpr_31 = (0x08AE3AE4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9FA5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3AE4u) goto L_08AE3AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3AE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AE3AF0;
      }
      goto L_08AE3AEC;
    }
L_08AE3AEC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    goto L_08AE3AF0;
L_08AE3AF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3AF8;
    }
L_08AE3AF8:
    aot_gpr_31 = (0x08AE3B00u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 583u, 0x08A9FAD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3B00u) goto L_08AE3B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3B00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AE3B2C;
      }
      goto L_08AE3B08;
    }
L_08AE3B08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_5 = (aot_gpr_5 & 480u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AE3B34;
      }
      goto L_08AE3B24;
    }
L_08AE3B24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3B48;
      }
      goto L_08AE3B2C;
    }
L_08AE3B2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3B34;
    }
L_08AE3B34:
    aot_gpr_31 = (0x08AE3B3Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 570u, 0x08A9F9F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3B3Cu) goto L_08AE3B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3B3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AE3B48;
      }
      goto L_08AE3B44;
    }
L_08AE3B44:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    goto L_08AE3B48;
L_08AE3B48:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE3B58u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 63u, 0x08B247A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3B58u) goto L_08AE3B58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3B58:
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
L_08AE3B78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3B9C;
      }
      goto L_08AE3B94;
    }
L_08AE3B94:
    aot_gpr_31 = (0x08AE3B9Cu);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3B9Cu) goto L_08AE3B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3B9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3BB0;
      }
      goto L_08AE3BA8;
    }
L_08AE3BA8:
    aot_gpr_31 = (0x08AE3BB0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(28));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3BB0u) goto L_08AE3BB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3BB0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), 0u);
    aot_gpr_31 = (0x08AE3BC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 65u, 0x08B247B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3BC0u) goto L_08AE3BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3BC0:
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
L_08AE3BD0:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
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
L_08AE3BD8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 2u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3C18;
      }
      goto L_08AE3C00;
    }
L_08AE3C00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(84))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AE3C20;
      }
      goto L_08AE3C10;
    }
L_08AE3C10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3CA0;
      }
      goto L_08AE3C18;
    }
L_08AE3C18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AE3D10;
      }
      goto L_08AE3C20;
    }
L_08AE3C20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3C90;
      }
      goto L_08AE3C2C;
    }
L_08AE3C2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(84))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3C90;
      }
      goto L_08AE3C4C;
    }
L_08AE3C4C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
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
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AE3C90u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3C90u) goto L_08AE3C90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3C90:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AE3CA0;
L_08AE3CA0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(84))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3CF4;
      }
      goto L_08AE3CB0;
    }
L_08AE3CB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AE3CD0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3CD0u) goto L_08AE3CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3CD0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08AE3CF4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3CF4u) goto L_08AE3CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3CF4:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08AE3D00u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3D00u) goto L_08AE3D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3D00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AE3D10;
L_08AE3D10:
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
L_08AE3D28:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
        goto L_08AE3DAC;
    }
    goto L_08AE3D68;
L_08AE3D68:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 | 8u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (16025u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AE3E3C;
      }
      goto L_08AE3DAC;
    }
L_08AE3DAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 4u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
        goto L_08AE3E0C;
    }
    goto L_08AE3DC8;
L_08AE3DC8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 | 8u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (16204u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AE3E3C;
      }
      goto L_08AE3E0C;
    }
L_08AE3E0C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(84))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_6 & ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08AE3E3C;
L_08AE3E3C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
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
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
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
L_08AE3E58:
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
L_08AE3E80:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3EC4;
      }
      goto L_08AE3E88;
    }
L_08AE3E88:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u | 80u);
    aot_gpr_5 = (aot_gpr_5 & 496u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08AE3EB4;
      }
      goto L_08AE3E9C;
    }
L_08AE3E9C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AE3EBC;
      }
      goto L_08AE3EAC;
    }
L_08AE3EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE3EC8;
      }
      goto L_08AE3EB4;
    }
L_08AE3EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE3EC8;
      }
      goto L_08AE3EBC;
    }
L_08AE3EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3EC8;
      }
      goto L_08AE3EC4;
    }
L_08AE3EC4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AE3EC8;
L_08AE3EC8:
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
L_08AE3ED0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08AE3F78;
      }
      goto L_08AE3EE4;
    }
L_08AE3EE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08AE3F04;
      }
      goto L_08AE3EF4;
    }
L_08AE3EF4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 8u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08AE3F78;
      }
      goto L_08AE3F04;
    }
L_08AE3F04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 80u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AE3F20;
      }
      goto L_08AE3F18;
    }
L_08AE3F18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3F7C;
      }
      goto L_08AE3F20;
    }
L_08AE3F20:
    aot_gpr_31 = (0x08AE3F28u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3F28u) goto L_08AE3F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3F28:
    aot_gpr_31 = (0x08AE3F30u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089474C4, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AE3F30u) goto L_08AE3F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AE3F30:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE3F58;
      }
      goto L_08AE3F38;
    }
L_08AE3F38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(256)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(51) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE3F50;
      }
      goto L_08AE3F48;
    }
L_08AE3F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE3F7C;
      }
      goto L_08AE3F50;
    }
L_08AE3F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3F7C;
      }
      goto L_08AE3F58;
    }
L_08AE3F58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(51) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AE3F70;
      }
      goto L_08AE3F68;
    }
L_08AE3F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE3F7C;
      }
      goto L_08AE3F70;
    }
L_08AE3F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3F7C;
      }
      goto L_08AE3F78;
    }
L_08AE3F78:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AE3F7C;
L_08AE3F7C:
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
L_08AE3F8C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
L_08AE3FE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08AE4000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0183(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0183_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_183(Runtime &runtime) {
    runtime.register_generated_unit(183u, 0x08AE0000u, 16384u, &recomp_unit_0183, &recomp_unit_0183_entry);
    runtime.register_function(0x08AE0000u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0004u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0010u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0038u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0040u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0058u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0064u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0070u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0078u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0084u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0090u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0120u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0128u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0130u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0138u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0144u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0200u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0208u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0218u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE022Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0230u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0244u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0248u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE025Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE026Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0278u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0284u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE028Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0290u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0298u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0300u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE030Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0314u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE031Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0324u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0334u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0360u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE036Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE037Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0380u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0388u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0398u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0400u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0428u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0434u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0440u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0444u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE044Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0458u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0468u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0474u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0484u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE048Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0500u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0510u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0518u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0528u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0534u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE055Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0564u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0570u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE058Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE059Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0608u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE062Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0664u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE066Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0694u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0700u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE070Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0720u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE072Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0738u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0740u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0748u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0758u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0764u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0790u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0800u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0808u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0810u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0818u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0828u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0830u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0838u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0844u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE084Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0854u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE085Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0864u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE086Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0878u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0880u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0888u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0894u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0904u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0920u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0924u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE092Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0934u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE093Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0948u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE095Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0964u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE096Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0974u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0980u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0994u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE099Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0ECCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE100Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE101Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1024u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1034u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1044u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE104Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE105Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1068u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1070u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1078u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1080u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1090u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1100u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1118u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1124u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE112Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE113Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1144u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE114Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE115Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE116Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1174u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE117Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1184u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1190u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE120Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1214u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1220u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1228u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1238u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1240u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1248u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1250u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1258u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1268u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1270u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1280u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1288u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1294u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE129Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1308u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1310u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1320u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1328u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1330u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1338u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1340u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1350u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1358u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1368u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1370u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1378u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1384u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE138Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE139Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1408u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1410u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1420u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1428u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1438u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1440u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1450u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1460u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1468u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1478u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1480u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE148Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1494u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1500u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1510u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1518u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1524u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE152Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE153Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1544u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE154Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE155Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1564u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1570u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1590u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1600u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1610u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1620u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1628u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1630u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1638u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1640u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1650u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1660u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1670u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1680u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1688u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1698u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1704u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1714u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1724u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE172Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1734u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1744u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1754u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1764u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1774u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1784u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1828u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1840u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1858u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1870u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1888u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1900u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1918u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1930u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1938u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1948u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1980u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ED4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2008u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2020u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2064u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2084u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE211Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE212Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2140u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2148u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2154u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2160u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2168u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2170u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2178u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2184u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE219Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2200u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2228u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE224Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE225Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2264u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2270u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2278u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2284u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE228Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2294u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2330u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2348u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2350u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2358u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2360u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2368u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2378u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE237Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2400u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2408u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2410u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2418u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE241Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2438u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2488u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2498u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE251Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2540u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2584u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2600u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2624u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2634u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2648u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE265Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2690u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2698u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2700u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2714u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2724u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2730u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2738u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2744u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE274Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2760u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2768u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE277Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE278Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2790u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE279Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE280Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2848u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2854u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE285Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2864u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE286Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2874u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE287Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2884u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2898u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2904u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2910u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE291Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE293Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2944u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2954u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE295Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE296Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE297Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2988u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE298Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2998u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2ABCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2ED8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3004u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE300Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3018u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3024u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE302Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3030u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3038u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3054u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3060u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3070u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE307Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3088u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3090u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3098u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE31F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3300u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3304u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3318u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3324u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3330u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3338u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3340u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3358u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3374u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE338Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3394u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3404u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3424u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3444u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3464u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3470u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3480u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3498u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3508u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3528u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3530u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE353Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3550u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3564u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3600u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3634u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3664u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE367Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3680u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3684u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE368Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE371Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3730u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE374Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3770u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3784u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE378Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3804u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3810u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE382Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE385Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3870u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3874u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3890u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3908u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3914u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE391Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE392Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3948u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3964u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3970u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE397Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3980u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ADCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FE8u, &recomp_unit_0183, "recomp_unit_0183");
}
} // namespace psprecomp
