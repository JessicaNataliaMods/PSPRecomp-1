#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0047[64] = {
    0x0029448000000021ull, 0x0001420448080220ull, 0x0240080142000000ull, 0x8011980801213010ull,
    0x2002450A20002440ull, 0x0001001028102460ull, 0x0A800002E011510Aull, 0x0A800056A9008028ull,
    0x0802A10020000400ull, 0x0A49002000008100ull, 0x0000020000800000ull, 0x0010100101008000ull,
    0x0808008080080804ull, 0x884000000C008080ull, 0x100800100024000Aull, 0xA181200000212048ull,
    0xB49692D25A4B4904ull, 0xD25A4B49692D25A4ull, 0x0016A20A02B49692ull, 0x9048200000084021ull,
    0x084041A485348120ull, 0x02452A2010200000ull, 0x0008009002809048ull, 0x4004042008080842ull,
    0x0000000000001200ull, 0x0010401020000000ull, 0x0002048200000000ull, 0x0000000000000000ull,
    0x0004100000000000ull, 0x0801040000000000ull, 0x0000000000004000ull, 0x0000800010800000ull,
    0x0000000000000100ull, 0x0000400008001040ull, 0x8200000000000000ull, 0x0000001000000800ull,
    0x1001040000000000ull, 0x0000000000040000ull, 0x0000100041000000ull, 0x0000000000000020ull,
    0x0080000200020800ull, 0x0001000104000000ull, 0x0200104000000001ull, 0x4000820000000040ull,
    0x0100000000000100ull, 0x5294A01000002208ull, 0xAA24025294A5294Aull, 0x2920209110940108ull,
    0xA012255002400828ull, 0x020C8000000008C8ull, 0x0883200000000001ull, 0x11001021508B1400ull,
    0x1429222002042846ull, 0x4058441048000102ull, 0x0041442611140584ull, 0x0101002146220004ull,
    0x006A9605514C0800ull, 0x010192A885222001ull, 0x028A400810254AA4ull, 0x5028A4004114A425ull,
    0x80800020452A4242ull, 0x224054A08A280A94ull, 0x8200400402844144ull, 0x44285422A1108502ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0047[64] = {
    1u, 9u, 18u, 24u, 37u, 48u, 57u, 71u, 85u, 92u, 100u, 102u, 107u, 114u, 121u, 128u,
    139u, 166u, 195u, 215u, 224u, 240u, 250u, 259u, 268u, 270u, 274u, 278u, 278u, 280u, 283u, 284u,
    287u, 288u, 292u, 294u, 296u, 299u, 300u, 303u, 304u, 308u, 311u, 315u, 319u, 321u, 333u, 356u,
    370u, 384u, 392u, 398u, 411u, 426u, 437u, 452u, 462u, 479u, 494u, 510u, 527u, 540u, 558u, 569u,
};
void recomp_unit_0047_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,31,16 fprs=12,13,22,14 gpr_occ=4560 fpr_occ=465 gpr_total=6267 fpr_total=736
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_22 = ctx.fpr[22];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[22] = aot_fpr_22; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_22 = ctx.fpr[22]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C0000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0047[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0047[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088C0000;
    case 2u: goto L_088C0014;
    case 3u: goto L_088C009C;
    case 4u: goto L_088C00A8;
    case 5u: goto L_088C00B8;
    case 6u: goto L_088C00C0;
    case 7u: goto L_088C00CC;
    case 8u: goto L_088C00D4;
    case 9u: goto L_088C0114;
    case 10u: goto L_088C0124;
    case 11u: goto L_088C014C;
    case 12u: goto L_088C016C;
    case 13u: goto L_088C0178;
    case 14u: goto L_088C0188;
    case 15u: goto L_088C01A4;
    case 16u: goto L_088C01B8;
    case 17u: goto L_088C01C0;
    case 18u: goto L_088C0264;
    case 19u: goto L_088C0278;
    case 20u: goto L_088C0280;
    case 21u: goto L_088C02AC;
    case 22u: goto L_088C02D8;
    case 23u: goto L_088C02E4;
    case 24u: goto L_088C0310;
    case 25u: goto L_088C0330;
    case 26u: goto L_088C0334;
    case 27u: goto L_088C0340;
    case 28u: goto L_088C0354;
    case 29u: goto L_088C0360;
    case 30u: goto L_088C038C;
    case 31u: goto L_088C03AC;
    case 32u: goto L_088C03B0;
    case 33u: goto L_088C03BC;
    case 34u: goto L_088C03C0;
    case 35u: goto L_088C03D0;
    case 36u: goto L_088C03FC;
    case 37u: goto L_088C0418;
    case 38u: goto L_088C0428;
    case 39u: goto L_088C0434;
    case 40u: goto L_088C0474;
    case 41u: goto L_088C0484;
    case 42u: goto L_088C048C;
    case 43u: goto L_088C04A0;
    case 44u: goto L_088C04A8;
    case 45u: goto L_088C04B8;
    case 46u: goto L_088C04C4;
    case 47u: goto L_088C04F4;
    case 48u: goto L_088C0514;
    case 49u: goto L_088C0518;
    case 50u: goto L_088C0528;
    case 51u: goto L_088C0534;
    case 52u: goto L_088C0550;
    case 53u: goto L_088C056C;
    case 54u: goto L_088C0574;
    case 55u: goto L_088C0590;
    case 56u: goto L_088C05C0;
    case 57u: goto L_088C0604;
    case 58u: goto L_088C060C;
    case 59u: goto L_088C0620;
    case 60u: goto L_088C0630;
    case 61u: goto L_088C0638;
    case 62u: goto L_088C0640;
    case 63u: goto L_088C0650;
    case 64u: goto L_088C0674;
    case 65u: goto L_088C0678;
    case 66u: goto L_088C067C;
    case 67u: goto L_088C0684;
    case 68u: goto L_088C06DC;
    case 69u: goto L_088C06E4;
    case 70u: goto L_088C06EC;
    case 71u: goto L_088C070C;
    case 72u: goto L_088C0714;
    case 73u: goto L_088C073C;
    case 74u: goto L_088C0760;
    case 75u: goto L_088C076C;
    case 76u: goto L_088C0774;
    case 77u: goto L_088C077C;
    case 78u: goto L_088C0784;
    case 79u: goto L_088C0788;
    case 80u: goto L_088C0790;
    case 81u: goto L_088C0798;
    case 82u: goto L_088C07DC;
    case 83u: goto L_088C07E4;
    case 84u: goto L_088C07EC;
    case 85u: goto L_088C0828;
    case 86u: goto L_088C0874;
    case 87u: goto L_088C08A0;
    case 88u: goto L_088C08B4;
    case 89u: goto L_088C08BC;
    case 90u: goto L_088C08C4;
    case 91u: goto L_088C08EC;
    case 92u: goto L_088C0920;
    case 93u: goto L_088C093C;
    case 94u: goto L_088C0994;
    case 95u: goto L_088C09C0;
    case 96u: goto L_088C09CC;
    case 97u: goto L_088C09D8;
    case 98u: goto L_088C09E4;
    case 99u: goto L_088C09EC;
    case 100u: goto L_088C0A5C;
    case 101u: goto L_088C0AA4;
    case 102u: goto L_088C0B3C;
    case 103u: goto L_088C0B60;
    case 104u: goto L_088C0B80;
    case 105u: goto L_088C0BB0;
    case 106u: goto L_088C0BD0;
    case 107u: goto L_088C0C08;
    case 108u: goto L_088C0C2C;
    case 109u: goto L_088C0C4C;
    case 110u: goto L_088C0C7C;
    case 111u: goto L_088C0C9C;
    case 112u: goto L_088C0CCC;
    case 113u: goto L_088C0CEC;
    case 114u: goto L_088C0D1C;
    case 115u: goto L_088C0D3C;
    case 116u: goto L_088C0D68;
    case 117u: goto L_088C0D6C;
    case 118u: goto L_088C0DD8;
    case 119u: goto L_088C0DEC;
    case 120u: goto L_088C0DFC;
    case 121u: goto L_088C0E04;
    case 122u: goto L_088C0E0C;
    case 123u: goto L_088C0E48;
    case 124u: goto L_088C0E54;
    case 125u: goto L_088C0E90;
    case 126u: goto L_088C0ECC;
    case 127u: goto L_088C0EF0;
    case 128u: goto L_088C0F0C;
    case 129u: goto L_088C0F18;
    case 130u: goto L_088C0F34;
    case 131u: goto L_088C0F40;
    case 132u: goto L_088C0F54;
    case 133u: goto L_088C0FB4;
    case 134u: goto L_088C0FC0;
    case 135u: goto L_088C0FDC;
    case 136u: goto L_088C0FE0;
    case 137u: goto L_088C0FF4;
    case 138u: goto L_088C0FFC;
    case 139u: goto L_088C1008;
    case 140u: goto L_088C1020;
    case 141u: goto L_088C102C;
    case 142u: goto L_088C1038;
    case 143u: goto L_088C1040;
    case 144u: goto L_088C1044;
    case 145u: goto L_088C104C;
    case 146u: goto L_088C1058;
    case 147u: goto L_088C1064;
    case 148u: goto L_088C106C;
    case 149u: goto L_088C1070;
    case 150u: goto L_088C1078;
    case 151u: goto L_088C1084;
    case 152u: goto L_088C1090;
    case 153u: goto L_088C1098;
    case 154u: goto L_088C109C;
    case 155u: goto L_088C10A4;
    case 156u: goto L_088C10B0;
    case 157u: goto L_088C10BC;
    case 158u: goto L_088C10C4;
    case 159u: goto L_088C10C8;
    case 160u: goto L_088C10D0;
    case 161u: goto L_088C10DC;
    case 162u: goto L_088C10E8;
    case 163u: goto L_088C10F0;
    case 164u: goto L_088C10F4;
    case 165u: goto L_088C10FC;
    case 166u: goto L_088C1108;
    case 167u: goto L_088C1114;
    case 168u: goto L_088C111C;
    case 169u: goto L_088C1120;
    case 170u: goto L_088C1128;
    case 171u: goto L_088C1134;
    case 172u: goto L_088C1140;
    case 173u: goto L_088C1148;
    case 174u: goto L_088C114C;
    case 175u: goto L_088C1154;
    case 176u: goto L_088C1160;
    case 177u: goto L_088C116C;
    case 178u: goto L_088C1174;
    case 179u: goto L_088C1178;
    case 180u: goto L_088C1180;
    case 181u: goto L_088C118C;
    case 182u: goto L_088C1198;
    case 183u: goto L_088C11A0;
    case 184u: goto L_088C11A4;
    case 185u: goto L_088C11AC;
    case 186u: goto L_088C11B8;
    case 187u: goto L_088C11C4;
    case 188u: goto L_088C11CC;
    case 189u: goto L_088C11D0;
    case 190u: goto L_088C11D8;
    case 191u: goto L_088C11E4;
    case 192u: goto L_088C11F0;
    case 193u: goto L_088C11F8;
    case 194u: goto L_088C11FC;
    case 195u: goto L_088C1204;
    case 196u: goto L_088C1210;
    case 197u: goto L_088C121C;
    case 198u: goto L_088C1224;
    case 199u: goto L_088C1228;
    case 200u: goto L_088C1230;
    case 201u: goto L_088C123C;
    case 202u: goto L_088C1248;
    case 203u: goto L_088C1250;
    case 204u: goto L_088C1254;
    case 205u: goto L_088C125C;
    case 206u: goto L_088C1264;
    case 207u: goto L_088C1284;
    case 208u: goto L_088C128C;
    case 209u: goto L_088C12A4;
    case 210u: goto L_088C12B4;
    case 211u: goto L_088C12BC;
    case 212u: goto L_088C12C4;
    case 213u: goto L_088C12C8;
    case 214u: goto L_088C12D0;
    case 215u: goto L_088C1300;
    case 216u: goto L_088C1314;
    case 217u: goto L_088C1338;
    case 218u: goto L_088C134C;
    case 219u: goto L_088C13B4;
    case 220u: goto L_088C13CC;
    case 221u: goto L_088C13D8;
    case 222u: goto L_088C13F0;
    case 223u: goto L_088C13FC;
    case 224u: goto L_088C1414;
    case 225u: goto L_088C1420;
    case 226u: goto L_088C143C;
    case 227u: goto L_088C1448;
    case 228u: goto L_088C1450;
    case 229u: goto L_088C1454;
    case 230u: goto L_088C1460;
    case 231u: goto L_088C1468;
    case 232u: goto L_088C147C;
    case 233u: goto L_088C1488;
    case 234u: goto L_088C1494;
    case 235u: goto L_088C149C;
    case 236u: goto L_088C14A0;
    case 237u: goto L_088C14B8;
    case 238u: goto L_088C14D8;
    case 239u: goto L_088C14EC;
    case 240u: goto L_088C1554;
    case 241u: goto L_088C1570;
    case 242u: goto L_088C1594;
    case 243u: goto L_088C15A4;
    case 244u: goto L_088C15AC;
    case 245u: goto L_088C15B4;
    case 246u: goto L_088C15C0;
    case 247u: goto L_088C15C8;
    case 248u: goto L_088C15D8;
    case 249u: goto L_088C15E4;
    case 250u: goto L_088C160C;
    case 251u: goto L_088C1618;
    case 252u: goto L_088C1630;
    case 253u: goto L_088C163C;
    case 254u: goto L_088C165C;
    case 255u: goto L_088C1664;
    case 256u: goto L_088C1690;
    case 257u: goto L_088C169C;
    case 258u: goto L_088C16CC;
    case 259u: goto L_088C1704;
    case 260u: goto L_088C1718;
    case 261u: goto L_088C172C;
    case 262u: goto L_088C174C;
    case 263u: goto L_088C176C;
    case 264u: goto L_088C1794;
    case 265u: goto L_088C17A8;
    case 266u: goto L_088C17C8;
    case 267u: goto L_088C17F8;
    case 268u: goto L_088C1824;
    case 269u: goto L_088C1830;
    case 270u: goto L_088C1974;
    case 271u: goto L_088C1990;
    case 272u: goto L_088C19B8;
    case 273u: goto L_088C19D0;
    case 274u: goto L_088C1A84;
    case 275u: goto L_088C1A9C;
    case 276u: goto L_088C1AA8;
    case 277u: goto L_088C1AC4;
    case 278u: goto L_088C1CB0;
    case 279u: goto L_088C1CC8;
    case 280u: goto L_088C1DA8;
    case 281u: goto L_088C1DC0;
    case 282u: goto L_088C1DEC;
    case 283u: goto L_088C1E38;
    case 284u: goto L_088C1F5C;
    case 285u: goto L_088C1F70;
    case 286u: goto L_088C1FBC;
    case 287u: goto L_088C2020;
    case 288u: goto L_088C2118;
    case 289u: goto L_088C2130;
    case 290u: goto L_088C216C;
    case 291u: goto L_088C21B8;
    case 292u: goto L_088C22E4;
    case 293u: goto L_088C22FC;
    case 294u: goto L_088C232C;
    case 295u: goto L_088C2390;
    case 296u: goto L_088C24A8;
    case 297u: goto L_088C24C0;
    case 298u: goto L_088C24F0;
    case 299u: goto L_088C2548;
    case 300u: goto L_088C2660;
    case 301u: goto L_088C2678;
    case 302u: goto L_088C26B0;
    case 303u: goto L_088C2714;
    case 304u: goto L_088C282C;
    case 305u: goto L_088C2844;
    case 306u: goto L_088C2884;
    case 307u: goto L_088C28DC;
    case 308u: goto L_088C2968;
    case 309u: goto L_088C2980;
    case 310u: goto L_088C29C0;
    case 311u: goto L_088C2A00;
    case 312u: goto L_088C2A98;
    case 313u: goto L_088C2AB0;
    case 314u: goto L_088C2AE4;
    case 315u: goto L_088C2B18;
    case 316u: goto L_088C2BA4;
    case 317u: goto L_088C2BBC;
    case 318u: goto L_088C2BF8;
    case 319u: goto L_088C2C20;
    case 320u: goto L_088C2CE0;
    case 321u: goto L_088C2D0C;
    case 322u: goto L_088C2D24;
    case 323u: goto L_088C2D34;
    case 324u: goto L_088C2D90;
    case 325u: goto L_088C2DB4;
    case 326u: goto L_088C2DBC;
    case 327u: goto L_088C2DC8;
    case 328u: goto L_088C2DD0;
    case 329u: goto L_088C2DDC;
    case 330u: goto L_088C2DE4;
    case 331u: goto L_088C2DF0;
    case 332u: goto L_088C2DF8;
    case 333u: goto L_088C2E04;
    case 334u: goto L_088C2E0C;
    case 335u: goto L_088C2E18;
    case 336u: goto L_088C2E20;
    case 337u: goto L_088C2E2C;
    case 338u: goto L_088C2E34;
    case 339u: goto L_088C2E40;
    case 340u: goto L_088C2E48;
    case 341u: goto L_088C2E54;
    case 342u: goto L_088C2E5C;
    case 343u: goto L_088C2E68;
    case 344u: goto L_088C2E70;
    case 345u: goto L_088C2E7C;
    case 346u: goto L_088C2E84;
    case 347u: goto L_088C2E90;
    case 348u: goto L_088C2E98;
    case 349u: goto L_088C2EA4;
    case 350u: goto L_088C2EC8;
    case 351u: goto L_088C2ED4;
    case 352u: goto L_088C2EE4;
    case 353u: goto L_088C2EEC;
    case 354u: goto L_088C2EF4;
    case 355u: goto L_088C2EFC;
    case 356u: goto L_088C2F0C;
    case 357u: goto L_088C2F20;
    case 358u: goto L_088C2F48;
    case 359u: goto L_088C2F50;
    case 360u: goto L_088C2F5C;
    case 361u: goto L_088C2F70;
    case 362u: goto L_088C2F80;
    case 363u: goto L_088C2F90;
    case 364u: goto L_088C2F9C;
    case 365u: goto L_088C2FB4;
    case 366u: goto L_088C2FD4;
    case 367u: goto L_088C2FE0;
    case 368u: goto L_088C2FEC;
    case 369u: goto L_088C2FF4;
    case 370u: goto L_088C300C;
    case 371u: goto L_088C3014;
    case 372u: goto L_088C302C;
    case 373u: goto L_088C3058;
    case 374u: goto L_088C3064;
    case 375u: goto L_088C3090;
    case 376u: goto L_088C3098;
    case 377u: goto L_088C30A0;
    case 378u: goto L_088C30A8;
    case 379u: goto L_088C30B4;
    case 380u: goto L_088C30C4;
    case 381u: goto L_088C30D0;
    case 382u: goto L_088C30F4;
    case 383u: goto L_088C30FC;
    case 384u: goto L_088C310C;
    case 385u: goto L_088C3118;
    case 386u: goto L_088C311C;
    case 387u: goto L_088C312C;
    case 388u: goto L_088C31BC;
    case 389u: goto L_088C31C8;
    case 390u: goto L_088C31CC;
    case 391u: goto L_088C31E4;
    case 392u: goto L_088C3200;
    case 393u: goto L_088C32B4;
    case 394u: goto L_088C32C0;
    case 395u: goto L_088C32C4;
    case 396u: goto L_088C32DC;
    case 397u: goto L_088C32EC;
    case 398u: goto L_088C3328;
    case 399u: goto L_088C3330;
    case 400u: goto L_088C3340;
    case 401u: goto L_088C3344;
    case 402u: goto L_088C334C;
    case 403u: goto L_088C335C;
    case 404u: goto L_088C3370;
    case 405u: goto L_088C3378;
    case 406u: goto L_088C3380;
    case 407u: goto L_088C3394;
    case 408u: goto L_088C33B0;
    case 409u: goto L_088C33E0;
    case 410u: goto L_088C33F0;
    case 411u: goto L_088C3404;
    case 412u: goto L_088C3408;
    case 413u: goto L_088C3418;
    case 414u: goto L_088C342C;
    case 415u: goto L_088C3434;
    case 416u: goto L_088C3448;
    case 417u: goto L_088C3464;
    case 418u: goto L_088C3494;
    case 419u: goto L_088C34A4;
    case 420u: goto L_088C34B4;
    case 421u: goto L_088C34C0;
    case 422u: goto L_088C34CC;
    case 423u: goto L_088C34D4;
    case 424u: goto L_088C34E8;
    case 425u: goto L_088C34F0;
    case 426u: goto L_088C3504;
    case 427u: goto L_088C3520;
    case 428u: goto L_088C356C;
    case 429u: goto L_088C3578;
    case 430u: goto L_088C3590;
    case 431u: goto L_088C35A8;
    case 432u: goto L_088C35B8;
    case 433u: goto L_088C35CC;
    case 434u: goto L_088C35D0;
    case 435u: goto L_088C35D8;
    case 436u: goto L_088C35F8;
    case 437u: goto L_088C3608;
    case 438u: goto L_088C361C;
    case 439u: goto L_088C3620;
    case 440u: goto L_088C3628;
    case 441u: goto L_088C3648;
    case 442u: goto L_088C3650;
    case 443u: goto L_088C3660;
    case 444u: goto L_088C3670;
    case 445u: goto L_088C3684;
    case 446u: goto L_088C3688;
    case 447u: goto L_088C3694;
    case 448u: goto L_088C36A8;
    case 449u: goto L_088C36B8;
    case 450u: goto L_088C36C0;
    case 451u: goto L_088C36D8;
    case 452u: goto L_088C3708;
    case 453u: goto L_088C3744;
    case 454u: goto L_088C3754;
    case 455u: goto L_088C3764;
    case 456u: goto L_088C3768;
    case 457u: goto L_088C3778;
    case 458u: goto L_088C3780;
    case 459u: goto L_088C3794;
    case 460u: goto L_088C37C0;
    case 461u: goto L_088C37E0;
    case 462u: goto L_088C382C;
    case 463u: goto L_088C3848;
    case 464u: goto L_088C384C;
    case 465u: goto L_088C3858;
    case 466u: goto L_088C3860;
    case 467u: goto L_088C3870;
    case 468u: goto L_088C3878;
    case 469u: goto L_088C3880;
    case 470u: goto L_088C3888;
    case 471u: goto L_088C38A4;
    case 472u: goto L_088C38A8;
    case 473u: goto L_088C38B0;
    case 474u: goto L_088C38BC;
    case 475u: goto L_088C38C4;
    case 476u: goto L_088C38CC;
    case 477u: goto L_088C38D4;
    case 478u: goto L_088C38D8;
    case 479u: goto L_088C3900;
    case 480u: goto L_088C3934;
    case 481u: goto L_088C3944;
    case 482u: goto L_088C3954;
    case 483u: goto L_088C3960;
    case 484u: goto L_088C3968;
    case 485u: goto L_088C397C;
    case 486u: goto L_088C398C;
    case 487u: goto L_088C3994;
    case 488u: goto L_088C399C;
    case 489u: goto L_088C39A4;
    case 490u: goto L_088C39B0;
    case 491u: goto L_088C39BC;
    case 492u: goto L_088C39C0;
    case 493u: goto L_088C39E0;
    case 494u: goto L_088C3A08;
    case 495u: goto L_088C3A14;
    case 496u: goto L_088C3A1C;
    case 497u: goto L_088C3A24;
    case 498u: goto L_088C3A2C;
    case 499u: goto L_088C3A38;
    case 500u: goto L_088C3A40;
    case 501u: goto L_088C3A48;
    case 502u: goto L_088C3A54;
    case 503u: goto L_088C3A70;
    case 504u: goto L_088C3A8C;
    case 505u: goto L_088C3AB8;
    case 506u: goto L_088C3AC4;
    case 507u: goto L_088C3ACC;
    case 508u: goto L_088C3ADC;
    case 509u: goto L_088C3AE4;
    case 510u: goto L_088C3B00;
    case 511u: goto L_088C3B08;
    case 512u: goto L_088C3B14;
    case 513u: goto L_088C3B28;
    case 514u: goto L_088C3B34;
    case 515u: goto L_088C3B3C;
    case 516u: goto L_088C3B48;
    case 517u: goto L_088C3B50;
    case 518u: goto L_088C3B60;
    case 519u: goto L_088C3B78;
    case 520u: goto L_088C3BA8;
    case 521u: goto L_088C3BB4;
    case 522u: goto L_088C3BBC;
    case 523u: goto L_088C3BCC;
    case 524u: goto L_088C3BD4;
    case 525u: goto L_088C3BF0;
    case 526u: goto L_088C3BF8;
    case 527u: goto L_088C3C04;
    case 528u: goto L_088C3C18;
    case 529u: goto L_088C3C24;
    case 530u: goto L_088C3C38;
    case 531u: goto L_088C3C44;
    case 532u: goto L_088C3C4C;
    case 533u: goto L_088C3C54;
    case 534u: goto L_088C3C60;
    case 535u: goto L_088C3C68;
    case 536u: goto L_088C3C78;
    case 537u: goto L_088C3C94;
    case 538u: goto L_088C3CDC;
    case 539u: goto L_088C3CFC;
    case 540u: goto L_088C3D08;
    case 541u: goto L_088C3D10;
    case 542u: goto L_088C3D1C;
    case 543u: goto L_088C3D24;
    case 544u: goto L_088C3D2C;
    case 545u: goto L_088C3D4C;
    case 546u: goto L_088C3D54;
    case 547u: goto L_088C3D64;
    case 548u: goto L_088C3D6C;
    case 549u: goto L_088C3D7C;
    case 550u: goto L_088C3D94;
    case 551u: goto L_088C3D9C;
    case 552u: goto L_088C3DA8;
    case 553u: goto L_088C3DB0;
    case 554u: goto L_088C3DB8;
    case 555u: goto L_088C3DD8;
    case 556u: goto L_088C3DE4;
    case 557u: goto L_088C3DF4;
    case 558u: goto L_088C3E08;
    case 559u: goto L_088C3E18;
    case 560u: goto L_088C3E20;
    case 561u: goto L_088C3E38;
    case 562u: goto L_088C3E48;
    case 563u: goto L_088C3E5C;
    case 564u: goto L_088C3E64;
    case 565u: goto L_088C3E88;
    case 566u: goto L_088C3EB8;
    case 567u: goto L_088C3EE4;
    case 568u: goto L_088C3EFC;
    case 569u: goto L_088C3F04;
    case 570u: goto L_088C3F20;
    case 571u: goto L_088C3F28;
    case 572u: goto L_088C3F3C;
    case 573u: goto L_088C3F50;
    case 574u: goto L_088C3F60;
    case 575u: goto L_088C3F74;
    case 576u: goto L_088C3F7C;
    case 577u: goto L_088C3F84;
    case 578u: goto L_088C3F94;
    case 579u: goto L_088C3FA8;
    case 580u: goto L_088C3FB0;
    case 581u: goto L_088C3FB8;
    case 582u: goto L_088C3FCC;
    case 583u: goto L_088C3FD4;
    case 584u: goto L_088C3FE8;
    case 585u: goto L_088C3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x088C0000u;
        if (local_delta_v813 >= 16380u || (local_delta_v813 & 3u) != 0u) {
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
L_088C0000:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2430), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2430))))));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C00B8;
      }
      goto L_088C0014;
    }
