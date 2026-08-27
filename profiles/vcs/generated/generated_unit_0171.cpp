#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0171[64] = {
    0x0000242442904081ull, 0x0880901100000001ull, 0x1084040900440148ull, 0x2002042889144935ull,
    0x80010084002A8850ull, 0x40900414A2440010ull, 0x4000008404280022ull, 0x2108420808208200ull,
    0x0350400591220A25ull, 0x5000210208182405ull, 0x5555504400402012ull, 0xAAAAAAAAAAAAAA55ull,
    0xAAAAAAAAAAAAAAAAull, 0xAAAAAAAAAAAAAAAAull, 0x8AAAAAAAAAAAAAAAull, 0xAAAA554AAAA09022ull,
    0x805555555554116Aull, 0x2662208880154148ull, 0x0A06890840020228ull, 0x0503448420010050ull,
    0x200A224110008028ull, 0x4A44010605122080ull, 0x8A12011100501448ull, 0x209444A04A211082ull,
    0x2528410289615129ull, 0x42108421084208A0ull, 0x10495144C5000292ull, 0x81212515290100CAull,
    0x1428001355244148ull, 0x155422880080CA8Aull, 0x0401128011010010ull, 0xA90010D4404040A8ull,
    0x8122020202A2848Aull, 0x00082128A2900092ull, 0xA420905298A44104ull, 0x2006A14420908A0Aull,
    0x48D2108240808880ull, 0x0001042488040614ull, 0x922A2022A2221128ull, 0x2100020025522252ull,
    0x1218088CA9250490ull, 0x08004504AA0D1154ull, 0x1A06891549014100ull, 0xA400008006890688ull,
    0x11110541004A8204ull, 0x4284411004408004ull, 0x54288488548AA451ull, 0x4146842512AA4401ull,
    0x100080A5428542A9ull, 0x0440103421034224ull, 0x5104810A128A2091ull, 0x100D22454891450Aull,
    0x829400910A410202ull, 0xA0050A002800410Aull, 0x00401024A82AA00Aull, 0x4104509420000000ull,
    0xB21A422D20514425ull, 0x0095412215088442ull, 0x0090009000900090ull, 0x0480A00550940048ull,
    0x904B510102154080ull, 0x5420214A80854924ull, 0x48421084282484A2ull, 0x72A25CA8972A2529ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0171[64] = {
    1u, 12u, 19u, 30u, 47u, 58u, 70u, 78u, 88u, 105u, 117u, 133u, 165u, 197u, 229u, 260u,
    285u, 311u, 328u, 341u, 353u, 364u, 378u, 392u, 408u, 428u, 441u, 458u, 476u, 493u, 511u, 520u,
    535u, 550u, 563u, 581u, 597u, 611u, 622u, 640u, 654u, 672u, 689u, 706u, 719u, 733u, 744u, 765u,
    784u, 801u, 815u, 832u, 851u, 865u, 877u, 891u, 900u, 922u, 938u, 946u, 959u, 975u, 993u, 1009u,
};
void recomp_unit_0171_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,31,6,16 fprs=12,0,13,16 gpr_occ=4106 fpr_occ=179 gpr_total=6077 fpr_total=202
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_0 = ctx.fpr[0];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_16 = ctx.fpr[16];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[0] = aot_fpr_0; ctx.fpr[13] = aot_fpr_13; ctx.fpr[16] = aot_fpr_16; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_0 = ctx.fpr[0]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_16 = ctx.fpr[16]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB0000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0171[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0171[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08AB0000;
    case 2u: goto L_08AB001C;
    case 3u: goto L_08AB0038;
    case 4u: goto L_08AB0050;
    case 5u: goto L_08AB005C;
    case 6u: goto L_08AB0064;
    case 7u: goto L_08AB0078;
    case 8u: goto L_08AB0088;
    case 9u: goto L_08AB0094;
    case 10u: goto L_08AB00A8;
    case 11u: goto L_08AB00B4;
    case 12u: goto L_08AB0100;
    case 13u: goto L_08AB0180;
    case 14u: goto L_08AB0190;
    case 15u: goto L_08AB01B0;
    case 16u: goto L_08AB01BC;
    case 17u: goto L_08AB01DC;
    case 18u: goto L_08AB01EC;
    case 19u: goto L_08AB020C;
    case 20u: goto L_08AB0218;
    case 21u: goto L_08AB0220;
    case 22u: goto L_08AB0248;
    case 23u: goto L_08AB0258;
    case 24u: goto L_08AB0280;
    case 25u: goto L_08AB028C;
    case 26u: goto L_08AB02A8;
    case 27u: goto L_08AB02C8;
    case 28u: goto L_08AB02DC;
    case 29u: goto L_08AB02F0;
    case 30u: goto L_08AB0300;
    case 31u: goto L_08AB0308;
    case 32u: goto L_08AB0310;
    case 33u: goto L_08AB0314;
    case 34u: goto L_08AB0320;
    case 35u: goto L_08AB032C;
    case 36u: goto L_08AB0338;
    case 37u: goto L_08AB0348;
    case 38u: goto L_08AB0350;
    case 39u: goto L_08AB0360;
    case 40u: goto L_08AB036C;
    case 41u: goto L_08AB037C;
    case 42u: goto L_08AB038C;
    case 43u: goto L_08AB0394;
    case 44u: goto L_08AB03A8;
    case 45u: goto L_08AB03C4;
    case 46u: goto L_08AB03F4;
    case 47u: goto L_08AB0410;
    case 48u: goto L_08AB0418;
    case 49u: goto L_08AB042C;
    case 50u: goto L_08AB043C;
    case 51u: goto L_08AB0444;
    case 52u: goto L_08AB044C;
    case 53u: goto L_08AB0454;
    case 54u: goto L_08AB0488;
    case 55u: goto L_08AB049C;
    case 56u: goto L_08AB04C0;
    case 57u: goto L_08AB04FC;
    case 58u: goto L_08AB0510;
    case 59u: goto L_08AB0548;
    case 60u: goto L_08AB0558;
    case 61u: goto L_08AB0564;
    case 62u: goto L_08AB0574;
    case 63u: goto L_08AB057C;
    case 64u: goto L_08AB0588;
    case 65u: goto L_08AB0590;
    case 66u: goto L_08AB05A8;
    case 67u: goto L_08AB05D0;
    case 68u: goto L_08AB05DC;
    case 69u: goto L_08AB05F8;
    case 70u: goto L_08AB0604;
    case 71u: goto L_08AB0614;
    case 72u: goto L_08AB064C;
    case 73u: goto L_08AB0654;
    case 74u: goto L_08AB0668;
    case 75u: goto L_08AB0688;
    case 76u: goto L_08AB069C;
    case 77u: goto L_08AB06F8;
    case 78u: goto L_08AB0724;
    case 79u: goto L_08AB073C;
    case 80u: goto L_08AB0754;
    case 81u: goto L_08AB076C;
    case 82u: goto L_08AB078C;
    case 83u: goto L_08AB07A4;
    case 84u: goto L_08AB07B8;
    case 85u: goto L_08AB07CC;
    case 86u: goto L_08AB07E0;
    case 87u: goto L_08AB07F4;
    case 88u: goto L_08AB0800;
    case 89u: goto L_08AB0808;
    case 90u: goto L_08AB0814;
    case 91u: goto L_08AB0824;
    case 92u: goto L_08AB082C;
    case 93u: goto L_08AB0844;
    case 94u: goto L_08AB0854;
    case 95u: goto L_08AB0860;
    case 96u: goto L_08AB0870;
    case 97u: goto L_08AB087C;
    case 98u: goto L_08AB0880;
    case 99u: goto L_08AB0888;
    case 100u: goto L_08AB08B8;
    case 101u: goto L_08AB08D0;
    case 102u: goto L_08AB08D8;
    case 103u: goto L_08AB08E0;
    case 104u: goto L_08AB08E4;
    case 105u: goto L_08AB0900;
    case 106u: goto L_08AB0908;
    case 107u: goto L_08AB0928;
    case 108u: goto L_08AB0934;
    case 109u: goto L_08AB094C;
    case 110u: goto L_08AB0950;
    case 111u: goto L_08AB096C;
    case 112u: goto L_08AB0984;
    case 113u: goto L_08AB09A0;
    case 114u: goto L_08AB09B4;
    case 115u: goto L_08AB09F0;
    case 116u: goto L_08AB09F8;
    case 117u: goto L_08AB0A04;
    case 118u: goto L_08AB0A10;
    case 119u: goto L_08AB0A34;
    case 120u: goto L_08AB0A58;
    case 121u: goto L_08AB0A88;
    case 122u: goto L_08AB0A98;
    case 123u: goto L_08AB0AB0;
    case 124u: goto L_08AB0AB8;
    case 125u: goto L_08AB0AC0;
    case 126u: goto L_08AB0AC8;
    case 127u: goto L_08AB0AD0;
    case 128u: goto L_08AB0AD8;
    case 129u: goto L_08AB0AE0;
    case 130u: goto L_08AB0AE8;
    case 131u: goto L_08AB0AF0;
    case 132u: goto L_08AB0AF8;
    case 133u: goto L_08AB0B00;
    case 134u: goto L_08AB0B08;
    case 135u: goto L_08AB0B10;
    case 136u: goto L_08AB0B18;
    case 137u: goto L_08AB0B24;
    case 138u: goto L_08AB0B2C;
    case 139u: goto L_08AB0B34;
    case 140u: goto L_08AB0B3C;
    case 141u: goto L_08AB0B44;
    case 142u: goto L_08AB0B4C;
    case 143u: goto L_08AB0B54;
    case 144u: goto L_08AB0B5C;
    case 145u: goto L_08AB0B64;
    case 146u: goto L_08AB0B6C;
    case 147u: goto L_08AB0B74;
    case 148u: goto L_08AB0B7C;
    case 149u: goto L_08AB0B84;
    case 150u: goto L_08AB0B8C;
    case 151u: goto L_08AB0B94;
    case 152u: goto L_08AB0B9C;
    case 153u: goto L_08AB0BA4;
    case 154u: goto L_08AB0BAC;
    case 155u: goto L_08AB0BB4;
    case 156u: goto L_08AB0BBC;
    case 157u: goto L_08AB0BC4;
    case 158u: goto L_08AB0BCC;
    case 159u: goto L_08AB0BD4;
    case 160u: goto L_08AB0BDC;
    case 161u: goto L_08AB0BE4;
    case 162u: goto L_08AB0BEC;
    case 163u: goto L_08AB0BF4;
    case 164u: goto L_08AB0BFC;
    case 165u: goto L_08AB0C04;
    case 166u: goto L_08AB0C0C;
    case 167u: goto L_08AB0C14;
    case 168u: goto L_08AB0C1C;
    case 169u: goto L_08AB0C24;
    case 170u: goto L_08AB0C2C;
    case 171u: goto L_08AB0C34;
    case 172u: goto L_08AB0C3C;
    case 173u: goto L_08AB0C44;
    case 174u: goto L_08AB0C4C;
    case 175u: goto L_08AB0C54;
    case 176u: goto L_08AB0C5C;
    case 177u: goto L_08AB0C64;
    case 178u: goto L_08AB0C6C;
    case 179u: goto L_08AB0C74;
    case 180u: goto L_08AB0C7C;
    case 181u: goto L_08AB0C84;
    case 182u: goto L_08AB0C8C;
    case 183u: goto L_08AB0C94;
    case 184u: goto L_08AB0C9C;
    case 185u: goto L_08AB0CA4;
    case 186u: goto L_08AB0CAC;
    case 187u: goto L_08AB0CB4;
    case 188u: goto L_08AB0CBC;
    case 189u: goto L_08AB0CC4;
    case 190u: goto L_08AB0CCC;
    case 191u: goto L_08AB0CD4;
    case 192u: goto L_08AB0CDC;
    case 193u: goto L_08AB0CE4;
    case 194u: goto L_08AB0CEC;
    case 195u: goto L_08AB0CF4;
    case 196u: goto L_08AB0CFC;
    case 197u: goto L_08AB0D04;
    case 198u: goto L_08AB0D0C;
    case 199u: goto L_08AB0D14;
    case 200u: goto L_08AB0D1C;
    case 201u: goto L_08AB0D24;
    case 202u: goto L_08AB0D2C;
    case 203u: goto L_08AB0D34;
    case 204u: goto L_08AB0D3C;
    case 205u: goto L_08AB0D44;
    case 206u: goto L_08AB0D4C;
    case 207u: goto L_08AB0D54;
    case 208u: goto L_08AB0D5C;
    case 209u: goto L_08AB0D64;
    case 210u: goto L_08AB0D6C;
    case 211u: goto L_08AB0D74;
    case 212u: goto L_08AB0D7C;
    case 213u: goto L_08AB0D84;
    case 214u: goto L_08AB0D8C;
    case 215u: goto L_08AB0D94;
    case 216u: goto L_08AB0D9C;
    case 217u: goto L_08AB0DA4;
    case 218u: goto L_08AB0DAC;
    case 219u: goto L_08AB0DB4;
    case 220u: goto L_08AB0DBC;
    case 221u: goto L_08AB0DC4;
    case 222u: goto L_08AB0DCC;
    case 223u: goto L_08AB0DD4;
    case 224u: goto L_08AB0DDC;
    case 225u: goto L_08AB0DE4;
    case 226u: goto L_08AB0DEC;
    case 227u: goto L_08AB0DF4;
    case 228u: goto L_08AB0DFC;
    case 229u: goto L_08AB0E04;
    case 230u: goto L_08AB0E0C;
    case 231u: goto L_08AB0E14;
    case 232u: goto L_08AB0E1C;
    case 233u: goto L_08AB0E24;
    case 234u: goto L_08AB0E2C;
    case 235u: goto L_08AB0E34;
    case 236u: goto L_08AB0E3C;
    case 237u: goto L_08AB0E44;
    case 238u: goto L_08AB0E4C;
    case 239u: goto L_08AB0E54;
    case 240u: goto L_08AB0E5C;
    case 241u: goto L_08AB0E64;
    case 242u: goto L_08AB0E6C;
    case 243u: goto L_08AB0E74;
    case 244u: goto L_08AB0E7C;
    case 245u: goto L_08AB0E84;
    case 246u: goto L_08AB0E8C;
    case 247u: goto L_08AB0E94;
    case 248u: goto L_08AB0E9C;
    case 249u: goto L_08AB0EA4;
    case 250u: goto L_08AB0EAC;
    case 251u: goto L_08AB0EB4;
    case 252u: goto L_08AB0EBC;
    case 253u: goto L_08AB0EC4;
    case 254u: goto L_08AB0ECC;
    case 255u: goto L_08AB0ED4;
    case 256u: goto L_08AB0EDC;
    case 257u: goto L_08AB0EE4;
    case 258u: goto L_08AB0EEC;
    case 259u: goto L_08AB0EFC;
    case 260u: goto L_08AB0F04;
    case 261u: goto L_08AB0F14;
    case 262u: goto L_08AB0F30;
    case 263u: goto L_08AB0F3C;
    case 264u: goto L_08AB0F54;
    case 265u: goto L_08AB0F5C;
    case 266u: goto L_08AB0F64;
    case 267u: goto L_08AB0F6C;
    case 268u: goto L_08AB0F74;
    case 269u: goto L_08AB0F7C;
    case 270u: goto L_08AB0F84;
    case 271u: goto L_08AB0F8C;
    case 272u: goto L_08AB0F98;
    case 273u: goto L_08AB0FA0;
    case 274u: goto L_08AB0FA8;
    case 275u: goto L_08AB0FB0;
    case 276u: goto L_08AB0FB8;
    case 277u: goto L_08AB0FC4;
    case 278u: goto L_08AB0FCC;
    case 279u: goto L_08AB0FD4;
    case 280u: goto L_08AB0FDC;
    case 281u: goto L_08AB0FE4;
    case 282u: goto L_08AB0FEC;
    case 283u: goto L_08AB0FF4;
    case 284u: goto L_08AB0FFC;
    case 285u: goto L_08AB1004;
    case 286u: goto L_08AB100C;
    case 287u: goto L_08AB1014;
    case 288u: goto L_08AB1018;
    case 289u: goto L_08AB1020;
    case 290u: goto L_08AB1030;
    case 291u: goto L_08AB1048;
    case 292u: goto L_08AB1050;
    case 293u: goto L_08AB1058;
    case 294u: goto L_08AB1060;
    case 295u: goto L_08AB1068;
    case 296u: goto L_08AB1070;
    case 297u: goto L_08AB1078;
    case 298u: goto L_08AB1080;
    case 299u: goto L_08AB1088;
    case 300u: goto L_08AB1090;
    case 301u: goto L_08AB1098;
    case 302u: goto L_08AB10A0;
    case 303u: goto L_08AB10A8;
    case 304u: goto L_08AB10B0;
    case 305u: goto L_08AB10B8;
    case 306u: goto L_08AB10C0;
    case 307u: goto L_08AB10C8;
    case 308u: goto L_08AB10D0;
    case 309u: goto L_08AB10D8;
    case 310u: goto L_08AB10FC;
    case 311u: goto L_08AB110C;
    case 312u: goto L_08AB1118;
    case 313u: goto L_08AB1120;
    case 314u: goto L_08AB1138;
    case 315u: goto L_08AB1140;
    case 316u: goto L_08AB1148;
    case 317u: goto L_08AB1150;
    case 318u: goto L_08AB117C;
    case 319u: goto L_08AB118C;
    case 320u: goto L_08AB119C;
    case 321u: goto L_08AB11B4;
    case 322u: goto L_08AB11C4;
    case 323u: goto L_08AB11D4;
    case 324u: goto L_08AB11D8;
    case 325u: goto L_08AB11E4;
    case 326u: goto L_08AB11E8;
    case 327u: goto L_08AB11F4;
    case 328u: goto L_08AB120C;
    case 329u: goto L_08AB1214;
    case 330u: goto L_08AB1224;
    case 331u: goto L_08AB1244;
    case 332u: goto L_08AB1278;
    case 333u: goto L_08AB128C;
    case 334u: goto L_08AB12A0;
    case 335u: goto L_08AB12AC;
    case 336u: goto L_08AB12BC;
    case 337u: goto L_08AB12C4;
    case 338u: goto L_08AB12C8;
    case 339u: goto L_08AB12E4;
    case 340u: goto L_08AB12EC;
    case 341u: goto L_08AB1310;
    case 342u: goto L_08AB1318;
    case 343u: goto L_08AB1340;
    case 344u: goto L_08AB1374;
    case 345u: goto L_08AB1388;
    case 346u: goto L_08AB139C;
    case 347u: goto L_08AB13A8;
    case 348u: goto L_08AB13B8;
    case 349u: goto L_08AB13C0;
    case 350u: goto L_08AB13C4;
    case 351u: goto L_08AB13E0;
    case 352u: goto L_08AB13E8;
    case 353u: goto L_08AB140C;
    case 354u: goto L_08AB1414;
    case 355u: goto L_08AB143C;
    case 356u: goto L_08AB1470;
    case 357u: goto L_08AB1480;
    case 358u: goto L_08AB1498;
    case 359u: goto L_08AB14A4;
    case 360u: goto L_08AB14B4;
    case 361u: goto L_08AB14C4;
    case 362u: goto L_08AB14CC;
    case 363u: goto L_08AB14F4;
    case 364u: goto L_08AB151C;
    case 365u: goto L_08AB1534;
    case 366u: goto L_08AB1544;
    case 367u: goto L_08AB1550;
    case 368u: goto L_08AB1560;
    case 369u: goto L_08AB1568;
    case 370u: goto L_08AB1584;
    case 371u: goto L_08AB1588;
    case 372u: goto L_08AB15A0;
    case 373u: goto L_08AB15C8;
    case 374u: goto L_08AB15D8;
    case 375u: goto L_08AB15E4;
    case 376u: goto L_08AB15EC;
    case 377u: goto L_08AB15F8;
    case 378u: goto L_08AB160C;
    case 379u: goto L_08AB1618;
    case 380u: goto L_08AB1628;
    case 381u: goto L_08AB1630;
    case 382u: goto L_08AB1650;
    case 383u: goto L_08AB1658;
    case 384u: goto L_08AB1680;
    case 385u: goto L_08AB1690;
    case 386u: goto L_08AB16A0;
    case 387u: goto L_08AB16C4;
    case 388u: goto L_08AB16D0;
    case 389u: goto L_08AB16E4;
    case 390u: goto L_08AB16EC;
    case 391u: goto L_08AB16FC;
    case 392u: goto L_08AB1704;
    case 393u: goto L_08AB171C;
    case 394u: goto L_08AB1730;
    case 395u: goto L_08AB1740;
    case 396u: goto L_08AB1754;
    case 397u: goto L_08AB1764;
    case 398u: goto L_08AB176C;
    case 399u: goto L_08AB1778;
    case 400u: goto L_08AB1794;
    case 401u: goto L_08AB179C;
    case 402u: goto L_08AB17A8;
    case 403u: goto L_08AB17B8;
    case 404u: goto L_08AB17C8;
    case 405u: goto L_08AB17D0;
    case 406u: goto L_08AB17DC;
    case 407u: goto L_08AB17F4;
    case 408u: goto L_08AB1800;
    case 409u: goto L_08AB180C;
    case 410u: goto L_08AB1814;
    case 411u: goto L_08AB1820;
    case 412u: goto L_08AB1830;
    case 413u: goto L_08AB1838;
    case 414u: goto L_08AB1840;
    case 415u: goto L_08AB1854;
    case 416u: goto L_08AB1858;
    case 417u: goto L_08AB1860;
    case 418u: goto L_08AB186C;
    case 419u: goto L_08AB187C;
    case 420u: goto L_08AB1884;
    case 421u: goto L_08AB18A0;
    case 422u: goto L_08AB18B8;
    case 423u: goto L_08AB18CC;
    case 424u: goto L_08AB18D4;
    case 425u: goto L_08AB18E0;
    case 426u: goto L_08AB18E8;
    case 427u: goto L_08AB18F4;
    case 428u: goto L_08AB1914;
    case 429u: goto L_08AB191C;
    case 430u: goto L_08AB192C;
    case 431u: goto L_08AB1944;
    case 432u: goto L_08AB1958;
    case 433u: goto L_08AB196C;
    case 434u: goto L_08AB1980;
    case 435u: goto L_08AB1994;
    case 436u: goto L_08AB19A8;
    case 437u: goto L_08AB19BC;
    case 438u: goto L_08AB19D0;
    case 439u: goto L_08AB19E4;
    case 440u: goto L_08AB19F8;
    case 441u: goto L_08AB1A04;
    case 442u: goto L_08AB1A10;
    case 443u: goto L_08AB1A1C;
    case 444u: goto L_08AB1A24;
    case 445u: goto L_08AB1A60;
    case 446u: goto L_08AB1A68;
    case 447u: goto L_08AB1A78;
    case 448u: goto L_08AB1A7C;
    case 449u: goto L_08AB1A88;
    case 450u: goto L_08AB1A98;
    case 451u: goto L_08AB1AA0;
    case 452u: goto L_08AB1AB0;
    case 453u: goto L_08AB1AB8;
    case 454u: goto L_08AB1AC0;
    case 455u: goto L_08AB1ACC;
    case 456u: goto L_08AB1AD8;
    case 457u: goto L_08AB1AF0;
    case 458u: goto L_08AB1B04;
    case 459u: goto L_08AB1B0C;
    case 460u: goto L_08AB1B18;
    case 461u: goto L_08AB1B1C;
    case 462u: goto L_08AB1B40;
    case 463u: goto L_08AB1B60;
    case 464u: goto L_08AB1B6C;
    case 465u: goto L_08AB1B74;
    case 466u: goto L_08AB1B80;
    case 467u: goto L_08AB1B88;
    case 468u: goto L_08AB1B90;
    case 469u: goto L_08AB1BA0;
    case 470u: goto L_08AB1BA8;
    case 471u: goto L_08AB1BB4;
    case 472u: goto L_08AB1BC0;
    case 473u: goto L_08AB1BD4;
    case 474u: goto L_08AB1BE0;
    case 475u: goto L_08AB1BFC;
    case 476u: goto L_08AB1C0C;
    case 477u: goto L_08AB1C18;
    case 478u: goto L_08AB1C20;
    case 479u: goto L_08AB1C38;
    case 480u: goto L_08AB1C48;
    case 481u: goto L_08AB1C54;
    case 482u: goto L_08AB1C60;
    case 483u: goto L_08AB1C68;
    case 484u: goto L_08AB1C70;
    case 485u: goto L_08AB1C78;
    case 486u: goto L_08AB1C80;
    case 487u: goto L_08AB1C84;
    case 488u: goto L_08AB1C90;
    case 489u: goto L_08AB1CCC;
    case 490u: goto L_08AB1CD4;
    case 491u: goto L_08AB1CE8;
    case 492u: goto L_08AB1CF0;
    case 493u: goto L_08AB1D04;
    case 494u: goto L_08AB1D0C;
    case 495u: goto L_08AB1D1C;
    case 496u: goto L_08AB1D24;
    case 497u: goto L_08AB1D2C;
    case 498u: goto L_08AB1D38;
    case 499u: goto L_08AB1D3C;
    case 500u: goto L_08AB1D5C;
    case 501u: goto L_08AB1D8C;
    case 502u: goto L_08AB1D9C;
    case 503u: goto L_08AB1DA4;
    case 504u: goto L_08AB1DB4;
    case 505u: goto L_08AB1DC8;
    case 506u: goto L_08AB1DD0;
    case 507u: goto L_08AB1DD8;
    case 508u: goto L_08AB1DE0;
    case 509u: goto L_08AB1DE8;
    case 510u: goto L_08AB1DF0;
    case 511u: goto L_08AB1E10;
    case 512u: goto L_08AB1E40;
    case 513u: goto L_08AB1E60;
    case 514u: goto L_08AB1E70;
    case 515u: goto L_08AB1E9C;
    case 516u: goto L_08AB1EA4;
    case 517u: goto L_08AB1EB0;
    case 518u: goto L_08AB1EC0;
    case 519u: goto L_08AB1EE8;
    case 520u: goto L_08AB1F0C;
    case 521u: goto L_08AB1F14;
    case 522u: goto L_08AB1F1C;
    case 523u: goto L_08AB1F38;
    case 524u: goto L_08AB1F58;
    case 525u: goto L_08AB1F78;
    case 526u: goto L_08AB1F88;
    case 527u: goto L_08AB1F90;
    case 528u: goto L_08AB1F98;
    case 529u: goto L_08AB1F9C;
    case 530u: goto L_08AB1FB0;
    case 531u: goto L_08AB1FE0;
    case 532u: goto L_08AB1FEC;
    case 533u: goto L_08AB1FF4;
    case 534u: goto L_08AB1FFC;
    case 535u: goto L_08AB2004;
    case 536u: goto L_08AB200C;
    case 537u: goto L_08AB201C;
    case 538u: goto L_08AB2028;
    case 539u: goto L_08AB203C;
    case 540u: goto L_08AB2044;
    case 541u: goto L_08AB2054;
    case 542u: goto L_08AB205C;
    case 543u: goto L_08AB2064;
    case 544u: goto L_08AB2084;
    case 545u: goto L_08AB20A4;
    case 546u: goto L_08AB20C4;
    case 547u: goto L_08AB20D4;
    case 548u: goto L_08AB20E0;
    case 549u: goto L_08AB20FC;
    case 550u: goto L_08AB2104;
    case 551u: goto L_08AB2110;
    case 552u: goto L_08AB211C;
    case 553u: goto L_08AB2150;
    case 554u: goto L_08AB215C;
    case 555u: goto L_08AB2164;
    case 556u: goto L_08AB2174;
    case 557u: goto L_08AB217C;
    case 558u: goto L_08AB218C;
    case 559u: goto L_08AB2194;
    case 560u: goto L_08AB21A0;
    case 561u: goto L_08AB21B4;
    case 562u: goto L_08AB21CC;
    case 563u: goto L_08AB2208;
    case 564u: goto L_08AB2220;
    case 565u: goto L_08AB2238;
    case 566u: goto L_08AB2248;
    case 567u: goto L_08AB2254;
    case 568u: goto L_08AB225C;
    case 569u: goto L_08AB226C;
    case 570u: goto L_08AB2270;
    case 571u: goto L_08AB227C;
    case 572u: goto L_08AB2284;
    case 573u: goto L_08AB2290;
    case 574u: goto L_08AB2298;
    case 575u: goto L_08AB22B0;
    case 576u: goto L_08AB22BC;
    case 577u: goto L_08AB22D4;
    case 578u: goto L_08AB22E8;
    case 579u: goto L_08AB22F4;
    case 580u: goto L_08AB22FC;
    case 581u: goto L_08AB2304;
    case 582u: goto L_08AB230C;
    case 583u: goto L_08AB2324;
    case 584u: goto L_08AB232C;
    case 585u: goto L_08AB233C;
    case 586u: goto L_08AB2350;
    case 587u: goto L_08AB235C;
    case 588u: goto L_08AB2374;
    case 589u: goto L_08AB2388;
    case 590u: goto L_08AB2398;
    case 591u: goto L_08AB23A0;
    case 592u: goto L_08AB23B4;
    case 593u: goto L_08AB23BC;
    case 594u: goto L_08AB23C4;
    case 595u: goto L_08AB23C8;
    case 596u: goto L_08AB23F4;
    case 597u: goto L_08AB241C;
    case 598u: goto L_08AB242C;
    case 599u: goto L_08AB243C;
    case 600u: goto L_08AB245C;
    case 601u: goto L_08AB2478;
    case 602u: goto L_08AB2484;
    case 603u: goto L_08AB249C;
    case 604u: goto L_08AB24B0;
    case 605u: goto L_08AB24C4;
    case 606u: goto L_08AB24D0;
    case 607u: goto L_08AB24D8;
    case 608u: goto L_08AB24DC;
    case 609u: goto L_08AB24EC;
    case 610u: goto L_08AB24F8;
    case 611u: goto L_08AB2508;
    case 612u: goto L_08AB2510;
    case 613u: goto L_08AB2524;
    case 614u: goto L_08AB2528;
    case 615u: goto L_08AB2548;
    case 616u: goto L_08AB256C;
    case 617u: goto L_08AB257C;
    case 618u: goto L_08AB2588;
    case 619u: goto L_08AB2594;
    case 620u: goto L_08AB25A8;
    case 621u: goto L_08AB25C0;
    case 622u: goto L_08AB260C;
    case 623u: goto L_08AB2614;
    case 624u: goto L_08AB2620;
    case 625u: goto L_08AB2630;
    case 626u: goto L_08AB2644;
    case 627u: goto L_08AB2654;
    case 628u: goto L_08AB2664;
    case 629u: goto L_08AB2674;
    case 630u: goto L_08AB267C;
    case 631u: goto L_08AB2684;
    case 632u: goto L_08AB2694;
    case 633u: goto L_08AB26B4;
    case 634u: goto L_08AB26C4;
    case 635u: goto L_08AB26CC;
    case 636u: goto L_08AB26D4;
    case 637u: goto L_08AB26E4;
    case 638u: goto L_08AB26F0;
    case 639u: goto L_08AB26FC;
    case 640u: goto L_08AB2704;
    case 641u: goto L_08AB2710;
    case 642u: goto L_08AB2718;
    case 643u: goto L_08AB2724;
    case 644u: goto L_08AB2734;
    case 645u: goto L_08AB2744;
    case 646u: goto L_08AB2750;
    case 647u: goto L_08AB2758;
    case 648u: goto L_08AB2760;
    case 649u: goto L_08AB2768;
    case 650u: goto L_08AB2774;
    case 651u: goto L_08AB27A4;
    case 652u: goto L_08AB27E0;
    case 653u: goto L_08AB27F4;
    case 654u: goto L_08AB2810;
    case 655u: goto L_08AB281C;
    case 656u: goto L_08AB2828;
    case 657u: goto L_08AB2840;
    case 658u: goto L_08AB2848;
    case 659u: goto L_08AB2854;
    case 660u: goto L_08AB2860;
    case 661u: goto L_08AB286C;
    case 662u: goto L_08AB2874;
    case 663u: goto L_08AB287C;
    case 664u: goto L_08AB2888;
    case 665u: goto L_08AB288C;
    case 666u: goto L_08AB289C;
    case 667u: goto L_08AB28AC;
    case 668u: goto L_08AB28CC;
    case 669u: goto L_08AB28D0;
    case 670u: goto L_08AB28E4;
    case 671u: goto L_08AB28F0;
    case 672u: goto L_08AB2908;
    case 673u: goto L_08AB2910;
    case 674u: goto L_08AB2918;
    case 675u: goto L_08AB2920;
    case 676u: goto L_08AB2930;
    case 677u: goto L_08AB2940;
    case 678u: goto L_08AB2948;
    case 679u: goto L_08AB294C;
    case 680u: goto L_08AB2964;
    case 681u: goto L_08AB296C;
    case 682u: goto L_08AB2974;
    case 683u: goto L_08AB297C;
    case 684u: goto L_08AB2988;
    case 685u: goto L_08AB29A0;
    case 686u: goto L_08AB29A8;
    case 687u: goto L_08AB29B8;
    case 688u: goto L_08AB29EC;
    case 689u: goto L_08AB2A20;
    case 690u: goto L_08AB2A38;
    case 691u: goto L_08AB2A40;
    case 692u: goto L_08AB2A60;
    case 693u: goto L_08AB2A6C;
    case 694u: goto L_08AB2A78;
    case 695u: goto L_08AB2A80;
    case 696u: goto L_08AB2A88;
    case 697u: goto L_08AB2A90;
    case 698u: goto L_08AB2AA0;
    case 699u: goto L_08AB2AAC;
    case 700u: goto L_08AB2ABC;
    case 701u: goto L_08AB2AC4;
    case 702u: goto L_08AB2AC8;
    case 703u: goto L_08AB2AE4;
    case 704u: goto L_08AB2AEC;
    case 705u: goto L_08AB2AF0;
    case 706u: goto L_08AB2B0C;
    case 707u: goto L_08AB2B1C;
    case 708u: goto L_08AB2B24;
    case 709u: goto L_08AB2B28;
    case 710u: goto L_08AB2B40;
    case 711u: goto L_08AB2B4C;
    case 712u: goto L_08AB2B5C;
    case 713u: goto L_08AB2B64;
    case 714u: goto L_08AB2B68;
    case 715u: goto L_08AB2B9C;
    case 716u: goto L_08AB2BE8;
    case 717u: goto L_08AB2BF4;
    case 718u: goto L_08AB2BFC;
    case 719u: goto L_08AB2C08;
    case 720u: goto L_08AB2C24;
    case 721u: goto L_08AB2C3C;
    case 722u: goto L_08AB2C44;
    case 723u: goto L_08AB2C4C;
    case 724u: goto L_08AB2C58;
    case 725u: goto L_08AB2C80;
    case 726u: goto L_08AB2C98;
    case 727u: goto L_08AB2CA0;
    case 728u: goto L_08AB2CA8;
    case 729u: goto L_08AB2CC0;
    case 730u: goto L_08AB2CD0;
    case 731u: goto L_08AB2CE0;
    case 732u: goto L_08AB2CF0;
    case 733u: goto L_08AB2D08;
    case 734u: goto L_08AB2D3C;
    case 735u: goto L_08AB2D58;
    case 736u: goto L_08AB2D68;
    case 737u: goto L_08AB2D90;
    case 738u: goto L_08AB2DA0;
    case 739u: goto L_08AB2DB8;
    case 740u: goto L_08AB2DC8;
    case 741u: goto L_08AB2DDC;
    case 742u: goto L_08AB2DE4;
    case 743u: goto L_08AB2DF8;
    case 744u: goto L_08AB2E00;
    case 745u: goto L_08AB2E10;
    case 746u: goto L_08AB2E18;
    case 747u: goto L_08AB2E28;
    case 748u: goto L_08AB2E34;
    case 749u: goto L_08AB2E3C;
    case 750u: goto L_08AB2E44;
    case 751u: goto L_08AB2E4C;
    case 752u: goto L_08AB2E5C;
    case 753u: goto L_08AB2E68;
    case 754u: goto L_08AB2E70;
    case 755u: goto L_08AB2E78;
    case 756u: goto L_08AB2E8C;
    case 757u: goto L_08AB2E9C;
    case 758u: goto L_08AB2EA8;
    case 759u: goto L_08AB2EBC;
    case 760u: goto L_08AB2ECC;
    case 761u: goto L_08AB2ED4;
    case 762u: goto L_08AB2EE8;
    case 763u: goto L_08AB2EF0;
    case 764u: goto L_08AB2EF8;
    case 765u: goto L_08AB2F00;
    case 766u: goto L_08AB2F28;
    case 767u: goto L_08AB2F38;
    case 768u: goto L_08AB2F44;
    case 769u: goto L_08AB2F4C;
    case 770u: goto L_08AB2F54;
    case 771u: goto L_08AB2F5C;
    case 772u: goto L_08AB2F64;
    case 773u: goto L_08AB2F70;
    case 774u: goto L_08AB2F80;
    case 775u: goto L_08AB2F88;
    case 776u: goto L_08AB2F94;
    case 777u: goto L_08AB2FA8;
    case 778u: goto L_08AB2FBC;
    case 779u: goto L_08AB2FC4;
    case 780u: goto L_08AB2FC8;
    case 781u: goto L_08AB2FD8;
    case 782u: goto L_08AB2FE0;
    case 783u: goto L_08AB2FF8;
    case 784u: goto L_08AB3000;
    case 785u: goto L_08AB300C;
    case 786u: goto L_08AB3014;
    case 787u: goto L_08AB301C;
    case 788u: goto L_08AB3024;
    case 789u: goto L_08AB3038;
    case 790u: goto L_08AB3040;
    case 791u: goto L_08AB3048;
    case 792u: goto L_08AB305C;
    case 793u: goto L_08AB3064;
    case 794u: goto L_08AB3078;
    case 795u: goto L_08AB3080;
    case 796u: goto L_08AB3088;
    case 797u: goto L_08AB3094;
    case 798u: goto L_08AB309C;
    case 799u: goto L_08AB30BC;
    case 800u: goto L_08AB30F0;
    case 801u: goto L_08AB3108;
    case 802u: goto L_08AB3114;
    case 803u: goto L_08AB3124;
    case 804u: goto L_08AB3138;
    case 805u: goto L_08AB3140;
    case 806u: goto L_08AB3144;
    case 807u: goto L_08AB3160;
    case 808u: goto L_08AB3174;
    case 809u: goto L_08AB3188;
    case 810u: goto L_08AB3190;
    case 811u: goto L_08AB3194;
    case 812u: goto L_08AB31B0;
    case 813u: goto L_08AB31D8;
    case 814u: goto L_08AB31E8;
    case 815u: goto L_08AB3200;
    case 816u: goto L_08AB3210;
    case 817u: goto L_08AB321C;
    case 818u: goto L_08AB3234;
    case 819u: goto L_08AB3244;
    case 820u: goto L_08AB324C;
    case 821u: goto L_08AB325C;
    case 822u: goto L_08AB3264;
    case 823u: goto L_08AB3270;
    case 824u: goto L_08AB3284;
    case 825u: goto L_08AB328C;
    case 826u: goto L_08AB32A0;
    case 827u: goto L_08AB32BC;
    case 828u: goto L_08AB32C8;
    case 829u: goto L_08AB32E0;
    case 830u: goto L_08AB32F0;
    case 831u: goto L_08AB32F8;
    case 832u: goto L_08AB3304;
    case 833u: goto L_08AB330C;
    case 834u: goto L_08AB3320;
    case 835u: goto L_08AB3328;
    case 836u: goto L_08AB3338;
    case 837u: goto L_08AB3340;
    case 838u: goto L_08AB3350;
    case 839u: goto L_08AB335C;
    case 840u: goto L_08AB336C;
    case 841u: goto L_08AB3378;
    case 842u: goto L_08AB3380;
    case 843u: goto L_08AB3388;
    case 844u: goto L_08AB3398;
    case 845u: goto L_08AB33A4;
    case 846u: goto L_08AB33B4;
    case 847u: goto L_08AB33C0;
    case 848u: goto L_08AB33C8;
    case 849u: goto L_08AB33CC;
    case 850u: goto L_08AB33F0;
    case 851u: goto L_08AB3404;
    case 852u: goto L_08AB3424;
    case 853u: goto L_08AB3440;
    case 854u: goto L_08AB3458;
    case 855u: goto L_08AB3464;
    case 856u: goto L_08AB346C;
    case 857u: goto L_08AB3480;
    case 858u: goto L_08AB3490;
    case 859u: goto L_08AB349C;
    case 860u: goto L_08AB34C8;
    case 861u: goto L_08AB34D0;
    case 862u: goto L_08AB34DC;
    case 863u: goto L_08AB34E4;
    case 864u: goto L_08AB34FC;
    case 865u: goto L_08AB3504;
    case 866u: goto L_08AB350C;
    case 867u: goto L_08AB3520;
    case 868u: goto L_08AB3538;
    case 869u: goto L_08AB356C;
    case 870u: goto L_08AB3574;
    case 871u: goto L_08AB35A4;
    case 872u: goto L_08AB35AC;
    case 873u: goto L_08AB35C0;
    case 874u: goto L_08AB35C8;
    case 875u: goto L_08AB35F4;
    case 876u: goto L_08AB35FC;
    case 877u: goto L_08AB3604;
    case 878u: goto L_08AB360C;
    case 879u: goto L_08AB3634;
    case 880u: goto L_08AB363C;
    case 881u: goto L_08AB3644;
    case 882u: goto L_08AB364C;
    case 883u: goto L_08AB3654;
    case 884u: goto L_08AB366C;
    case 885u: goto L_08AB3674;
    case 886u: goto L_08AB367C;
    case 887u: goto L_08AB3688;
    case 888u: goto L_08AB3694;
    case 889u: goto L_08AB36B0;
    case 890u: goto L_08AB36D8;
    case 891u: goto L_08AB3774;
    case 892u: goto L_08AB3788;
    case 893u: goto L_08AB3790;
    case 894u: goto L_08AB379C;
    case 895u: goto L_08AB37B0;
    case 896u: goto L_08AB37B8;
    case 897u: goto L_08AB37C8;
    case 898u: goto L_08AB37E0;
    case 899u: goto L_08AB37F8;
    case 900u: goto L_08AB3800;
    case 901u: goto L_08AB3808;
    case 902u: goto L_08AB3814;
    case 903u: goto L_08AB3828;
    case 904u: goto L_08AB3838;
    case 905u: goto L_08AB3840;
    case 906u: goto L_08AB3850;
    case 907u: goto L_08AB3858;
    case 908u: goto L_08AB3874;
    case 909u: goto L_08AB3880;
    case 910u: goto L_08AB3888;
    case 911u: goto L_08AB388C;
    case 912u: goto L_08AB3894;
    case 913u: goto L_08AB38A4;
    case 914u: goto L_08AB38B8;
    case 915u: goto L_08AB38C4;
    case 916u: goto L_08AB38CC;
    case 917u: goto L_08AB38D0;
    case 918u: goto L_08AB38E4;
    case 919u: goto L_08AB38F0;
    case 920u: goto L_08AB38F4;
    case 921u: goto L_08AB38FC;
    case 922u: goto L_08AB3904;
    case 923u: goto L_08AB3918;
    case 924u: goto L_08AB3928;
    case 925u: goto L_08AB393C;
    case 926u: goto L_08AB394C;
    case 927u: goto L_08AB3960;
    case 928u: goto L_08AB3968;
    case 929u: goto L_08AB3970;
    case 930u: goto L_08AB3984;
    case 931u: goto L_08AB3994;
    case 932u: goto L_08AB39A0;
    case 933u: goto L_08AB39B8;
    case 934u: goto L_08AB39C0;
    case 935u: goto L_08AB39C8;
    case 936u: goto L_08AB39D0;
    case 937u: goto L_08AB39DC;
    case 938u: goto L_08AB3A10;
    case 939u: goto L_08AB3A1C;
    case 940u: goto L_08AB3A50;
    case 941u: goto L_08AB3A5C;
    case 942u: goto L_08AB3A90;
    case 943u: goto L_08AB3A9C;
    case 944u: goto L_08AB3AD0;
    case 945u: goto L_08AB3ADC;
    case 946u: goto L_08AB3B0C;
    case 947u: goto L_08AB3B18;
    case 948u: goto L_08AB3B48;
    case 949u: goto L_08AB3B50;
    case 950u: goto L_08AB3B5C;
    case 951u: goto L_08AB3B70;
    case 952u: goto L_08AB3B78;
    case 953u: goto L_08AB3B80;
    case 954u: goto L_08AB3B88;
    case 955u: goto L_08AB3BB4;
    case 956u: goto L_08AB3BBC;
    case 957u: goto L_08AB3BDC;
    case 958u: goto L_08AB3BE8;
    case 959u: goto L_08AB3C1C;
    case 960u: goto L_08AB3C38;
    case 961u: goto L_08AB3C40;
    case 962u: goto L_08AB3C48;
    case 963u: goto L_08AB3C50;
    case 964u: goto L_08AB3C64;
    case 965u: goto L_08AB3C80;
    case 966u: goto L_08AB3CA0;
    case 967u: goto L_08AB3CB0;
    case 968u: goto L_08AB3CB8;
    case 969u: goto L_08AB3CC0;
    case 970u: goto L_08AB3CC4;
    case 971u: goto L_08AB3CCC;
    case 972u: goto L_08AB3CD8;
    case 973u: goto L_08AB3CF0;
    case 974u: goto L_08AB3CFC;
    case 975u: goto L_08AB3D08;
    case 976u: goto L_08AB3D14;
    case 977u: goto L_08AB3D20;
    case 978u: goto L_08AB3D2C;
    case 979u: goto L_08AB3D38;
    case 980u: goto L_08AB3D40;
    case 981u: goto L_08AB3D48;
    case 982u: goto L_08AB3D5C;
    case 983u: goto L_08AB3D7C;
    case 984u: goto L_08AB3D84;
    case 985u: goto L_08AB3D8C;
    case 986u: goto L_08AB3D98;
    case 987u: goto L_08AB3DA0;
    case 988u: goto L_08AB3DB4;
    case 989u: goto L_08AB3DD4;
    case 990u: goto L_08AB3DE8;
    case 991u: goto L_08AB3DF0;
    case 992u: goto L_08AB3DF8;
    case 993u: goto L_08AB3E04;
    case 994u: goto L_08AB3E14;
    case 995u: goto L_08AB3E1C;
    case 996u: goto L_08AB3E28;
    case 997u: goto L_08AB3E3C;
    case 998u: goto L_08AB3E48;
    case 999u: goto L_08AB3E54;
    case 1000u: goto L_08AB3E6C;
    case 1001u: goto L_08AB3E74;
    case 1002u: goto L_08AB3E88;
    case 1003u: goto L_08AB3E9C;
    case 1004u: goto L_08AB3EB0;
    case 1005u: goto L_08AB3EC4;
    case 1006u: goto L_08AB3ED8;
    case 1007u: goto L_08AB3EEC;
    case 1008u: goto L_08AB3EF8;
    case 1009u: goto L_08AB3F00;
    case 1010u: goto L_08AB3F0C;
    case 1011u: goto L_08AB3F14;
    case 1012u: goto L_08AB3F20;
    case 1013u: goto L_08AB3F28;
    case 1014u: goto L_08AB3F34;
    case 1015u: goto L_08AB3F44;
    case 1016u: goto L_08AB3F4C;
    case 1017u: goto L_08AB3F54;
    case 1018u: goto L_08AB3F60;
    case 1019u: goto L_08AB3F64;
    case 1020u: goto L_08AB3F68;
    case 1021u: goto L_08AB3F70;
    case 1022u: goto L_08AB3F7C;
    case 1023u: goto L_08AB3F8C;
    case 1024u: goto L_08AB3F94;
    case 1025u: goto L_08AB3F9C;
    case 1026u: goto L_08AB3FA8;
    case 1027u: goto L_08AB3FAC;
    case 1028u: goto L_08AB3FB0;
    case 1029u: goto L_08AB3FB8;
    case 1030u: goto L_08AB3FC4;
    case 1031u: goto L_08AB3FD4;
    case 1032u: goto L_08AB3FDC;
    case 1033u: goto L_08AB3FE4;
    case 1034u: goto L_08AB3FF0;
    case 1035u: goto L_08AB3FF4;
    case 1036u: goto L_08AB3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08AB0000:
    aot_gpr_4 = (aot_gpr_4 | 12u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
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
L_08AB001C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AB0064;
      }
      goto L_08AB0038;
    }
L_08AB0038:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32560));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB0050u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 1039u, 0x08ACF9BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0050u) goto L_08AB0050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0050:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB0064;
      }
      goto L_08AB005C;
    }