L_088C0014:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 32767u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (ctx.gpr[20] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
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
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(88));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x088C009Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C009Cu) goto L_088C009C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C009C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C00B8;
      }
      goto L_088C00A8;
    }
L_088C00A8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2432), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2432))))));
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_088C00B8;
L_088C00B8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C00D4;
      }
      goto L_088C00C0;
    }
L_088C00C0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_31 = (0x088C00CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0165.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 7u, 0x088C00CCu, 0x08A9BC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0165_entry(rt, ctx, 486u, aot_mem);
#else
        recomp_unit_0165_entry(rt, ctx, 486u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 486u, 0x08A9BC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C00CCu) goto L_088C00CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C00CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088C0114;
      }
      goto L_088C00D4;
    }
L_088C00D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2580)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2576)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2312), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2316), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2572)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2568)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2564)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(2320), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2560)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2556)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2552)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(2332), aot_run_words); }
    goto L_088C0114;
L_088C0114:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1025) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C0178;
      }
      goto L_088C0124;
    }
L_088C0124:
    aot_gpr_16 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2588)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088C014Cu);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 11u, 0x088C014Cu, 0x08ADC9FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 186u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 186u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C014Cu) goto L_088C014C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C014C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2584)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[18]);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (ctx.gpr[20] + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2548)));
    aot_gpr_31 = (0x088C016Cu);
    aot_gpr_6 = (aot_gpr_16 - ctx.gpr[18]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 12u, 0x088C016Cu, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C016Cu) goto L_088C016C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C016C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(23)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088C0178;
L_088C0178:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[22] != aot_gpr_4;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0046_entry, 46u, 392u, 0x088BFD60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C0188;
    }
L_088C0188:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C04A8;
      }
      goto L_088C01A4;
    }
L_088C01A4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2584)));
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2588)));
      if (branch_taken) {
          goto L_088C0434;
      }
      goto L_088C01B8;
    }
L_088C01B8:
    ctx.gpr[18] = (32768u << 16u);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[22]);
    goto L_088C01C0;
L_088C01C0:
    ctx.gpr[17] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_4 & ctx.gpr[18]);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_6 = (aot_gpr_4 & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[20] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (ctx.gpr[20] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (ctx.gpr[20] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C0278;
      }
      goto L_088C0264;
    }
L_088C0264:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_088C0278;
L_088C0278:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C0340;
      }
      goto L_088C0280;
    }
L_088C0280:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2434), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2434))))));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C0340;
      }
      goto L_088C02AC;
    }
L_088C02AC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2436), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2436))))));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C0340;
      }
      goto L_088C02D8;
    }
L_088C02D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
        goto L_088C0334;
    }
    goto L_088C02E4;
L_088C02E4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2438), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2439), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] >> 29u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
      if (branch_taken) {
          goto L_088C0330;
      }
      goto L_088C0310;
    }
L_088C0310:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) > 0;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088C0310;
      }
      goto L_088C0330;
    }
L_088C0330:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    goto L_088C0334;
L_088C0334:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), aot_gpr_4);
      if (branch_taken) {
          goto L_088C03C0;
      }
      goto L_088C0340;
    }
L_088C0340:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088C03BC;
      }
      goto L_088C0354;
    }
L_088C0354:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
        goto L_088C03B0;
    }
    goto L_088C0360;
L_088C0360:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2440), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2441), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] >> 29u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
      if (branch_taken) {
          goto L_088C03AC;
      }
      goto L_088C038C;
    }
L_088C038C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) > 0;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088C038C;
      }
      goto L_088C03AC;
    }
L_088C03AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    goto L_088C03B0;
L_088C03B0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), aot_gpr_4);
      if (branch_taken) {
          goto L_088C03C0;
      }
      goto L_088C03BC;
    }
L_088C03BC:
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_088C03C0;
L_088C03C0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1025) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C0428;
      }
      goto L_088C03D0;
    }
L_088C03D0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2600), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088C03FCu);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 36u, 0x088C03FCu, 0x08ADC9FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 186u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 186u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C03FCu) goto L_088C03FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C03FC:
    aot_gpr_4 = (ctx.gpr[22] + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[17]);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (ctx.gpr[20] + ctx.gpr[17]);
    aot_gpr_6 = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_31 = (0x088C0418u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 37u, 0x088C0418u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0418u) goto L_088C0418;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C0418:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(23)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2600)));
    goto L_088C0428;
L_088C0428:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_16 != aot_gpr_4;
      if (branch_taken) {
          goto L_088C01C0;
      }
      goto L_088C0434;
    }
L_088C0434:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(23)));
    aot_gpr_4 = (aot_gpr_4 | 128u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (0u | 56u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C048C;
      }
      goto L_088C0474;
    }
L_088C0474:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088C0484u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 41u, 0x088C0484u, 0x08ADC9FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 186u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 186u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0484u) goto L_088C0484;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C0484:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C0528;
      }
      goto L_088C048C;
    }
L_088C048C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088C04A0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 43u, 0x088C04A0u, 0x08ADC9FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 186u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 186u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C04A0u) goto L_088C04A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C04A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C0528;
      }
      goto L_088C04A8;
    }
L_088C04A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088C0528;
      }
      goto L_088C04B8;
    }
L_088C04B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    if (aot_gpr_5 == aot_gpr_6) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
        goto L_088C0518;
    }
    goto L_088C04C4;
L_088C04C4:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2442), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2443), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] - aot_gpr_6);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
      if (branch_taken) {
          goto L_088C0514;
      }
      goto L_088C04F4;
    }
L_088C04F4:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088C04F4;
      }
      goto L_088C0514;
    }
L_088C0514:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    goto L_088C0518;
L_088C0518:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_088C04B8;
      }
      goto L_088C0528;
    }
L_088C0528:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2592)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C0590;
      }
      goto L_088C0534;
    }
L_088C0534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C0590;
      }
      goto L_088C0550;
    }
L_088C0550:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C0590;
      }
      goto L_088C056C;
    }
L_088C056C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_088C0590;
      }
      goto L_088C0574;
    }
L_088C0574:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088C0590u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0590u) goto L_088C0590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C0590:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(2604), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(2656));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C05C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-448));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C060C;
      }
      goto L_088C0604;
    }
L_088C0604:
    aot_gpr_31 = (0x088C060Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C060Cu) goto L_088C060C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C060C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088C0630;
      }
      goto L_088C0620;
    }
L_088C0620:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088C0638;
      }
      goto L_088C0630;
    }
L_088C0630:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088C0638;
L_088C0638:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2237u << 16u);
      if (branch_taken) {
          goto L_088C06E4;
      }
      goto L_088C0640;
    }
L_088C0640:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088C0678;
      }
      goto L_088C0650;
    }
L_088C0650:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088C067C;
      }
      goto L_088C0674;
    }
L_088C0674:
    aot_gpr_4 = (0u | 1u);
    goto L_088C0678;
L_088C0678:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088C067C;
L_088C067C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C06E4;
      }
      goto L_088C0684;
    }