L_08AB005C:
    aot_gpr_31 = (0x08AB0064u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AB0094;
L_08AB0064:
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
L_08AB0078:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB0088u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 112u, 0x08B70978u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0088u) goto L_08AB0088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0088:
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
L_08AB0094:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB00A8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 120u, 0x08B70A34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB00A8u) goto L_08AB00A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB00A8:
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
L_08AB00B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AB0100u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0100u) goto L_08AB0100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0100:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (17056u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_16 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[14] = aot_fpr_12 / aot_fpr_16;
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_0 = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_fpr_0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (0u | 49u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_6 = (16840u << 16u);
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08AB0180;
    }
    goto L_08AB0180;
L_08AB0180:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[8]) < 0 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[8] = (0u | 0u);
        goto L_08AB0190;
    }
    goto L_08AB0190;
L_08AB0190:
    aot_fpr_0 = ctx.fpr[15] / aot_fpr_16;
    aot_gpr_5 = (0u | 49u);
    aot_fpr_0 = aot_fpr_0 + ctx.fpr[18];
    aot_fpr_0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08AB01B0;
    }
    goto L_08AB01B0;
L_08AB01B0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08AB01BC;
    }
    goto L_08AB01BC;
L_08AB01BC:
    aot_fpr_0 = ctx.fpr[14] / aot_fpr_16;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_0 = aot_fpr_0 + ctx.fpr[17];
    aot_fpr_0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08AB01DC;
    }
    goto L_08AB01DC;