L_088C0684:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (0u | 56u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C06EC;
      }
      goto L_088C06DC;
    }
L_088C06DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C073C;
      }
      goto L_088C06E4;
    }
L_088C06E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C169C;
      }
      goto L_088C06EC;
    }
L_088C06EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] << 6u);
    aot_gpr_6 = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_088C0714;
      }
      goto L_088C070C;
    }
L_088C070C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C073C;
      }
      goto L_088C0714;
    }
L_088C0714:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (0u | 56u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C06EC;
      }
      goto L_088C073C;
    }
L_088C073C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (0u | 56u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[19] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C0774;
      }
      goto L_088C0760;
    }
L_088C0760:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C077C;
      }
      goto L_088C076C;
    }
L_088C076C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
      if (branch_taken) {
          goto L_088C0788;
      }
      goto L_088C0774;
    }
L_088C0774:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C169C;
      }
      goto L_088C077C;
    }
L_088C077C:
    aot_gpr_31 = (0x088C0784u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0784u) goto L_088C0784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C0784:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_088C0788;
L_088C0788:
    aot_gpr_31 = (0x088C0790u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0147.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 80u, 0x088C0790u, 0x08A53124u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0147_entry(rt, ctx, 573u, aot_mem);
#else
        recomp_unit_0147_entry(rt, ctx, 573u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0790u) goto L_088C0790;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C0790:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C07E4;
      }
      goto L_088C0798;
    }
L_088C0798:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] << 6u);
    aot_gpr_6 = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(46));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(448))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(174), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(174))))));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C07EC;
      }
      goto L_088C07DC;
    }
L_088C07DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C0828;
      }
      goto L_088C07E4;
    }
L_088C07E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C169C;
      }
      goto L_088C07EC;
    }
L_088C07EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] << 6u);
    aot_gpr_6 = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(46));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(448))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(48), 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(52), aot_gpr_4);
    goto L_088C0828;
L_088C0828:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 127u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (ctx.gpr[19] << 6u);
    ctx.gpr[7] = (ctx.gpr[19] << 3u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(46));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(448))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(176))))));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C08BC;
      }
      goto L_088C0874;
    }
L_088C0874:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (ctx.gpr[19] << 6u);
    ctx.gpr[7] = (ctx.gpr[19] << 3u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(48)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 << (aot_gpr_4 & 31u));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C08BC;
      }
      goto L_088C08A0;
    }
L_088C08A0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C08C4;
      }
      goto L_088C08B4;
    }
L_088C08B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C08EC;
      }
      goto L_088C08BC;
    }
L_088C08BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C169C;
      }
      goto L_088C08C4;
    }
L_088C08C4:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_6 << (aot_gpr_5 & 31u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[19] << 6u);
    ctx.gpr[8] = (ctx.gpr[19] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(52), aot_gpr_5);
    goto L_088C08EC;
L_088C08EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (ctx.gpr[19] << 6u);
    ctx.gpr[7] = (ctx.gpr[19] << 3u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] << (aot_gpr_4 & 31u));
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C0E54;
      }
      goto L_088C0920;
    }
L_088C0920:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C0E54;
      }
      goto L_088C093C;
    }
L_088C093C:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_6 | aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088C0E48;
      }
      goto L_088C0994;
    }
L_088C0994:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] << 6u);
    aot_gpr_6 = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[21] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(18));
      if (branch_taken) {
          goto L_088C09E4;
      }
      goto L_088C09C0;
    }
L_088C09C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
        goto L_088C09D8;
    }
    goto L_088C09CC;
L_088C09CC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    goto L_088C09D8;
L_088C09D8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_088C09EC;
      }
      goto L_088C09E4;
    }
L_088C09E4:
    aot_gpr_31 = (0x088C09ECu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 99u, 0x088C09ECu, 0x08B69A88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 230u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 230u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 230u, 0x08B69A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C09ECu) goto L_088C09EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C09EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(180));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(212));
    aot_gpr_31 = (0x088C0A5Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 100u, 0x088C0A5Cu, 0x088BAA8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 556u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 556u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 556u, 0x088BAA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0A5Cu) goto L_088C0A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C0A5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(196));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_088C0AA4;
L_088C0AA4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(228));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_6);
      if (branch_taken) {
          goto L_088C0D68;
      }
      goto L_088C0B3C;
    }
L_088C0B3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_gpr_6);
      if (branch_taken) {
          goto L_088C0B80;
      }
      goto L_088C0B60;
    }
L_088C0B60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(288)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_gpr_4);
    goto L_088C0B80;
L_088C0B80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(300), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(304), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088C0BD0;
      }
      goto L_088C0BB0;
    }
L_088C0BB0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(304)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(304), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(300), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), aot_gpr_5);
    goto L_088C0BD0;
L_088C0BD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(292)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(308), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(308))))));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C0D68;
      }
      goto L_088C0C08;
    }
L_088C0C08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_6);
      if (branch_taken) {
          goto L_088C0C4C;
      }
      goto L_088C0C2C;
    }
L_088C0C2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    goto L_088C0C4C;
L_088C0C4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_gpr_6);
      if (branch_taken) {
          goto L_088C0C9C;
      }
      goto L_088C0C7C;
    }
L_088C0C7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(340)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(340), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(332), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_4);
    goto L_088C0C9C;
L_088C0C9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088C0CEC;
      }
      goto L_088C0CCC;
    }
L_088C0CCC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    goto L_088C0CEC;
L_088C0CEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(364), aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(372), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088C0D3C;
      }
      goto L_088C0D1C;
    }
L_088C0D1C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(372)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(372), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(364), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_5);
    goto L_088C0D3C;
L_088C0D3C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(360)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(360), aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(376), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(376))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C0AA4;
      }
      goto L_088C0D68;
    }
L_088C0D68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    goto L_088C0D6C;
L_088C0D6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-64));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(31) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C0E0C;
      }
      goto L_088C0DD8;
    }
L_088C0DD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088C0DFC;
      }
      goto L_088C0DEC;
    }
L_088C0DEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_088C0E04;
      }
      goto L_088C0DFC;
    }
L_088C0DFC:
    aot_gpr_31 = (0x088C0E04u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 121u, 0x088C0E04u, 0x08B69B5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 240u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 240u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 240u, 0x08B69B5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0E04u) goto L_088C0E04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C0E04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088C0D6C;
      }
      goto L_088C0E0C;
    }
L_088C0E0C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(382), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(384), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(382))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(384))))));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    aot_gpr_31 = (0x088C0E48u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 123u, 0x088C0E48u, 0x08ADC06Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 4u, 0x08ADC06Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0E48u) goto L_088C0E48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C0E48:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C093C;
      }
      goto L_088C0E54;
    }
L_088C0E54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] << 6u);
    aot_gpr_6 = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(44));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C1570;
      }
      goto L_088C0E90;
    }
L_088C0E90:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 8u);
    ctx.gpr[20] = (aot_gpr_5 | aot_gpr_4);
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    aot_gpr_4 = (ctx.gpr[20] & 32768u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C1468;
      }
      goto L_088C0ECC;
    }
L_088C0ECC:
    ctx.gpr[20] = (ctx.gpr[20] & 32767u);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[23] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 255u);
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_4;
      if (branch_taken) {
          goto L_088C0F40;
      }
      goto L_088C0EF0;
    }
L_088C0EF0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C0F0Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 128u, 0x088C0F0Cu, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0F0Cu) goto L_088C0F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C0F0C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088C0F34;
      }
      goto L_088C0F18;
    }
L_088C0F18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088C0F34u);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0F34u) goto L_088C0F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C0F34:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1554;
      }
      goto L_088C0F40;
    }
L_088C0F40:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[23] & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C0FE0;
      }
      goto L_088C0F54;
    }
L_088C0F54:
    ctx.gpr[23] = (ctx.gpr[23] & 127u);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[22] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 8u);
    ctx.gpr[21] = (aot_gpr_5 | aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088C0FB4u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 133u, 0x088C0FB4u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0FB4u) goto L_088C0FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C0FB4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C0FDC;
      }
      goto L_088C0FC0;
    }
L_088C0FC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088C0FDCu);
    aot_gpr_5 = (0u | 3u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0FDCu) goto L_088C0FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C0FDC:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(0u));
    goto L_088C0FE0;
L_088C0FE0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C0FF4u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 137u, 0x088C0FF4u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C0FF4u) goto L_088C0FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C0FF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088C1468;
      }
      goto L_088C0FFC;
    }
L_088C0FFC:
    aot_gpr_4 = (ctx.gpr[23] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C125C;
      }
      goto L_088C1008;
    }
L_088C1008:
    ctx.gpr[23] = (ctx.gpr[23] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[23]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21792)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C1020:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C102Cu);
    aot_gpr_4 = (0u | 224u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 141u, 0x088C102Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C102Cu) goto L_088C102C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C102C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C1044;
      }
      goto L_088C1038;
    }
L_088C1038:
    aot_gpr_31 = (0x088C1040u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0007.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 143u, 0x088C1040u, 0x088239DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0007_entry(rt, ctx, 678u, aot_mem);
#else
        recomp_unit_0007_entry(rt, ctx, 678u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 678u, 0x088239DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1040u) goto L_088C1040;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1040:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C1044;
L_088C1044:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C104C;
    }
L_088C104C:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C1058u);
    aot_gpr_4 = (0u | 408u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 146u, 0x088C1058u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1058u) goto L_088C1058;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1058:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C1070;
      }
      goto L_088C1064;
    }
L_088C1064:
    aot_gpr_31 = (0x088C106Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 148u, 0x088C106Cu, 0x089F7524u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 648u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 648u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 648u, 0x089F7524u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C106Cu) goto L_088C106C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C106C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C1070;
L_088C1070:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C1078;
    }
L_088C1078:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C1084u);
    aot_gpr_4 = (0u | 256u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 151u, 0x088C1084u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1084u) goto L_088C1084;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1084:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C109C;
      }
      goto L_088C1090;
    }
L_088C1090:
    aot_gpr_31 = (0x088C1098u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0168.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 153u, 0x088C1098u, 0x08AA4C00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0168_entry(rt, ctx, 114u, aot_mem);
#else
        recomp_unit_0168_entry(rt, ctx, 114u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 114u, 0x08AA4C00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1098u) goto L_088C1098;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1098:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C109C;
L_088C109C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C10A4;
    }
L_088C10A4:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C10B0u);
    aot_gpr_4 = (0u | 228u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 156u, 0x088C10B0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C10B0u) goto L_088C10B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C10B0:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C10C8;
      }
      goto L_088C10BC;
    }
L_088C10BC:
    aot_gpr_31 = (0x088C10C4u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0115.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 158u, 0x088C10C4u, 0x089D2950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0115_entry(rt, ctx, 455u, aot_mem);
#else
        recomp_unit_0115_entry(rt, ctx, 455u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 455u, 0x089D2950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C10C4u) goto L_088C10C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C10C4:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C10C8;
L_088C10C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C10D0;
    }
L_088C10D0:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C10DCu);
    aot_gpr_4 = (0u | 116u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 161u, 0x088C10DCu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C10DCu) goto L_088C10DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C10DC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C10F4;
      }
      goto L_088C10E8;
    }
L_088C10E8:
    aot_gpr_31 = (0x088C10F0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 163u, 0x088C10F0u, 0x08A3ED80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 444u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 444u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 444u, 0x08A3ED80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C10F0u) goto L_088C10F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C10F0:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C10F4;
L_088C10F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C10FC;
    }