L_08AB01DC:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[7] = (0u | 0u);
        goto L_08AB01EC;
    }
    goto L_08AB01EC;
L_08AB01EC:
    aot_fpr_0 = aot_fpr_13 / aot_fpr_16;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_0 = aot_fpr_0 + ctx.fpr[18];
    aot_fpr_0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08AB020C;
    }
    goto L_08AB020C;
L_08AB020C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_5);
      if (branch_taken) {
          goto L_08AB0220;
      }
      goto L_08AB0218;
    }
L_08AB0218:
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_5);
    goto L_08AB0220;
L_08AB0220:
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[14];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_16;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08AB0248;
    }
    goto L_08AB0248;
L_08AB0248:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (0u | 0u);
        goto L_08AB0258;
    }
    goto L_08AB0258;
L_08AB0258:
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_16;
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[18];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[30] = (0u | 49u);
        goto L_08AB0280;
    }
    goto L_08AB0280;
L_08AB0280:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[30]) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[30] = (0u | 0u);
        goto L_08AB028C;
    }
    goto L_08AB028C;
L_08AB028C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_08AB03C4;
      }
      goto L_08AB02A8;
    }
L_08AB02A8:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(68));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_4);
    goto L_08AB02C8;
L_08AB02C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AB03A8;
      }
      goto L_08AB02DC;
    }
L_08AB02DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[21] = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.gpr[21] = (ctx.gpr[21] - aot_gpr_4);
    goto L_08AB02F0;
L_08AB02F0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AB0310;
      }
      goto L_08AB0300;
    }
L_08AB0300:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[23];
      if (branch_taken) {
          goto L_08AB0310;
      }
      goto L_08AB0308;
    }
L_08AB0308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AB0314;
      }
      goto L_08AB0310;
    }
L_08AB0310:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(52));
    goto L_08AB0314;
L_08AB0314:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08AB0320u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 593u, 0x08807C9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0320u) goto L_08AB0320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0320:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB0338;
      }
      goto L_08AB032C;
    }
L_08AB032C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08AB0338;
L_08AB0338:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB0350;
      }
      goto L_08AB0348;
    }
L_08AB0348:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_16);
    goto L_08AB0350;
L_08AB0350:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_16);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AB0360u);
    aot_gpr_4 = (0u | 20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0094_entry, 94u, 722u, 0x0897EBD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0360u) goto L_08AB0360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0360:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08AB037C;
      }
      goto L_08AB036C;
    }
L_08AB036C:
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], aot_gpr_16, ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08AB037C;
L_08AB037C:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB0394;
      }
      goto L_08AB038C;
    }
L_08AB038C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    goto L_08AB0394;
L_08AB0394:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AB02F0;
      }
      goto L_08AB03A8;
    }
L_08AB03A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(50));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB02C8;
      }
      goto L_08AB03C4;
    }
L_08AB03C4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
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
L_08AB03F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2280u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(2192));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AB0410u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 890u, 0x08AAFFD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0410u) goto L_08AB0410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0410:
    aot_gpr_31 = (0x08AB0418u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2760));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0418u) goto L_08AB0418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0418:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10272));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2748));
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB042Cu);
    ctx.gpr[7] = (0u | 96u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 279u, 0x08A312B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB042Cu) goto L_08AB042C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB042C:
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
L_08AB043C:
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
L_08AB0444:
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
L_08AB044C:
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
L_08AB0454:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_4 << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AB0488u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0488u) goto L_08AB0488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0488:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB049Cu);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 539u, 0x08A16D90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB049Cu) goto L_08AB049C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB049C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_16));
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
L_08AB04C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AB04FCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB04FCu) goto L_08AB04FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB04FC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB0510u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 539u, 0x08A16D90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0510u) goto L_08AB0510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0510:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_16));
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
L_08AB0548:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(72));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    goto L_08AB0558;
L_08AB0558:
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AB0590;
      }
      goto L_08AB0564;
    }
L_08AB0564:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AB0590;
      }
      goto L_08AB0574;
    }
L_08AB0574:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AB0588;
      }
      goto L_08AB057C;
    }
L_08AB057C:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB0558;
      }
      goto L_08AB0588;
    }
L_08AB0588:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB05D0;
      }
      goto L_08AB0590;
    }
L_08AB0590:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AB05A8u);
    ctx.gpr[7] = (0u | 20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB05A8u) goto L_08AB05A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB05A8:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AB05D0;
L_08AB05D0:
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
L_08AB05DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    goto L_08AB05F8;
L_08AB05F8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB0654;
      }
      goto L_08AB0604;
    }
L_08AB0604:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AB0654;
      }
      goto L_08AB0614;
    }
L_08AB0614:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_6);
    aot_gpr_31 = (0x08AB064Cu);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 539u, 0x08A16D90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB064Cu) goto L_08AB064C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB064C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08AB05F8;
      }
      goto L_08AB0654;
    }
L_08AB0654:
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
L_08AB0668:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AB0688u);
    ctx.gpr[7] = (0u | 72u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0688u) goto L_08AB0688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0688:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB069Cu);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 539u, 0x08A16D90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB069Cu) goto L_08AB069C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB069C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
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
L_08AB06F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AB0724u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0724u) goto L_08AB0724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0724:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_31 = (0x08AB073Cu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB073Cu) goto L_08AB073C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB073C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_31 = (0x08AB0754u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0754u) goto L_08AB0754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0754:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_31 = (0x08AB076Cu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB076Cu) goto L_08AB076C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB076C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB078Cu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB078Cu) goto L_08AB078C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB078C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_31 = (0x08AB07A4u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB07A4u) goto L_08AB07A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB07A4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 72u);
    aot_gpr_31 = (0x08AB07B8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB07B8u) goto L_08AB07B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB07B8:
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
L_08AB07CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(6)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    if (aot_gpr_6 == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(7)));
        goto L_08AB07F4;
    }
    goto L_08AB07E0;
L_08AB07E0:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(7)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AB0800;
      }
      goto L_08AB07F4;
    }
L_08AB07F4:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(28));
    goto L_08AB0800;
L_08AB0800:
    aot_gpr_31 = (0x08AB0808u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0808u) goto L_08AB0808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0808:
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
L_08AB0814:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    goto L_08AB0824;
L_08AB0824:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08AB087C;
      }
      goto L_08AB082C;
    }
L_08AB082C:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
      if (branch_taken) {
          goto L_08AB087C;
      }
      goto L_08AB0844;
    }
L_08AB0844:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_08AB0860;
      }
      goto L_08AB0854;
    }
L_08AB0854:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB0870;
      }
      goto L_08AB0860;
    }
L_08AB0860:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB0824;
      }
      goto L_08AB0870;
    }
L_08AB0870:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AB0880;
      }
      goto L_08AB087C;
    }
L_08AB087C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB0880;
L_08AB0880:
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
L_08AB0888:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AB08B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB08B8u) goto L_08AB08B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB08B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_31 = (0x08AB08D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 487u, 0x08862D50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB08D0u) goto L_08AB08D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB08D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB08E0;
      }
      goto L_08AB08D8;
    }
L_08AB08D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB08E4;
      }
      goto L_08AB08E0;
    }
L_08AB08E0:
    aot_gpr_4 = (0u | 0u);
    goto L_08AB08E4;
L_08AB08E4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB0908;
      }
      goto L_08AB0900;
    }
L_08AB0900:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AB0950;
      }
      goto L_08AB0908;
    }
L_08AB0908:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB0934;
      }
      goto L_08AB0928;
    }
L_08AB0928:
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AB0950;
      }
      goto L_08AB0934;
    }
L_08AB0934:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB0950;
      }
      goto L_08AB094C;
    }
L_08AB094C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AB0950;
L_08AB0950:
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
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08AB096C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AB0984u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0984u) goto L_08AB0984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0984:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    aot_gpr_5 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(29704), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB09A0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB09A0u) goto L_08AB09A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB09A0:
    ctx.gpr[2] = (0u | 0u);
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
L_08AB09B4:
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
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08AB09F0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB09F0u) goto L_08AB09F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB09F0:
    aot_gpr_31 = (0x08AB09F8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB09F8u) goto L_08AB09F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB09F8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB0A04u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0A04u) goto L_08AB0A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0A04:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    aot_gpr_31 = (0x08AB0A10u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0A10u) goto L_08AB0A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0A10:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (0u | 4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08AB0A34u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0A34u) goto L_08AB0A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0A34:
    ctx.gpr[2] = (0u | 0u);
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
L_08AB0A58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AB0A88u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0A88u) goto L_08AB0A88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0A88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0A98;
    }
L_08AB0A98:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10008)));
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
L_08AB0AB0:
    aot_gpr_31 = (0x08AB0AB8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0AB8u) goto L_08AB0AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0AB8:
    aot_gpr_31 = (0x08AB0AC0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 41u, 0x0898C160u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0AC0u) goto L_08AB0AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0AC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0AC8;
    }
L_08AB0AC8:
    aot_gpr_31 = (0x08AB0AD0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0AD0u) goto L_08AB0AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0AD0:
    aot_gpr_31 = (0x08AB0AD8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0AD8u) goto L_08AB0AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0AD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0AE0;
    }
L_08AB0AE0:
    aot_gpr_31 = (0x08AB0AE8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0AE8u) goto L_08AB0AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0AE8:
    aot_gpr_31 = (0x08AB0AF0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0AF0u) goto L_08AB0AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0AF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0AF8;
    }
L_08AB0AF8:
    aot_gpr_31 = (0x08AB0B00u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B00u) goto L_08AB0B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B00:
    aot_gpr_31 = (0x08AB0B08u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B08u) goto L_08AB0B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B10;
    }
L_08AB0B10:
    aot_gpr_31 = (0x08AB0B18u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B18u) goto L_08AB0B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B18:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB0B24u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 73u, 0x0898C2B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B24u) goto L_08AB0B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B2C;
    }
L_08AB0B2C:
    aot_gpr_31 = (0x08AB0B34u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B34u) goto L_08AB0B34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B34:
    aot_gpr_31 = (0x08AB0B3Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 90u, 0x0898C3A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B3Cu) goto L_08AB0B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B44;
    }
L_08AB0B44:
    aot_gpr_31 = (0x08AB0B4Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B4Cu) goto L_08AB0B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B4C:
    aot_gpr_31 = (0x08AB0B54u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B54u) goto L_08AB0B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B5C;
    }
L_08AB0B5C:
    aot_gpr_31 = (0x08AB0B64u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B64u) goto L_08AB0B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B64:
    aot_gpr_31 = (0x08AB0B6Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B6Cu) goto L_08AB0B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B74;
    }
L_08AB0B74:
    aot_gpr_31 = (0x08AB0B7Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B7Cu) goto L_08AB0B7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B7C:
    aot_gpr_31 = (0x08AB0B84u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 148u, 0x0898C6D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B84u) goto L_08AB0B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B8C;
    }
L_08AB0B8C:
    aot_gpr_31 = (0x08AB0B94u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B94u) goto L_08AB0B94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B94:
    aot_gpr_31 = (0x08AB0B9Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 200u, 0x0898C924u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0B9Cu) goto L_08AB0B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0B9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0BA4;
    }
L_08AB0BA4:
    aot_gpr_31 = (0x08AB0BACu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0BACu) goto L_08AB0BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0BAC:
    aot_gpr_31 = (0x08AB0BB4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 252u, 0x0898CB7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0BB4u) goto L_08AB0BB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0BB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0BBC;
    }
L_08AB0BBC:
    aot_gpr_31 = (0x08AB0BC4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0BC4u) goto L_08AB0BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0BC4:
    aot_gpr_31 = (0x08AB0BCCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 309u, 0x0898CE14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0BCCu) goto L_08AB0BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0BCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0BD4;
    }
L_08AB0BD4:
    aot_gpr_31 = (0x08AB0BDCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0BDCu) goto L_08AB0BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0BDC:
    aot_gpr_31 = (0x08AB0BE4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 319u, 0x0898CE74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0BE4u) goto L_08AB0BE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0BE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0BEC;
    }
L_08AB0BEC:
    aot_gpr_31 = (0x08AB0BF4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0BF4u) goto L_08AB0BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0BF4:
    aot_gpr_31 = (0x08AB0BFCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 333u, 0x0898CF00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0BFCu) goto L_08AB0BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0BFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C04;
    }
L_08AB0C04:
    aot_gpr_31 = (0x08AB0C0Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C0Cu) goto L_08AB0C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C0C:
    aot_gpr_31 = (0x08AB0C14u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C14u) goto L_08AB0C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C1C;
    }
L_08AB0C1C:
    aot_gpr_31 = (0x08AB0C24u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C24u) goto L_08AB0C24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C24:
    aot_gpr_31 = (0x08AB0C2Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 351u, 0x0898CFB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C2Cu) goto L_08AB0C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C34;
    }
L_08AB0C34:
    aot_gpr_31 = (0x08AB0C3Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C3Cu) goto L_08AB0C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C3C:
    aot_gpr_31 = (0x08AB0C44u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C44u) goto L_08AB0C44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C4C;
    }
L_08AB0C4C:
    aot_gpr_31 = (0x08AB0C54u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C54u) goto L_08AB0C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C54:
    aot_gpr_31 = (0x08AB0C5Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C5Cu) goto L_08AB0C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C64;
    }
L_08AB0C64:
    aot_gpr_31 = (0x08AB0C6Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C6Cu) goto L_08AB0C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C6C:
    aot_gpr_31 = (0x08AB0C74u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 392u, 0x0898D168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C74u) goto L_08AB0C74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C7C;
    }
L_08AB0C7C:
    aot_gpr_31 = (0x08AB0C84u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C84u) goto L_08AB0C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C84:
    aot_gpr_31 = (0x08AB0C8Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 400u, 0x0898D1B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C8Cu) goto L_08AB0C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C94;
    }
L_08AB0C94:
    aot_gpr_31 = (0x08AB0C9Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0C9Cu) goto L_08AB0C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0C9C:
    aot_gpr_31 = (0x08AB0CA4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 412u, 0x0898D22Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0CA4u) goto L_08AB0CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0CA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0CAC;
    }
L_08AB0CAC:
    aot_gpr_31 = (0x08AB0CB4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0CB4u) goto L_08AB0CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0CB4:
    aot_gpr_31 = (0x08AB0CBCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 419u, 0x0898D270u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0CBCu) goto L_08AB0CBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0CBC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0CC4;
    }
L_08AB0CC4:
    aot_gpr_31 = (0x08AB0CCCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0CCCu) goto L_08AB0CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0CCC:
    aot_gpr_31 = (0x08AB0CD4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0CD4u) goto L_08AB0CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0CD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0CDC;
    }
L_08AB0CDC:
    aot_gpr_31 = (0x08AB0CE4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0CE4u) goto L_08AB0CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0CE4:
    aot_gpr_31 = (0x08AB0CECu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 442u, 0x0898D354u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0CECu) goto L_08AB0CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0CEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0CF4;
    }
L_08AB0CF4:
    aot_gpr_31 = (0x08AB0CFCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0CFCu) goto L_08AB0CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0CFC:
    aot_gpr_31 = (0x08AB0D04u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 475u, 0x0898D4B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D04u) goto L_08AB0D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D0C;
    }
L_08AB0D0C:
    aot_gpr_31 = (0x08AB0D14u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D14u) goto L_08AB0D14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D14:
    aot_gpr_31 = (0x08AB0D1Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 482u, 0x0898D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D1Cu) goto L_08AB0D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D24;
    }
L_08AB0D24:
    aot_gpr_31 = (0x08AB0D2Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D2Cu) goto L_08AB0D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D2C:
    aot_gpr_31 = (0x08AB0D34u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 489u, 0x0898D560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D34u) goto L_08AB0D34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D3C;
    }
L_08AB0D3C:
    aot_gpr_31 = (0x08AB0D44u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D44u) goto L_08AB0D44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D44:
    aot_gpr_31 = (0x08AB0D4Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 496u, 0x0898D5BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D4Cu) goto L_08AB0D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D54;
    }
L_08AB0D54:
    aot_gpr_31 = (0x08AB0D5Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D5Cu) goto L_08AB0D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D5C:
    aot_gpr_31 = (0x08AB0D64u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 508u, 0x0898D640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D64u) goto L_08AB0D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D6C;
    }
L_08AB0D6C:
    aot_gpr_31 = (0x08AB0D74u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D74u) goto L_08AB0D74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D74:
    aot_gpr_31 = (0x08AB0D7Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 543u, 0x0898D7C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D7Cu) goto L_08AB0D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D84;
    }
L_08AB0D84:
    aot_gpr_31 = (0x08AB0D8Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D8Cu) goto L_08AB0D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D8C:
    aot_gpr_31 = (0x08AB0D94u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 561u, 0x0898D8A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0D94u) goto L_08AB0D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0D94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D9C;
    }
L_08AB0D9C:
    aot_gpr_31 = (0x08AB0DA4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0DA4u) goto L_08AB0DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0DA4:
    aot_gpr_31 = (0x08AB0DACu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 613u, 0x0898DAFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0DACu) goto L_08AB0DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0DAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0DB4;
    }
L_08AB0DB4:
    aot_gpr_31 = (0x08AB0DBCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0DBCu) goto L_08AB0DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0DBC:
    aot_gpr_31 = (0x08AB0DC4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 672u, 0x0898DD9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0DC4u) goto L_08AB0DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0DC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0DCC;
    }
L_08AB0DCC:
    aot_gpr_31 = (0x08AB0DD4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0DD4u) goto L_08AB0DD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0DD4:
    aot_gpr_31 = (0x08AB0DDCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 679u, 0x0898DDE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0DDCu) goto L_08AB0DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0DDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0DE4;
    }
L_08AB0DE4:
    aot_gpr_31 = (0x08AB0DECu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0DECu) goto L_08AB0DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0DEC:
    aot_gpr_31 = (0x08AB0DF4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 686u, 0x0898DE2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0DF4u) goto L_08AB0DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0DF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0DFC;
    }
L_08AB0DFC:
    aot_gpr_31 = (0x08AB0E04u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E04u) goto L_08AB0E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E04:
    aot_gpr_31 = (0x08AB0E0Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 703u, 0x0898DF58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E0Cu) goto L_08AB0E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E14;
    }
L_08AB0E14:
    aot_gpr_31 = (0x08AB0E1Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E1Cu) goto L_08AB0E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E1C:
    aot_gpr_31 = (0x08AB0E24u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 722u, 0x0898E080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E24u) goto L_08AB0E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E2C;
    }
L_08AB0E2C:
    aot_gpr_31 = (0x08AB0E34u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E34u) goto L_08AB0E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E34:
    aot_gpr_31 = (0x08AB0E3Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 742u, 0x0898E188u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E3Cu) goto L_08AB0E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E44;
    }
L_08AB0E44:
    aot_gpr_31 = (0x08AB0E4Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E4Cu) goto L_08AB0E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E4C:
    aot_gpr_31 = (0x08AB0E54u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1040u, 0x0898BEC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E54u) goto L_08AB0E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E5C;
    }
L_08AB0E5C:
    aot_gpr_31 = (0x08AB0E64u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E64u) goto L_08AB0E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E64:
    aot_gpr_31 = (0x08AB0E6Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1047u, 0x0898BF10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E6Cu) goto L_08AB0E6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E74;
    }