L_088C10FC:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C1108u);
    aot_gpr_4 = (0u | 112u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 166u, 0x088C1108u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1108u) goto L_088C1108;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1108:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C1120;
      }
      goto L_088C1114;
    }
L_088C1114:
    aot_gpr_31 = (0x088C111Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 168u, 0x088C111Cu, 0x0896561Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 168u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 168u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 168u, 0x0896561Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C111Cu) goto L_088C111C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C111C:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C1120;
L_088C1120:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C1128;
    }
L_088C1128:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C1134u);
    aot_gpr_4 = (0u | 116u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 171u, 0x088C1134u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1134u) goto L_088C1134;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1134:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C114C;
      }
      goto L_088C1140;
    }
L_088C1140:
    aot_gpr_31 = (0x088C1148u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0198.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 173u, 0x088C1148u, 0x08B1E844u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0198_entry(rt, ctx, 457u, aot_mem);
#else
        recomp_unit_0198_entry(rt, ctx, 457u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 457u, 0x08B1E844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1148u) goto L_088C1148;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1148:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C114C;
L_088C114C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C1154;
    }
L_088C1154:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C1160u);
    aot_gpr_4 = (0u | 132u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 176u, 0x088C1160u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1160u) goto L_088C1160;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1160:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C1178;
      }
      goto L_088C116C;
    }
L_088C116C:
    aot_gpr_31 = (0x088C1174u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0129.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 178u, 0x088C1174u, 0x08A0A190u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0129_entry(rt, ctx, 312u, aot_mem);
#else
        recomp_unit_0129_entry(rt, ctx, 312u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 312u, 0x08A0A190u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1174u) goto L_088C1174;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1174:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C1178;
L_088C1178:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C1180;
    }
L_088C1180:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C118Cu);
    aot_gpr_4 = (0u | 176u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 181u, 0x088C118Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C118Cu) goto L_088C118C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C118C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C11A4;
      }
      goto L_088C1198;
    }
L_088C1198:
    aot_gpr_31 = (0x088C11A0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0025.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 183u, 0x088C11A0u, 0x0886BD7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0025_entry(rt, ctx, 782u, aot_mem);
#else
        recomp_unit_0025_entry(rt, ctx, 782u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 782u, 0x0886BD7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C11A0u) goto L_088C11A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C11A0:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C11A4;
L_088C11A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C11AC;
    }
L_088C11AC:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C11B8u);
    aot_gpr_4 = (0u | 364u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 186u, 0x088C11B8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C11B8u) goto L_088C11B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C11B8:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C11D0;
      }
      goto L_088C11C4;
    }
L_088C11C4:
    aot_gpr_31 = (0x088C11CCu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 894u, 0x08B1BED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C11CCu) goto L_088C11CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C11CC:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C11D0;
L_088C11D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C11D8;
    }
L_088C11D8:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C11E4u);
    aot_gpr_4 = (0u | 364u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 191u, 0x088C11E4u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C11E4u) goto L_088C11E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C11E4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C11FC;
      }
      goto L_088C11F0;
    }
L_088C11F0:
    aot_gpr_31 = (0x088C11F8u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0005.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 193u, 0x088C11F8u, 0x0881B230u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0005_entry(rt, ctx, 555u, aot_mem);
#else
        recomp_unit_0005_entry(rt, ctx, 555u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 555u, 0x0881B230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C11F8u) goto L_088C11F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C11F8:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C11FC;
L_088C11FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C1204;
    }
L_088C1204:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C1210u);
    aot_gpr_4 = (0u | 232u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 196u, 0x088C1210u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1210u) goto L_088C1210;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1210:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C1228;
      }
      goto L_088C121C;
    }
L_088C121C:
    aot_gpr_31 = (0x088C1224u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0008.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 198u, 0x088C1224u, 0x08825E1Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0008_entry(rt, ctx, 284u, aot_mem);
#else
        recomp_unit_0008_entry(rt, ctx, 284u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 284u, 0x08825E1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1224u) goto L_088C1224;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1224:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C1228;
L_088C1228:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C1230;
    }
L_088C1230:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x088C123Cu);
    aot_gpr_4 = (0u | 364u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 201u, 0x088C123Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C123Cu) goto L_088C123C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C123C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088C1254;
      }
      goto L_088C1248;
    }
L_088C1248:
    aot_gpr_31 = (0x088C1250u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0114.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 203u, 0x088C1250u, 0x089CE480u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0114_entry(rt, ctx, 430u, aot_mem);
#else
        recomp_unit_0114_entry(rt, ctx, 430u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0114_entry, 114u, 430u, 0x089CE480u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1250u) goto L_088C1250;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1250:
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    goto L_088C1254;
L_088C1254:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1264;
      }
      goto L_088C125C;
    }
L_088C125C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C169C;
      }
      goto L_088C1264;
    }
L_088C1264:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] & 65535u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x088C1284u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1284u) goto L_088C1284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C1284:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088C12C8;
      }
      goto L_088C128C;
    }
L_088C128C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(400), ctx.gpr[23]);
    ctx.gpr[30] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x088C12A4u);
    ctx.gpr[23] = (ctx.gpr[23] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0034.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 209u, 0x088C12A4u, 0x0888E51Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0034_entry(rt, ctx, 400u, aot_mem);
#else
        recomp_unit_0034_entry(rt, ctx, 400u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C12A4u) goto L_088C12A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C12A4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088C12B4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C12B4u) goto L_088C12B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C12B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(400)));
      if (branch_taken) {
          goto L_088C12C4;
      }
      goto L_088C12BC;
    }
L_088C12BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_088C12C8;
      }
      goto L_088C12C4;
    }
L_088C12C4:
    aot_gpr_4 = (0u | 0u);
    goto L_088C12C8;
L_088C12C8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C1300;
      }
      goto L_088C12D0;
    }
L_088C12D0:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(164), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8617)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(164));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088C1300u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 215u, 0x088C1300u, 0x08ADCA34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 189u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 189u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1300u) goto L_088C1300;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1300:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088C1314u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0195.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 216u, 0x088C1314u, 0x08B112B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0195_entry(rt, ctx, 291u, aot_mem);
#else
        recomp_unit_0195_entry(rt, ctx, 291u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 291u, 0x08B112B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1314u) goto L_088C1314;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1314:
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(100), aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (ctx.gpr[23] + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(448))))));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x088C1338u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0165.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 217u, 0x088C1338u, 0x08A9B1DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0165_entry(rt, ctx, 394u, aot_mem);
#else
        recomp_unit_0165_entry(rt, ctx, 394u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 394u, 0x08A9B1DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1338u) goto L_088C1338;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1338:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x088C134Cu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C134Cu) goto L_088C134C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C134C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24120));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24104));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24096));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24088));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24080));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(72));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_5);
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x088C13B4u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(96))))));
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C13B4u) goto L_088C13B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C13B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088C13CCu);
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C13CCu) goto L_088C13CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C13CC:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_088C1420;
      }
      goto L_088C13D8;
    }
L_088C13D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088C13F0u);
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C13F0u) goto L_088C13F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C13F0:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_088C1420;
      }
      goto L_088C13FC;
    }
L_088C13FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088C1414u);
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1414u) goto L_088C1414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C1414:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_088C1460;
      }
      goto L_088C1420;
    }
L_088C1420:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(340)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C1460;
      }
      goto L_088C143C;
    }
L_088C143C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
        goto L_088C1454;
    }
    goto L_088C1448;
L_088C1448:
    aot_gpr_31 = (0x088C1450u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1450u) goto L_088C1450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C1450:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_088C1454;
L_088C1454:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x088C1460u);
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0002.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 230u, 0x088C1460u, 0x0880E4A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0002_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0002_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 501u, 0x0880E4A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1460u) goto L_088C1460;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1460:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C1554;
      }
      goto L_088C1468;
    }
L_088C1468:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C147Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 232u, 0x088C147Cu, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C147Cu) goto L_088C147C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C147C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_088C14B8;
      }
      goto L_088C1488;
    }
L_088C1488:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_088C14A0;
    }
    goto L_088C1494;
L_088C1494:
    aot_gpr_31 = (0x088C149Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C149Cu) goto L_088C149C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C149C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_088C14A0;
L_088C14A0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(68));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C169C;
      }
      goto L_088C14B8;
    }
L_088C14B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[22] = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(448))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_31 = (0x088C14D8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0165.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 238u, 0x088C14D8u, 0x08A9B1DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0165_entry(rt, ctx, 394u, aot_mem);
#else
        recomp_unit_0165_entry(rt, ctx, 394u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 394u, 0x08A9B1DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C14D8u) goto L_088C14D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C14D8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x088C14ECu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C14ECu) goto L_088C14EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C14EC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24120));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24104));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24096));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24088));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24080));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(72));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x088C1554u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(96))))));
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1554u) goto L_088C1554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C1554:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C0E90;
      }
      goto L_088C1570;
    }
L_088C1570:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[19] << 6u);
    aot_gpr_6 = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088C15AC;
      }
      goto L_088C1594;
    }
L_088C1594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C15B4;
      }
      goto L_088C15A4;
    }
L_088C15A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C15D8;
      }
      goto L_088C15AC;
    }
L_088C15AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C169C;
      }
      goto L_088C15B4;
    }
L_088C15B4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[17];
      if (branch_taken) {
          goto L_088C15C8;
      }
      goto L_088C15C0;
    }
L_088C15C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C15D8;
      }
      goto L_088C15C8;
    }
L_088C15C8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C15B4;
      }
      goto L_088C15D8;
    }
L_088C15D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C1664;
      }
      goto L_088C15E4;
    }
L_088C15E4:
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(448))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(394), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(394))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(172), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088C163C;
      }
      goto L_088C160C;
    }
L_088C160C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
        goto L_088C1630;
    }
    goto L_088C1618;
L_088C1618:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(170)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(172))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    goto L_088C1630;
L_088C1630:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
      if (branch_taken) {
          goto L_088C165C;
      }
      goto L_088C163C;
    }
L_088C163C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(170));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(396));
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x088C165Cu);
    ctx.gpr[9] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0046.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 254u, 0x088C165Cu, 0x088BE818u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0046_entry(rt, ctx, 207u, aot_mem);
#else
        recomp_unit_0046_entry(rt, ctx, 207u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0046_entry, 46u, 207u, 0x088BE818u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C165Cu) goto L_088C165C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C165C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C169C;
      }
      goto L_088C1664;
    }
L_088C1664:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(448))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(398), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(398))))));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C169C;
      }
      goto L_088C1690;
    }
L_088C1690:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(448))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_088C169C;
L_088C169C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(404), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(448));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C16CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x088C1704u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0024.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 259u, 0x088C1704u, 0x0886589Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0024_entry(rt, ctx, 371u, aot_mem);
#else
        recomp_unit_0024_entry(rt, ctx, 371u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1704u) goto L_088C1704;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1704:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (2246u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088C1718u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23472));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 260u, 0x088C1718u, 0x089F5114u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 181u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 181u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 181u, 0x089F5114u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1718u) goto L_088C1718;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1718:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C172Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C172Cu) goto L_088C172C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C172C:
    ctx.gpr[2] = (0u | 0u);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C174C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088C176Cu);
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0024.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 263u, 0x088C176Cu, 0x0886589Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0024_entry(rt, ctx, 371u, aot_mem);
#else
        recomp_unit_0024_entry(rt, ctx, 371u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C176Cu) goto L_088C176C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C176C:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x088C1794u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23472));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 264u, 0x088C1794u, 0x089F52D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 194u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 194u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 194u, 0x089F52D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1794u) goto L_088C1794;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1794:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C17A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x088C17C8u);
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0024.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 266u, 0x088C17C8u, 0x0886589Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0024_entry(rt, ctx, 371u, aot_mem);
#else
        recomp_unit_0024_entry(rt, ctx, 371u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C17C8u) goto L_088C17C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C17C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    aot_gpr_6 = (2246u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(23472));
    aot_gpr_5 = (0u | 9u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), aot_gpr_5);
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C17F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2246u << 16u);
    ctx.gpr[7] = (2201u << 16u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_6 = (0u | 80u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(27328));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088C1824u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1124));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 268u, 0x088C1824u, 0x08B60E20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 173u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 173u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1824u) goto L_088C1824;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1824:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C1830:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-272));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-22016));
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21824));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-21728));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-21632));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-21504));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-21376));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-21248));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-21120));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-20992));
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-20864));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-20800));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_4);
    aot_gpr_4 = (16051u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39320u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16140u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52428u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (2236u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), ctx.gpr[23]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-20736));
    ctx.gpr[17] = (2246u << 16u);
    aot_gpr_4 = (16384u << 16u);
    ctx.gpr[23] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), ctx.gpr[30]);
    aot_fpr_22 = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (0u | 17u);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(188), aot_gpr_5);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(27328));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-22112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_31);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (49152u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    goto L_088C1974;
L_088C1974:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C1990u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 271u, 0x088C1990u, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1990u) goto L_088C1990;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1990:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C19B8u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 272u, 0x088C19B8u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C19B8u) goto L_088C19B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C19B8:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088C1974;
      }
      goto L_088C19D0;
    }
L_088C19D0:
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (48768u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    goto L_088C1A84;
L_088C1A84:
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[9]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C1A84;
      }
      goto L_088C1A9C;
    }
L_088C1A9C:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[11] | 0u);
    goto L_088C1AA8;
L_088C1AA8:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C1AA8;
      }
      goto L_088C1AC4;
    }
L_088C1AC4:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24052)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24052)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[16]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24052)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[15]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[9] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[10] = (0u | 0u);
    goto L_088C1CB0;
L_088C1CB0:
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[10]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C1CB0;
      }
      goto L_088C1CC8;
    }
L_088C1CC8:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (48998u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (48819u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    goto L_088C1DA8;
L_088C1DA8:
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C1DA8;
      }
      goto L_088C1DC0;
    }
L_088C1DC0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (2246u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(28208));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088C1DECu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 282u, 0x088C1DECu, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1DECu) goto L_088C1DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1DEC:
    aot_gpr_4 = (48947u << 16u);
    aot_gpr_5 = (49049u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16179u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 13107u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088C1E38u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 283u, 0x088C1E38u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1E38u) goto L_088C1E38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1E38:
    ctx.gpr[17] = (0u | 3u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), aot_gpr_16);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (48844u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (aot_gpr_4 | 52428u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (48588u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52432u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (16166u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    goto L_088C1F5C;
L_088C1F5C:
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[10]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C1F5C;
      }
      goto L_088C1F70;
    }
L_088C1F70:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[19] = (ctx.gpr[11] | 0u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (0u | 4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_16));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (2246u << 16u);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(28128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088C1FBCu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 286u, 0x088C1FBCu, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C1FBCu) goto L_088C1FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C1FBC:
    aot_gpr_5 = (49024u << 16u);
    aot_gpr_4 = (48844u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_gpr_5 = (16076u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (49056u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (48896u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088C2020u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 287u, 0x088C2020u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2020u) goto L_088C2020;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2020:
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_4 = (15897u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (48819u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (48768u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (49011u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (48921u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    goto L_088C2118;
L_088C2118:
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[9]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C2118;
      }
      goto L_088C2130;
    }
L_088C2130:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (2246u << 16u);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(28288));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_6 = (16320u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088C216Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 290u, 0x088C216Cu, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C216Cu) goto L_088C216C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C216C:
    aot_gpr_4 = (48793u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16025u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_5 = (16153u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088C21B8u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 291u, 0x088C21B8u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C21B8u) goto L_088C21B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C21B8:
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (16217u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (48460u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (15692u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (48985u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[15]), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[11] + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    goto L_088C22E4;
L_088C22E4:
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[9]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C22E4;
      }
      goto L_088C22FC;
    }
L_088C22FC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_6 = (16396u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(28368));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    ctx.gpr[17] = (ctx.gpr[11] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C232Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 294u, 0x088C232Cu, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C232Cu) goto L_088C232C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C232C:
    aot_gpr_5 = (48793u << 16u);
    aot_gpr_4 = (49049u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (48716u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (15948u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088C2390u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 295u, 0x088C2390u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2390u) goto L_088C2390;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2390:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(168)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (16102u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (48870u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (48665u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[17]), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_088C24A8;
L_088C24A8:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C24A8;
      }
      goto L_088C24C0;
    }
L_088C24C0:
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_6 = (16307u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(28448));
    aot_gpr_6 = (aot_gpr_6 | 13107u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C24F0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 298u, 0x088C24F0u, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C24F0u) goto L_088C24F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C24F0:
    aot_gpr_5 = (48921u << 16u);
    aot_gpr_4 = (48793u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (48665u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (16153u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088C2548u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 299u, 0x088C2548u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2548u) goto L_088C2548;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2548:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(172)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (48844u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (15820u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[30]), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[30]), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    goto L_088C2660;
L_088C2660:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C2660;
      }
      goto L_088C2678;
    }
L_088C2678:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_6 = (16345u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(28528));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_6 | 39322u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C26B0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 302u, 0x088C26B0u, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C26B0u) goto L_088C26B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C26B0:
    aot_gpr_5 = (48947u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (48716u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (48793u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (16179u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088C2714u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 303u, 0x088C2714u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2714u) goto L_088C2714;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2714:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_16));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (48844u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (48588u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (48921u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(ctx.fpr[17]), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[30]), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[30]), std::bit_cast<std::uint32_t>(ctx.fpr[17]), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[8] + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    goto L_088C282C;
L_088C282C:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C282C;
      }
      goto L_088C2844;
    }
L_088C2844:
    aot_gpr_4 = (48844u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_6 = (16307u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(28608));
    aot_gpr_6 = (aot_gpr_6 | 13107u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C2884u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 306u, 0x088C2884u, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2884u) goto L_088C2884;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2884:
    aot_gpr_5 = (48998u << 16u);
    aot_gpr_4 = (48947u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 26214u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (48793u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_gpr_6 = (16179u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 | 13107u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088C28DCu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 307u, 0x088C28DCu, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C28DCu) goto L_088C28DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C28DC:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 29u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    goto L_088C2968;
L_088C2968:
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C2968;
      }
      goto L_088C2980;
    }
L_088C2980:
    aot_gpr_6 = (48844u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_6 = (16307u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(28688));
    aot_gpr_6 = (aot_gpr_6 | 13107u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C29C0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 310u, 0x088C29C0u, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C29C0u) goto L_088C29C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C29C0:
    aot_gpr_4 = (48947u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16179u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 | 13107u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088C2A00u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 311u, 0x088C2A00u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2A00u) goto L_088C2A00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2A00:
    aot_gpr_16 = (0u | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (16204u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[15]), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    goto L_088C2A98;
L_088C2A98:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C2A98;
      }
      goto L_088C2AB0;
    }
L_088C2AB0:
    aot_gpr_5 = (48793u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(28768));
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C2AE4u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 314u, 0x088C2AE4u, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2AE4u) goto L_088C2AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2AE4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (16268u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088C2B18u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 315u, 0x088C2B18u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2B18u) goto L_088C2B18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2B18:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(188)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    goto L_088C2BA4;
L_088C2BA4:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C2BA4;
      }
      goto L_088C2BBC;
    }
L_088C2BBC:
    aot_gpr_4 = (48716u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (2246u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(28848));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_22)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x088C2BF8u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 318u, 0x088C2BF8u, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2BF8u) goto L_088C2BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2BF8:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088C2C20u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 319u, 0x088C2C20u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2C20u) goto L_088C2C20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2C20:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_16));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (17111u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8620), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (50454u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (50426u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (14979u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (17608u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (17658u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_fpr_22 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22) & 0x7FFFFFFFu);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[15];
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_22)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
        goto L_088C2CE0;
    }
    goto L_088C2CE0;
L_088C2CE0:
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(-20672));
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x088C2D0Cu);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 321u, 0x088C2D0Cu, 0x088B9CCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 389u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 389u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 389u, 0x088B9CCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2D0Cu) goto L_088C2D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2D0C:
    aot_gpr_4 = (2246u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(28928));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088C2D24u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 322u, 0x088C2D24u, 0x08A19410u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 123u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 123u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2D24u) goto L_088C2D24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2D24:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C2D34u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 323u, 0x088C2D34u, 0x088B9CB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 388u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 388u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2D34u) goto L_088C2D34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2D34:
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_direct_store16(ctx.gpr[21] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
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
      ctx.gpr[23] = aot_run_words[13];
      ctx.gpr[30] = aot_run_words[14];
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C2D90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2246u << 16u);
    ctx.gpr[7] = (2201u << 16u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_6 = (0u | 80u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(27328));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088C2DB4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(944));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 325u, 0x088C2DB4u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2DB4u) goto L_088C2DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2DB4:
    aot_gpr_31 = (0x088C2DBCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24040));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2DBCu) goto L_088C2DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2DBC:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2DC8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28208));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 327u, 0x088C2DC8u, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2DC8u) goto L_088C2DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2DC8:
    aot_gpr_31 = (0x088C2DD0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24028));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2DD0u) goto L_088C2DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2DD0:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2DDCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28128));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 329u, 0x088C2DDCu, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2DDCu) goto L_088C2DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2DDC:
    aot_gpr_31 = (0x088C2DE4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24016));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2DE4u) goto L_088C2DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2DE4:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2DF0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28288));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 331u, 0x088C2DF0u, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2DF0u) goto L_088C2DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2DF0:
    aot_gpr_31 = (0x088C2DF8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24004));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2DF8u) goto L_088C2DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2DF8:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2E04u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28368));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 333u, 0x088C2E04u, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E04u) goto L_088C2E04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2E04:
    aot_gpr_31 = (0x088C2E0Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-23992));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E0Cu) goto L_088C2E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2E0C:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2E18u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28448));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 335u, 0x088C2E18u, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E18u) goto L_088C2E18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2E18:
    aot_gpr_31 = (0x088C2E20u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-23980));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E20u) goto L_088C2E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2E20:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2E2Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28528));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 337u, 0x088C2E2Cu, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E2Cu) goto L_088C2E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2E2C:
    aot_gpr_31 = (0x088C2E34u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-23968));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E34u) goto L_088C2E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2E34:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2E40u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28608));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 339u, 0x088C2E40u, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E40u) goto L_088C2E40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2E40:
    aot_gpr_31 = (0x088C2E48u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-23956));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E48u) goto L_088C2E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2E48:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2E54u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28688));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 341u, 0x088C2E54u, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E54u) goto L_088C2E54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2E54:
    aot_gpr_31 = (0x088C2E5Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-23944));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E5Cu) goto L_088C2E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2E5C:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2E68u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28768));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 343u, 0x088C2E68u, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E68u) goto L_088C2E68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2E68:
    aot_gpr_31 = (0x088C2E70u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-23932));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E70u) goto L_088C2E70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2E70:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2E7Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28848));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 345u, 0x088C2E7Cu, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E7Cu) goto L_088C2E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2E7C:
    aot_gpr_31 = (0x088C2E84u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-23920));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E84u) goto L_088C2E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2E84:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_31 = (0x088C2E90u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28928));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 347u, 0x088C2E90u, 0x089903B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 67u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 67u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E90u) goto L_088C2E90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2E90:
    aot_gpr_31 = (0x088C2E98u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-23908));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2E98u) goto L_088C2E98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2E98:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C2EA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C2EF4;
      }
      goto L_088C2EC8;
    }