L_08AB0E74:
    aot_gpr_31 = (0x08AB0E7Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E7Cu) goto L_08AB0E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E7C:
    aot_gpr_31 = (0x08AB0E84u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1054u, 0x0898BF58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E84u) goto L_08AB0E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E8C;
    }
L_08AB0E8C:
    aot_gpr_31 = (0x08AB0E94u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E94u) goto L_08AB0E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E94:
    aot_gpr_31 = (0x08AB0E9Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1061u, 0x0898BFA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0E9Cu) goto L_08AB0E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0E9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0EA4;
    }
L_08AB0EA4:
    aot_gpr_31 = (0x08AB0EACu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0EACu) goto L_08AB0EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0EAC:
    aot_gpr_31 = (0x08AB0EB4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1068u, 0x0898BFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0EB4u) goto L_08AB0EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0EB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0EBC;
    }
L_08AB0EBC:
    aot_gpr_31 = (0x08AB0EC4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0EC4u) goto L_08AB0EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0EC4:
    aot_gpr_31 = (0x08AB0ECCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1069u, 0x0898BFF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0ECCu) goto L_08AB0ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0ECC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0ED4;
    }
L_08AB0ED4:
    aot_gpr_31 = (0x08AB0EDCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0EDCu) goto L_08AB0EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0EDC:
    aot_gpr_31 = (0x08AB0EE4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 24u, 0x0898C0C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0EE4u) goto L_08AB0EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0EE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0EFC;
      }
      goto L_08AB0EEC;
    }
L_08AB0EEC:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2063), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AB0EFC;
L_08AB0EFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0F04;
    }
L_08AB0F04:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB0F14u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08862890, 23u, 431u, 0x08862890u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB0F14u) goto L_08AB0F14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB0F14:
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
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08AB0F30:
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(54) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB1014;
      }
      goto L_08AB0F3C;
    }
L_08AB0F3C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10232)));
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
L_08AB0F54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2688));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F5C;
    }
L_08AB0F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2684));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F64;
    }
L_08AB0F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2676));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F6C;
    }
L_08AB0F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2668));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F74;
    }
L_08AB0F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2660));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F7C;
    }
L_08AB0F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2652));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F84;
    }
L_08AB0F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2644));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F8C;
    }
L_08AB0F8C:
    ctx.gpr[2] = (2232u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(10192));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F98;
    }
L_08AB0F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2636));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FA0;
    }
L_08AB0FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2624));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FA8;
    }
L_08AB0FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2612));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FB0;
    }
L_08AB0FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2604));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FB8;
    }
L_08AB0FB8:
    ctx.gpr[2] = (2232u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(10212));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FC4;
    }
L_08AB0FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2592));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FCC;
    }
L_08AB0FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2580));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FD4;
    }
L_08AB0FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2568));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FDC;
    }
L_08AB0FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2560));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FE4;
    }
L_08AB0FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2548));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FEC;
    }
L_08AB0FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2540));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FF4;
    }
L_08AB0FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2532));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FFC;
    }
L_08AB0FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2524));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB1004;
    }
L_08AB1004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2516));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB100C;
    }
L_08AB100C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2508));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB1014;
    }
L_08AB1014:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB1018;
L_08AB1018:
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
L_08AB1020:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1030;
    }
L_08AB1030:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10448)));
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
L_08AB1048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1050;
    }
L_08AB1050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1058;
    }
L_08AB1058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1060;
    }
L_08AB1060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1068;
    }
L_08AB1068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 34u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1070;
    }
L_08AB1070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 24u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1078;
    }
L_08AB1078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 41u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1080;
    }
L_08AB1080:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 51u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1088;
    }
L_08AB1088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 43u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1090;
    }
L_08AB1090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 53u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1098;
    }
L_08AB1098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 42u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10A0;
    }
L_08AB10A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 52u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10A8;
    }
L_08AB10A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10B0;
    }
L_08AB10B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 23u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10B8;
    }
L_08AB10B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 31u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10C0;
    }
L_08AB10C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 21u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10C8;
    }
L_08AB10C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10D0;
    }
L_08AB10D0:
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
L_08AB10D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AB10FCu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB10FCu) goto L_08AB10FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB10FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08AB1118;
      }
      goto L_08AB110C;
    }
L_08AB110C:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08AB1118;
L_08AB1118:
    aot_gpr_31 = (0x08AB1120u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1120u) goto L_08AB1120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1120:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AB1138:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB1148;
      }
      goto L_08AB1140;
    }
L_08AB1140:
    ctx.gpr[2] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08AB1148;
L_08AB1148:
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
L_08AB1150:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x08AB117Cu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB117Cu) goto L_08AB117C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB117C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB118Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB118Cu) goto L_08AB118C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB118C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AB119Cu);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AB1138;
L_08AB119C:
    aot_gpr_6 = (49024u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB11B4u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB11B4u) goto L_08AB11B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB11B4:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AB11C4u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08AB1138;
L_08AB11C4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB11D8;
      }
      goto L_08AB11D4;
    }
L_08AB11D4:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08AB11D8;
L_08AB11D8:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AB11E8;
      }
      goto L_08AB11E4;
    }
L_08AB11E4:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08AB11E8;
L_08AB11E8:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB1214;
      }
      goto L_08AB11F4;
    }
L_08AB11F4:
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[17]);
    aot_gpr_6 = (aot_gpr_4 - ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08AB120Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB120Cu) goto L_08AB120C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB120C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB1224;
      }
      goto L_08AB1214;
    }
L_08AB1214:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2404));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB1224u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1224u) goto L_08AB1224;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1224:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08AB1244:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1040), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), ctx.gpr[21]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1044), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1064), aot_gpr_31);
    aot_gpr_31 = (0x08AB1278u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1278u) goto L_08AB1278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1278:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB128Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB128Cu) goto L_08AB128C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB128C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08AB1310;
      }
      goto L_08AB12A0;
    }
L_08AB12A0:
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(14520));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    goto L_08AB12AC;
L_08AB12AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB12C8;
      }
      goto L_08AB12BC;
    }
L_08AB12BC:
    aot_gpr_31 = (0x08AB12C4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB12C4u) goto L_08AB12C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB12C4:
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[18]);
    goto L_08AB12C8;
L_08AB12C8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB12EC;
      }
      goto L_08AB12E4;
    }
L_08AB12E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AB12EC;
      }
      goto L_08AB12EC;
    }
L_08AB12EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB12AC;
      }
      goto L_08AB1310;
    }
L_08AB1310:
    aot_gpr_31 = (0x08AB1318u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1318u) goto L_08AB1318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1318:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1040), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08AB1340:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1040), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), ctx.gpr[21]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1044), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1064), aot_gpr_31);
    aot_gpr_31 = (0x08AB1374u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1374u) goto L_08AB1374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1374:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB1388u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1388u) goto L_08AB1388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1388:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08AB140C;
      }
      goto L_08AB139C;
    }
L_08AB139C:
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(14520));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    goto L_08AB13A8;
L_08AB13A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB13C4;
      }
      goto L_08AB13B8;
    }
L_08AB13B8:
    aot_gpr_31 = (0x08AB13C0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB13C0u) goto L_08AB13C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB13C0:
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[18]);
    goto L_08AB13C4;
L_08AB13C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 2u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB13E8;
      }
      goto L_08AB13E0;
    }
L_08AB13E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08AB13E8;
      }
      goto L_08AB13E8;
    }
L_08AB13E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB13A8;
      }
      goto L_08AB140C;
    }
L_08AB140C:
    aot_gpr_31 = (0x08AB1414u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1414u) goto L_08AB1414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1414:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1040), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08AB143C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1040), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1056), ctx.gpr[20]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1044), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1060), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1064), aot_gpr_31);
    aot_gpr_31 = (0x08AB1470u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1470u) goto L_08AB1470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1470:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB1480u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1480u) goto L_08AB1480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1480:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB1498u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1498u) goto L_08AB1498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1498:
    aot_gpr_16 = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[18] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08AB14C4;
      }
      goto L_08AB14A4;
    }
L_08AB14A4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB14B4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB14B4u) goto L_08AB14B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB14B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.gpr[18] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08AB14A4;
      }
      goto L_08AB14C4;
    }
L_08AB14C4:
    aot_gpr_31 = (0x08AB14CCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB14CCu) goto L_08AB14CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB14CC:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1040), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08AB14F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AB151Cu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB151Cu) goto L_08AB151C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB151C:
    aot_gpr_6 = (16256u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB1534u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1534u) goto L_08AB1534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1534:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AB1544u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AB1138;
L_08AB1544:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08AB1560;
      }
      goto L_08AB1550;
    }
L_08AB1550:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB1568;
      }
      goto L_08AB1560;
    }
L_08AB1560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB1588;
      }
      goto L_08AB1568;
    }
L_08AB1568:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(-1))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08AB1584u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1584u) goto L_08AB1584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1584:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AB1588;
L_08AB1588:
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
L_08AB15A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1072));
    { const std::uint32_t aot_run_words[7]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1036), aot_run_words); }
    aot_gpr_31 = (0x08AB15C8u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB15C8u) goto L_08AB15C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB15C8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB15D8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB15D8u) goto L_08AB15D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB15D8:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB1650;
      }
      goto L_08AB15E4;
    }
L_08AB15E4:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2400));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(1036));
    goto L_08AB15EC;
L_08AB15EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB15F8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB15F8u) goto L_08AB15F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB15F8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[19] & 255u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08AB1618;
      }
      goto L_08AB160C;
    }
L_08AB160C:
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AB1618u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1618u) goto L_08AB1618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1618:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB1630;
      }
      goto L_08AB1628;
    }
L_08AB1628:
    aot_gpr_31 = (0x08AB1630u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1630u) goto L_08AB1630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB15EC;
      }
      goto L_08AB1650;
    }
L_08AB1650:
    aot_gpr_31 = (0x08AB1658u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1658u) goto L_08AB1658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1658:
    ctx.gpr[2] = (0u | 1u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1036), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08AB1680:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB1690u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1690u) goto L_08AB1690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1690:
    ctx.gpr[2] = (0u | 1u);
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
L_08AB16A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1056));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1036), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1040), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1044), aot_gpr_31);
    aot_gpr_31 = (0x08AB16C4u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB16C4u) goto L_08AB16C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB16C4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB16D0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB16D0u) goto L_08AB16D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB16D0:
    aot_gpr_5 = (2219u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB16E4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(5760));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 523u, 0x08807790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB16E4u) goto L_08AB16E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB16E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB16FC;
      }
      goto L_08AB16EC;
    }
L_08AB16EC:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB16FCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10624));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB16FCu) goto L_08AB16FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB16FC:
    aot_gpr_31 = (0x08AB1704u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1704u) goto L_08AB1704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1704:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1036), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
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
L_08AB171C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(-49));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
      if (branch_taken) {
          goto L_08AB1754;
      }
      goto L_08AB1730;
    }
L_08AB1730:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (ctx.gpr[2] << 3u);
      if (branch_taken) {
          goto L_08AB1754;
      }
      goto L_08AB1740;
    }
L_08AB1740:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08AB176C;
      }
      goto L_08AB1754;
    }
L_08AB1754:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08AB1764u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10656));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1764u) goto L_08AB1764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1764:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB176C;
      }
      goto L_08AB176C;
    }
L_08AB176C:
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
L_08AB1778:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    aot_gpr_6 = (ctx.gpr[2] << 3u);
      if (branch_taken) {
          goto L_08AB17B8;
      }
      goto L_08AB1794;
    }
L_08AB1794:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    goto L_08AB179C;
L_08AB179C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_5;
      if (branch_taken) {
          goto L_08AB17D0;
      }
      goto L_08AB17A8;
    }
L_08AB17A8:
    ctx.gpr[2] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08AB179C;
      }
      goto L_08AB17B8;
    }
L_08AB17B8:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08AB17C8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10680));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB17C8u) goto L_08AB17C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB17C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB17D0;
      }
      goto L_08AB17D0;
    }
L_08AB17D0:
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
L_08AB17DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 38 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1814;
      }
      goto L_08AB17F4;
    }
L_08AB17F4:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 37 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AB1838;
      }
      goto L_08AB1800;
    }
L_08AB1800:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1840;
      }
      goto L_08AB180C;
    }
L_08AB180C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB1858;
      }
      goto L_08AB1814;
    }
L_08AB1814:
    ctx.gpr[7] = (0u | 91u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08AB1838;
      }
      goto L_08AB1820;
    }
L_08AB1820:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u | 94u);
    { const bool branch_taken = ctx.gpr[9] == aot_gpr_6;
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1860;
      }
      goto L_08AB1830;
    }
L_08AB1830:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB186C;
      }
      goto L_08AB1838;
    }
L_08AB1838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AB18E8;
      }
      goto L_08AB1840;
    }
L_08AB1840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_gpr_31 = (0x08AB1854u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1854u) goto L_08AB1854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1854:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    goto L_08AB1858;
L_08AB1858:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB18E8;
      }
      goto L_08AB1860;
    }
L_08AB1860:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    goto L_08AB186C;
L_08AB186C:
    ctx.gpr[8] = (2232u << 16u);
    ctx.gpr[7] = (0u | 37u);
    aot_gpr_6 = (0u | 93u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(10740));
    goto L_08AB187C;
L_08AB187C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08AB18B8;
      }
      goto L_08AB1884;
    }
L_08AB1884:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08AB18A0u);
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB18A0u) goto L_08AB18A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB18A0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    aot_gpr_6 = (0u | 93u);
    ctx.gpr[7] = (0u | 37u);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    goto L_08AB18B8;
L_08AB18B8:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[7];
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AB18E0;
      }
      goto L_08AB18CC;
    }
L_08AB18CC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08AB18E0;
      }
      goto L_08AB18D4;
    }
L_08AB18D4:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    goto L_08AB18E0;
L_08AB18E0:
    { const bool branch_taken = ctx.gpr[9] != aot_gpr_6;
      if (branch_taken) {
          goto L_08AB187C;
      }
      goto L_08AB18E8;
    }
L_08AB18E8:
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
L_08AB18F4:
    aot_gpr_6 = (2234u << 16u);
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(14520));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_gpr_6 & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AB191C;
      }
      goto L_08AB1914;
    }
L_08AB1914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AB191C;
      }
      goto L_08AB191C;
    }
L_08AB191C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-97));
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08AB1A04;
      }
      goto L_08AB192C;
    }
L_08AB192C:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11040)));
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
L_08AB1944:
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_6 & 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 3u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB1958;
    }
L_08AB1958:
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_6 & 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 32u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB196C;
    }
L_08AB196C:
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_6 & 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 4u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB1980;
    }
L_08AB1980:
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_6 & 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 2u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB1994;
    }
L_08AB1994:
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_6 & 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 16u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB19A8;
    }
L_08AB19A8:
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_6 & 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 8u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB19BC;
    }
L_08AB19BC:
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_6 & 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 1u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB19D0;
    }
L_08AB19D0:
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_6 & 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 7u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB19E4;
    }
L_08AB19E4:
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_6 & 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 68u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB19F8;
    }
L_08AB19F8:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_gpr_6 & 2u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB1A04;
    }
L_08AB1A04:
    ctx.gpr[2] = (aot_gpr_4 ^ aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB1A1C;
      }
      goto L_08AB1A10;
    }
L_08AB1A10:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[2] = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
        goto L_08AB1A1C;
    }
    goto L_08AB1A1C;
L_08AB1A1C:
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
L_08AB1A24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[8] = (0u | 94u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AB1A68;
      }
      goto L_08AB1A60;
    }
L_08AB1A60:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08AB1A68;
L_08AB1A68:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (0u | 37u);
      if (branch_taken) {
          goto L_08AB1AB0;
      }
      goto L_08AB1A78;
    }
L_08AB1A78:
    ctx.gpr[20] = (0u | 45u);
    goto L_08AB1A7C;
L_08AB1A7C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08AB1AC0;
      }
      goto L_08AB1A88;
    }
L_08AB1A88:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08AB1A98u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08AB18F4;
L_08AB1A98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB1AB8;
      }
      goto L_08AB1AA0;
    }
L_08AB1AA0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB1A7C;
      }
      goto L_08AB1AB0;
    }
L_08AB1AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB1B1C;
      }
      goto L_08AB1AB8;
    }
L_08AB1AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AB1B1C;
      }
      goto L_08AB1AC0;
    }
L_08AB1AC0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB1B0C;
      }
      goto L_08AB1ACC;
    }
L_08AB1ACC:
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AB1B0C;
      }
      goto L_08AB1AD8;
    }
L_08AB1AD8:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-2))))));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB1AA0;
      }
      goto L_08AB1AF0;
    }
L_08AB1AF0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB1AA0;
      }
      goto L_08AB1B04;
    }
L_08AB1B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AB1B1C;
      }
      goto L_08AB1B0C;
    }
L_08AB1B0C:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08AB1AA0;
      }
      goto L_08AB1B18;
    }
L_08AB1B18:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08AB1B1C;
L_08AB1B1C:
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
L_08AB1B40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[9] = (0u | 91u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AB1B90;
      }
      goto L_08AB1B60;
    }
L_08AB1B60:
    aot_gpr_4 = (0u | 46u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
    aot_gpr_4 = (0u | 37u);
      if (branch_taken) {
          goto L_08AB1B88;
      }
      goto L_08AB1B6C;
    }