L_088C2EC8:
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C2EEC;
      }
      goto L_088C2ED4;
    }
L_088C2ED4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088C2EE4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 352u, 0x088C2EE4u, 0x088B97A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 320u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 320u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 320u, 0x088B97A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2EE4u) goto L_088C2EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2EE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088C2EFC;
      }
      goto L_088C2EEC;
    }
L_088C2EEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C2F0C;
      }
      goto L_088C2EF4;
    }
L_088C2EF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C2F0C;
      }
      goto L_088C2EFC;
    }
L_088C2EFC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088C2F0C;
L_088C2F0C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C2F20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088C2F50;
      }
      goto L_088C2F48;
    }
L_088C2F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C2F9C;
      }
      goto L_088C2F50;
    }
L_088C2F50:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088C2F5Cu);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-23888));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2F5Cu) goto L_088C2F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2F5C:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088C2F70u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2F70u) goto L_088C2F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2F70:
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x088C2F80u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2F80u) goto L_088C2F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C2F80:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x088C2F90u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0115.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 363u, 0x088C2F90u, 0x089D1D64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0115_entry(rt, ctx, 314u, aot_mem);
#else
        recomp_unit_0115_entry(rt, ctx, 314u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C2F90u) goto L_088C2F90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C2F90:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C2F9C;
      }
      goto L_088C2F9C;
    }
L_088C2F9C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C2FB4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C2FE0;
      }
      goto L_088C2FD4;
    }
L_088C2FD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C2FF4;
      }
      goto L_088C2FE0;
    }
L_088C2FE0:
    aot_gpr_4 = (aot_gpr_4 & 4u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
        goto L_088C3014;
    }
    goto L_088C2FEC;
L_088C2FEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C311C;
      }
      goto L_088C2FF4;
    }
L_088C2FF4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x088C300Cu);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 370u, 0x088C300Cu, 0x08871D88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 485u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 485u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 485u, 0x08871D88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C300Cu) goto L_088C300C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C300C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C311C;
      }
      goto L_088C3014;
    }
L_088C3014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088C3058;
      }
      goto L_088C302C;
    }
L_088C302C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    goto L_088C3058;
L_088C3058:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C3098;
      }
      goto L_088C3064;
    }
L_088C3064:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C30A8;
      }
      goto L_088C3090;
    }
L_088C3090:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C30B4;
      }
      goto L_088C3098;
    }
L_088C3098:
    aot_gpr_31 = (0x088C30A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 377u, 0x088C30A0u, 0x089E6948u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 536u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 536u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 536u, 0x089E6948u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C30A0u) goto L_088C30A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C30A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C311C;
      }
      goto L_088C30A8;
    }
L_088C30A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088C30B4;
L_088C30B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C30FC;
      }
      goto L_088C30C4;
    }
L_088C30C4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088C30F4;
      }
      goto L_088C30D0;
    }
L_088C30D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-4)));
    goto L_088C30F4;
L_088C30F4:
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_4;
      if (branch_taken) {
          goto L_088C3118;
      }
      goto L_088C30FC;
    }
L_088C30FC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x088C310Cu);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 384u, 0x088C310Cu, 0x08871D88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 485u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 485u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 485u, 0x08871D88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C310Cu) goto L_088C310C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C310C:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_088C3118;
L_088C3118:
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), aot_gpr_6);
    goto L_088C311C;
L_088C311C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C312C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 25 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C31CC;
      }
      goto L_088C31BC;
    }
L_088C31BC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C31C8u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 389u, 0x088C31C8u, 0x08871CECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 473u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 473u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C31C8u) goto L_088C31C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C31C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    goto L_088C31CC;
L_088C31CC:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C31E4u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 391u, 0x088C31E4u, 0x088724C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 560u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 560u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 560u, 0x088724C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C31E4u) goto L_088C31E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C31E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C3200:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 33 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088C32C4;
      }
      goto L_088C32B4;
    }
L_088C32B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C32C0u);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 394u, 0x088C32C0u, 0x08871CECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 473u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 473u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C32C0u) goto L_088C32C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C32C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    goto L_088C32C4;
L_088C32C4:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C32DCu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 396u, 0x088C32DCu, 0x088724C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 560u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 560u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 560u, 0x088724C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C32DCu) goto L_088C32DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C32DC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C32EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C3330;
      }
      goto L_088C3328;
    }
L_088C3328:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088C3344;
      }
      goto L_088C3330;
    }
L_088C3330:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(84)));
    aot_gpr_31 = (0x088C3340u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 400u, 0x088C3340u, 0x08B245DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 37u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 37u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 37u, 0x08B245DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3340u) goto L_088C3340;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3340:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_088C3344;
L_088C3344:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C3378;
      }
      goto L_088C334C;
    }
L_088C334C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088C3380;
      }
      goto L_088C335C;
    }
L_088C335C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088C3370u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_088C312C;
L_088C3370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C3394;
      }
      goto L_088C3378;
    }
L_088C3378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24464));
      if (branch_taken) {
          goto L_088C3394;
      }
      goto L_088C3380;
    }
L_088C3380:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3394u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    goto L_088C3464;
L_088C3394:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C33B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x088C33E0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 409u, 0x088C33E0u, 0x08B2463Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 41u, 0x08B2463Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C33E0u) goto L_088C33E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C33E0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C3408;
      }
      goto L_088C33F0;
    }
L_088C33F0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-23880));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C3404u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 411u, 0x088C3404u, 0x089E7464u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 705u, 0x089E7464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3404u) goto L_088C3404;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3404:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088C3408;
L_088C3408:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088C3434;
      }
      goto L_088C3418;
    }
L_088C3418:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088C342Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_088C312C;
L_088C342C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C3448;
      }
      goto L_088C3434;
    }
L_088C3434:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3448u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    goto L_088C3464;
L_088C3448:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_088C3464:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 101 ? 1u : 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_16 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C34A4;
      }
      goto L_088C3494;
    }
L_088C3494:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C34A4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 419u, 0x088C34A4u, 0x089E77C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 743u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 743u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C34A4u) goto L_088C34A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C34A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088C34F0;
      }
      goto L_088C34B4;
    }
L_088C34B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088C34C0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 421u, 0x088C34C0u, 0x08A9402Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 6u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 6u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 6u, 0x08A9402Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C34C0u) goto L_088C34C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C34C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C34D4;
      }
      goto L_088C34CC;
    }
L_088C34CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3504;
      }
      goto L_088C34D4;
    }
L_088C34D4:
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088C34E8u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_088C32EC;
L_088C34E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3504;
      }
      goto L_088C34F0;
    }
L_088C34F0:
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088C3504u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_088C33B0;
L_088C3504:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C3520:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-23880));
    ctx.gpr[30] = (0u | 6u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    goto L_088C356C;
L_088C356C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_088C3650;
      }
      goto L_088C3578;
    }
L_088C3578:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088C3590u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 430u, 0x088C3590u, 0x08A940D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 17u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 17u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 17u, 0x08A940D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3590u) goto L_088C3590;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3590:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088C35F8;
      }
      goto L_088C35A8;
    }
L_088C35A8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 4u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088C35D0;
      }
      goto L_088C35B8;
    }
L_088C35B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(92)));
    aot_gpr_31 = (0x088C35CCu);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 433u, 0x088C35CCu, 0x08B245DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 37u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 37u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 37u, 0x08B245DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C35CCu) goto L_088C35CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C35CC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_088C35D0;
L_088C35D0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C3648;
      }
      goto L_088C35D8;
    }
L_088C35D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088C36D8;
      }
      goto L_088C35F8;
    }
L_088C35F8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 2u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088C3620;
      }
      goto L_088C3608;
    }
L_088C3608:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(88)));
    aot_gpr_31 = (0x088C361Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 438u, 0x088C361Cu, 0x08B245DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 37u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 37u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 37u, 0x08B245DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C361Cu) goto L_088C361C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C361C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_088C3620;
L_088C3620:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C3648;
      }
      goto L_088C3628;
    }
L_088C3628:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_088C36D8;
      }
      goto L_088C3648;
    }
L_088C3648:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3688;
      }
      goto L_088C3650;
    }
L_088C3650:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3660u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 443u, 0x088C3660u, 0x08B2463Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 41u, 0x08B2463Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3660u) goto L_088C3660;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3660:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C3688;
      }
      goto L_088C3670;
    }
L_088C3670:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3684u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 445u, 0x088C3684u, 0x089E7464u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 705u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 705u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 705u, 0x089E7464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3684u) goto L_088C3684;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3684:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088C3688;
L_088C3688:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[30];
      if (branch_taken) {
          goto L_088C36C0;
      }
      goto L_088C3694;
    }
L_088C3694:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 101 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088C356C;
      }
      goto L_088C36A8;
    }
L_088C36A8:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C36B8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-21716));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 449u, 0x088C36B8u, 0x089E77C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 743u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 743u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C36B8u) goto L_088C36B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C36B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C36D8;
      }
      goto L_088C36C0;
    }
L_088C36C0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088C36D8u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088C3200;
L_088C36D8:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C3708:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (ctx.gpr[7] - ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x088C3744u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 453u, 0x088C3744u, 0x08B2463Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 41u, 0x08B2463Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3744u) goto L_088C3744;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3744:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088C3768;
      }
      goto L_088C3754;
    }
L_088C3754:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3764u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 455u, 0x088C3764u, 0x08B2463Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 41u, 0x08B2463Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3764u) goto L_088C3764;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3764:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_088C3768;
L_088C3768:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088C3780;
      }
      goto L_088C3778;
    }
L_088C3778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C37C0;
      }
      goto L_088C3780;
    }
L_088C3780:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088C3794u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_088C312C;
L_088C3794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_088C37C0;
L_088C37C0:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C37E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(6)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[21] << (ctx.gpr[7] & 31u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[21]);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[22] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C384C;
      }
      goto L_088C382C;
    }
L_088C382C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088C3848u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 463u, 0x088C3848u, 0x08B245DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 37u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 37u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 37u, 0x08B245DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3848u) goto L_088C3848;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3848:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088C384C;
L_088C384C:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088C3880;
      }
      goto L_088C3858;
    }
L_088C3858:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[19];
      if (branch_taken) {
          goto L_088C3878;
      }
      goto L_088C3860;
    }
L_088C3860:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[21]);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088C3888;
      }
      goto L_088C3870;
    }
L_088C3870:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C38A8;
      }
      goto L_088C3878;
    }
L_088C3878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C38D8;
      }
      goto L_088C3880;
    }
L_088C3880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C38D8;
      }
      goto L_088C3888;
    }
L_088C3888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C38A4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 471u, 0x088C38A4u, 0x08B245DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 37u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 37u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 37u, 0x08B245DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C38A4u) goto L_088C38A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C38A4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_088C38A8;
L_088C38A8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C38CC;
      }
      goto L_088C38B0;
    }
L_088C38B0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088C38BCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 474u, 0x088C38BCu, 0x088B96E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 305u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 305u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 305u, 0x088B96E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C38BCu) goto L_088C38BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C38BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C38D4;
      }
      goto L_088C38C4;
    }