L_08AB1B6C:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AB1BA8;
      }
      goto L_08AB1B74;
    }
L_08AB1B74:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1))))));
    aot_gpr_31 = (0x08AB1B80u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    goto L_08AB18F4;
L_08AB1B80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB1BB4;
      }
      goto L_08AB1B88;
    }
L_08AB1B88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB1BB4;
      }
      goto L_08AB1B90;
    }
L_08AB1B90:
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08AB1BA0u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    goto L_08AB1A24;
L_08AB1BA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB1BB4;
      }
      goto L_08AB1BA8;
    }
L_08AB1BA8:
    aot_gpr_4 = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (aot_gpr_4 ^ aot_gpr_6);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08AB1BB4;
L_08AB1BB4:
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
L_08AB1BC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AB1BE0;
      }
      goto L_08AB1BD4;
    }
L_08AB1BD4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08AB1C0C;
      }
      goto L_08AB1BE0;
    }
L_08AB1BE0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08AB1BFCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10772));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1BFCu) goto L_08AB1BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1BFC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08AB1C0C;
L_08AB1C0C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
      if (branch_taken) {
          goto L_08AB1C20;
      }
      goto L_08AB1C18;
    }
L_08AB1C18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB1C84;
      }
      goto L_08AB1C20;
    }
L_08AB1C20:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_6 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB1C80;
      }
      goto L_08AB1C38;
    }
L_08AB1C38:
    ctx.gpr[2] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1C70;
      }
      goto L_08AB1C48;
    }
L_08AB1C48:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AB1C68;
      }
      goto L_08AB1C54;
    }
L_08AB1C54:
    ctx.gpr[9] = (ctx.gpr[2] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_5 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AB1C38;
      }
      goto L_08AB1C60;
    }
L_08AB1C60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB1C80;
      }
      goto L_08AB1C68;
    }
L_08AB1C68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB1C84;
      }
      goto L_08AB1C70;
    }
L_08AB1C70:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[8];
      if (branch_taken) {
          goto L_08AB1C54;
      }
      goto L_08AB1C78;
    }
L_08AB1C78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1C54;
      }
      goto L_08AB1C80;
    }
L_08AB1C80:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB1C84;
L_08AB1C84:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
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
L_08AB1C90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[18] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    goto L_08AB1CCC;
L_08AB1CCC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_16);
      if (branch_taken) {
          goto L_08AB1D04;
      }
      goto L_08AB1CD4;
    }
L_08AB1CD4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_31 = (0x08AB1CE8u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08AB1B40;
L_08AB1CE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB1D04;
      }
      goto L_08AB1CF0;
    }
L_08AB1CF0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_16);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB1CCC;
      }
      goto L_08AB1D04;
    }
L_08AB1D04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1D38;
      }
      goto L_08AB1D0C;
    }
L_08AB1D0C:
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB1D1Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08AB2D68;
L_08AB1D1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB1D2C;
      }
      goto L_08AB1D24;
    }
L_08AB1D24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB1D3C;
      }
      goto L_08AB1D2C;
    }
L_08AB1D2C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
      if (branch_taken) {
          goto L_08AB1D0C;
      }
      goto L_08AB1D38;
    }
L_08AB1D38:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB1D3C;
L_08AB1D3C:
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
L_08AB1D5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[20] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    goto L_08AB1D8C;
L_08AB1D8C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB1D9Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    goto L_08AB2D68;
L_08AB1D9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB1DE0;
      }
      goto L_08AB1DA4;
    }
L_08AB1DA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB1DD8;
      }
      goto L_08AB1DB4;
    }
L_08AB1DB4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_31 = (0x08AB1DC8u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08AB1B40;
L_08AB1DC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB1DD8;
      }
      goto L_08AB1DD0;
    }
L_08AB1DD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1DE8;
      }
      goto L_08AB1DD8;
    }
L_08AB1DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB1DF0;
      }
      goto L_08AB1DE0;
    }
L_08AB1DE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB1DF0;
      }
      goto L_08AB1DE8;
    }
L_08AB1DE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB1D8C;
      }
      goto L_08AB1DF0;
    }
L_08AB1DF0:
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
L_08AB1E10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    aot_gpr_5 = (ctx.gpr[9] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_gpr_4 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AB1E70;
      }
      goto L_08AB1E40;
    }
L_08AB1E40:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_31 = (0x08AB1E60u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10792));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1E60u) goto L_08AB1E60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1E60:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[7] = aot_run_words[0];
      aot_gpr_4 = aot_run_words[1];
      aot_gpr_5 = aot_run_words[2];
      aot_gpr_6 = aot_run_words[3];
    }
    goto L_08AB1E70;
L_08AB1E70:
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[7] << 3u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB1E9Cu);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    goto L_08AB2D68;
L_08AB1E9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB1EB0;
      }
      goto L_08AB1EA4;
    }
L_08AB1EA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
    goto L_08AB1EB0;
L_08AB1EB0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
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
L_08AB1EC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AB1EE8u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    goto L_08AB1778;
L_08AB1EE8:
    aot_gpr_16 = (ctx.gpr[2] << 3u);
    aot_gpr_16 = (ctx.gpr[18] + aot_gpr_16);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[19] - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB1F0Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08AB2D68;
L_08AB1F0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB1F1C;
      }
      goto L_08AB1F14;
    }
L_08AB1F14:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    goto L_08AB1F1C;
L_08AB1F1C:
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
L_08AB1F38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AB1F58u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08AB171C;
L_08AB1F58:
    aot_gpr_4 = (ctx.gpr[2] << 3u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB1F98;
      }
      goto L_08AB1F78;
    }
L_08AB1F78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB1F88u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB1F88u) goto L_08AB1F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB1F88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB1F98;
      }
      goto L_08AB1F90;
    }
L_08AB1F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AB1F9C;
      }
      goto L_08AB1F98;
    }
L_08AB1F98:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB1F9C;
L_08AB1F9C:
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
L_08AB1FB0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_16 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AB1FF4;
      }
      goto L_08AB1FE0;
    }
L_08AB1FE0:
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB1FFC;
      }
      goto L_08AB1FEC;
    }
L_08AB1FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB2064;
      }
      goto L_08AB1FF4;
    }
L_08AB1FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AB2064;
      }
      goto L_08AB1FFC;
    }
L_08AB1FFC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] - aot_gpr_16);
    goto L_08AB2004;
L_08AB2004:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08AB205C;
      }
      goto L_08AB200C;
    }
L_08AB200C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB201Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 18u, 0x08B580BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB201Cu) goto L_08AB201C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB201C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08AB205C;
      }
      goto L_08AB2028;
    }
L_08AB2028:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AB203Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB203Cu) goto L_08AB203C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB203C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB2054;
      }
      goto L_08AB2044;
    }
L_08AB2044:
    aot_gpr_4 = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[18] - aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AB2004;
      }
      goto L_08AB2054;
    }
L_08AB2054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2064;
      }
      goto L_08AB205C;
    }
L_08AB205C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB2064;
      }
      goto L_08AB2064;
    }
L_08AB2064:
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
L_08AB2084:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[8];
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AB20D4;
      }
      goto L_08AB20A4;
    }
L_08AB20A4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(10812));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AB20C4u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB20C4u) goto L_08AB20C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB20C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08AB20D4;
L_08AB20D4:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AB2104;
      }
      goto L_08AB20E0;
    }
L_08AB20E0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08AB20FCu);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB20FCu) goto L_08AB20FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB20FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB2110;
      }
      goto L_08AB2104;
    }
L_08AB2104:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AB2110u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2110u) goto L_08AB2110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2110:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
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
L_08AB211C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AB2150u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(10792));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 265u, 0x0889D420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2150u) goto L_08AB2150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2150:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB2164;
      }
      goto L_08AB215C;
    }
L_08AB215C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08AB217C;
      }
      goto L_08AB2164;
    }
L_08AB2164:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB2194;
      }
      goto L_08AB2174;
    }
L_08AB2174:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB21B4;
      }
      goto L_08AB217C;
    }
L_08AB217C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (ctx.gpr[17] - ctx.gpr[18]);
    aot_gpr_31 = (0x08AB218Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB218Cu) goto L_08AB218C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB218C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB21B4;
      }
      goto L_08AB2194;
    }
L_08AB2194:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB21A0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AB2084;
L_08AB21A0:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB2194;
      }
      goto L_08AB21B4;
    }
L_08AB21B4:
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
L_08AB21CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-320));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    { const std::uint32_t aot_run_words[7]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_run_words); }
    aot_gpr_31 = (0x08AB2208u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2208u) goto L_08AB2208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2208:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (0u | 2u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2220u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2220u) goto L_08AB2220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2220:
    aot_gpr_6 = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2238u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2238u) goto L_08AB2238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2238:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AB2248u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AB1138;
L_08AB2248:
    ctx.gpr[22] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
      if (branch_taken) {
          goto L_08AB225C;
      }
      goto L_08AB2254;
    }
L_08AB2254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB2270;
      }
      goto L_08AB225C;
    }
L_08AB225C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB2270;
      }
      goto L_08AB226C;
    }
L_08AB226C:
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    goto L_08AB2270;
L_08AB2270:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB227Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB227Cu) goto L_08AB227C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB227C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB2298;
      }
      goto L_08AB2284;
    }
L_08AB2284:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2384));
    aot_gpr_31 = (0x08AB2290u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 207u, 0x08B58C00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2290u) goto L_08AB2290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2290:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB230C;
      }
      goto L_08AB2298;
    }
L_08AB2298:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[22]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AB22B0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08AB1FB0;
L_08AB22B0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08AB2304;
      }
      goto L_08AB22BC;
    }
L_08AB22BC:
    ctx.gpr[17] = (ctx.gpr[19] - ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB22D4u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB22D4u) goto L_08AB22D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB22D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08AB22F4;
      }
      goto L_08AB22E8;
    }
L_08AB22E8:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08AB22F4;
L_08AB22F4:
    aot_gpr_31 = (0x08AB22FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB22FCu) goto L_08AB22FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB22FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AB23C8;
      }
      goto L_08AB2304;
    }
L_08AB2304:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB23BC;
      }
      goto L_08AB230C;
    }
L_08AB230C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_6 = (0u | 94u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB232C;
      }
      goto L_08AB2324;
    }
L_08AB2324:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    goto L_08AB232C;
L_08AB232C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    goto L_08AB233C;
L_08AB233C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AB2350u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08AB2D68;
L_08AB2350:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_08AB23A0;
      }
      goto L_08AB235C;
    }
L_08AB235C:
    aot_gpr_4 = (ctx.gpr[20] - ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2374u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2374u) goto L_08AB2374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2374:
    aot_gpr_4 = (ctx.gpr[23] - ctx.gpr[18]);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2388u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2388u) goto L_08AB2388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2388:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AB2398u);
    aot_gpr_6 = (0u | 0u);
    goto L_08AB211C;
L_08AB2398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB23C8;
      }
      goto L_08AB23A0;
    }
L_08AB23A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB23BC;
      }
      goto L_08AB23B4;
    }
L_08AB23B4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08AB233C;
      }
      goto L_08AB23BC;
    }
L_08AB23BC:
    aot_gpr_31 = (0x08AB23C4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB23C4u) goto L_08AB23C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB23C4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AB23C8;
L_08AB23C8:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(280), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08AB23F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-304));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(276), aot_run_words); }
    aot_gpr_31 = (0x08AB241Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10002));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB241Cu) goto L_08AB241C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB241C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB242Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10002));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 387u, 0x08806BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB242Cu) goto L_08AB242C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB242C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB243Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10003));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB243Cu) goto L_08AB243C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB243C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB245Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10004));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB245Cu) goto L_08AB245C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB245C:
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (20224u << 16u);
      if (branch_taken) {
          goto L_08AB2484;
      }
      goto L_08AB2478;
    }
L_08AB2478:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AB249C;
      }
      goto L_08AB2484;
    }
L_08AB2484:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.gpr[17] = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    goto L_08AB249C;
L_08AB249C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB2524;
      }
      goto L_08AB24B0;
    }
L_08AB24B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB24C4u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    goto L_08AB2D68;
L_08AB24C4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08AB2510;
      }
      goto L_08AB24D0;
    }
L_08AB24D0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[19] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB24DC;
      }
      goto L_08AB24D8;
    }
L_08AB24D8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AB24DC;
L_08AB24DC:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB24ECu);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB24ECu) goto L_08AB24EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB24EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB24F8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10004));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 320u, 0x088067C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB24F8u) goto L_08AB24F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB24F8:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB2508u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08AB211C;
L_08AB2508:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB2528;
      }
      goto L_08AB2510;
    }
L_08AB2510:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB24B0;
      }
      goto L_08AB2524;
    }
L_08AB2524:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB2528;
L_08AB2528:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
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
L_08AB2548:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AB256Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB256Cu) goto L_08AB256C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB256C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AB257Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB257Cu) goto L_08AB257C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB257C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2588u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2588u) goto L_08AB2588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2588:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08AB2594u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2594u) goto L_08AB2594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2594:
    aot_gpr_5 = (2219u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 3u);
    aot_gpr_31 = (0x08AB25A8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(9204));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB25A8u) goto L_08AB25A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB25A8:
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
L_08AB25C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_31 = (0x08AB260Cu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB260Cu) goto L_08AB260C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB260C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB2718;
      }
      goto L_08AB2614;
    }
L_08AB2614:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB2620u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2620u) goto L_08AB2620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2620:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB2630u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 387u, 0x08806BD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2630u) goto L_08AB2630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2630:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[23] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08AB2710;
      }
      goto L_08AB2644;
    }
L_08AB2644:
    ctx.gpr[30] = (aot_gpr_4 + static_cast<std::uint32_t>(14520));
    ctx.gpr[21] = (0u | 37u);
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(1036));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_08AB2654;
L_08AB2654:
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[23]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB2694;
      }
      goto L_08AB2664;
    }
L_08AB2664:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[22] ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AB2684;
    }
    goto L_08AB2674;
L_08AB2674:
    aot_gpr_31 = (0x08AB267Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB267Cu) goto L_08AB267C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB267C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AB2684;
L_08AB2684:
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AB2704;
      }
      goto L_08AB2694;
    }
L_08AB2694:
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[23]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (ctx.gpr[30] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB26E4;
      }
      goto L_08AB26B4;
    }
L_08AB26B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[22] ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AB26D4;
    }
    goto L_08AB26C4;
L_08AB26C4:
    aot_gpr_31 = (0x08AB26CCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB26CCu) goto L_08AB26CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB26CC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AB26D4;
L_08AB26D4:
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AB2704;
      }
      goto L_08AB26E4;
    }
L_08AB26E4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AB26F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB171C;
L_08AB26F0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB26FCu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_08AB2084;
L_08AB26FC:
    aot_gpr_31 = (0x08AB2704u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 442u, 0x0889DEF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2704u) goto L_08AB2704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2704:
    aot_gpr_4 = (ctx.gpr[23] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB2654;
      }
      goto L_08AB2710;
    }
L_08AB2710:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB2774;
      }
      goto L_08AB2718;
    }
L_08AB2718:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB2724u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2724u) goto L_08AB2724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2724:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB2734u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    goto L_08AB211C;
L_08AB2734:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AB2744u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2744u) goto L_08AB2744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2744:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB2750u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2750u) goto L_08AB2750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2750:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB2768;
      }
      goto L_08AB2758;
    }
L_08AB2758:
    aot_gpr_31 = (0x08AB2760u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 442u, 0x0889DEF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2760u) goto L_08AB2760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2760:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB2774;
      }
      goto L_08AB2768;
    }
L_08AB2768:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AB2774u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806654, 0u, 303u, 0x08806654u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2774u) goto L_08AB2774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2774:
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
L_08AB27A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1360));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1316), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 1u);
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1320), aot_run_words); }
    aot_gpr_31 = (0x08AB27E0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB27E0u) goto L_08AB27E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB27E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08AB27F4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB27F4u) goto L_08AB27F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB27F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(276));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08AB281C;
      }
      goto L_08AB2810;
    }
L_08AB2810:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08AB281C;
L_08AB281C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2828u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2828u) goto L_08AB2828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2828:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_5 = (0u | 94u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AB2848;
      }
      goto L_08AB2840;
    }
L_08AB2840:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (0u | 1u);
    goto L_08AB2848;
L_08AB2848:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08AB2854u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2854u) goto L_08AB2854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2854:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_6 = (2232u << 16u);
      if (branch_taken) {
          goto L_08AB288C;
      }
      goto L_08AB2860;
    }
L_08AB2860:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB286Cu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB286Cu) goto L_08AB286C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB286C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08AB289C;
      }
      goto L_08AB2874;
    }
L_08AB2874:
    aot_gpr_31 = (0x08AB287Cu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB287Cu) goto L_08AB287C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB287C:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AB289C;
      }
      goto L_08AB2888;
    }
L_08AB2888:
    aot_gpr_6 = (2232u << 16u);
    goto L_08AB288C;
L_08AB288C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x08AB289Cu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(10832));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB289Cu) goto L_08AB289C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB289C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1312), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB28ACu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB28ACu) goto L_08AB28AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB28AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB2988;
      }
      goto L_08AB28CC;
    }
L_08AB28CC:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1312));
    goto L_08AB28D0;
L_08AB28D0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB28E4u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    goto L_08AB2D68;
L_08AB28E4:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AB2908;
      }
      goto L_08AB28F0;
    }
L_08AB28F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB2908u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    goto L_08AB25C0;
L_08AB2908:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB2920;
      }
      goto L_08AB2910;
    }