L_088C38C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C38D8;
      }
      goto L_088C38CC;
    }
L_088C38CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C38D8;
      }
      goto L_088C38D4;
    }
L_088C38D4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C38D8;
L_088C38D8:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C3900:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x088C3934u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 480u, 0x088C3934u, 0x08B2463Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 41u, 0x08B2463Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3934u) goto L_088C3934;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3934:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C399C;
      }
      goto L_088C3944;
    }
L_088C3944:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C3954u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0200.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 482u, 0x088C3954u, 0x08B2463Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0200_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0200_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 41u, 0x08B2463Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3954u) goto L_088C3954;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3954:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C3960u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 483u, 0x088C3960u, 0x088B96E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 305u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 305u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 305u, 0x088B96E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3960u) goto L_088C3960;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3960:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C3994;
      }
      goto L_088C3968;
    }
L_088C3968:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C397Cu);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    goto L_088C312C;
L_088C397C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C39A4;
      }
      goto L_088C398C;
    }
L_088C398C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C39C0;
      }
      goto L_088C3994;
    }
L_088C3994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C39C0;
      }
      goto L_088C399C;
    }
L_088C399C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C39C0;
      }
      goto L_088C39A4;
    }
L_088C39A4:
    aot_gpr_5 = (0u | 1u);
    if (ctx.gpr[18] != aot_gpr_5) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088C39C0;
    }
    goto L_088C39B0;
L_088C39B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C39C0;
      }
      goto L_088C39BC;
    }
L_088C39BC:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C39C0;
L_088C39C0:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C39E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    goto L_088C3A08;
L_088C3A08:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088C3A14u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 495u, 0x088C3A14u, 0x08B58300u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 61u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 61u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 61u, 0x08B58300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3A14u) goto L_088C3A14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3A14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C3A24;
      }
      goto L_088C3A1C;
    }
L_088C3A1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3A70;
      }
      goto L_088C3A24;
    }
L_088C3A24:
    aot_gpr_31 = (0x088C3A2Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3A2Cu) goto L_088C3A2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088C3A2C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
      if (branch_taken) {
          goto L_088C3A48;
      }
      goto L_088C3A38;
    }
L_088C3A38:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_088C3A54;
      }
      goto L_088C3A40;
    }
L_088C3A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C3A70;
      }
      goto L_088C3A48;
    }
L_088C3A48:
    ctx.gpr[2] = (aot_gpr_4 ^ ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3A70;
      }
      goto L_088C3A54;
    }
L_088C3A54:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] - aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3A08;
      }
      goto L_088C3A70;
    }
L_088C3A70:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C3A8C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088C3ACC;
      }
      goto L_088C3AB8;
    }
L_088C3AB8:
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088C3AE4;
      }
      goto L_088C3AC4;
    }
L_088C3AC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3B08;
      }
      goto L_088C3ACC;
    }
L_088C3ACC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3ADCu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 508u, 0x088C3ADCu, 0x089E75E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 723u, 0x089E75E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3ADCu) goto L_088C3ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3ADC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3B60;
      }
      goto L_088C3AE4;
    }
L_088C3AE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088C3B00;
    }
    goto L_088C3B00;
L_088C3B00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3B60;
      }
      goto L_088C3B08;
    }
L_088C3B08:
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088C3B3C;
      }
      goto L_088C3B14;
    }
L_088C3B14:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C3B28u);
    ctx.gpr[7] = (0u | 12u);
    goto L_088C3900;
L_088C3B28:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_088C3B50;
      }
      goto L_088C3B34;
    }
L_088C3B34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3B60;
      }
      goto L_088C3B3C;
    }
L_088C3B3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088C3B48u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_088C39E0;
L_088C3B48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3B60;
      }
      goto L_088C3B50;
    }
L_088C3B50:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3B60u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 518u, 0x088C3B60u, 0x089E75E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 723u, 0x089E75E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3B60u) goto L_088C3B60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3B60:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C3B78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088C3BBC;
      }
      goto L_088C3BA8;
    }
L_088C3BA8:
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088C3BD4;
      }
      goto L_088C3BB4;
    }
L_088C3BB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3BF8;
      }
      goto L_088C3BBC;
    }
L_088C3BBC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3BCCu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 523u, 0x088C3BCCu, 0x089E75E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 723u, 0x089E75E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3BCCu) goto L_088C3BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3BCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3C78;
      }
      goto L_088C3BD4;
    }
L_088C3BD4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088C3BF0;
    }
    goto L_088C3BF0;
L_088C3BF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3C78;
      }
      goto L_088C3BF8;
    }
L_088C3BF8:
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088C3C54;
      }
      goto L_088C3C04;
    }
L_088C3C04:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C3C18u);
    ctx.gpr[7] = (0u | 13u);
    goto L_088C3900;
L_088C3C18:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
      if (branch_taken) {
          goto L_088C3C4C;
      }
      goto L_088C3C24;
    }
L_088C3C24:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3C38u);
    ctx.gpr[7] = (0u | 12u);
    goto L_088C3900;
L_088C3C38:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_088C3C68;
      }
      goto L_088C3C44;
    }
L_088C3C44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3C78;
      }
      goto L_088C3C4C;
    }
L_088C3C4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3C78;
      }
      goto L_088C3C54;
    }
L_088C3C54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088C3C60u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_088C39E0;
L_088C3C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 1 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3C78;
      }
      goto L_088C3C68;
    }
L_088C3C68:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3C78u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 536u, 0x088C3C78u, 0x089E75E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 723u, 0x089E75E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3C78u) goto L_088C3C78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3C78:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C3C94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-21696));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 4u);
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    goto L_088C3CDC;
L_088C3CDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[23] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-16)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
    ctx.gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_088C3D10;
      }
      goto L_088C3CFC;
    }
L_088C3CFC:
    aot_gpr_5 = (ctx.gpr[23] + static_cast<std::uint32_t>(-16));
    aot_gpr_31 = (0x088C3D08u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_088C2F20;
L_088C3D08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C3D2C;
      }
      goto L_088C3D10;
    }
L_088C3D10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
    aot_gpr_5 = (ctx.gpr[23] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_088C3D6C;
      }
      goto L_088C3D1C;
    }
L_088C3D1C:
    aot_gpr_31 = (0x088C3D24u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    goto L_088C2F20;
L_088C3D24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088C3D6C;
      }
      goto L_088C3D2C;
    }
L_088C3D2C:
    aot_gpr_16 = (ctx.gpr[23] + static_cast<std::uint32_t>(-16));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-8));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C3D4Cu);
    ctx.gpr[8] = (0u | 14u);
    goto L_088C3708;
L_088C3D4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_088C3E64;
      }
      goto L_088C3D54;
    }
L_088C3D54:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C3D64u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 547u, 0x088C3D64u, 0x089E7554u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 714u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 714u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 714u, 0x089E7554u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3D64u) goto L_088C3D64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3D64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088C3E64;
      }
      goto L_088C3D6C;
    }
L_088C3D6C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088C3E64;
      }
      goto L_088C3D7C;
    }
L_088C3D7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-12)));
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_16 = (ctx.gpr[19] + static_cast<std::uint32_t>(-8));
    goto L_088C3D94;
L_088C3D94:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C3DD8;
      }
      goto L_088C3D9C;
    }
L_088C3D9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[30];
    aot_gpr_4 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088C3DB8;
      }
      goto L_088C3DA8;
    }
L_088C3DA8:
    aot_gpr_31 = (0x088C3DB0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_088C2F20;
L_088C3DB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088C3DD8;
      }
      goto L_088C3DB8;
    }
L_088C3DB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8));
    ctx.gpr[18] = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3D94;
      }
      goto L_088C3DD8;
    }
L_088C3DD8:
    aot_gpr_4 = (ctx.gpr[18] < static_cast<std::uint32_t>(-2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088C3DF4;
      }
      goto L_088C3DE4;
    }
L_088C3DE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_31 = (0x088C3DF4u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0120.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 557u, 0x088C3DF4u, 0x089E77C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0120_entry(rt, ctx, 743u, aot_mem);
#else
        recomp_unit_0120_entry(rt, ctx, 743u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3DF4u) goto L_088C3DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3DF4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x088C3E08u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0164.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 558u, 0x088C3E08u, 0x08A954A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0164_entry(rt, ctx, 257u, aot_mem);
#else
        recomp_unit_0164_entry(rt, ctx, 257u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 257u, 0x08A954A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3E08u) goto L_088C3E08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3E08:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088C3E48;
      }
      goto L_088C3E18;
    }
L_088C3E18:
    aot_gpr_16 = (ctx.gpr[21] << 3u);
    aot_gpr_16 = (ctx.gpr[23] - aot_gpr_16);
    goto L_088C3E20;
L_088C3E20:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[18]);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x088C3E38u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 561u, 0x088C3E38u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3E38u) goto L_088C3E38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3E38:
    ctx.gpr[18] = (ctx.gpr[23] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088C3E20;
      }
      goto L_088C3E48;
    }
L_088C3E48:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088C3E5Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0047->0115.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0047_entry, 563u, 0x088C3E5Cu, 0x089D1D64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0115_entry(rt, ctx, 314u, aot_mem);
#else
        recomp_unit_0115_entry(rt, ctx, 314u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088C3E5Cu) goto L_088C3E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088C3E5C:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_088C3E64;
L_088C3E64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088C3CDC;
      }
      goto L_088C3E88;
    }
L_088C3E88:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C3EB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088C3FB8;
      }
      goto L_088C3EE4;
    }
L_088C3EE4:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21528)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088C3EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 5u, 0x088C4024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C3F04;
    }
L_088C3F04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088C3F20;
    }
    goto L_088C3F20;
L_088C3F20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 5u, 0x088C4024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C3F28;
    }
L_088C3F28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_gpr_4 ^ aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 5u, 0x088C4024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C3F3C;
    }
L_088C3F3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_gpr_4 ^ aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 5u, 0x088C4024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C3F50;
    }
L_088C3F50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_088C3F7C;
      }
      goto L_088C3F60;
    }
L_088C3F60:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C3F74u);
    ctx.gpr[7] = (0u | 5u);
    goto L_088C37E0;
L_088C3F74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C3FCC;
      }
      goto L_088C3F7C;
    }
L_088C3F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 5u, 0x088C4024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C3F84;
    }
L_088C3F84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088C3FB0;
      }
      goto L_088C3F94;
    }
L_088C3F94:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088C3FA8u);
    ctx.gpr[7] = (0u | 5u);
    goto L_088C37E0;
L_088C3FA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C3FCC;
      }
      goto L_088C3FB0;
    }
L_088C3FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 5u, 0x088C4024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C3FB8;
    }
L_088C3FB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_gpr_4 ^ aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 5u, 0x088C4024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C3FCC;
    }
L_088C3FCC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 1u, 0x088C4000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C3FD4;
    }
L_088C3FD4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088C3FE8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_088C312C;
L_088C3FE8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 2u, 0x088C4008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088C3FF8;
    }
L_088C3FF8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 5u, 0x088C4024u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0048_entry, 48u, 1u, 0x088C4000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0047(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0047_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_47(Runtime &runtime) {
    runtime.register_generated_unit(47u, 0x088C0000u, 16384u, &recomp_unit_0047, &recomp_unit_0047_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x088C0000u, &recomp_unit_0047, "recomp_unit_0047",
                                          kEntryMasks_recomp_unit_0047, 64u);
}
} // namespace psprecomp