L_08AB2910:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB2920;
      }
      goto L_08AB2918;
    }
L_08AB2918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08AB296C;
      }
      goto L_08AB2920;
    }
L_08AB2920:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB2964;
      }
      goto L_08AB2930;
    }
L_08AB2930:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[21] ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08AB294C;
    }
    goto L_08AB2940;
L_08AB2940:
    aot_gpr_31 = (0x08AB2948u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2948u) goto L_08AB2948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2948:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08AB294C;
L_08AB294C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08AB296C;
      }
      goto L_08AB2964;
    }
L_08AB2964:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB2988;
      }
      goto L_08AB296C;
    }
L_08AB296C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_08AB297C;
      }
      goto L_08AB2974;
    }
L_08AB2974:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB2988;
      }
      goto L_08AB297C;
    }
L_08AB297C:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB28D0;
      }
      goto L_08AB2988;
    }
L_08AB2988:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1312)));
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AB29A0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB29A0u) goto L_08AB29A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB29A0:
    aot_gpr_31 = (0x08AB29A8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB29A8u) goto L_08AB29A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB29A8:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB29B8u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB29B8u) goto L_08AB29B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB29B8:
    ctx.gpr[2] = (0u | 2u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1316), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1360));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08AB29EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const std::uint32_t aot_run_words[7]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08AB2A20u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2A20u) goto L_08AB2A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2A20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(1036));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (0u | 34u);
      if (branch_taken) {
          goto L_08AB2A40;
      }
      goto L_08AB2A38;
    }
L_08AB2A38:
    aot_gpr_31 = (0x08AB2A40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2A40u) goto L_08AB2A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2A40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08AB2B4C;
      }
      goto L_08AB2A60;
    }
L_08AB2A60:
    ctx.gpr[20] = (0u | 92u);
    ctx.gpr[21] = (0u | 10u);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2372));
    goto L_08AB2A6C;
L_08AB2A6C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08AB2AAC;
      }
      goto L_08AB2A78;
    }
L_08AB2A78:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08AB2AAC;
      }
      goto L_08AB2A80;
    }
L_08AB2A80:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_08AB2AAC;
      }
      goto L_08AB2A88;
    }
L_08AB2A88:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB2B0C;
      }
      goto L_08AB2A90;
    }
L_08AB2A90:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AB2AA0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2AA0u) goto L_08AB2AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2AA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2B40;
      }
      goto L_08AB2AAC;
    }
L_08AB2AAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[18] ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_08AB2AC8;
    }
    goto L_08AB2ABC;
L_08AB2ABC:
    aot_gpr_31 = (0x08AB2AC4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2AC4u) goto L_08AB2AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2AC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08AB2AC8;
L_08AB2AC8:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[18] ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_08AB2AF0;
    }
    goto L_08AB2AE4;
L_08AB2AE4:
    aot_gpr_31 = (0x08AB2AECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2AECu) goto L_08AB2AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2AEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08AB2AF0;
L_08AB2AF0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2B40;
      }
      goto L_08AB2B0C;
    }
L_08AB2B0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[18] ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_08AB2B28;
    }
    goto L_08AB2B1C;
L_08AB2B1C:
    aot_gpr_31 = (0x08AB2B24u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2B24u) goto L_08AB2B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2B24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08AB2B28;
L_08AB2B28:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    goto L_08AB2B40;
L_08AB2B40:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08AB2A6C;
      }
      goto L_08AB2B4C;
    }
L_08AB2B4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[18] ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_08AB2B68;
    }
    goto L_08AB2B5C;
L_08AB2B5C:
    aot_gpr_31 = (0x08AB2B64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2B64u) goto L_08AB2B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2B64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08AB2B68;
L_08AB2B68:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_08AB2B9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[22] = (aot_gpr_5 + static_cast<std::uint32_t>(14520));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2364));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    goto L_08AB2BE8;
L_08AB2BE8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AB2BF4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2BF4u) goto L_08AB2BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2BF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB2C08;
      }
      goto L_08AB2BFC;
    }
L_08AB2BFC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AB2BE8;
      }
      goto L_08AB2C08;
    }
L_08AB2C08:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (ctx.gpr[22] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB2C3C;
      }
      goto L_08AB2C24;
    }
L_08AB2C24:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (ctx.gpr[22] + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    goto L_08AB2C3C;
L_08AB2C3C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB2C4C;
      }
      goto L_08AB2C44;
    }
L_08AB2C44:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08AB2C4C;
L_08AB2C4C:
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AB2CA8;
      }
      goto L_08AB2C58;
    }
L_08AB2C58:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (ctx.gpr[22] + aot_gpr_5);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] & 4u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08AB2C98;
      }
      goto L_08AB2C80;
    }
L_08AB2C80:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (ctx.gpr[22] + aot_gpr_5);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] & 4u);
    goto L_08AB2C98;
L_08AB2C98:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08AB2CA8;
      }
      goto L_08AB2CA0;
    }
L_08AB2CA0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08AB2CA8;
L_08AB2CA8:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (ctx.gpr[20] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AB2CD0;
      }
      goto L_08AB2CC0;
    }
L_08AB2CC0:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2CD0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10860));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2CD0u) goto L_08AB2CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2CD0:
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB2CF0;
      }
      goto L_08AB2CE0;
    }
L_08AB2CE0:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2CF0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10908));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2CF0u) goto L_08AB2CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2CF0:
    aot_gpr_4 = (0u | 37u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08AB2D08u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2D08u) goto L_08AB2D08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2D08:
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[22]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08AB2D3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-2356));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB2D58u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(10520));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2D58u) goto L_08AB2D58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2D58:
    ctx.gpr[2] = (0u | 1u);
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
L_08AB2D68:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    goto L_08AB2D90;
L_08AB2D90:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(42) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB2F88;
      }
      goto L_08AB2DA0;
    }
L_08AB2DA0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11144)));
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
L_08AB2DB8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    aot_gpr_5 = (0u | 41u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AB2DE4;
      }
      goto L_08AB2DC8;
    }
L_08AB2DC8:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB2DDCu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    goto L_08AB1E10;
L_08AB2DDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2DE4;
    }
L_08AB2DE4:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB2DF8u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AB1E10;
L_08AB2DF8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2E00;
    }
L_08AB2E00:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2E10u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AB1EC0;
L_08AB2E10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2E18;
    }
L_08AB2E18:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 99 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 102u);
      if (branch_taken) {
          goto L_08AB2E3C;
      }
      goto L_08AB2E28;
    }
L_08AB2E28:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 98 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB2F00;
      }
      goto L_08AB2E34;
    }
L_08AB2E34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB2E4C;
      }
      goto L_08AB2E3C;
    }
L_08AB2E3C:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AB2E78;
      }
      goto L_08AB2E44;
    }
L_08AB2E44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB2F00;
      }
      goto L_08AB2E4C;
    }
L_08AB2E4C:
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2E5Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AB1BC0;
L_08AB2E5C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AB2E70;
      }
      goto L_08AB2E68;
    }
L_08AB2E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB2D90;
      }
      goto L_08AB2E70;
    }
L_08AB2E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2E78;
    }
L_08AB2E78:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 91u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AB2E9C;
      }
      goto L_08AB2E8C;
    }
L_08AB2E8C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08AB2E9Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10936));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB2E9Cu) goto L_08AB2E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB2E9C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2EA8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08AB17DC;
L_08AB2EA8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 0u);
    if (ctx.gpr[17] != aot_gpr_5) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-1))))));
        goto L_08AB2EBC;
    }
    goto L_08AB2EBC;
L_08AB2EBC:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x08AB2ECCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08AB1A24;
L_08AB2ECC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB2EF8;
      }
      goto L_08AB2ED4;
    }
L_08AB2ED4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_31 = (0x08AB2EE8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08AB1A24;
L_08AB2EE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB2EF8;
      }
      goto L_08AB2EF0;
    }
L_08AB2EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AB2D90;
      }
      goto L_08AB2EF8;
    }
L_08AB2EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2F00;
    }
L_08AB2F00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(14520));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB2F54;
      }
      goto L_08AB2F28;
    }
L_08AB2F28:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2F38u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AB1F38;
L_08AB2F38:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AB2F4C;
      }
      goto L_08AB2F44;
    }
L_08AB2F44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB2D90;
      }
      goto L_08AB2F4C;
    }
L_08AB2F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2F54;
    }
L_08AB2F54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB2F88;
      }
      goto L_08AB2F5C;
    }
L_08AB2F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2F64;
    }
L_08AB2F64:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB2F88;
      }
      goto L_08AB2F70;
    }
L_08AB2F70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[17] == aot_gpr_4) {
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
        goto L_08AB2F80;
    }
    goto L_08AB2F80;
L_08AB2F80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2F88;
    }
L_08AB2F88:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB2F94u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08AB17DC;
L_08AB2F94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB2FC8;
      }
      goto L_08AB2FA8;
    }
L_08AB2FA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_31 = (0x08AB2FBCu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08AB1B40;
L_08AB2FBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB2FC8;
      }
      goto L_08AB2FC4;
    }
L_08AB2FC4:
    ctx.gpr[20] = (0u | 1u);
    goto L_08AB2FC8;
L_08AB2FC8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 42 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB3080;
      }
      goto L_08AB2FD8;
    }
L_08AB2FD8:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-42));
      if (branch_taken) {
          goto L_08AB3080;
      }
      goto L_08AB2FE0;
    }
L_08AB2FE0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11312)));
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
L_08AB2FF8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB3014;
      }
      goto L_08AB3000;
    }
L_08AB3000:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08AB300Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB2D68;
L_08AB300C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB301C;
      }
      goto L_08AB3014;
    }
L_08AB3014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB2D90;
      }
      goto L_08AB301C;
    }
L_08AB301C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB3024;
    }
L_08AB3024:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB3038u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08AB1C90;
L_08AB3038:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB3040;
    }
L_08AB3040:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB305C;
      }
      goto L_08AB3048;
    }
L_08AB3048:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB305Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08AB1C90;
L_08AB305C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB3064;
    }
L_08AB3064:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AB3078u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08AB1D5C;
L_08AB3078:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB3080;
    }
L_08AB3080:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08AB3094;
      }
      goto L_08AB3088;
    }
L_08AB3088:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AB2D90;
      }
      goto L_08AB3094;
    }
L_08AB3094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB309C;
    }
L_08AB309C:
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
L_08AB30BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1616));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1592), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1580), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1584), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1588), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1596), aot_run_words); }
    aot_gpr_31 = (0x08AB30F0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB30F0u) goto L_08AB30F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB30F0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    aot_gpr_31 = (0x08AB3108u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3108u) goto L_08AB3108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3108:
    aot_gpr_4 = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB33C0;
      }
      goto L_08AB3114;
    }
L_08AB3114:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 37u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AB3160;
      }
      goto L_08AB3124;
    }
L_08AB3124:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB3144;
      }
      goto L_08AB3138;
    }
L_08AB3138:
    aot_gpr_31 = (0x08AB3140u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3140u) goto L_08AB3140;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3140:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    goto L_08AB3144;
L_08AB3144:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08AB33B4;
      }
      goto L_08AB3160;
    }
L_08AB3160:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 37u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1572), 0u);
        goto L_08AB31B0;
    }
    goto L_08AB3174;
L_08AB3174:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB3194;
      }
      goto L_08AB3188;
    }
L_08AB3188:
    aot_gpr_31 = (0x08AB3190u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3190u) goto L_08AB3190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3190:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    goto L_08AB3194;
L_08AB3194:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08AB33B4;
      }
      goto L_08AB31B0;
    }
L_08AB31B0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(14520));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB31E8;
      }
      goto L_08AB31D8;
    }
L_08AB31D8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    aot_gpr_5 = (0u | 36u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AB324C;
      }
      goto L_08AB31E8;
    }
L_08AB31E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(1572));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB3200u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08AB2B9C;
L_08AB3200:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 69 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB3234;
      }
      goto L_08AB3210;
    }
L_08AB3210:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 121 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-69));
      if (branch_taken) {
          goto L_08AB3234;
      }
      goto L_08AB321C;
    }
L_08AB321C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11400)));
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
L_08AB3234:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB3244u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(11008));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3244u) goto L_08AB3244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3244:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB33CC;
      }
      goto L_08AB324C;
    }
L_08AB324C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB325Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(10972));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB325Cu) goto L_08AB325C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB325C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB33CC;
      }
      goto L_08AB3264;
    }
L_08AB3264:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB3270u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3270u) goto L_08AB3270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3270:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1060));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_31 = (0x08AB3284u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3284u) goto L_08AB3284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3284:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3398;
      }
      goto L_08AB328C;
    }
L_08AB328C:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1060));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB32A0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB32A0u) goto L_08AB32A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB32A0:
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (20224u << 16u);
      if (branch_taken) {
          goto L_08AB32C8;
      }
      goto L_08AB32BC;
    }
L_08AB32BC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AB32E0;
      }
      goto L_08AB32C8;
    }
L_08AB32C8:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08AB32E0;
L_08AB32E0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AB32F0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB32F0u) goto L_08AB32F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB32F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3398;
      }
      goto L_08AB32F8;
    }
L_08AB32F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB3304u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3304u) goto L_08AB3304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3304:
    aot_gpr_31 = (0x08AB330Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB330Cu) goto L_08AB330C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB330C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1060));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    aot_gpr_31 = (0x08AB3320u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3320u) goto L_08AB3320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3320:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3398;
      }
      goto L_08AB3328;
    }
L_08AB3328:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB3338u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08AB29EC;
L_08AB3338:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB33B4;
      }
      goto L_08AB3340;
    }
L_08AB3340:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1576));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB3350u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3350u) goto L_08AB3350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3350:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1572)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AB3388;
      }
      goto L_08AB335C;
    }
L_08AB335C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1576)));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB3388;
      }
      goto L_08AB336C;
    }
L_08AB336C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB3378u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880682C, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3378u) goto L_08AB3378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3378:
    aot_gpr_31 = (0x08AB3380u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 442u, 0x0889DEF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3380u) goto L_08AB3380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3380:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB33B4;
      }
      goto L_08AB3388;
    }
L_08AB3388:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1060));
    aot_gpr_31 = (0x08AB3398u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(1040));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3398u) goto L_08AB3398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3398:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(1060));
    aot_gpr_31 = (0x08AB33A4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB33A4u) goto L_08AB33A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB33A4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AB33B4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB33B4u) goto L_08AB33B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB33B4:
    aot_gpr_4 = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB3114;
      }
      goto L_08AB33C0;
    }
L_08AB33C0:
    aot_gpr_31 = (0x08AB33C8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB33C8u) goto L_08AB33C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB33C8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AB33CC;
L_08AB33CC:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1580), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1616));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT();
    // PSPRECOMP_V811_LOCAL_LINK: preserve the 256-transfer scheduler boundary, skip outer trampoline.
    if (local_redispatch_rounds < 7u && rt.continue_generated_local_dispatch(ctx)) {
        ++local_redispatch_rounds;
        AOT_REGCACHE_SYNC_IN();
        local_transfers = 0u;
        local_pc = ctx.pc;
        entry_id = 0u;
        goto LOCAL_DISPATCH;
    }
    return;
L_08AB33F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AB3404u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 565u, 0x088BAB60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3404u) goto L_08AB3404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3404:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32744));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(60), aot_gpr_4);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
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
L_08AB3424:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AB346C;
      }
      goto L_08AB3440;
    }
L_08AB3440:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32744));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB3458u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 566u, 0x088BABB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3458u) goto L_08AB3458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3458:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB346C;
      }
      goto L_08AB3464;
    }
L_08AB3464:
    aot_gpr_31 = (0x08AB346Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB346Cu) goto L_08AB346C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB346C:
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
L_08AB3480:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AB3490u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0046_entry, 46u, 311u, 0x088BF13Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3490u) goto L_08AB3490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3490:
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
L_08AB349C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_16 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AB34D0;
      }
      goto L_08AB34C8;
    }
L_08AB34C8:
    aot_gpr_31 = (0x08AB34D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB34D0u) goto L_08AB34D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB34D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_31 = (0x08AB34DCu);
    aot_gpr_5 = (ctx.gpr[17] & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB34DCu) goto L_08AB34DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB34DC:
    aot_gpr_31 = (0x08AB34E4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 480u, 0x08A52B40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB34E4u) goto L_08AB34E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB34E4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08AB34FCu);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 10u, 0x08ADC0D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB34FCu) goto L_08AB34FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB34FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB350C;
      }
      goto L_08AB3504;
    }
L_08AB3504:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3520;
      }
      goto L_08AB350C;
    }
L_08AB350C:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB3520u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0047_entry, 47u, 56u, 0x088C05C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3520u) goto L_08AB3520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3520:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
L_08AB3538:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u | 56u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    ctx.gpr[17] = (ctx.lo);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB3574;
      }
      goto L_08AB356C;
    }
L_08AB356C:
    aot_gpr_31 = (0x08AB3574u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3574u) goto L_08AB3574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3574:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AB35AC;
      }
      goto L_08AB35A4;
    }
L_08AB35A4:
    aot_gpr_31 = (0x08AB35ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB35C8;
L_08AB35AC:
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
L_08AB35C0:
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
L_08AB35C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    goto L_08AB35F4;
L_08AB35F4:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08AB360C;
    }
    goto L_08AB35FC;
L_08AB35FC:
    aot_gpr_31 = (0x08AB3604u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3604u) goto L_08AB3604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3604:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_08AB360C;
L_08AB360C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB3694;
      }
      goto L_08AB3634;
    }
L_08AB3634:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08AB364C;
      }
      goto L_08AB363C;
    }
L_08AB363C:
    aot_gpr_31 = (0x08AB3644u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3644u) goto L_08AB3644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3644:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_5 = (ctx.gpr[19] & 255u);
    goto L_08AB364C;
L_08AB364C:
    aot_gpr_31 = (0x08AB3654u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3654u) goto L_08AB3654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3654:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB3688;
      }
      goto L_08AB366C;
    }
L_08AB366C:
    aot_gpr_31 = (0x08AB3674u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 620u, 0x088BAF70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3674u) goto L_08AB3674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3674:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB3688;
      }
      goto L_08AB367C;
    }
L_08AB367C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AB3688u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0046_entry, 46u, 15u, 0x088BC128u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3688u) goto L_08AB3688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3688:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
      if (branch_taken) {
          goto L_08AB35F4;
      }
      goto L_08AB3694;
    }
L_08AB3694:
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
L_08AB36B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[7]{aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
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
L_08AB36D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_08AB3774;
L_08AB3774:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(816), 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB3774;
      }
      goto L_08AB3788;
    }
L_08AB3788:
    aot_gpr_31 = (0x08AB3790u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 27u, 0x08AB4198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3790u) goto L_08AB3790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3790:
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
L_08AB379C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AB37B0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 16u, 0x08AB4098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB37B0u) goto L_08AB37B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB37B0:
    aot_gpr_31 = (0x08AB37B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB36D8;
L_08AB37B8:
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
L_08AB37C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AB3800;
      }
      goto L_08AB37E0;
    }
L_08AB37E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20000));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB3808;
      }
      goto L_08AB37F8;
    }
L_08AB37F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3814;
      }
      goto L_08AB3800;
    }
L_08AB3800:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3984;
      }
      goto L_08AB3808;
    }
L_08AB3808:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    goto L_08AB3814;
L_08AB3814:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB3984;
      }
      goto L_08AB3828;
    }
L_08AB3828:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB3888;
      }
      goto L_08AB3838;
    }
L_08AB3838:
    aot_gpr_31 = (0x08AB3840u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3840u) goto L_08AB3840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3840:
    aot_gpr_5 = (16784u << 16u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AB3850u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 62u, 0x08AB437Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3850u) goto L_08AB3850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3850:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AB3880;
      }
      goto L_08AB3858;
    }
L_08AB3858:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08AB3874;
    }
    goto L_08AB3874;
L_08AB3874:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08AB3880u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB3994;
L_08AB3880:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB388C;
      }
      goto L_08AB3888;
    }
L_08AB3888:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08AB388C;
L_08AB388C:
    aot_gpr_31 = (0x08AB3894u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 50u, 0x08AB42A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3894u) goto L_08AB3894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3894:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08AB38A4;
L_08AB38A4:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AB38CC;
      }
      goto L_08AB38B8;
    }
L_08AB38B8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08AB38D0;
      }
      goto L_08AB38C4;
    }
L_08AB38C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB38D0;
      }
      goto L_08AB38CC;
    }
L_08AB38CC:
    aot_gpr_6 = (0u | 1u);
    goto L_08AB38D0;
L_08AB38D0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AB38A4;
      }
      goto L_08AB38E4;
    }
L_08AB38E4:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          goto L_08AB38F4;
      }
      goto L_08AB38F0;
    }
L_08AB38F0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AB38F4;
L_08AB38F4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB3984;
      }
      goto L_08AB38FC;
    }
L_08AB38FC:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (0u | 0u);
    goto L_08AB3904;
L_08AB3904:
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08AB3970;
      }
      goto L_08AB3918;
    }
L_08AB3918:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AB3960;
      }
      goto L_08AB3928;
    }
L_08AB3928:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08AB394C;
      }
      goto L_08AB393C;
    }
L_08AB393C:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(816), ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(816), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3960;
      }
      goto L_08AB394C;
    }
L_08AB394C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AB3928;
      }
      goto L_08AB3960;
    }
L_08AB3960:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB3970;
      }
      goto L_08AB3968;
    }
L_08AB3968:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3984;
      }
      goto L_08AB3970;
    }
L_08AB3970:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AB3904;
      }
      goto L_08AB3984;
    }
L_08AB3984:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
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
L_08AB3994:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB39C0;
      }
      goto L_08AB39A0;
    }
L_08AB39A0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AB39C8;
      }
      goto L_08AB39B8;
    }
L_08AB39B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB39D0;
      }
      goto L_08AB39C0;
    }
L_08AB39C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3B80;
      }
      goto L_08AB39C8;
    }
L_08AB39C8:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_5 = (ctx.gpr[8] | 0u);
    goto L_08AB39D0;
L_08AB39D0:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 4800 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AB3A10;
      }
      goto L_08AB39DC;
    }
L_08AB39DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), aot_gpr_5);
    ctx.gpr[7] = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 10u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3A10;
    }
L_08AB3A10:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 2400 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AB3A50;
      }
      goto L_08AB3A1C;
    }
L_08AB3A1C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(5));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), aot_gpr_5);
    ctx.gpr[7] = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 8u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3A50;
    }
L_08AB3A50:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AB3A90;
      }
      goto L_08AB3A5C;
    }
L_08AB3A5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), aot_gpr_5);
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 6u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3A90;
    }
L_08AB3A90:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 550 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AB3AD0;
      }
      goto L_08AB3A9C;
    }
L_08AB3A9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), aot_gpr_5);
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3AD0;
    }
L_08AB3AD0:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 180 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08AB3B0C;
      }
      goto L_08AB3ADC;
    }
L_08AB3ADC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), aot_gpr_5);
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3B0C;
    }
L_08AB3B0C:
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08AB3B48;
      }
      goto L_08AB3B18;
    }
L_08AB3B18:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3B48;
    }
L_08AB3B48:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
      if (branch_taken) {
          goto L_08AB3B5C;
      }
      goto L_08AB3B50;
    }
L_08AB3B50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9336)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9336), aot_gpr_5);
    goto L_08AB3B5C;
L_08AB3B5C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (0u | 0u);
    goto L_08AB3B70;
L_08AB3B70:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08AB3B80;
      }
      goto L_08AB3B78;
    }
L_08AB3B78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_08AB3B80;
L_08AB3B80:
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
L_08AB3B88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (aot_gpr_6 | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_5 = (ctx.gpr[10] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    aot_gpr_4 = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AB3BBC;
      }
      goto L_08AB3BB4;
    }
L_08AB3BB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3BDC;
      }
      goto L_08AB3BBC;
    }
L_08AB3BBC:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    aot_gpr_31 = (0x08AB3BDCu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 30u, 0x08AB41B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3BDCu) goto L_08AB3BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3BDC:
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
L_08AB3BE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AB3C48;
      }
      goto L_08AB3C1C;
    }
L_08AB3C1C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08AB3C38u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 30u, 0x08AB41B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3C38u) goto L_08AB3C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3C38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AB3C50;
      }
      goto L_08AB3C40;
    }
L_08AB3C40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3C64;
      }
      goto L_08AB3C48;
    }
L_08AB3C48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3C64;
      }
      goto L_08AB3C50;
    }
L_08AB3C50:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AB3C64u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 107u, 0x08AB4688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3C64u) goto L_08AB3C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3C64:
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
L_08AB3C80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AB3CB8;
      }
      goto L_08AB3CA0;
    }
L_08AB3CA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB3CC0;
      }
      goto L_08AB3CB0;
    }
L_08AB3CB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3CC4;
      }
      goto L_08AB3CB8;
    }
L_08AB3CB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3D48;
      }
      goto L_08AB3CC0;
    }
L_08AB3CC0:
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08AB3CC4;
L_08AB3CC4:
    aot_gpr_31 = (0x08AB3CCCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 27u, 0x08AB4198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AB3CCCu) goto L_08AB3CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AB3CCC:
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3CD8;
    }
L_08AB3CD8:
    aot_gpr_16 = (aot_gpr_16 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_16);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11656)));
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
L_08AB3CF0:
    aot_gpr_4 = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3CFC;
    }
L_08AB3CFC:
    aot_gpr_4 = (0u | 200u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D08;
    }
L_08AB3D08:
    aot_gpr_4 = (0u | 570u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D14;
    }
L_08AB3D14:
    aot_gpr_4 = (0u | 1220u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D20;
    }
L_08AB3D20:
    aot_gpr_4 = (0u | 2420u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D2C;
    }
L_08AB3D2C:
    aot_gpr_4 = (0u | 4820u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D38;
    }
L_08AB3D38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D40;
    }
L_08AB3D40:
    aot_gpr_31 = (0x08AB3D48u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AB3994;
L_08AB3D48:
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
L_08AB3D5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AB3D84;
      }
      goto L_08AB3D7C;
    }
L_08AB3D7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3DA0;
      }
      goto L_08AB3D84;
    }
L_08AB3D84:
    aot_gpr_31 = (0x08AB3D8Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AB3E3C;
L_08AB3D8C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB3D98u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08AB3C80;
L_08AB3D98:
    aot_gpr_31 = (0x08AB3DA0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AB3994;
L_08AB3DA0:
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
L_08AB3DB4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AB3DF0;
      }
      goto L_08AB3DD4;
    }
L_08AB3DD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB3DF8;
      }
      goto L_08AB3DE8;
    }
L_08AB3DE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3E04;
      }
      goto L_08AB3DF0;
    }
L_08AB3DF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3E28;
      }
      goto L_08AB3DF8;
    }
L_08AB3DF8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AB3E04u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AB3C80;
L_08AB3E04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AB3E1C;
      }
      goto L_08AB3E14;
    }
L_08AB3E14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3E28;
      }
      goto L_08AB3E1C;
    }
L_08AB3E1C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AB3E28u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08AB3C80;
L_08AB3E28:
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
L_08AB3E3C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB3E6C;
      }
      goto L_08AB3E48;
    }
L_08AB3E48:
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3E54;
    }
L_08AB3E54:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11688)));
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
L_08AB3E6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3E74;
    }
L_08AB3E74:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), aot_gpr_4);
    aot_gpr_4 = (0u | 110u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3E88;
    }
L_08AB3E88:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), aot_gpr_4);
    aot_gpr_4 = (0u | 365u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3E9C;
    }
L_08AB3E9C:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), aot_gpr_4);
    aot_gpr_4 = (0u | 875u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3EB0;
    }
L_08AB3EB0:
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), aot_gpr_4);
    aot_gpr_4 = (0u | 1800u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3EC4;
    }
L_08AB3EC4:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), aot_gpr_4);
    aot_gpr_4 = (0u | 3600u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3ED8;
    }
L_08AB3ED8:
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), aot_gpr_4);
    aot_gpr_4 = (0u | 7200u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), aot_gpr_4);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3EEC;
    }
L_08AB3EEC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), 0u);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3EF8;
    }
L_08AB3EF8:
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
L_08AB3F00:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AB3F14;
      }
      goto L_08AB3F0C;
    }
L_08AB3F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3F20;
      }
      goto L_08AB3F14;
    }
L_08AB3F14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    goto L_08AB3F20;
L_08AB3F20:
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
L_08AB3F28:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB3F4C;
      }
      goto L_08AB3F34;
    }
L_08AB3F34:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3F60;
      }
      goto L_08AB3F44;
    }
L_08AB3F44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08AB3F54;
      }
      goto L_08AB3F4C;
    }
L_08AB3F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3F68;
      }
      goto L_08AB3F54;
    }
L_08AB3F54:
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB3F64;
      }
      goto L_08AB3F60;
    }
L_08AB3F60:
    aot_gpr_5 = (0u | 1u);
    goto L_08AB3F64;
L_08AB3F64:
    ctx.gpr[2] = (aot_gpr_5 & 255u);
    goto L_08AB3F68;
L_08AB3F68:
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
L_08AB3F70:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB3F94;
      }
      goto L_08AB3F7C;
    }
L_08AB3F7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3FA8;
      }
      goto L_08AB3F8C;
    }
L_08AB3F8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08AB3F9C;
      }
      goto L_08AB3F94;
    }
L_08AB3F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3FB0;
      }
      goto L_08AB3F9C;
    }
L_08AB3F9C:
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB3FAC;
      }
      goto L_08AB3FA8;
    }
L_08AB3FA8:
    aot_gpr_5 = (0u | 1u);
    goto L_08AB3FAC;
L_08AB3FAC:
    ctx.gpr[2] = (aot_gpr_5 & 255u);
    goto L_08AB3FB0;
L_08AB3FB0:
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
L_08AB3FB8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AB3FDC;
      }
      goto L_08AB3FC4;
    }
L_08AB3FC4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3FF0;
      }
      goto L_08AB3FD4;
    }
L_08AB3FD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08AB3FE4;
      }
      goto L_08AB3FDC;
    }
L_08AB3FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3FF8;
      }
      goto L_08AB3FE4;
    }
L_08AB3FE4:
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AB3FF4;
      }
      goto L_08AB3FF0;
    }
L_08AB3FF0:
    aot_gpr_5 = (0u | 1u);
    goto L_08AB3FF4;
L_08AB3FF4:
    ctx.gpr[2] = (aot_gpr_5 & 255u);
    goto L_08AB3FF8;
L_08AB3FF8:
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
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0171(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0171_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_171(Runtime &runtime) {
    runtime.register_generated_unit(171u, 0x08AB0000u, 16384u, &recomp_unit_0171, &recomp_unit_0171_entry);
    runtime.register_function(0x08AB0000u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB001Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0038u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0050u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB005Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0064u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0078u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0088u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0094u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0100u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0180u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0190u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB020Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0218u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0220u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0248u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0258u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0280u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB028Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0300u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0308u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0310u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0314u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0320u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB032Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0338u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0348u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0350u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0360u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB036Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB037Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB038Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0394u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0410u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0418u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB042Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB043Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0444u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB044Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0454u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0488u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB049Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0510u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0548u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0558u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0564u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0574u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB057Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0588u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0590u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0604u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0614u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB064Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0654u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0668u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0688u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB069Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB06F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0724u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB073Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0754u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB076Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB078Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0800u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0808u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0814u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0824u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB082Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0844u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0854u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0860u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0870u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB087Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0880u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0888u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0900u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0908u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0928u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0934u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB094Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0950u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB096Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0984u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AD0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0ECCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0ED4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F30u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1004u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB100Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1014u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1018u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1020u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1030u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1048u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1050u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1058u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1060u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1068u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1070u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1078u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1080u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1088u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1090u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1098u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB110Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1118u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1120u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1138u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1140u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1148u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1150u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB117Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB118Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB119Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB120Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1214u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1224u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1244u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1278u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB128Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1310u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1318u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1340u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1374u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1388u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB139Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB140Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1414u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB143Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1470u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1480u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1498u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB151Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1534u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1544u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1550u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1560u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1568u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1584u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1588u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB160Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1618u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1628u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1630u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1650u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1658u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1680u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1690u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1704u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB171Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1730u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1740u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1754u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1764u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB176Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1778u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1794u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB179Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1800u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB180Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1814u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1820u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1830u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1838u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1840u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1854u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1858u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1860u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB186Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB187Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1884u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1914u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB191Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB192Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1944u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1958u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB196Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1980u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1994u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1ACCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DD0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1EA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1EB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1EC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1EE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2004u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB200Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB201Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2028u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB203Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2044u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2054u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB205Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2064u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2084u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2104u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2110u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB211Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2150u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB215Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2164u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2174u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB217Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB218Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2194u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2208u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2220u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2238u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2248u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2254u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB225Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB226Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2270u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB227Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2284u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2290u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2298u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2304u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB230Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2324u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB232Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB233Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2350u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB235Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2374u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2388u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2398u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB241Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB242Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB243Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB245Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2478u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2484u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB249Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2508u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2510u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2524u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2528u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2548u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB256Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB257Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2588u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2594u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB260Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2614u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2620u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2630u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2644u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2654u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2664u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2674u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB267Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2684u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2694u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2704u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2710u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2718u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2724u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2734u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2744u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2750u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2758u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2760u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2768u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2774u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2810u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB281Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2828u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2840u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2848u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2854u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2860u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB286Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2874u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB287Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2888u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB288Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB289Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2908u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2910u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2918u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2920u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2930u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2940u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2948u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB294Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2964u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB296Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2974u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB297Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2988u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2ABCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CD0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2ECCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2ED4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3000u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB300Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3014u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB301Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3024u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3038u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3040u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3048u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB305Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3064u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3078u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3080u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3088u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3094u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB309Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3108u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3114u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3124u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3138u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3140u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3144u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3160u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3174u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3188u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3190u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3194u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3200u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3210u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB321Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3234u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3244u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB324Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB325Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3264u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3270u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3284u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB328Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3304u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB330Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3320u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3328u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3338u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3340u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3350u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB335Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB336Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3378u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3380u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3388u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3398u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3404u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3424u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3440u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3458u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3464u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB346Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3480u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3490u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB349Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3504u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB350Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3520u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3538u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB356Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3574u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3604u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB360Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3634u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB363Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3644u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB364Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3654u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB366Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3674u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB367Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3688u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3694u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB36B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB36D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3774u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3788u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3790u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB379Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3800u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3808u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3814u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3828u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3838u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3840u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3850u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3858u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3874u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3880u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3888u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB388Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3894u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3904u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3918u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3928u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB393Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB394Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3960u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3968u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3970u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3984u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3994u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3AD0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3ADCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3BB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3BBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3BDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3BE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3EB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3EC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3ED8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3EECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3EF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FF8u, &recomp_unit_0171, "recomp_unit_0171");
}
} // namespace psprecomp
