#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0057[64] = {
    0x401542AA80200809ull, 0x44444443004A4104ull, 0x0A2240A4AAA45055ull, 0x101A488081112402ull,
    0x2948010402549441ull, 0x0820245150412810ull, 0x4040022A02810228ull, 0xA225494413491481ull,
    0x028A28B004015052ull, 0x0020042940520041ull, 0x8900080920AA2542ull, 0x0241481114804500ull,
    0x0422294A04900010ull, 0x0515000428201221ull, 0x58912210AA40010Aull, 0x0040A04540010A04ull,
    0x08A22C58B1221524ull, 0x2811011500042814ull, 0x010A05022A000850ull, 0xA000850291205240ull,
    0x489140010A050200ull, 0x1002800080550140ull, 0x0008208000040804ull, 0x00148A022002A021ull,
    0x0088844420400000ull, 0x904024020A010490ull, 0x0809024048931102ull, 0x1111129048120004ull,
    0x5209000001000111ull, 0x88820A88808A4120ull, 0x104645208000000Aull, 0x0000080549620264ull,
    0x2008040802000040ull, 0x4000000000208882ull, 0x000A000248000512ull, 0x1A4B110041000800ull,
    0x0010204000000400ull, 0x480104154AA01059ull, 0x004104120D105495ull, 0x0140101082550040ull,
    0x0041044028410002ull, 0x54A9010600942021ull, 0x08208020900A0810ull, 0x2082020C41410442ull,
    0x4490482081020808ull, 0x2094040000820CA2ull, 0x0001010000041040ull, 0x0000000000004000ull,
    0xAAA2000020004000ull, 0x14A02C48802A4482ull, 0x25020012AA4D5135ull, 0x6689028844880208ull,
    0x20011141081444C1ull, 0x285080A020012AA0ull, 0x000000002009542Cull, 0x1552002155425522ull,
    0x88A9400D55402055ull, 0x50AAAAA851550454ull, 0x008021025292A952ull, 0x2488D12842AAAA81ull,
    0x9285442097429A02ull, 0x69285442C954A946ull, 0xAAA565542C954A94ull, 0x4410499254A92A94ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0057[64] = {
    1u, 16u, 31u, 52u, 66u, 82u, 96u, 108u, 129u, 145u, 156u, 172u, 185u, 198u, 211u, 228u,
    239u, 260u, 273u, 285u, 299u, 311u, 321u, 327u, 339u, 347u, 359u, 373u, 386u, 395u, 410u, 421u,
    434u, 440u, 446u, 455u, 467u, 471u, 488u, 504u, 515u, 524u, 540u, 550u, 563u, 575u, 587u, 592u,
    593u, 602u, 619u, 640u, 656u, 670u, 684u, 693u, 713u, 733u, 757u, 774u, 796u, 817u, 842u, 870u,
};
void recomp_unit_0057_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,2,6,16 fprs=12,13,20,22 gpr_occ=4576 fpr_occ=306 gpr_total=6110 fpr_total=379
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_22 = ctx.fpr[22];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[2] = aot_gpr_2; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[22] = aot_fpr_22; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_22 = ctx.fpr[22]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E8000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0057[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0057[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088E8000;
    case 2u: goto L_088E800C;
    case 3u: goto L_088E802C;
    case 4u: goto L_088E8054;
    case 5u: goto L_088E807C;
    case 6u: goto L_088E8084;
    case 7u: goto L_088E808C;
    case 8u: goto L_088E8094;
    case 9u: goto L_088E809C;
    case 10u: goto L_088E80A4;
    case 11u: goto L_088E80B8;
    case 12u: goto L_088E80C0;
    case 13u: goto L_088E80C8;
    case 14u: goto L_088E80D0;
    case 15u: goto L_088E80F8;
    case 16u: goto L_088E8108;
    case 17u: goto L_088E8120;
    case 18u: goto L_088E8138;
    case 19u: goto L_088E8144;
    case 20u: goto L_088E814C;
    case 21u: goto L_088E8158;
    case 22u: goto L_088E8180;
    case 23u: goto L_088E8184;
    case 24u: goto L_088E8198;
    case 25u: goto L_088E81A8;
    case 26u: goto L_088E81B8;
    case 27u: goto L_088E81C8;
    case 28u: goto L_088E81D8;
    case 29u: goto L_088E81E8;
    case 30u: goto L_088E81F8;
    case 31u: goto L_088E8200;
    case 32u: goto L_088E8208;
    case 33u: goto L_088E8210;
    case 34u: goto L_088E8218;
    case 35u: goto L_088E8230;
    case 36u: goto L_088E8238;
    case 37u: goto L_088E8248;
    case 38u: goto L_088E8254;
    case 39u: goto L_088E825C;
    case 40u: goto L_088E8264;
    case 41u: goto L_088E826C;
    case 42u: goto L_088E8274;
    case 43u: goto L_088E827C;
    case 44u: goto L_088E8288;
    case 45u: goto L_088E8294;
    case 46u: goto L_088E829C;
    case 47u: goto L_088E82B8;
    case 48u: goto L_088E82C4;
    case 49u: goto L_088E82D4;
    case 50u: goto L_088E82E4;
    case 51u: goto L_088E82EC;
    case 52u: goto L_088E8304;
    case 53u: goto L_088E8328;
    case 54u: goto L_088E8334;
    case 55u: goto L_088E8340;
    case 56u: goto L_088E8350;
    case 57u: goto L_088E8360;
    case 58u: goto L_088E837C;
    case 59u: goto L_088E839C;
    case 60u: goto L_088E83AC;
    case 61u: goto L_088E83B8;
    case 62u: goto L_088E83C4;
    case 63u: goto L_088E83CC;
    case 64u: goto L_088E83D0;
    case 65u: goto L_088E83F0;
    case 66u: goto L_088E8400;
    case 67u: goto L_088E8418;
    case 68u: goto L_088E8428;
    case 69u: goto L_088E8430;
    case 70u: goto L_088E843C;
    case 71u: goto L_088E8448;
    case 72u: goto L_088E8450;
    case 73u: goto L_088E8458;
    case 74u: goto L_088E8464;
    case 75u: goto L_088E8488;
    case 76u: goto L_088E84A0;
    case 77u: goto L_088E84CC;
    case 78u: goto L_088E84D8;
    case 79u: goto L_088E84E0;
    case 80u: goto L_088E84EC;
    case 81u: goto L_088E84F4;
    case 82u: goto L_088E8510;
    case 83u: goto L_088E852C;
    case 84u: goto L_088E8534;
    case 85u: goto L_088E8540;
    case 86u: goto L_088E8558;
    case 87u: goto L_088E8570;
    case 88u: goto L_088E8578;
    case 89u: goto L_088E8580;
    case 90u: goto L_088E8590;
    case 91u: goto L_088E8598;
    case 92u: goto L_088E85A8;
    case 93u: goto L_088E85B4;
    case 94u: goto L_088E85D4;
    case 95u: goto L_088E85EC;
    case 96u: goto L_088E860C;
    case 97u: goto L_088E8614;
    case 98u: goto L_088E8624;
    case 99u: goto L_088E8640;
    case 100u: goto L_088E865C;
    case 101u: goto L_088E8664;
    case 102u: goto L_088E8684;
    case 103u: goto L_088E868C;
    case 104u: goto L_088E8694;
    case 105u: goto L_088E86A4;
    case 106u: goto L_088E86D8;
    case 107u: goto L_088E86F8;
    case 108u: goto L_088E8700;
    case 109u: goto L_088E871C;
    case 110u: goto L_088E8728;
    case 111u: goto L_088E8730;
    case 112u: goto L_088E8740;
    case 113u: goto L_088E874C;
    case 114u: goto L_088E8758;
    case 115u: goto L_088E8760;
    case 116u: goto L_088E8764;
    case 117u: goto L_088E8770;
    case 118u: goto L_088E8788;
    case 119u: goto L_088E8798;
    case 120u: goto L_088E87A0;
    case 121u: goto L_088E87AC;
    case 122u: goto L_088E87B8;
    case 123u: goto L_088E87C0;
    case 124u: goto L_088E87C8;
    case 125u: goto L_088E87D4;
    case 126u: goto L_088E87E4;
    case 127u: goto L_088E87F4;
    case 128u: goto L_088E87FC;
    case 129u: goto L_088E8804;
    case 130u: goto L_088E8810;
    case 131u: goto L_088E8818;
    case 132u: goto L_088E8830;
    case 133u: goto L_088E8838;
    case 134u: goto L_088E8840;
    case 135u: goto L_088E8868;
    case 136u: goto L_088E8890;
    case 137u: goto L_088E8894;
    case 138u: goto L_088E889C;
    case 139u: goto L_088E88AC;
    case 140u: goto L_088E88B4;
    case 141u: goto L_088E88C4;
    case 142u: goto L_088E88CC;
    case 143u: goto L_088E88DC;
    case 144u: goto L_088E88E4;
    case 145u: goto L_088E8900;
    case 146u: goto L_088E8918;
    case 147u: goto L_088E8944;
    case 148u: goto L_088E8950;
    case 149u: goto L_088E8958;
    case 150u: goto L_088E8978;
    case 151u: goto L_088E8980;
    case 152u: goto L_088E898C;
    case 153u: goto L_088E8994;
    case 154u: goto L_088E89A8;
    case 155u: goto L_088E89D4;
    case 156u: goto L_088E8A04;
    case 157u: goto L_088E8A18;
    case 158u: goto L_088E8A20;
    case 159u: goto L_088E8A28;
    case 160u: goto L_088E8A34;
    case 161u: goto L_088E8A44;
    case 162u: goto L_088E8A4C;
    case 163u: goto L_088E8A54;
    case 164u: goto L_088E8A5C;
    case 165u: goto L_088E8A74;
    case 166u: goto L_088E8A80;
    case 167u: goto L_088E8A8C;
    case 168u: goto L_088E8AAC;
    case 169u: goto L_088E8AE0;
    case 170u: goto L_088E8AEC;
    case 171u: goto L_088E8AFC;
    case 172u: goto L_088E8B20;
    case 173u: goto L_088E8B28;
    case 174u: goto L_088E8B38;
    case 175u: goto L_088E8B5C;
    case 176u: goto L_088E8B68;
    case 177u: goto L_088E8B70;
    case 178u: goto L_088E8B80;
    case 179u: goto L_088E8B90;
    case 180u: goto L_088E8BAC;
    case 181u: goto L_088E8BB8;
    case 182u: goto L_088E8BC0;
    case 183u: goto L_088E8BD8;
    case 184u: goto L_088E8BE4;
    case 185u: goto L_088E8C10;
    case 186u: goto L_088E8C50;
    case 187u: goto L_088E8C5C;
    case 188u: goto L_088E8C68;
    case 189u: goto L_088E8C84;
    case 190u: goto L_088E8C8C;
    case 191u: goto L_088E8C98;
    case 192u: goto L_088E8CA0;
    case 193u: goto L_088E8CAC;
    case 194u: goto L_088E8CB4;
    case 195u: goto L_088E8CC4;
    case 196u: goto L_088E8CD4;
    case 197u: goto L_088E8CE8;
    case 198u: goto L_088E8D00;
    case 199u: goto L_088E8D14;
    case 200u: goto L_088E8D24;
    case 201u: goto L_088E8D30;
    case 202u: goto L_088E8D54;
    case 203u: goto L_088E8D6C;
    case 204u: goto L_088E8D74;
    case 205u: goto L_088E8D88;
    case 206u: goto L_088E8DC0;
    case 207u: goto L_088E8DC8;
    case 208u: goto L_088E8DD0;
    case 209u: goto L_088E8DE0;
    case 210u: goto L_088E8DE8;
    case 211u: goto L_088E8E04;
    case 212u: goto L_088E8E0C;
    case 213u: goto L_088E8E20;
    case 214u: goto L_088E8E58;
    case 215u: goto L_088E8E64;
    case 216u: goto L_088E8E6C;
    case 217u: goto L_088E8E74;
    case 218u: goto L_088E8E7C;
    case 219u: goto L_088E8E90;
    case 220u: goto L_088E8EA4;
    case 221u: goto L_088E8EB4;
    case 222u: goto L_088E8EC0;
    case 223u: goto L_088E8ED0;
    case 224u: goto L_088E8EDC;
    case 225u: goto L_088E8EEC;
    case 226u: goto L_088E8EF0;
    case 227u: goto L_088E8EF8;
    case 228u: goto L_088E8F08;
    case 229u: goto L_088E8F24;
    case 230u: goto L_088E8F2C;
    case 231u: goto L_088E8F40;
    case 232u: goto L_088E8F78;
    case 233u: goto L_088E8F80;
    case 234u: goto L_088E8F88;
    case 235u: goto L_088E8F98;
    case 236u: goto L_088E8FB4;
    case 237u: goto L_088E8FBC;
    case 238u: goto L_088E8FD8;
    case 239u: goto L_088E9008;
    case 240u: goto L_088E9014;
    case 241u: goto L_088E9020;
    case 242u: goto L_088E9028;
    case 243u: goto L_088E9030;
    case 244u: goto L_088E9044;
    case 245u: goto L_088E9054;
    case 246u: goto L_088E9060;
    case 247u: goto L_088E9070;
    case 248u: goto L_088E9074;
    case 249u: goto L_088E907C;
    case 250u: goto L_088E908C;
    case 251u: goto L_088E9090;
    case 252u: goto L_088E9098;
    case 253u: goto L_088E90A8;
    case 254u: goto L_088E90AC;
    case 255u: goto L_088E90B4;
    case 256u: goto L_088E90C4;
    case 257u: goto L_088E90D4;
    case 258u: goto L_088E90DC;
    case 259u: goto L_088E90EC;
    case 260u: goto L_088E9108;
    case 261u: goto L_088E9110;
    case 262u: goto L_088E912C;
    case 263u: goto L_088E9134;
    case 264u: goto L_088E9148;
    case 265u: goto L_088E9180;
    case 266u: goto L_088E9188;
    case 267u: goto L_088E9190;
    case 268u: goto L_088E91A0;
    case 269u: goto L_088E91C0;
    case 270u: goto L_088E91D0;
    case 271u: goto L_088E91EC;
    case 272u: goto L_088E91F4;
    case 273u: goto L_088E9210;
    case 274u: goto L_088E9218;
    case 275u: goto L_088E922C;
    case 276u: goto L_088E9264;
    case 277u: goto L_088E926C;
    case 278u: goto L_088E9274;
    case 279u: goto L_088E9284;
    case 280u: goto L_088E92A0;
    case 281u: goto L_088E92A8;
    case 282u: goto L_088E92C4;
    case 283u: goto L_088E92CC;
    case 284u: goto L_088E92E0;
    case 285u: goto L_088E9318;
    case 286u: goto L_088E9324;
    case 287u: goto L_088E9330;
    case 288u: goto L_088E9338;
    case 289u: goto L_088E9354;
    case 290u: goto L_088E9360;
    case 291u: goto L_088E9370;
    case 292u: goto L_088E937C;
    case 293u: goto L_088E9384;
    case 294u: goto L_088E93A0;
    case 295u: goto L_088E93A8;
    case 296u: goto L_088E93BC;
    case 297u: goto L_088E93F4;
    case 298u: goto L_088E93FC;
    case 299u: goto L_088E9424;
    case 300u: goto L_088E9440;
    case 301u: goto L_088E9448;
    case 302u: goto L_088E9464;
    case 303u: goto L_088E946C;
    case 304u: goto L_088E9480;
    case 305u: goto L_088E94B8;
    case 306u: goto L_088E94C0;
    case 307u: goto L_088E94D0;
    case 308u: goto L_088E94DC;
    case 309u: goto L_088E94EC;
    case 310u: goto L_088E94F8;
    case 311u: goto L_088E9518;
    case 312u: goto L_088E9520;
    case 313u: goto L_088E9540;
    case 314u: goto L_088E9548;
    case 315u: goto L_088E9550;
    case 316u: goto L_088E9558;
    case 317u: goto L_088E957C;
    case 318u: goto L_088E95BC;
    case 319u: goto L_088E95C4;
    case 320u: goto L_088E95F0;
    case 321u: goto L_088E9608;
    case 322u: goto L_088E962C;
    case 323u: goto L_088E9648;
    case 324u: goto L_088E969C;
    case 325u: goto L_088E96B4;
    case 326u: goto L_088E96CC;
    case 327u: goto L_088E9700;
    case 328u: goto L_088E9714;
    case 329u: goto L_088E9734;
    case 330u: goto L_088E973C;
    case 331u: goto L_088E9744;
    case 332u: goto L_088E9774;
    case 333u: goto L_088E9784;
    case 334u: goto L_088E97A4;
    case 335u: goto L_088E97AC;
    case 336u: goto L_088E97BC;
    case 337u: goto L_088E97C8;
    case 338u: goto L_088E97D0;
    case 339u: goto L_088E9858;
    case 340u: goto L_088E9874;
    case 341u: goto L_088E9888;
    case 342u: goto L_088E9898;
    case 343u: goto L_088E98A8;
    case 344u: goto L_088E98BC;
    case 345u: goto L_088E98CC;
    case 346u: goto L_088E98DC;
    case 347u: goto L_088E9910;
    case 348u: goto L_088E991C;
    case 349u: goto L_088E9928;
    case 350u: goto L_088E9940;
    case 351u: goto L_088E9964;
    case 352u: goto L_088E996C;
    case 353u: goto L_088E9984;
    case 354u: goto L_088E99A8;
    case 355u: goto L_088E99B4;
    case 356u: goto L_088E99D8;
    case 357u: goto L_088E99F0;
    case 358u: goto L_088E99FC;
    case 359u: goto L_088E9A04;
    case 360u: goto L_088E9A20;
    case 361u: goto L_088E9A30;
    case 362u: goto L_088E9A40;
    case 363u: goto L_088E9A44;
    case 364u: goto L_088E9A50;
    case 365u: goto L_088E9A5C;
    case 366u: goto L_088E9A6C;
    case 367u: goto L_088E9A78;
    case 368u: goto L_088E9A98;
    case 369u: goto L_088E9AA4;
    case 370u: goto L_088E9AC0;
    case 371u: goto L_088E9ACC;
    case 372u: goto L_088E9AEC;
    case 373u: goto L_088E9B08;
    case 374u: goto L_088E9B44;
    case 375u: goto L_088E9B50;
    case 376u: goto L_088E9B6C;
    case 377u: goto L_088E9B78;
    case 378u: goto L_088E9B90;
    case 379u: goto L_088E9B9C;
    case 380u: goto L_088E9BA4;
    case 381u: goto L_088E9BB0;
    case 382u: goto L_088E9BC0;
    case 383u: goto L_088E9BD0;
    case 384u: goto L_088E9BE0;
    case 385u: goto L_088E9BF0;
    case 386u: goto L_088E9C00;
    case 387u: goto L_088E9C10;
    case 388u: goto L_088E9C20;
    case 389u: goto L_088E9C60;
    case 390u: goto L_088E9CC0;
    case 391u: goto L_088E9CCC;
    case 392u: goto L_088E9CE4;
    case 393u: goto L_088E9CF0;
    case 394u: goto L_088E9CF8;
    case 395u: goto L_088E9D14;
    case 396u: goto L_088E9D20;
    case 397u: goto L_088E9D38;
    case 398u: goto L_088E9D44;
    case 399u: goto L_088E9D4C;
    case 400u: goto L_088E9D5C;
    case 401u: goto L_088E9D7C;
    case 402u: goto L_088E9D8C;
    case 403u: goto L_088E9D9C;
    case 404u: goto L_088E9DA4;
    case 405u: goto L_088E9DAC;
    case 406u: goto L_088E9DC4;
    case 407u: goto L_088E9DDC;
    case 408u: goto L_088E9DEC;
    case 409u: goto L_088E9DFC;
    case 410u: goto L_088E9E04;
    case 411u: goto L_088E9E0C;
    case 412u: goto L_088E9E7C;
    case 413u: goto L_088E9E94;
    case 414u: goto L_088E9EA0;
    case 415u: goto L_088E9EA8;
    case 416u: goto L_088E9EB8;
    case 417u: goto L_088E9EC4;
    case 418u: goto L_088E9EC8;
    case 419u: goto L_088E9ED8;
    case 420u: goto L_088E9EF0;
    case 421u: goto L_088E9F08;
    case 422u: goto L_088E9F14;
    case 423u: goto L_088E9F18;
    case 424u: goto L_088E9F24;
    case 425u: goto L_088E9F44;
    case 426u: goto L_088E9F54;
    case 427u: goto L_088E9F58;
    case 428u: goto L_088E9F60;
    case 429u: goto L_088E9F6C;
    case 430u: goto L_088E9F78;
    case 431u: goto L_088E9F80;
    case 432u: goto L_088E9F88;
    case 433u: goto L_088E9FAC;
    case 434u: goto L_088EA018;
    case 435u: goto L_088EA064;
    case 436u: goto L_088EA08C;
    case 437u: goto L_088EA0A8;
    case 438u: goto L_088EA0CC;
    case 439u: goto L_088EA0F4;
    case 440u: goto L_088EA104;
    case 441u: goto L_088EA11C;
    case 442u: goto L_088EA12C;
    case 443u: goto L_088EA13C;
    case 444u: goto L_088EA154;
    case 445u: goto L_088EA1F8;
    case 446u: goto L_088EA204;
    case 447u: goto L_088EA210;
    case 448u: goto L_088EA220;
    case 449u: goto L_088EA228;
    case 450u: goto L_088EA26C;
    case 451u: goto L_088EA278;
    case 452u: goto L_088EA284;
    case 453u: goto L_088EA2C4;
    case 454u: goto L_088EA2CC;
    case 455u: goto L_088EA32C;
    case 456u: goto L_088EA360;
    case 457u: goto L_088EA378;
    case 458u: goto L_088EA3A0;
    case 459u: goto L_088EA3B0;
    case 460u: goto L_088EA3C0;
    case 461u: goto L_088EA3C4;
    case 462u: goto L_088EA3CC;
    case 463u: goto L_088EA3D8;
    case 464u: goto L_088EA3E4;
    case 465u: goto L_088EA3EC;
    case 466u: goto L_088EA3F0;
    case 467u: goto L_088EA428;
    case 468u: goto L_088EA498;
    case 469u: goto L_088EA4B4;
    case 470u: goto L_088EA4D0;
    case 471u: goto L_088EA500;
    case 472u: goto L_088EA50C;
    case 473u: goto L_088EA510;
    case 474u: goto L_088EA518;
    case 475u: goto L_088EA530;
    case 476u: goto L_088EA554;
    case 477u: goto L_088EA55C;
    case 478u: goto L_088EA564;
    case 479u: goto L_088EA56C;
    case 480u: goto L_088EA578;
    case 481u: goto L_088EA580;
    case 482u: goto L_088EA588;
    case 483u: goto L_088EA590;
    case 484u: goto L_088EA5A8;
    case 485u: goto L_088EA5C0;
    case 486u: goto L_088EA5EC;
    case 487u: goto L_088EA5F8;
    case 488u: goto L_088EA600;
    case 489u: goto L_088EA608;
    case 490u: goto L_088EA610;
    case 491u: goto L_088EA61C;
    case 492u: goto L_088EA628;
    case 493u: goto L_088EA630;
    case 494u: goto L_088EA638;
    case 495u: goto L_088EA650;
    case 496u: goto L_088EA660;
    case 497u: goto L_088EA668;
    case 498u: goto L_088EA66C;
    case 499u: goto L_088EA684;
    case 500u: goto L_088EA690;
    case 501u: goto L_088EA6A8;
    case 502u: goto L_088EA6C0;
    case 503u: goto L_088EA6D8;
    case 504u: goto L_088EA718;
    case 505u: goto L_088EA740;
    case 506u: goto L_088EA748;
    case 507u: goto L_088EA750;
    case 508u: goto L_088EA758;
    case 509u: goto L_088EA764;
    case 510u: goto L_088EA77C;
    case 511u: goto L_088EA790;
    case 512u: goto L_088EA7B0;
    case 513u: goto L_088EA7D8;
    case 514u: goto L_088EA7E0;
    case 515u: goto L_088EA804;
    case 516u: goto L_088EA840;
    case 517u: goto L_088EA858;
    case 518u: goto L_088EA86C;
    case 519u: goto L_088EA874;
    case 520u: goto L_088EA898;
    case 521u: goto L_088EA8A8;
    case 522u: goto L_088EA8C0;
    case 523u: goto L_088EA8D8;
    case 524u: goto L_088EA900;
    case 525u: goto L_088EA914;
    case 526u: goto L_088EA934;
    case 527u: goto L_088EA948;
    case 528u: goto L_088EA950;
    case 529u: goto L_088EA95C;
    case 530u: goto L_088EA984;
    case 531u: goto L_088EA988;
    case 532u: goto L_088EA9A0;
    case 533u: goto L_088EA9C0;
    case 534u: goto L_088EA9CC;
    case 535u: goto L_088EA9D4;
    case 536u: goto L_088EA9DC;
    case 537u: goto L_088EA9E8;
    case 538u: goto L_088EA9F0;
    case 539u: goto L_088EA9F8;
    case 540u: goto L_088EAA10;
    case 541u: goto L_088EAA2C;
    case 542u: goto L_088EAA44;
    case 543u: goto L_088EAA4C;
    case 544u: goto L_088EAA70;
    case 545u: goto L_088EAA7C;
    case 546u: goto L_088EAA94;
    case 547u: goto L_088EAABC;
    case 548u: goto L_088EAAD4;
    case 549u: goto L_088EAAEC;
    case 550u: goto L_088EAB04;
    case 551u: goto L_088EAB18;
    case 552u: goto L_088EAB28;
    case 553u: goto L_088EAB40;
    case 554u: goto L_088EAB58;
    case 555u: goto L_088EAB60;
    case 556u: goto L_088EAB78;
    case 557u: goto L_088EAB88;
    case 558u: goto L_088EAB8C;
    case 559u: goto L_088EABA4;
    case 560u: goto L_088EABC4;
    case 561u: goto L_088EABDC;
    case 562u: goto L_088EABF4;
    case 563u: goto L_088EAC0C;
    case 564u: goto L_088EAC2C;
    case 565u: goto L_088EAC44;
    case 566u: goto L_088EAC60;
    case 567u: goto L_088EAC7C;
    case 568u: goto L_088EAC94;
    case 569u: goto L_088EACAC;
    case 570u: goto L_088EACB8;
    case 571u: goto L_088EACD0;
    case 572u: goto L_088EACDC;
    case 573u: goto L_088EACE8;
    case 574u: goto L_088EACF8;
    case 575u: goto L_088EAD04;
    case 576u: goto L_088EAD14;
    case 577u: goto L_088EAD1C;
    case 578u: goto L_088EAD28;
    case 579u: goto L_088EAD2C;
    case 580u: goto L_088EAD44;
    case 581u: goto L_088EAD5C;
    case 582u: goto L_088EADA8;
    case 583u: goto L_088EADC8;
    case 584u: goto L_088EADD0;
    case 585u: goto L_088EADDC;
    case 586u: goto L_088EADF4;
    case 587u: goto L_088EAE18;
    case 588u: goto L_088EAE30;
    case 589u: goto L_088EAE48;
    case 590u: goto L_088EAEA0;
    case 591u: goto L_088EAEC0;
    case 592u: goto L_088EAF38;
    case 593u: goto L_088EB038;
    case 594u: goto L_088EB074;
    case 595u: goto L_088EB0C4;
    case 596u: goto L_088EB0D4;
    case 597u: goto L_088EB0DC;
    case 598u: goto L_088EB0E4;
    case 599u: goto L_088EB0EC;
    case 600u: goto L_088EB0F4;
    case 601u: goto L_088EB0FC;
    case 602u: goto L_088EB104;
    case 603u: goto L_088EB11C;
    case 604u: goto L_088EB128;
    case 605u: goto L_088EB138;
    case 606u: goto L_088EB144;
    case 607u: goto L_088EB14C;
    case 608u: goto L_088EB154;
    case 609u: goto L_088EB17C;
    case 610u: goto L_088EB18C;
    case 611u: goto L_088EB198;
    case 612u: goto L_088EB1A8;
    case 613u: goto L_088EB1AC;
    case 614u: goto L_088EB1B4;
    case 615u: goto L_088EB1D4;
    case 616u: goto L_088EB1DC;
    case 617u: goto L_088EB1E8;
    case 618u: goto L_088EB1F0;
    case 619u: goto L_088EB200;
    case 620u: goto L_088EB208;
    case 621u: goto L_088EB210;
    case 622u: goto L_088EB214;
    case 623u: goto L_088EB220;
    case 624u: goto L_088EB230;
    case 625u: goto L_088EB238;
    case 626u: goto L_088EB240;
    case 627u: goto L_088EB248;
    case 628u: goto L_088EB24C;
    case 629u: goto L_088EB258;
    case 630u: goto L_088EB264;
    case 631u: goto L_088EB26C;
    case 632u: goto L_088EB274;
    case 633u: goto L_088EB27C;
    case 634u: goto L_088EB284;
    case 635u: goto L_088EB290;
    case 636u: goto L_088EB2C4;
    case 637u: goto L_088EB2E0;
    case 638u: goto L_088EB2E8;
    case 639u: goto L_088EB2F4;
    case 640u: goto L_088EB30C;
    case 641u: goto L_088EB324;
    case 642u: goto L_088EB34C;
    case 643u: goto L_088EB35C;
    case 644u: goto L_088EB368;
    case 645u: goto L_088EB378;
    case 646u: goto L_088EB38C;
    case 647u: goto L_088EB39C;
    case 648u: goto L_088EB3A4;
    case 649u: goto L_088EB3C0;
    case 650u: goto L_088EB3CC;
    case 651u: goto L_088EB3DC;
    case 652u: goto L_088EB3E4;
    case 653u: goto L_088EB3E8;
    case 654u: goto L_088EB3F4;
    case 655u: goto L_088EB3F8;
    case 656u: goto L_088EB400;
    case 657u: goto L_088EB418;
    case 658u: goto L_088EB41C;
    case 659u: goto L_088EB428;
    case 660u: goto L_088EB438;
    case 661u: goto L_088EB448;
    case 662u: goto L_088EB450;
    case 663u: goto L_088EB46C;
    case 664u: goto L_088EB480;
    case 665u: goto L_088EB498;
    case 666u: goto L_088EB4A0;
    case 667u: goto L_088EB4B0;
    case 668u: goto L_088EB4C0;
    case 669u: goto L_088EB4F4;
    case 670u: goto L_088EB514;
    case 671u: goto L_088EB51C;
    case 672u: goto L_088EB524;
    case 673u: goto L_088EB52C;
    case 674u: goto L_088EB534;
    case 675u: goto L_088EB540;
    case 676u: goto L_088EB574;
    case 677u: goto L_088EB594;
    case 678u: goto L_088EB59C;
    case 679u: goto L_088EB5BC;
    case 680u: goto L_088EB5D0;
    case 681u: goto L_088EB5D8;
    case 682u: goto L_088EB5EC;
    case 683u: goto L_088EB5F4;
    case 684u: goto L_088EB608;
    case 685u: goto L_088EB60C;
    case 686u: goto L_088EB614;
    case 687u: goto L_088EB628;
    case 688u: goto L_088EB630;
    case 689u: goto L_088EB638;
    case 690u: goto L_088EB640;
    case 691u: goto L_088EB64C;
    case 692u: goto L_088EB674;
    case 693u: goto L_088EB704;
    case 694u: goto L_088EB714;
    case 695u: goto L_088EB720;
    case 696u: goto L_088EB728;
    case 697u: goto L_088EB730;
    case 698u: goto L_088EB738;
    case 699u: goto L_088EB744;
    case 700u: goto L_088EB758;
    case 701u: goto L_088EB760;
    case 702u: goto L_088EB768;
    case 703u: goto L_088EB770;
    case 704u: goto L_088EB778;
    case 705u: goto L_088EB780;
    case 706u: goto L_088EB794;
    case 707u: goto L_088EB7C4;
    case 708u: goto L_088EB7D0;
    case 709u: goto L_088EB7D8;
    case 710u: goto L_088EB7E0;
    case 711u: goto L_088EB7E8;
    case 712u: goto L_088EB7F0;
    case 713u: goto L_088EB800;
    case 714u: goto L_088EB808;
    case 715u: goto L_088EB810;
    case 716u: goto L_088EB818;
    case 717u: goto L_088EB834;
    case 718u: goto L_088EB858;
    case 719u: goto L_088EB860;
    case 720u: goto L_088EB868;
    case 721u: goto L_088EB870;
    case 722u: goto L_088EB878;
    case 723u: goto L_088EB880;
    case 724u: goto L_088EB888;
    case 725u: goto L_088EB88C;
    case 726u: goto L_088EB8B8;
    case 727u: goto L_088EB8C0;
    case 728u: goto L_088EB8CC;
    case 729u: goto L_088EB8D4;
    case 730u: goto L_088EB8DC;
    case 731u: goto L_088EB8EC;
    case 732u: goto L_088EB8FC;
    case 733u: goto L_088EB908;
    case 734u: goto L_088EB910;
    case 735u: goto L_088EB918;
    case 736u: goto L_088EB928;
    case 737u: goto L_088EB940;
    case 738u: goto L_088EB948;
    case 739u: goto L_088EB950;
    case 740u: goto L_088EB958;
    case 741u: goto L_088EB960;
    case 742u: goto L_088EB970;
    case 743u: goto L_088EB978;
    case 744u: goto L_088EB98C;
    case 745u: goto L_088EB994;
    case 746u: goto L_088EB99C;
    case 747u: goto L_088EB9A4;
    case 748u: goto L_088EB9AC;
    case 749u: goto L_088EB9B4;
    case 750u: goto L_088EB9BC;
    case 751u: goto L_088EB9C4;
    case 752u: goto L_088EB9CC;
    case 753u: goto L_088EB9D4;
    case 754u: goto L_088EB9DC;
    case 755u: goto L_088EB9F0;
    case 756u: goto L_088EB9F8;
    case 757u: goto L_088EBA04;
    case 758u: goto L_088EBA10;
    case 759u: goto L_088EBA18;
    case 760u: goto L_088EBA20;
    case 761u: goto L_088EBA2C;
    case 762u: goto L_088EBA34;
    case 763u: goto L_088EBA3C;
    case 764u: goto L_088EBA44;
    case 765u: goto L_088EBA50;
    case 766u: goto L_088EBA5C;
    case 767u: goto L_088EBA64;
    case 768u: goto L_088EBA70;
    case 769u: goto L_088EBA78;
    case 770u: goto L_088EBA84;
    case 771u: goto L_088EBAA0;
    case 772u: goto L_088EBAB4;
    case 773u: goto L_088EBADC;
    case 774u: goto L_088EBB00;
    case 775u: goto L_088EBB1C;
    case 776u: goto L_088EBB24;
    case 777u: goto L_088EBB2C;
    case 778u: goto L_088EBB34;
    case 779u: goto L_088EBB3C;
    case 780u: goto L_088EBB44;
    case 781u: goto L_088EBB4C;
    case 782u: goto L_088EBB54;
    case 783u: goto L_088EBB5C;
    case 784u: goto L_088EBB64;
    case 785u: goto L_088EBB78;
    case 786u: goto L_088EBB8C;
    case 787u: goto L_088EBB94;
    case 788u: goto L_088EBBA0;
    case 789u: goto L_088EBBB0;
    case 790u: goto L_088EBBB8;
    case 791u: goto L_088EBBBC;
    case 792u: goto L_088EBBCC;
    case 793u: goto L_088EBBDC;
    case 794u: goto L_088EBBE8;
    case 795u: goto L_088EBBF4;
    case 796u: goto L_088EBC04;
    case 797u: goto L_088EBC24;
    case 798u: goto L_088EBC2C;
    case 799u: goto L_088EBC30;
    case 800u: goto L_088EBC3C;
    case 801u: goto L_088EBC44;
    case 802u: goto L_088EBC58;
    case 803u: goto L_088EBC60;
    case 804u: goto L_088EBC64;
    case 805u: goto L_088EBC68;
    case 806u: goto L_088EBC70;
    case 807u: goto L_088EBC7C;
    case 808u: goto L_088EBC94;
    case 809u: goto L_088EBCA8;
    case 810u: goto L_088EBCB8;
    case 811u: goto L_088EBCC0;
    case 812u: goto L_088EBCC8;
    case 813u: goto L_088EBCDC;
    case 814u: goto L_088EBCE4;
    case 815u: goto L_088EBCF0;
    case 816u: goto L_088EBCFC;
    case 817u: goto L_088EBD04;
    case 818u: goto L_088EBD08;
    case 819u: goto L_088EBD18;
    case 820u: goto L_088EBD20;
    case 821u: goto L_088EBD2C;
    case 822u: goto L_088EBD34;
    case 823u: goto L_088EBD3C;
    case 824u: goto L_088EBD48;
    case 825u: goto L_088EBD50;
    case 826u: goto L_088EBD58;
    case 827u: goto L_088EBD60;
    case 828u: goto L_088EBD6C;
    case 829u: goto L_088EBD78;
    case 830u: goto L_088EBD7C;
    case 831u: goto L_088EBD84;
    case 832u: goto L_088EBD98;
    case 833u: goto L_088EBDA8;
    case 834u: goto L_088EBDB0;
    case 835u: goto L_088EBDB8;
    case 836u: goto L_088EBDCC;
    case 837u: goto L_088EBDD4;
    case 838u: goto L_088EBDE0;
    case 839u: goto L_088EBDEC;
    case 840u: goto L_088EBDF4;
    case 841u: goto L_088EBDF8;
    case 842u: goto L_088EBE08;
    case 843u: goto L_088EBE10;
    case 844u: goto L_088EBE1C;
    case 845u: goto L_088EBE24;
    case 846u: goto L_088EBE2C;
    case 847u: goto L_088EBE38;
    case 848u: goto L_088EBE40;
    case 849u: goto L_088EBE48;
    case 850u: goto L_088EBE50;
    case 851u: goto L_088EBE5C;
    case 852u: goto L_088EBE68;
    case 853u: goto L_088EBE6C;
    case 854u: goto L_088EBE74;
    case 855u: goto L_088EBE88;
    case 856u: goto L_088EBE90;
    case 857u: goto L_088EBE98;
    case 858u: goto L_088EBEA0;
    case 859u: goto L_088EBEA8;
    case 860u: goto L_088EBEB4;
    case 861u: goto L_088EBEB8;
    case 862u: goto L_088EBEC0;
    case 863u: goto L_088EBEC8;
    case 864u: goto L_088EBED4;
    case 865u: goto L_088EBEDC;
    case 866u: goto L_088EBEE4;
    case 867u: goto L_088EBEEC;
    case 868u: goto L_088EBEF4;
    case 869u: goto L_088EBEFC;
    case 870u: goto L_088EBF08;
    case 871u: goto L_088EBF10;
    case 872u: goto L_088EBF1C;
    case 873u: goto L_088EBF24;
    case 874u: goto L_088EBF2C;
    case 875u: goto L_088EBF34;
    case 876u: goto L_088EBF40;
    case 877u: goto L_088EBF4C;
    case 878u: goto L_088EBF54;
    case 879u: goto L_088EBF5C;
    case 880u: goto L_088EBF68;
    case 881u: goto L_088EBF70;
    case 882u: goto L_088EBF78;
    case 883u: goto L_088EBF84;
    case 884u: goto L_088EBF90;
    case 885u: goto L_088EBF9C;
    case 886u: goto L_088EBFA0;
    case 887u: goto L_088EBFAC;
    case 888u: goto L_088EBFB8;
    case 889u: goto L_088EBFD0;
    case 890u: goto L_088EBFE8;
    case 891u: goto L_088EBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x088E8000u;
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
L_088E8000:
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E807C;
      }
      goto L_088E800C;
    }
L_088E800C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E807C;
      }
      goto L_088E802C;
    }
L_088E802C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 31u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E80A4;
      }
      goto L_088E8054;
    }
L_088E8054:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 30u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E80A4;
      }
      goto L_088E807C;
    }
L_088E807C:
    aot_gpr_31 = (0x088E8084u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8084u) goto L_088E8084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8084:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E80B8;
      }
      goto L_088E808C;
    }
L_088E808C:
    aot_gpr_31 = (0x088E8094u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8094u) goto L_088E8094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8094:
    aot_gpr_31 = (0x088E809Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 9u, 0x088E809Cu, 0x0898E250u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 758u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 758u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 758u, 0x0898E250u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E809Cu) goto L_088E809C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E809C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E814C;
      }
      goto L_088E80A4;
    }
L_088E80A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E89A8;
      }
      goto L_088E80B8;
    }
L_088E80B8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088E814C;
      }
      goto L_088E80C0;
    }
L_088E80C0:
    aot_gpr_31 = (0x088E80C8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0064.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 13u, 0x088E80C8u, 0x08906DE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0064_entry(rt, ctx, 620u, aot_mem);
#else
        recomp_unit_0064_entry(rt, ctx, 620u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E80C8u) goto L_088E80C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E80C8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E814C;
      }
      goto L_088E80D0;
    }
L_088E80D0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E8120;
      }
      goto L_088E80F8;
    }
L_088E80F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E8120;
      }
      goto L_088E8108;
    }
L_088E8108:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 11u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088E8120u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0074.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 17u, 0x088E8120u, 0x0892F140u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0074_entry(rt, ctx, 613u, aot_mem);
#else
        recomp_unit_0074_entry(rt, ctx, 613u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8120u) goto L_088E8120;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8120:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x088E8138u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 18u, 0x088E8138u, 0x08909A64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 442u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 442u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8138u) goto L_088E8138;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8138:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8144u);
    aot_gpr_5 = (0u | 100u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 19u, 0x088E8144u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8144u) goto L_088E8144;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8144:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E89A8;
      }
      goto L_088E814C;
    }
L_088E814C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_088E8184;
      }
      goto L_088E8158;
    }
L_088E8158:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 33u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E8180;
    }
L_088E8180:
    aot_gpr_4 = (2236u << 16u);
    goto L_088E8184;
L_088E8184:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_6 = (0u | 34u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E8198;
    }
L_088E8198:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_6 = (0u | 42u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81A8;
    }
L_088E81A8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_6 = (0u | 7u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81B8;
    }
L_088E81B8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_6 = (0u | 39u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81C8;
    }
L_088E81C8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_6 = (0u | 46u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81D8;
    }
L_088E81D8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_6 = (0u | 47u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81E8;
    }
L_088E81E8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1976))))));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E81F8;
    }
L_088E81F8:
    aot_gpr_31 = (0x088E8200u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8200u) goto L_088E8200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8200:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E8230;
      }
      goto L_088E8208;
    }
L_088E8208:
    aot_gpr_31 = (0x088E8210u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8210u) goto L_088E8210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8210:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E8218;
    }
L_088E8218:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E8230;
    }
L_088E8230:
    aot_gpr_31 = (0x088E8238u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8238u) goto L_088E8238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8238:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088E8248u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 37u, 0x088E8248u, 0x088E2C98u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 313u, 0x088E2C98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8248u) goto L_088E8248;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8248:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088E829C;
      }
      goto L_088E8254;
    }
L_088E8254:
    aot_gpr_31 = (0x088E825Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 39u, 0x088E825Cu, 0x08909880u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 410u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 410u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E825Cu) goto L_088E825C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E825C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[21];
      if (branch_taken) {
          goto L_088E8288;
      }
      goto L_088E8264;
    }
L_088E8264:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088E8294;
      }
      goto L_088E826C;
    }
L_088E826C:
    aot_gpr_31 = (0x088E8274u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8274u) goto L_088E8274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8274:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E8288;
      }
      goto L_088E827C;
    }
L_088E827C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E8294;
      }
      goto L_088E8288;
    }
L_088E8288:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8294u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 45u, 0x088E8294u, 0x088E3180u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 384u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 384u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 384u, 0x088E3180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8294u) goto L_088E8294;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8294:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E89A8;
      }
      goto L_088E829C;
    }
L_088E829C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (16640u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_088E82C4;
      }
      goto L_088E82B8;
    }
L_088E82B8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E82C4u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 48u, 0x088E82C4u, 0x0891034Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 50u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 50u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E82C4u) goto L_088E82C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E82C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 22u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E82EC;
      }
      goto L_088E82D4;
    }
L_088E82D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 50u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E82EC;
      }
      goto L_088E82E4;
    }
L_088E82E4:
    aot_gpr_31 = (0x088E82ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0129.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 51u, 0x088E82ECu, 0x08A08730u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0129_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0129_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E82ECu) goto L_088E82EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E82EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E8304u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8304u) goto L_088E8304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x088E8328u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8328u) goto L_088E8328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8328:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8334u);
    aot_gpr_5 = (0u | 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 54u, 0x088E8334u, 0x08908D60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 240u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 240u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8334u) goto L_088E8334;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8334:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8340u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8340u) goto L_088E8340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8340:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E84E0;
      }
      goto L_088E8350;
    }
L_088E8350:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E84E0;
      }
      goto L_088E8360;
    }
L_088E8360:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E84E0;
      }
      goto L_088E837C;
    }
L_088E837C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[17]);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (0u | 215u);
        goto L_088E839C;
    }
    goto L_088E839C;
L_088E839C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E83ACu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 60u, 0x088E83ACu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E83ACu) goto L_088E83AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E83AC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088E8464;
      }
      goto L_088E83B8;
    }
L_088E83B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_088E83D0;
    }
    goto L_088E83C4;
L_088E83C4:
    aot_gpr_31 = (0x088E83CCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E83CCu) goto L_088E83CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E83CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_088E83D0;
L_088E83D0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[17]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (0u | 215u);
        goto L_088E83F0;
    }
    goto L_088E83F0;
L_088E83F0:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088E8400u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 66u, 0x088E8400u, 0x0893E8D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 633u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 633u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8400u) goto L_088E8400;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8400:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E843C;
      }
      goto L_088E8418;
    }
L_088E8418:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E8430;
      }
      goto L_088E8428;
    }
L_088E8428:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088E8450;
      }
      goto L_088E8430;
    }
L_088E8430:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E8418;
      }
      goto L_088E843C;
    }
L_088E843C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088E8450;
      }
      goto L_088E8448;
    }
L_088E8448:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088E8450;
      }
      goto L_088E8450;
    }
L_088E8450:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8464;
      }
      goto L_088E8458;
    }
L_088E8458:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088E8464u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0034.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 74u, 0x088E8464u, 0x0888FE40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0034_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0034_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 611u, 0x0888FE40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8464u) goto L_088E8464;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8464:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[17]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 215u);
        goto L_088E8488;
    }
    goto L_088E8488;
L_088E8488:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088E84A0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 76u, 0x088E84A0u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E84A0u) goto L_088E84A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E84A0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E84CC;
    }
L_088E84CC:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x088E84D8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 78u, 0x088E84D8u, 0x08890474u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E84D8u) goto L_088E84D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E84D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E84E0;
    }
L_088E84E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E84F4;
      }
      goto L_088E84EC;
    }
L_088E84EC:
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    goto L_088E84F4;
L_088E84F4:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8534;
      }
      goto L_088E8510;
    }
L_088E8510:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[18] = (0u | 216u);
        goto L_088E852C;
    }
    goto L_088E852C;
L_088E852C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E8684;
      }
      goto L_088E8534;
    }
L_088E8534:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E8540;
    }
L_088E8540:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 8192u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088E8570;
      }
      goto L_088E8558;
    }
L_088E8558:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    goto L_088E8570;
L_088E8570:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E8578;
    }
L_088E8578:
    aot_gpr_31 = (0x088E8580u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0056.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 89u, 0x088E8580u, 0x088E4D2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0056_entry(rt, ctx, 178u, aot_mem);
#else
        recomp_unit_0056_entry(rt, ctx, 178u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 178u, 0x088E4D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8580u) goto L_088E8580;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8580:
    aot_gpr_4 = (aot_gpr_2 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088E85D4;
      }
      goto L_088E8590;
    }
L_088E8590:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E8598;
    }
L_088E8598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E85A8;
    }
L_088E85A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E85B4;
    }
L_088E85B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1328)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E85D4;
    }
L_088E85D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (0u | 215u);
      if (branch_taken) {
          goto L_088E860C;
      }
      goto L_088E85EC;
    }
L_088E85EC:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[18] = (0u | 218u);
        goto L_088E860C;
    }
    goto L_088E860C;
L_088E860C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E8684;
      }
      goto L_088E8614;
    }
L_088E8614:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E8664;
      }
      goto L_088E8624;
    }
L_088E8624:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (4u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088E8664;
      }
      goto L_088E8640;
    }
L_088E8640:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[18] = (0u | 218u);
        goto L_088E865C;
    }
    goto L_088E865C;
L_088E865C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E8684;
      }
      goto L_088E8664;
    }
L_088E8664:
    ctx.gpr[18] = (0u | 214u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (32u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[18] = (0u | 55u);
        goto L_088E8684;
    }
    goto L_088E8684;
L_088E8684:
    aot_gpr_31 = (0x088E868Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E868Cu) goto L_088E868C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E868C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E8730;
      }
      goto L_088E8694;
    }
L_088E8694:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E8730;
      }
      goto L_088E86A4;
    }
L_088E86A4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    aot_gpr_31 = (0x088E86D8u);
    aot_gpr_6 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 106u, 0x088E86D8u, 0x08B60E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 178u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 178u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E86D8u) goto L_088E86D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E86D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23228)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23232)));
    aot_gpr_5 = (ctx.gpr[3] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_088E8700;
      }
      goto L_088E86F8;
    }
L_088E86F8:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088E8730;
      }
      goto L_088E8700;
    }
L_088E8700:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_088E8728;
      }
      goto L_088E871C;
    }
L_088E871C:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 172u);
      if (branch_taken) {
          goto L_088E8730;
      }
      goto L_088E8728;
    }
L_088E8728:
    ctx.gpr[17] = (0u | 14u);
    ctx.gpr[18] = (0u | 218u);
    goto L_088E8730;
L_088E8730:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8740u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 112u, 0x088E8740u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8740u) goto L_088E8740;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8740:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E87D4;
      }
      goto L_088E874C;
    }
L_088E874C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_088E8764;
    }
    goto L_088E8758;
L_088E8758:
    aot_gpr_31 = (0x088E8760u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8760u) goto L_088E8760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8760:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_088E8764;
L_088E8764:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088E8770u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 117u, 0x088E8770u, 0x0893E8D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 633u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 633u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8770u) goto L_088E8770;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8770:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E87AC;
      }
      goto L_088E8788;
    }
L_088E8788:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E87A0;
      }
      goto L_088E8798;
    }
L_088E8798:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088E87C0;
      }
      goto L_088E87A0;
    }
L_088E87A0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E8788;
      }
      goto L_088E87AC;
    }
L_088E87AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088E87C0;
      }
      goto L_088E87B8;
    }
L_088E87B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088E87C0;
      }
      goto L_088E87C0;
    }
L_088E87C0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E87D4;
      }
      goto L_088E87C8;
    }
L_088E87C8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088E87D4u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0034.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 125u, 0x088E87D4u, 0x0888FE40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0034_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0034_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 611u, 0x0888FE40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E87D4u) goto L_088E87D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E87D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E87E4;
    }
L_088E87E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E87F4;
    }
L_088E87F4:
    aot_gpr_31 = (0x088E87FCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 128u, 0x088E87FCu, 0x08AD3698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 607u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 607u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E87FCu) goto L_088E87FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E87FC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E8804;
    }
L_088E8804:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x088E8810u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8810u) goto L_088E8810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8810:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E8894;
      }
      goto L_088E8818;
    }
L_088E8818:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 18u);
      if (branch_taken) {
          goto L_088E8894;
      }
      goto L_088E8830;
    }
L_088E8830:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    aot_gpr_4 = (0u | 214u);
      if (branch_taken) {
          goto L_088E8894;
      }
      goto L_088E8838;
    }
L_088E8838:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
      if (branch_taken) {
          goto L_088E8894;
      }
      goto L_088E8840;
    }
L_088E8840:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 26u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E8890;
      }
      goto L_088E8868;
    }
L_088E8868:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E8894;
      }
      goto L_088E8890;
    }
L_088E8890:
    ctx.gpr[19] = (0u | 1u);
    goto L_088E8894;
L_088E8894:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088E8900;
      }
      goto L_088E889C;
    }
L_088E889C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E88ACu);
    aot_gpr_6 = (0u | 6u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 139u, 0x088E88ACu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E88ACu) goto L_088E88AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E88AC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E8900;
      }
      goto L_088E88B4;
    }
L_088E88B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E88C4u);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 141u, 0x088E88C4u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E88C4u) goto L_088E88C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E88C4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E8900;
      }
      goto L_088E88CC;
    }
L_088E88CC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E88DCu);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 143u, 0x088E88DCu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E88DCu) goto L_088E88DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E88DC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E8900;
      }
      goto L_088E88E4;
    }
L_088E88E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x088E8900u);
    ctx.gpr[7] = (0u | 6u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 145u, 0x088E8900u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8900u) goto L_088E8900;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8900:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088E8918u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 146u, 0x088E8918u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8918u) goto L_088E8918;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8918:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E8950;
      }
      goto L_088E8944;
    }
L_088E8944:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x088E8950u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 148u, 0x088E8950u, 0x08890474u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8950u) goto L_088E8950;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8950:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E8958;
    }
L_088E8958:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (16083u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 3712u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E898C;
      }
      goto L_088E8978;
    }
L_088E8978:
    aot_gpr_31 = (0x088E8980u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 151u, 0x088E8980u, 0x08890474u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8980u) goto L_088E8980;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8980:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088E898C;
L_088E898C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E89A8;
      }
      goto L_088E8994;
    }
L_088E8994:
    aot_gpr_5 = (2191u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-11988));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088E89A8u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E89A8u) goto L_088E89A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E89A8:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(240), aot_run_words);
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
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088E89D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_22), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2236)));
    aot_gpr_6 = (0u | 10u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E8A20;
      }
      goto L_088E8A04;
    }
L_088E8A04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1740)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E8A28;
      }
      goto L_088E8A18;
    }
L_088E8A18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E8A80;
      }
      goto L_088E8A20;
    }
L_088E8A20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8A28;
    }
L_088E8A28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1740)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8A4C;
      }
      goto L_088E8A34;
    }
L_088E8A34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(688)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 19 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E8A5C;
      }
      goto L_088E8A44;
    }
L_088E8A44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E8A74;
      }
      goto L_088E8A4C;
    }
L_088E8A4C:
    aot_gpr_31 = (0x088E8A54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 163u, 0x088E8A54u, 0x088E3074u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 364u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 364u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8A54u) goto L_088E8A54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8A54:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8A5C;
    }
L_088E8A5C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 10u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088E8A74u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0074.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 165u, 0x088E8A74u, 0x0892F140u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0074_entry(rt, ctx, 613u, aot_mem);
#else
        recomp_unit_0074_entry(rt, ctx, 613u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8A74u) goto L_088E8A74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8A74:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1740), 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8A80;
    }
L_088E8A80:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x088E8A8Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 167u, 0x088E8A8Cu, 0x089101ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8A8Cu) goto L_088E8A8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8A8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x088E8AACu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 168u, 0x088E8AACu, 0x089101ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8AACu) goto L_088E8AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8AAC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2060)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E8CB4;
      }
      goto L_088E8AE0;
    }
L_088E8AE0:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x088E8AECu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 170u, 0x088E8AECu, 0x089101ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8AECu) goto L_088E8AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8AEC:
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    aot_gpr_31 = (0x088E8AFCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 171u, 0x088E8AFCu, 0x089101ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8AFCu) goto L_088E8AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8AFC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x088E8B20u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 172u, 0x088E8B20u, 0x08910218u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8B20u) goto L_088E8B20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8B20:
    aot_gpr_31 = (0x088E8B28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0068.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 173u, 0x088E8B28u, 0x08916ABCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0068_entry(rt, ctx, 461u, aot_mem);
#else
        recomp_unit_0068_entry(rt, ctx, 461u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8B28u) goto L_088E8B28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8B28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(688)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8B70;
      }
      goto L_088E8B38;
    }
L_088E8B38:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2060)));
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E8B70;
      }
      goto L_088E8B5C;
    }
L_088E8B5C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8B68u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8B68u) goto L_088E8B68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8B68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E8CAC;
      }
      goto L_088E8B70;
    }
L_088E8B70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(688)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 14 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E8CA0;
      }
      goto L_088E8B80;
    }
L_088E8B80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(688)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 22 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8CA0;
      }
      goto L_088E8B90;
    }
L_088E8B90:
    aot_gpr_4 = (16312u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E8BC0;
      }
      goto L_088E8BAC;
    }
L_088E8BAC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8BB8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8BB8u) goto L_088E8BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8BB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E8CAC;
      }
      goto L_088E8BC0;
    }
L_088E8BC0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1914)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8C84;
      }
      goto L_088E8BD8;
    }
L_088E8BD8:
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x088E8BE4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 184u, 0x088E8BE4u, 0x089101ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8BE4u) goto L_088E8BE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8BE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    ctx.gpr[19] = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    aot_gpr_31 = (0x088E8C10u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 185u, 0x088E8C10u, 0x089101ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 28u, 0x089101ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8C10u) goto L_088E8C10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8C10:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = ctx.fpr[14] - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (15907u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55051u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E8C68;
      }
      goto L_088E8C50;
    }
L_088E8C50:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8C5Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8C5Cu) goto L_088E8C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8C5C:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E8C84;
      }
      goto L_088E8C68;
    }
L_088E8C68:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1914)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E8BD8;
      }
      goto L_088E8C84;
    }
L_088E8C84:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_088E8C98;
      }
      goto L_088E8C8C;
    }
L_088E8C8C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8C98u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8C98u) goto L_088E8C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8C98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E8CAC;
      }
      goto L_088E8CA0;
    }
L_088E8CA0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8CACu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8CACu) goto L_088E8CAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8CAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8CB4;
    }
L_088E8CB4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_31 = (0x088E8CC4u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 195u, 0x088E8CC4u, 0x08964540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8CC4u) goto L_088E8CC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8CC4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8CD4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8CD4u) goto L_088E8CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8CD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(688)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-6));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6));
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8CE8;
    }
L_088E8CE8:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16296)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088E8D00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1736)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8DC0;
      }
      goto L_088E8D14;
    }
L_088E8D14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8D24u);
    aot_gpr_6 = (0u | 149u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 200u, 0x088E8D24u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8D24u) goto L_088E8D24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8D24:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8DC8;
      }
      goto L_088E8D30;
    }
L_088E8D30:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(692)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8D6C;
      }
      goto L_088E8D54;
    }
L_088E8D54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(692)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088E8D6Cu);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 203u, 0x088E8D6Cu, 0x08909A64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 442u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 442u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8D6Cu) goto L_088E8D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8D6C:
    aot_gpr_31 = (0x088E8D74u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8D74u) goto L_088E8D74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8D74:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23212)));
    aot_gpr_31 = (0x088E8D88u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23216)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8D88u) goto L_088E8D88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8D88:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E8DC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 206u, 0x088E8DC0u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8DC0u) goto L_088E8DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8DC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8DC8;
    }
L_088E8DC8:
    aot_gpr_31 = (0x088E8DD0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8DD0u) goto L_088E8DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8DD0:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8E6C;
      }
      goto L_088E8DE0;
    }
L_088E8DE0:
    aot_gpr_31 = (0x088E8DE8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8DE8u) goto L_088E8DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8DE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088E8E04u);
    ctx.gpr[7] = (0u | 149u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 211u, 0x088E8E04u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8E04u) goto L_088E8E04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8E04:
    aot_gpr_31 = (0x088E8E0Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8E0Cu) goto L_088E8E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8E0C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    aot_gpr_31 = (0x088E8E20u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8E20u) goto L_088E8E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8E20:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23196)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23200)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E8E58u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 214u, 0x088E8E58u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8E58u) goto L_088E8E58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8E58:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8E64u);
    aot_gpr_5 = (0u | 154u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 215u, 0x088E8E64u, 0x08860424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8E64u) goto L_088E8E64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8E64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E8DC0;
      }
      goto L_088E8E6C;
    }
L_088E8E6C:
    aot_gpr_31 = (0x088E8E74u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 217u, 0x088E8E74u, 0x088E3074u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 364u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 364u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8E74u) goto L_088E8E74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8E74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E8E7C;
    }
L_088E8E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (512u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9030;
      }
      goto L_088E8E90;
    }
L_088E8E90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1736)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9030;
      }
      goto L_088E8EA4;
    }
L_088E8EA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8EB4u);
    aot_gpr_6 = (0u | 10u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 221u, 0x088E8EB4u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8EB4u) goto L_088E8EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8EB4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E8EF0;
      }
      goto L_088E8EC0;
    }
L_088E8EC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8ED0u);
    aot_gpr_6 = (0u | 6u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 223u, 0x088E8ED0u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8ED0u) goto L_088E8ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8ED0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E8EF0;
      }
      goto L_088E8EDC;
    }
L_088E8EDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8EECu);
    aot_gpr_6 = (0u | 44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 225u, 0x088E8EECu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8EECu) goto L_088E8EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8EEC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_088E8EF0;
L_088E8EF0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E8F80;
      }
      goto L_088E8EF8;
    }
L_088E8EF8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E8F80;
      }
      goto L_088E8F08;
    }
L_088E8F08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E8F24u);
    ctx.gpr[7] = (0u | 6u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 229u, 0x088E8F24u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8F24u) goto L_088E8F24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8F24:
    aot_gpr_31 = (0x088E8F2Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8F2Cu) goto L_088E8F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8F2C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    aot_gpr_31 = (0x088E8F40u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8F40u) goto L_088E8F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8F40:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23196)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23200)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E8F78u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 232u, 0x088E8F78u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8F78u) goto L_088E8F78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8F78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E8F80;
    }
L_088E8F80:
    aot_gpr_31 = (0x088E8F88u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8F88u) goto L_088E8F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8F88:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9028;
      }
      goto L_088E8F98;
    }
L_088E8F98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088E8FB4u);
    ctx.gpr[7] = (0u | 10u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 236u, 0x088E8FB4u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8FB4u) goto L_088E8FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E8FB4:
    aot_gpr_31 = (0x088E8FBCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8FBCu) goto L_088E8FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8FBC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23212)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23216)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088E8FD8u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E8FD8u) goto L_088E8FD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E8FD8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[18]);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[18] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E9008u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 239u, 0x088E9008u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9008u) goto L_088E9008;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9008:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E9014;
    }
L_088E9014:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E9020u);
    aot_gpr_5 = (0u | 154u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 241u, 0x088E9020u, 0x08860424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9020u) goto L_088E9020;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9020:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E9028;
    }
L_088E9028:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1740), 0u);
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E9030;
    }
L_088E9030:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1736)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E9044;
    }
L_088E9044:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E9054u);
    aot_gpr_6 = (0u | 6u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 245u, 0x088E9054u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9054u) goto L_088E9054;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9054:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E9074;
      }
      goto L_088E9060;
    }
L_088E9060:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E9070u);
    aot_gpr_6 = (0u | 44u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 247u, 0x088E9070u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9070u) goto L_088E9070;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9070:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_088E9074;
L_088E9074:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E9090;
      }
      goto L_088E907C;
    }
L_088E907C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E908Cu);
    aot_gpr_6 = (0u | 11u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 250u, 0x088E908Cu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E908Cu) goto L_088E908C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E908C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_088E9090;
L_088E9090:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E90AC;
      }
      goto L_088E9098;
    }
L_088E9098:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E90A8u);
    aot_gpr_6 = (0u | 148u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 253u, 0x088E90A8u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E90A8u) goto L_088E90A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E90A8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_088E90AC;
L_088E90AC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9188;
      }
      goto L_088E90B4;
    }
L_088E90B4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_088E90D4;
      }
      goto L_088E90C4;
    }
L_088E90C4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (0u | 44u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088E9188;
      }
      goto L_088E90D4;
    }
L_088E90D4:
    aot_gpr_31 = (0x088E90DCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E90DCu) goto L_088E90DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E90DC:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9110;
      }
      goto L_088E90EC;
    }
L_088E90EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088E9108u);
    ctx.gpr[7] = (0u | 11u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 260u, 0x088E9108u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9108u) goto L_088E9108;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9108:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E912C;
      }
      goto L_088E9110;
    }
L_088E9110:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088E912Cu);
    ctx.gpr[7] = (0u | 148u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 262u, 0x088E912Cu, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E912Cu) goto L_088E912C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E912C:
    aot_gpr_31 = (0x088E9134u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9134u) goto L_088E9134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9134:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23212)));
    aot_gpr_31 = (0x088E9148u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23216)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9148u) goto L_088E9148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9148:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E9180u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 265u, 0x088E9180u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9180u) goto L_088E9180;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9180:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9318;
      }
      goto L_088E9188;
    }
L_088E9188:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E926C;
      }
      goto L_088E9190;
    }
L_088E9190:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (0u | 11u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088E926C;
      }
      goto L_088E91A0;
    }
L_088E91A0:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_31 = (0x088E91C0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E91C0u) goto L_088E91C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E91C0:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E91F4;
      }
      goto L_088E91D0;
    }
L_088E91D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E91ECu);
    ctx.gpr[7] = (0u | 6u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 271u, 0x088E91ECu, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E91ECu) goto L_088E91EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E91EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9210;
      }
      goto L_088E91F4;
    }
L_088E91F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088E9210u);
    ctx.gpr[7] = (0u | 148u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 273u, 0x088E9210u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9210u) goto L_088E9210;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9210:
    aot_gpr_31 = (0x088E9218u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9218u) goto L_088E9218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9218:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    aot_gpr_31 = (0x088E922Cu);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E922Cu) goto L_088E922C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E922C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23196)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23200)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E9264u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 276u, 0x088E9264u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9264u) goto L_088E9264;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9264:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9318;
      }
      goto L_088E926C;
    }
L_088E926C:
    aot_gpr_31 = (0x088E9274u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9274u) goto L_088E9274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9274:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E92A8;
      }
      goto L_088E9284;
    }
L_088E9284:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E92A0u);
    ctx.gpr[7] = (0u | 6u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 280u, 0x088E92A0u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E92A0u) goto L_088E92A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E92A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E92C4;
      }
      goto L_088E92A8;
    }
L_088E92A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088E92C4u);
    ctx.gpr[7] = (0u | 11u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 282u, 0x088E92C4u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E92C4u) goto L_088E92C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E92C4:
    aot_gpr_31 = (0x088E92CCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E92CCu) goto L_088E92CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E92CC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    aot_gpr_31 = (0x088E92E0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E92E0u) goto L_088E92E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E92E0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23196)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23200)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E9318u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 285u, 0x088E9318u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9318u) goto L_088E9318;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9318:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E9330;
      }
      goto L_088E9324;
    }
L_088E9324:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E9330u);
    aot_gpr_5 = (0u | 154u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 287u, 0x088E9330u, 0x08860424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9330u) goto L_088E9330;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9330:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E9338;
    }
L_088E9338:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(696)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1736)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E9354;
    }
L_088E9354:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1736)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9384;
      }
      goto L_088E9360;
    }
L_088E9360:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E9370u);
    aot_gpr_6 = (0u | 149u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 291u, 0x088E9370u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9370u) goto L_088E9370;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9370:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E93FC;
      }
      goto L_088E937C;
    }
L_088E937C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E94C0;
      }
      goto L_088E9384;
    }
L_088E9384:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088E93A0u);
    ctx.gpr[7] = (0u | 149u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 294u, 0x088E93A0u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E93A0u) goto L_088E93A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E93A0:
    aot_gpr_31 = (0x088E93A8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E93A8u) goto L_088E93A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E93A8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23204)));
    aot_gpr_31 = (0x088E93BCu);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23208)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E93BCu) goto L_088E93BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E93BC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23196)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23200)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E93F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 297u, 0x088E93F4u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E93F4u) goto L_088E93F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E93F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E93FC;
    }
L_088E93FC:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(688)));
    aot_gpr_5 = (0u | 20u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E9448;
      }
      goto L_088E9424;
    }
L_088E9424:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088E9440u);
    ctx.gpr[7] = (0u | 166u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 300u, 0x088E9440u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9440u) goto L_088E9440;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9440:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9464;
      }
      goto L_088E9448;
    }
L_088E9448:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088E9464u);
    ctx.gpr[7] = (0u | 148u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 302u, 0x088E9464u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9464u) goto L_088E9464;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9464:
    aot_gpr_31 = (0x088E946Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E946Cu) goto L_088E946C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E946C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23188)));
    aot_gpr_31 = (0x088E9480u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23192)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9480u) goto L_088E9480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9480:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23180)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23184)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E94B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 305u, 0x088E94B8u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E94B8u) goto L_088E94B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E94B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E94C0;
    }
L_088E94C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E94D0u);
    aot_gpr_6 = (0u | 14u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 307u, 0x088E94D0u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E94D0u) goto L_088E94D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E94D0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E9520;
      }
      goto L_088E94DC;
    }
L_088E94DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E94ECu);
    aot_gpr_6 = (0u | 148u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 309u, 0x088E94ECu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E94ECu) goto L_088E94EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E94EC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9548;
      }
      goto L_088E94F8;
    }
L_088E94F8:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_31 = (0x088E9518u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 311u, 0x088E9518u, 0x088E3074u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 364u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 364u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9518u) goto L_088E9518;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9518:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E9520;
    }
L_088E9520:
    aot_gpr_5 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_31 = (0x088E9540u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 313u, 0x088E9540u, 0x088E3074u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 364u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 364u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9540u) goto L_088E9540;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9540:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E9548;
    }
L_088E9548:
    aot_gpr_31 = (0x088E9550u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 315u, 0x088E9550u, 0x088E3074u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 364u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 364u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 364u, 0x088E3074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9550u) goto L_088E9550;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9550:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9558;
      }
      goto L_088E9558;
    }
L_088E9558:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088E957C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-832));
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_22), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(776), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E95BCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 318u, 0x088E95BCu, 0x088E335Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 412u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 412u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 412u, 0x088E335Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E95BCu) goto L_088E95BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E95BC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E973C;
      }
      goto L_088E95C4;
    }
L_088E95C4:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), aot_gpr_16);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[17]);
    aot_gpr_31 = (0x088E95F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E95F0u) goto L_088E95F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E95F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E9608u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9608u) goto L_088E9608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9608:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E962Cu);
    aot_gpr_4 = (ctx.gpr[23] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E962Cu) goto L_088E962C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E962C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_2 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), aot_gpr_4);
    aot_gpr_31 = (0x088E9648u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 323u, 0x088E9648u, 0x0881E25Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 348u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 348u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9648u) goto L_088E9648;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), aot_gpr_2);
    aot_gpr_5 = (ctx.gpr[18] << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(762), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(760), static_cast<std::uint16_t>(ctx.gpr[19]));
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(60), aot_run_words); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), aot_gpr_4);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088E969Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 324u, 0x088E969Cu, 0x0881DD84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 257u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 257u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 257u, 0x0881DD84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E969Cu) goto L_088E969C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E969C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088E96B4u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 325u, 0x088E96B4u, 0x0881DF20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 293u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 293u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 293u, 0x0881DF20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E96B4u) goto L_088E96B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E96B4:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088E96CCu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 326u, 0x088E96CCu, 0x088E3E88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 571u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 571u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E96CCu) goto L_088E96CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E96CC:
    aot_gpr_4 = (ctx.gpr[17] << 4u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-7632));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(32);
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
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088E9700u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9700u) goto L_088E9700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9700:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088E9714u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 328u, 0x088E9714u, 0x0881DE58u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 275u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 275u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 275u, 0x0881DE58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9714u) goto L_088E9714;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9714:
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(744), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1914)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1912)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_088E9744;
      }
      goto L_088E9734;
    }
L_088E9734:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9B08;
      }
      goto L_088E973C;
    }
L_088E973C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_088EA3F0;
      }
      goto L_088E9744;
    }
L_088E9744:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_22; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(514));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_16 | 0u);
    goto L_088E9774;
L_088E9774:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1914)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E97A4;
      }
      goto L_088E9784;
    }
L_088E9784:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1914)));
    aot_gpr_4 = (ctx.gpr[17] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1824)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          goto L_088E97AC;
      }
      goto L_088E97A4;
    }
L_088E97A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_gpr_4);
    goto L_088E97AC;
L_088E97AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E97D0;
      }
      goto L_088E97BC;
    }
L_088E97BC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E97D0;
      }
      goto L_088E97C8;
    }
L_088E97C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E97D0;
    }
L_088E97D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_22;
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[14] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E9858;
    }
L_088E9858:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1914)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E996C;
      }
      goto L_088E9874;
    }
L_088E9874:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
        goto L_088E98A8;
    }
    goto L_088E9888;
L_088E9888:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    aot_gpr_31 = (0x088E9898u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 342u, 0x088E9898u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9898u) goto L_088E9898;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9898:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    goto L_088E98A8;
L_088E98A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
        goto L_088E98DC;
    }
    goto L_088E98BC;
L_088E98BC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(513));
    aot_gpr_31 = (0x088E98CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 345u, 0x088E98CCu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E98CCu) goto L_088E98CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E98CC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(513)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    goto L_088E98DC;
L_088E98DC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[20]);
    aot_gpr_6 = (aot_gpr_4 ^ 65535u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_6 = (aot_gpr_6 & 1u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E9964;
      }
      goto L_088E9910;
    }
L_088E9910:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    aot_gpr_31 = (0x088E991Cu);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3))))));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 348u, 0x088E991Cu, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E991Cu) goto L_088E991C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E991C:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088E9964;
      }
      goto L_088E9928;
    }
L_088E9928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E9940u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9940u) goto L_088E9940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9940:
    aot_gpr_4 = (aot_gpr_2 ^ 3u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 << 1u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088E9964;
L_088E9964:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
      if (branch_taken) {
          goto L_088E99D8;
      }
      goto L_088E996C;
    }
L_088E996C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_31 = (0x088E9984u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 353u, 0x088E9984u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9984u) goto L_088E9984;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9984:
    aot_gpr_4 = (aot_gpr_2 & 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E99D8;
      }
      goto L_088E99A8;
    }
L_088E99A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (0x088E99B4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E99B4u) goto L_088E99B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E99B4:
    aot_gpr_4 = (aot_gpr_2 ^ 2u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 << 1u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088E99D8;
L_088E99D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E99F0u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E99F0u) goto L_088E99F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E99F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (0x088E99FCu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 358u, 0x088E99FCu, 0x0881F9F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 657u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 657u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 657u, 0x0881F9F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E99FCu) goto L_088E99FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E99FC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E9A04;
    }
L_088E9A04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 != 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), aot_gpr_16);
        goto L_088E9A44;
    }
    goto L_088E9A20;
L_088E9A20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (0u | 58u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), aot_gpr_16);
        goto L_088E9A44;
    }
    goto L_088E9A30;
L_088E9A30:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E9A40;
    }
L_088E9A40:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), aot_gpr_16);
    goto L_088E9A44;
L_088E9A44:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    aot_gpr_31 = (0x088E9A50u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), aot_gpr_16);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9A50u) goto L_088E9A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9A50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_2;
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
      if (branch_taken) {
          goto L_088E9A78;
      }
      goto L_088E9A5C;
    }
L_088E9A5C:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), aot_gpr_16);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (0x088E9A6Cu);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), aot_gpr_16);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9A6Cu) goto L_088E9A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9A6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_2;
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E9A78;
    }
L_088E9A78:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E9ACC;
      }
      goto L_088E9A98;
    }
L_088E9A98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_088E9AC0;
    }
    goto L_088E9AA4;
L_088E9AA4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(48), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_088E9AC0;
L_088E9AC0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_088E9AEC;
      }
      goto L_088E9ACC;
    }
L_088E9ACC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(514), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x088E9AECu);
    ctx.gpr[9] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0056.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 372u, 0x088E9AECu, 0x088E4A4Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0056_entry(rt, ctx, 131u, aot_mem);
#else
        recomp_unit_0056_entry(rt, ctx, 131u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 131u, 0x088E4A4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9AECu) goto L_088E9AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9AEC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1914)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1912)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E9774;
      }
      goto L_088E9B08;
    }
L_088E9B08:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x088E9B44u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0037.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 374u, 0x088E9B44u, 0x0889ACD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0037_entry(rt, ctx, 487u, aot_mem);
#else
        recomp_unit_0037_entry(rt, ctx, 487u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9B44u) goto L_088E9B44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9B44:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
      if (branch_taken) {
          goto L_088E9F24;
      }
      goto L_088E9B50;
    }
L_088E9B50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
      if (branch_taken) {
          goto L_088E9CF8;
      }
      goto L_088E9B6C;
    }
L_088E9B6C:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088E9CF0;
      }
      goto L_088E9B78;
    }
L_088E9B78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E9B90u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9B90u) goto L_088E9B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9B90:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088E9B9Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 379u, 0x088E9B9Cu, 0x0881F9F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 657u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 657u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 657u, 0x0881F9F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9B9Cu) goto L_088E9B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9B9C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E9CF0;
      }
      goto L_088E9BA4;
    }
L_088E9BA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9BB0;
    }
L_088E9BB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9BC0;
    }
L_088E9BC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9BD0;
    }
L_088E9BD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9BE0;
    }
L_088E9BE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9BF0;
    }
L_088E9BF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9C00;
    }
L_088E9C00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E9C20;
      }
      goto L_088E9C10;
    }
L_088E9C10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E9CF0;
      }
      goto L_088E9C20;
    }
L_088E9C20:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (aot_gpr_6 << 5u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[18] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1396));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 << 8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x088E9C60u);
    aot_gpr_6 = (0u | 45u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 389u, 0x088E9C60u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9C60u) goto L_088E9C60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9C60:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2032));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(31)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(416));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(352)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(188)));
    ctx.gpr[7] = (15395u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 55050u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    jump_target = ctx.gpr[10];
    aot_gpr_31 = (0x088E9CC0u);
    ctx.gpr[9] = (0u | 42u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9CC0u) goto L_088E9CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9CC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E9CCCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0193.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 391u, 0x088E9CCCu, 0x08B0A360u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0193_entry(rt, ctx, 425u, aot_mem);
#else
        recomp_unit_0193_entry(rt, ctx, 425u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 425u, 0x08B0A360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9CCCu) goto L_088E9CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9CCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E9CE4u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9CE4u) goto L_088E9CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9CE4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088E9CF0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 393u, 0x088E9CF0u, 0x0881F874u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 634u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 634u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 634u, 0x0881F874u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9CF0u) goto L_088E9CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9CF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E9F24;
      }
      goto L_088E9CF8;
    }
L_088E9CF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 8u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9F24;
      }
      goto L_088E9D14;
    }
L_088E9D14:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_088E9EA8;
      }
      goto L_088E9D20;
    }
L_088E9D20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E9D38u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9D38u) goto L_088E9D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9D38:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088E9D44u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 398u, 0x088E9D44u, 0x0881F9F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 657u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 657u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 657u, 0x0881F9F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9D44u) goto L_088E9D44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9D44:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E9EA8;
      }
      goto L_088E9D4C;
    }
L_088E9D4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E9EA8;
      }
      goto L_088E9D5C;
    }
L_088E9D5C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (17095u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E9EA8;
      }
      goto L_088E9D7C;
    }
L_088E9D7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088E9D9C;
      }
      goto L_088E9D8C;
    }
L_088E9D8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088E9DA4;
      }
      goto L_088E9D9C;
    }
L_088E9D9C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088E9DA4;
L_088E9DA4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E9DDC;
      }
      goto L_088E9DAC;
    }
L_088E9DAC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E9DDC;
      }
      goto L_088E9DC4;
    }
L_088E9DC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2049));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x088E9DDCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 407u, 0x088E9DDCu, 0x08A66048u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9DDCu) goto L_088E9DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9DDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088E9DFC;
      }
      goto L_088E9DEC;
    }
L_088E9DEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088E9E04;
      }
      goto L_088E9DFC;
    }
L_088E9DFC:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088E9E04;
L_088E9E04:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
        goto L_088E9F18;
    }
    goto L_088E9E0C;
L_088E9E0C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(192), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[14] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x088E9E7Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 412u, 0x088E9E7Cu, 0x08A66CD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9E7Cu) goto L_088E9E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E9E94u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9E94u) goto L_088E9E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9E94:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088E9EA0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 414u, 0x088E9EA0u, 0x0881F874u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 634u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 634u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 634u, 0x0881F874u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9EA0u) goto L_088E9EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9EA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
      if (branch_taken) {
          goto L_088E9F18;
      }
      goto L_088E9EA8;
    }
L_088E9EA8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(473)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
        goto L_088E9EC8;
    }
    goto L_088E9EB8;
L_088E9EB8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(478))))));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
        goto L_088E9F18;
    }
    goto L_088E9EC4;
L_088E9EC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    goto L_088E9EC8;
L_088E9EC8:
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
        goto L_088E9F18;
    }
    goto L_088E9ED8;
L_088E9ED8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088E9EF0u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0009.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 420u, 0x088E9EF0u, 0x0882BFC8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0009_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0009_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 482u, 0x0882BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9EF0u) goto L_088E9EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9EF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E9F08u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9F08u) goto L_088E9F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9F08:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088E9F14u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 422u, 0x088E9F14u, 0x0881F874u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 634u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 634u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 634u, 0x0881F874u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9F14u) goto L_088E9F14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088E9F14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    goto L_088E9F18;
L_088E9F18:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088E9F24;
L_088E9F24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u | 12u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
      if (branch_taken) {
          goto L_088E9F88;
      }
      goto L_088E9F44;
    }
L_088E9F44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(560), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088E9F60;
      }
      goto L_088E9F54;
    }
L_088E9F54:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    goto L_088E9F58;
L_088E9F58:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088E9F58;
      }
      goto L_088E9F60;
    }
L_088E9F60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EA3EC;
      }
      goto L_088E9F6C;
    }
L_088E9F6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EA3EC;
      }
      goto L_088E9F78;
    }
L_088E9F78:
    aot_gpr_31 = (0x088E9F80u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E9F80u) goto L_088E9F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E9F80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EA3EC;
      }
      goto L_088E9F88;
    }
L_088E9F88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 192u);
    aot_gpr_4 = (aot_gpr_4 ^ 128u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088EA064;
      }
      goto L_088E9FAC;
    }
L_088E9FAC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_16 = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(762)));
    aot_gpr_31 = (0x088EA018u);
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 434u, 0x088EA018u, 0x0881DEBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 284u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 284u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 284u, 0x0881DEBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA018u) goto L_088EA018;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA018:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_088EA064;
L_088EA064:
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u | 12u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[21] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_088EA3B0;
      }
      goto L_088EA08C;
    }
L_088EA08C:
    aot_gpr_4 = (18804u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 9200u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(340), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      ctx.gpr[30] = aot_run_words[1];
      ctx.gpr[23] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), aot_gpr_4);
    goto L_088EA0A8;
L_088EA0A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[21] + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EA378;
      }
      goto L_088EA0CC;
    }
L_088EA0CC:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(732), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088EA104;
      }
      goto L_088EA0F4;
    }
L_088EA0F4:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_088EA104;
L_088EA104:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x088EA11Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 441u, 0x088EA11Cu, 0x08903BB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 678u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 678u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 678u, 0x08903BB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA11Cu) goto L_088EA11C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA11C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_16 = (0u | 0u);
    goto L_088EA12C;
L_088EA12C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EA278;
      }
      goto L_088EA13C;
    }
L_088EA13C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EA278;
      }
      goto L_088EA154;
    }
L_088EA154:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(288), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_6, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(300), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088EA204;
      }
      goto L_088EA1F8;
    }
L_088EA1F8:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(732), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088EA278;
      }
      goto L_088EA204;
    }
L_088EA204:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_088EA26C;
      }
      goto L_088EA210;
    }
L_088EA210:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    aot_gpr_31 = (0x088EA220u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.pc = 0x088B1554u;
    ([&]() { AOT_REGCACHE_SYNC_OUT(); rt.invoke_native_fast_path(0x088B1554u, ctx); AOT_REGCACHE_SYNC_IN(); }());
    if (ctx.pc == 0x088EA220u) goto L_088EA220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA220:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EA26C;
      }
      goto L_088EA228;
    }
L_088EA228:
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(288), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(320), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(300), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), aot_gpr_5);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), aot_gpr_6);
    goto L_088EA26C;
L_088EA26C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088EA12C;
      }
      goto L_088EA278;
    }
L_088EA278:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
      if (branch_taken) {
          goto L_088EA2C4;
      }
      goto L_088EA284;
    }
L_088EA284:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(320), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(288), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    { const std::uint32_t aot_run_words[5]{aot_gpr_4, aot_gpr_6, aot_gpr_5, ctx.gpr[30], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(300), aot_run_words); }
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (0u | 1u);
    goto L_088EA2C4;
L_088EA2C4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EA378;
      }
      goto L_088EA2CC;
    }
L_088EA2CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (ctx.gpr[21] + ctx.gpr[21]);
    aot_gpr_5 = (ctx.gpr[21] + aot_gpr_5);
    aot_gpr_16 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
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
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088EA32Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 455u, 0x088EA32Cu, 0x08A6734Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 658u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 658u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 658u, 0x08A6734Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA32Cu) goto L_088EA32C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA32C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(305)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.gpr[9] = (aot_gpr_4 << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[8] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088EA360u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_088EA428;
L_088EA360:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_088EA378;
L_088EA378:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u | 12u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[21] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EA0A8;
      }
      goto L_088EA3A0;
    }
L_088EA3A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, ctx.gpr[30], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(340), aot_run_words); }
    goto L_088EA3B0;
L_088EA3B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088EA3CC;
      }
      goto L_088EA3C0;
    }
L_088EA3C0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    goto L_088EA3C4;
L_088EA3C4:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088EA3C4;
      }
      goto L_088EA3CC;
    }
L_088EA3CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EA3EC;
      }
      goto L_088EA3D8;
    }
L_088EA3D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EA3EC;
      }
      goto L_088EA3E4;
    }
L_088EA3E4:
    aot_gpr_31 = (0x088EA3ECu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA3ECu) goto L_088EA3EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA3EC:
    aot_gpr_2 = (0u | 0u);
    goto L_088EA3F0;
L_088EA3F0:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(776), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
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
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088EA428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    { const std::uint32_t aot_run_words[13]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(288), aot_run_words); }
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), aot_gpr_6);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[9] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA498u);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA498u) goto L_088EA498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA498:
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA4B4u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA4B4u) goto L_088EA4B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA4B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_2 << 6u);
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088EA4D0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 470u, 0x088EA4D0u, 0x0881E25Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 348u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 348u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA4D0u) goto L_088EA4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA4D0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 14u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(244), static_cast<std::uint16_t>(ctx.gpr[23]));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), aot_gpr_16);
      if (branch_taken) {
          goto L_088EA50C;
      }
      goto L_088EA500;
    }
L_088EA500:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), aot_gpr_4);
      if (branch_taken) {
          goto L_088EA510;
      }
      goto L_088EA50C;
    }
L_088EA50C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088EA510;
L_088EA510:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088EA530;
      }
      goto L_088EA518;
    }
L_088EA518:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EA564;
      }
      goto L_088EA530;
    }
L_088EA530:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088EA554u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA554u) goto L_088EA554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA554:
    if (ctx.gpr[17] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
        goto L_088EA56C;
    }
    goto L_088EA55C;
L_088EA55C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EA578;
      }
      goto L_088EA564;
    }
L_088EA564:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EA56C;
    }
L_088EA56C:
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EA588;
      }
      goto L_088EA578;
    }
L_088EA578:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_088EA590;
      }
      goto L_088EA580;
    }
L_088EA580:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EA638;
      }
      goto L_088EA588;
    }
L_088EA588:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EA590;
    }
L_088EA590:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA5A8u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA5A8u) goto L_088EA5A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA5A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA5C0u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA5C0u) goto L_088EA5C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA5C0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_4 << 6u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(44))))));
    aot_gpr_5 = (aot_gpr_5 & 256u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088EA608;
      }
      goto L_088EA5EC;
    }
L_088EA5EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_31 = (0x088EA5F8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 487u, 0x088EA5F8u, 0x0881E044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 309u, 0x0881E044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA5F8u) goto L_088EA5F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA5F8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088EA610;
      }
      goto L_088EA600;
    }
L_088EA600:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EA638;
      }
      goto L_088EA608;
    }
L_088EA608:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EA610;
    }
L_088EA610:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EA638;
      }
      goto L_088EA61C;
    }
L_088EA61C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x088EA628u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 492u, 0x088EA628u, 0x0881E3E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 372u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 372u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 372u, 0x0881E3E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA628u) goto L_088EA628;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA628:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088EA638;
      }
      goto L_088EA630;
    }
L_088EA630:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EA638;
    }
L_088EA638:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
        goto L_088EA66C;
    }
    goto L_088EA650;
L_088EA650:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088EA660u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 496u, 0x088EA660u, 0x0881F588u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 591u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 591u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 591u, 0x0881F588u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA660u) goto L_088EA660;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA660:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EA750;
      }
      goto L_088EA668;
    }
L_088EA668:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    goto L_088EA66C;
L_088EA66C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088EA684u);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA684u) goto L_088EA684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA684:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088EA690u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 500u, 0x088EA690u, 0x0881F874u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 634u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 634u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 634u, 0x0881F874u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA690u) goto L_088EA690;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA690:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA6A8u);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA6A8u) goto L_088EA6A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA6A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA6C0u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA6C0u) goto L_088EA6C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA6C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_2 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x088EA6D8u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 503u, 0x088EA6D8u, 0x0881E25Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 348u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 348u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA6D8u) goto L_088EA6D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA6D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(20)));
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_22)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    aot_gpr_31 = (0x088EA718u);
    aot_gpr_6 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 504u, 0x088EA718u, 0x08B60E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 178u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 178u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA718u) goto L_088EA718;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA718:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23244)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23248)));
    aot_gpr_5 = (ctx.gpr[3] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_16 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_088EA748;
      }
      goto L_088EA740;
    }
L_088EA740:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088EA758;
      }
      goto L_088EA748;
    }
L_088EA748:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088EA764;
      }
      goto L_088EA750;
    }
L_088EA750:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EA758;
    }
L_088EA758:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    goto L_088EA764;
L_088EA764:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA77Cu);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA77Cu) goto L_088EA77C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA77C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088EA790u);
    ctx.gpr[7] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 511u, 0x088EA790u, 0x0881EE20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 501u, 0x0881EE20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA790u) goto L_088EA790;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA790:
    ctx.gpr[23] = (aot_gpr_2 | 0u);
    ctx.gpr[18] = (ctx.gpr[23] & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA7B0u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA7B0u) goto L_088EA7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA7B0:
    ctx.gpr[30] = (aot_gpr_2 | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088EA7D8u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 513u, 0x088EA7D8u, 0x08A93198u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 461u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 461u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA7D8u) goto L_088EA7D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA7D8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EA86C;
      }
      goto L_088EA7E0;
    }
L_088EA7E0:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (aot_gpr_4 >> 15u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EA86C;
      }
      goto L_088EA804;
    }
L_088EA804:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 7u, 3u, 3u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EA86C;
      }
      goto L_088EA840;
    }
L_088EA840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA858u);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA858u) goto L_088EA858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA858:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 4096u);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_088EA86C;
L_088EA86C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_088EADD0;
      }
      goto L_088EA874;
    }
L_088EA874:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[30] & 255u);
    ctx.gpr[30] = (aot_gpr_5 << 6u);
    ctx.gpr[30] = (aot_gpr_4 + ctx.gpr[30]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_088EA934;
      }
      goto L_088EA898;
    }
L_088EA898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EA934;
      }
      goto L_088EA8A8;
    }
L_088EA8A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA8C0u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA8C0u) goto L_088EA8C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA8C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA8D8u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA8D8u) goto L_088EA8D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA8D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_2 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
        goto L_088EA914;
    }
    goto L_088EA900;
L_088EA900:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    goto L_088EA914;
L_088EA914:
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[29] + static_cast<std::uint32_t>(244))))));
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x088EA934u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    goto L_088EB674;
L_088EA934:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088EA948u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0056.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 527u, 0x088EA948u, 0x088E43E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0056_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0056_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 36u, 0x088E43E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA948u) goto L_088EA948;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA948:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088EA9DC;
      }
      goto L_088EA950;
    }
L_088EA950:
    aot_gpr_4 = (0u | 255u);
    if (ctx.gpr[18] == aot_gpr_4) {
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
        goto L_088EA988;
    }
    goto L_088EA95C;
L_088EA95C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[18] << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EA9C0;
      }
      goto L_088EA984;
    }
L_088EA984:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    goto L_088EA988;
L_088EA988:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EA9A0u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA9A0u) goto L_088EA9A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EA9A0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    ctx.gpr[9] = (0u | 1u);
    aot_gpr_31 = (0x088EA9C0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 533u, 0x088EA9C0u, 0x0881ECDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 486u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 486u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 486u, 0x0881ECDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA9C0u) goto L_088EA9C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA9C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
        goto L_088EAD2C;
    }
    goto L_088EA9CC;
L_088EA9CC:
    aot_gpr_31 = (0x088EA9D4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0066.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 535u, 0x088EA9D4u, 0x0890F68Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0066_entry(rt, ctx, 780u, aot_mem);
#else
        recomp_unit_0066_entry(rt, ctx, 780u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 780u, 0x0890F68Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA9D4u) goto L_088EA9D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA9D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
      if (branch_taken) {
          goto L_088EAD2C;
      }
      goto L_088EA9DC;
    }
L_088EA9DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088EA9E8u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 537u, 0x088EA9E8u, 0x089387ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 108u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 108u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA9E8u) goto L_088EA9E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA9E8:
    aot_gpr_31 = (0x088EA9F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 538u, 0x088EA9F0u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EA9F0u) goto L_088EA9F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EA9F0:
    if (aot_gpr_2 != 0u) {
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
        goto L_088EAD2C;
    }
    goto L_088EA9F8;
L_088EA9F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(232));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAA10u);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAA10u) goto L_088EAA10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAA10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088EAA2Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAA2Cu) goto L_088EAA2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAA2C:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x088EAA44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0163.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 542u, 0x088EAA44u, 0x08A93198u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0163_entry(rt, ctx, 461u, aot_mem);
#else
        recomp_unit_0163_entry(rt, ctx, 461u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAA44u) goto L_088EAA44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAA44:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EAA70;
      }
      goto L_088EAA4C;
    }
L_088EAA4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[14] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x088EAA70u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 544u, 0x088EAA70u, 0x08A66CD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAA70u) goto L_088EAA70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAA70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_088EAABC;
      }
      goto L_088EAA7C;
    }
L_088EAA7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAA94u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAA94u) goto L_088EAA94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAA94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_2 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EAC2C;
      }
      goto L_088EAABC;
    }
L_088EAABC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAAD4u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAAD4u) goto L_088EAAD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAAD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
        goto L_088EAB8C;
    }
    goto L_088EAAEC;
L_088EAAEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAB04u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAB04u) goto L_088EAB04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAB04:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088EAB18u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 551u, 0x088EAB18u, 0x0881EE20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 501u, 0x0881EE20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAB18u) goto L_088EAB18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAB18:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_gpr_4 = (0u | 255u);
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
      if (branch_taken) {
          goto L_088EAB88;
      }
      goto L_088EAB28;
    }
L_088EAB28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAB40u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAB40u) goto L_088EAB40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAB40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAB58u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAB58u) goto L_088EAB58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAB58:
    { const bool branch_taken = aot_gpr_16 == aot_gpr_2;
      if (branch_taken) {
          goto L_088EAB88;
      }
      goto L_088EAB60;
    }
L_088EAB60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAB78u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAB78u) goto L_088EAB78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAB78:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088EAB88u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 557u, 0x088EAB88u, 0x0881F474u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 583u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 583u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 583u, 0x0881F474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAB88u) goto L_088EAB88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAB88:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    goto L_088EAB8C;
L_088EAB8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EABA4u);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EABA4u) goto L_088EABA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EABA4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 4u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x088EABC4u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 560u, 0x088EABC4u, 0x0881ECDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 486u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 486u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 486u, 0x0881ECDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EABC4u) goto L_088EABC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EABC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EABDCu);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EABDCu) goto L_088EABDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EABDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_2 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x088EABF4u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 562u, 0x088EABF4u, 0x0881E25Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 348u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 348u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EABF4u) goto L_088EABF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EABF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAC0Cu);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAC0Cu) goto L_088EAC0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAC0C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    ctx.gpr[9] = (0u | 1u);
    aot_gpr_31 = (0x088EAC2Cu);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 564u, 0x088EAC2Cu, 0x0881ECDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 486u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 486u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 486u, 0x0881ECDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAC2Cu) goto L_088EAC2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAC2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAC44u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAC44u) goto L_088EAC44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAC44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_2 << 6u);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088EAC60u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 566u, 0x088EAC60u, 0x0881E25Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 348u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 348u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAC60u) goto L_088EAC60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAC60:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAC7Cu);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAC7Cu) goto L_088EAC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAC7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAC94u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAC94u) goto L_088EAC94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAC94:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EAD04;
      }
      goto L_088EACAC;
    }
L_088EACAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EAD04;
      }
      goto L_088EACB8;
    }
L_088EACB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EAD04;
      }
      goto L_088EACD0;
    }
L_088EACD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_088EAD04;
      }
      goto L_088EACDC;
    }
L_088EACDC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088EACE8u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 573u, 0x088EACE8u, 0x0881F37Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 574u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 574u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 574u, 0x0881F37Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EACE8u) goto L_088EACE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EACE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EAD04;
      }
      goto L_088EACF8;
    }
L_088EACF8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088EAD04u);
    aot_gpr_5 = (0u | 17u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 575u, 0x088EAD04u, 0x08908D60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 240u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 240u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAD04u) goto L_088EAD04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAD04:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088EAD1C;
      }
      goto L_088EAD14;
    }
L_088EAD14:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    goto L_088EAD1C;
L_088EAD1C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088EAD28u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 578u, 0x088EAD28u, 0x088E3464u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 428u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 428u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 428u, 0x088E3464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAD28u) goto L_088EAD28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAD28:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    goto L_088EAD2C;
L_088EAD2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088EAD44u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAD44u) goto L_088EAD44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAD44:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088EAD5Cu);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 581u, 0x088EAD5Cu, 0x0881FB44u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 675u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 675u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881FB44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAD5Cu) goto L_088EAD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAD5C:
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_16 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EADA8u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EADA8u) goto L_088EADA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EADA8:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[9] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EADC8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0007.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 583u, 0x088EADC8u, 0x08822484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0007_entry(rt, ctx, 439u, aot_mem);
#else
        recomp_unit_0007_entry(rt, ctx, 439u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 439u, 0x08822484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EADC8u) goto L_088EADC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EADC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EADD0;
    }
L_088EADD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EB038;
      }
      goto L_088EADDC;
    }
L_088EADDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EADF4u);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EADF4u) goto L_088EADF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EADF4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (0u | 4u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x088EAE18u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 587u, 0x088EAE18u, 0x0881ECDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 486u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 486u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 486u, 0x0881ECDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAE18u) goto L_088EAE18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAE18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088EAE30u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAE30u) goto L_088EAE30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAE30:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EAE48u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 589u, 0x088EAE48u, 0x0881FB44u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 675u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 675u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881FB44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAE48u) goto L_088EAE48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAE48:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088EAEA0u);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAEA0u) goto L_088EAEA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EAEA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088EAEC0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0007.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 591u, 0x088EAEC0u, 0x08822484u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0007_entry(rt, ctx, 439u, aot_mem);
#else
        recomp_unit_0007_entry(rt, ctx, 439u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 439u, 0x08822484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAEC0u) goto L_088EAEC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAEC0:
    aot_gpr_4 = (0u | 54u);
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8681)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(115));
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(127));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(139));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_22));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(155), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088EAF38u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0056.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 592u, 0x088EAF38u, 0x088E4C6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0056_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0056_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 164u, 0x088E4C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EAF38u) goto L_088EAF38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EAF38:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[29] + static_cast<std::uint32_t>(244))))));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(158), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(159), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr_16));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store_word_left(ctx.gpr[22] + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(ctx.gpr[22] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_direct_store_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(127));
    aot_mem.aot_direct_store_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), aot_gpr_5);
    aot_mem.aot_direct_store_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_direct_store_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), aot_gpr_5);
    aot_mem.aot_direct_store_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_direct_store_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(139));
    aot_mem.aot_direct_store_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    aot_mem.aot_direct_store_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(151), ctx.gpr[1]);
    aot_mem.aot_direct_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(154), ctx.gpr[1]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3))))));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088EB038u);
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 593u, 0x088EB038u, 0x08ADCA34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 189u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 189u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB038u) goto L_088EB038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB038:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(288), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
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
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088EB074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_6 & 255u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x088EB0C4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB0C4u) goto L_088EB0C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB0C4:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EB0FC;
      }
      goto L_088EB0D4;
    }
L_088EB0D4:
    aot_gpr_31 = (0x088EB0DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 597u, 0x088EB0DCu, 0x08911284u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 327u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 327u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 327u, 0x08911284u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB0DCu) goto L_088EB0DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB0DC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EB0F4;
      }
      goto L_088EB0E4;
    }
L_088EB0E4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[20] = (0u | 22u);
      if (branch_taken) {
          goto L_088EB104;
      }
      goto L_088EB0EC;
    }
L_088EB0EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB138;
      }
      goto L_088EB0F4;
    }
L_088EB0F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB64C;
      }
      goto L_088EB0FC;
    }
L_088EB0FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB64C;
      }
      goto L_088EB104;
    }
L_088EB104:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x088EB11Cu);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 603u, 0x088EB11Cu, 0x08909A64u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 442u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 442u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB11Cu) goto L_088EB11C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB11C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EB128u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 604u, 0x088EB128u, 0x08909804u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 405u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 405u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 405u, 0x08909804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB128u) goto L_088EB128;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB128:
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x088EB138u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 605u, 0x088EB138u, 0x089092DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 326u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 326u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB138u) goto L_088EB138;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB138:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_088EB1DC;
      }
      goto L_088EB144;
    }
L_088EB144:
    aot_gpr_31 = (0x088EB14Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0036.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 607u, 0x088EB14Cu, 0x088954ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0036_entry(rt, ctx, 273u, aot_mem);
#else
        recomp_unit_0036_entry(rt, ctx, 273u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 273u, 0x088954ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB14Cu) goto L_088EB14C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB14C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EB1DC;
      }
      goto L_088EB154;
    }
L_088EB154:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 19u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088EB1DC;
      }
      goto L_088EB17C;
    }
L_088EB17C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EB18Cu);
    aot_gpr_6 = (0u | 218u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 610u, 0x088EB18Cu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB18Cu) goto L_088EB18C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB18C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EB1AC;
      }
      goto L_088EB198;
    }
L_088EB198:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EB1A8u);
    aot_gpr_6 = (0u | 172u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 612u, 0x088EB1A8u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB1A8u) goto L_088EB1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB1A8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_088EB1AC;
L_088EB1AC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EB1DC;
      }
      goto L_088EB1B4;
    }
L_088EB1B4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (16059u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 48060u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088EB1DC;
      }
      goto L_088EB1D4;
    }
L_088EB1D4:
    aot_gpr_31 = (0x088EB1DCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 616u, 0x088EB1DCu, 0x08890474u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 73u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 73u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB1DCu) goto L_088EB1DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB1DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
    aot_gpr_5 = (0u | 50u);
      if (branch_taken) {
          goto L_088EB238;
      }
      goto L_088EB1E8;
    }
L_088EB1E8:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EB238;
      }
      goto L_088EB1F0;
    }
L_088EB1F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
        goto L_088EB214;
    }
    goto L_088EB200;
L_088EB200:
    aot_gpr_31 = (0x088EB208u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB208u) goto L_088EB208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB208:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EB238;
      }
      goto L_088EB210;
    }
L_088EB210:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    goto L_088EB214;
L_088EB214:
    aot_gpr_5 = (0u | 14u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EB238;
      }
      goto L_088EB220;
    }
L_088EB220:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[20] = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088EB240;
      }
      goto L_088EB230;
    }
L_088EB230:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB24C;
      }
      goto L_088EB238;
    }
L_088EB238:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB64C;
      }
      goto L_088EB240;
    }
L_088EB240:
    aot_gpr_31 = (0x088EB248u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0129.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 627u, 0x088EB248u, 0x08A08730u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0129_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0129_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB248u) goto L_088EB248;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB248:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    goto L_088EB24C;
L_088EB24C:
    aot_gpr_5 = (0u | 51u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088EB26C;
      }
      goto L_088EB258;
    }
L_088EB258:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EB264u);
    aot_gpr_5 = (0u | 50u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 630u, 0x088EB264u, 0x08908D60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 240u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 240u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB264u) goto L_088EB264;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB264:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB2F4;
      }
      goto L_088EB26C;
    }
L_088EB26C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088EB2E8;
      }
      goto L_088EB274;
    }
L_088EB274:
    aot_gpr_31 = (0x088EB27Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB27Cu) goto L_088EB27C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB27C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EB2E8;
      }
      goto L_088EB284;
    }
L_088EB284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_088EB2E8;
      }
      goto L_088EB290;
    }
L_088EB290:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    aot_gpr_31 = (0x088EB2C4u);
    aot_gpr_6 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 636u, 0x088EB2C4u, 0x08B60E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 178u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 178u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB2C4u) goto L_088EB2C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB2C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23172)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23176)));
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_5 = (ctx.gpr[3] & aot_gpr_5);
      if (branch_taken) {
          goto L_088EB2F4;
      }
      goto L_088EB2E0;
    }
L_088EB2E0:
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
      if (branch_taken) {
          goto L_088EB2F4;
      }
      goto L_088EB2E8;
    }
L_088EB2E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EB2F4u);
    aot_gpr_5 = (0u | 22u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 639u, 0x088EB2F4u, 0x08908D60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 240u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 240u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB2F4u) goto L_088EB2F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB2F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EB30Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB30Cu) goto L_088EB30C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB30C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088EB38C;
      }
      goto L_088EB324;
    }
L_088EB324:
    aot_gpr_5 = (0u | 5u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (0u | 8u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (0u | 9u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (49520u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    goto L_088EB34C;
L_088EB34C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088EB35Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 643u, 0x088EB35Cu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB35Cu) goto L_088EB35C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB35C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EB378;
      }
      goto L_088EB368;
    }
L_088EB368:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_088EB378;
L_088EB378:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088EB34C;
      }
      goto L_088EB38C;
    }
L_088EB38C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_6 = (aot_gpr_5 & 8192u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 4096u);
      if (branch_taken) {
          goto L_088EB3E4;
      }
      goto L_088EB39C;
    }
L_088EB39C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088EB3E8;
      }
      goto L_088EB3A4;
    }
L_088EB3A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (2u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088EB3E4;
      }
      goto L_088EB3C0;
    }
L_088EB3C0:
    aot_gpr_5 = (0u | 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 215u);
        goto L_088EB3CC;
    }
    goto L_088EB3CC;
L_088EB3CC:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088EB3DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 651u, 0x088EB3DCu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB3DCu) goto L_088EB3DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB3DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088EB3F8;
      }
      goto L_088EB3E4;
    }
L_088EB3E4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_088EB3E8;
L_088EB3E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EB3F4u);
    aot_gpr_6 = (0u | 214u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 654u, 0x088EB3F4u, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB3F4u) goto L_088EB3F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB3F4:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    goto L_088EB3F8;
L_088EB3F8:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
        goto L_088EB41C;
    }
    goto L_088EB400;
L_088EB400:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088EB628;
      }
      goto L_088EB418;
    }
L_088EB418:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    goto L_088EB41C;
L_088EB41C:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EB628;
      }
      goto L_088EB428;
    }
L_088EB428:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EB628;
      }
      goto L_088EB438;
    }
L_088EB438:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 4096u);
      if (branch_taken) {
          goto L_088EB4A0;
      }
      goto L_088EB448;
    }
L_088EB448:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EB4A0;
      }
      goto L_088EB450;
    }
L_088EB450:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088EB4A0;
      }
      goto L_088EB46C;
    }
L_088EB46C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (0u | 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 215u);
        goto L_088EB480;
    }
    goto L_088EB480;
L_088EB480:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EB498u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 665u, 0x088EB498u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB498u) goto L_088EB498;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088EB60C;
      }
      goto L_088EB4A0;
    }
L_088EB4A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    ctx.gpr[20] = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_088EB524;
      }
      goto L_088EB4B0;
    }
L_088EB4B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EB524;
      }
      goto L_088EB4C0;
    }
L_088EB4C0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    aot_gpr_31 = (0x088EB4F4u);
    aot_gpr_6 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 669u, 0x088EB4F4u, 0x08B60E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 178u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 178u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB4F4u) goto L_088EB4F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB4F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23228)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23232)));
    aot_gpr_5 = (ctx.gpr[3] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_088EB51C;
      }
      goto L_088EB514;
    }
L_088EB514:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088EB524;
      }
      goto L_088EB51C;
    }
L_088EB51C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088EB60C;
      }
      goto L_088EB524;
    }
L_088EB524:
    aot_gpr_31 = (0x088EB52Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB52Cu) goto L_088EB52C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB52C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088EB5F4;
      }
      goto L_088EB534;
    }
L_088EB534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_088EB5F4;
      }
      goto L_088EB540;
    }
L_088EB540:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    aot_gpr_31 = (0x088EB574u);
    aot_gpr_6 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 676u, 0x088EB574u, 0x08B60E84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 178u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 178u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB574u) goto L_088EB574;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB574:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23228)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23232)));
    aot_gpr_5 = (ctx.gpr[3] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_088EB59C;
      }
      goto L_088EB594;
    }
L_088EB594:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088EB5F4;
      }
      goto L_088EB59C;
    }
L_088EB59C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_5 = (16640u << 16u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_088EB5D8;
      }
      goto L_088EB5BC;
    }
L_088EB5BC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088EB5D0u);
    ctx.gpr[7] = (0u | 172u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 680u, 0x088EB5D0u, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB5D0u) goto L_088EB5D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB5D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088EB60C;
      }
      goto L_088EB5D8;
    }
L_088EB5D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 14u);
    aot_gpr_31 = (0x088EB5ECu);
    ctx.gpr[7] = (0u | 218u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 682u, 0x088EB5ECu, 0x089088F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 163u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 163u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB5ECu) goto L_088EB5EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB5EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088EB60C;
      }
      goto L_088EB5F4;
    }
L_088EB5F4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088EB608u);
    ctx.gpr[7] = (0u | 214u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 684u, 0x088EB608u, 0x089089B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 175u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 175u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB608u) goto L_088EB608;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB608:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    goto L_088EB60C;
L_088EB60C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088EB628;
      }
      goto L_088EB614;
    }
L_088EB614:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16640u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088EB628;
L_088EB628:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088EB64C;
      }
      goto L_088EB630;
    }
L_088EB630:
    aot_gpr_31 = (0x088EB638u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB638u) goto L_088EB638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB638:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088EB64C;
      }
      goto L_088EB640;
    }
L_088EB640:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EB64Cu);
    aot_gpr_5 = (0u | 137u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 691u, 0x088EB64Cu, 0x08860424u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB64Cu) goto L_088EB64C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB64C:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088EB674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(132), aot_run_words); }
    ctx.gpr[22] = (ctx.gpr[8] & 255u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[20] = (0u | 16u);
    ctx.gpr[8] = (16512u << 16u);
    aot_fpr_22 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (aot_gpr_5 | 0u);
    ctx.gpr[23] = (aot_gpr_6 | 0u);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[9]);
      if (branch_taken) {
          goto L_088EB758;
      }
      goto L_088EB704;
    }
L_088EB704:
    aot_gpr_16 = (2237u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x088EB714u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB714u) goto L_088EB714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB714:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    aot_gpr_4 = (0u | 46u);
      if (branch_taken) {
          goto L_088EB758;
      }
      goto L_088EB720;
    }
L_088EB720:
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
      if (branch_taken) {
          goto L_088EB758;
      }
      goto L_088EB728;
    }
L_088EB728:
    aot_gpr_31 = (0x088EB730u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 697u, 0x088EB730u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB730u) goto L_088EB730;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB730:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EB758;
      }
      goto L_088EB738;
    }
L_088EB738:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EB758;
      }
      goto L_088EB744;
    }
L_088EB744:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EB770;
      }
      goto L_088EB758;
    }
L_088EB758:
    aot_gpr_31 = (0x088EB760u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB760u) goto L_088EB760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB760:
    { const bool branch_taken = ctx.gpr[21] == aot_gpr_2;
    aot_gpr_16 = (0u | 17u);
      if (branch_taken) {
          goto L_088EB778;
      }
      goto L_088EB768;
    }
L_088EB768:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB7C4;
      }
      goto L_088EB770;
    }
L_088EB770:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EB778;
    }
L_088EB778:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
    aot_gpr_4 = (16448u << 16u);
      if (branch_taken) {
          goto L_088EB7C4;
      }
      goto L_088EB780;
    }
L_088EB780:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088EB7C4;
      }
      goto L_088EB794;
    }
L_088EB794:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(316)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(316), aot_gpr_5);
    goto L_088EB7C4;
L_088EB7C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_16;
      if (branch_taken) {
          goto L_088EB7D8;
      }
      goto L_088EB7D0;
    }
L_088EB7D0:
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    goto L_088EB7D8;
L_088EB7D8:
    aot_gpr_31 = (0x088EB7E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB7E0u) goto L_088EB7E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB7E0:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_2;
      if (branch_taken) {
          goto L_088EB8DC;
      }
      goto L_088EB7E8;
    }
L_088EB7E8:
    aot_gpr_31 = (0x088EB7F0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB7F0u) goto L_088EB7F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB7F0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EB810;
      }
      goto L_088EB800;
    }
L_088EB800:
    { const bool branch_taken = ctx.gpr[21] != 0u;
      if (branch_taken) {
          goto L_088EB818;
      }
      goto L_088EB808;
    }
L_088EB808:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB868;
      }
      goto L_088EB810;
    }
L_088EB810:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EB818;
    }
L_088EB818:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EB868;
      }
      goto L_088EB834;
    }
L_088EB834:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (aot_gpr_4 ^ 13u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ 15u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088EB868;
      }
      goto L_088EB858;
    }
L_088EB858:
    aot_gpr_31 = (0x088EB860u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0105.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 719u, 0x088EB860u, 0x089AB910u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0105_entry(rt, ctx, 762u, aot_mem);
#else
        recomp_unit_0105_entry(rt, ctx, 762u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 762u, 0x089AB910u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB860u) goto L_088EB860;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB860:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EB878;
      }
      goto L_088EB868;
    }
L_088EB868:
    if (ctx.gpr[23] == aot_gpr_16) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_088EB88C;
    }
    goto L_088EB870;
L_088EB870:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 33u);
      if (branch_taken) {
          goto L_088EB880;
      }
      goto L_088EB878;
    }
L_088EB878:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EB880;
    }
L_088EB880:
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_4;
      if (branch_taken) {
          goto L_088EB8B8;
      }
      goto L_088EB888;
    }
L_088EB888:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_088EB88C;
L_088EB88C:
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(335)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EB8D4;
      }
      goto L_088EB8B8;
    }
L_088EB8B8:
    aot_gpr_31 = (0x088EB8C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB8C0u) goto L_088EB8C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB8C0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088EB8CCu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 728u, 0x088EB8CCu, 0x0894751Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 668u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 668u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 668u, 0x0894751Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB8CCu) goto L_088EB8CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB8CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB8DC;
      }
      goto L_088EB8D4;
    }
L_088EB8D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EB8DC;
    }
L_088EB8DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EB910;
      }
      goto L_088EB8EC;
    }
L_088EB8EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EB910;
      }
      goto L_088EB8FC;
    }
L_088EB8FC:
    aot_gpr_16 = (0u | 46u);
    if (ctx.gpr[23] == aot_gpr_16) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(464)));
        goto L_088EB918;
    }
    goto L_088EB908;
L_088EB908:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB928;
      }
      goto L_088EB910;
    }
L_088EB910:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EB918;
    }
L_088EB918:
    aot_gpr_5 = (256u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EB948;
      }
      goto L_088EB928;
    }
L_088EB928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EB950;
      }
      goto L_088EB940;
    }
L_088EB940:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB978;
      }
      goto L_088EB948;
    }
L_088EB948:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EB950;
    }
L_088EB950:
    aot_gpr_31 = (0x088EB958u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 740u, 0x088EB958u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB958u) goto L_088EB958;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB958:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EB970;
      }
      goto L_088EB960;
    }
L_088EB960:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EB978;
      }
      goto L_088EB970;
    }
L_088EB970:
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_16;
      if (branch_taken) {
          goto L_088EB994;
      }
      goto L_088EB978;
    }
L_088EB978:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EB99C;
      }
      goto L_088EB98C;
    }
L_088EB98C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EB9CC;
      }
      goto L_088EB994;
    }
L_088EB994:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EB99C;
    }
L_088EB99C:
    aot_gpr_31 = (0x088EB9A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB9A4u) goto L_088EB9A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB9A4:
    { const bool branch_taken = ctx.gpr[21] == aot_gpr_2;
      if (branch_taken) {
          goto L_088EB9CC;
      }
      goto L_088EB9AC;
    }
L_088EB9AC:
    aot_gpr_31 = (0x088EB9B4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 749u, 0x088EB9B4u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB9B4u) goto L_088EB9B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EB9B4:
    { const bool branch_taken = ctx.gpr[21] == aot_gpr_2;
      if (branch_taken) {
          goto L_088EB9CC;
      }
      goto L_088EB9BC;
    }
L_088EB9BC:
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_16;
    aot_gpr_4 = (0u | 44u);
      if (branch_taken) {
          goto L_088EB9CC;
      }
      goto L_088EB9C4;
    }
L_088EB9C4:
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_4;
      if (branch_taken) {
          goto L_088EB9F0;
      }
      goto L_088EB9CC;
    }
L_088EB9CC:
    aot_gpr_31 = (0x088EB9D4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EB9D4u) goto L_088EB9D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EB9D4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EB9F8;
      }
      goto L_088EB9DC;
    }
L_088EB9DC:
    aot_gpr_4 = (16040u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
      if (branch_taken) {
          goto L_088EBA04;
      }
      goto L_088EB9F0;
    }
L_088EB9F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EB9F8;
    }
L_088EB9F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1364)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_088EBA04;
L_088EBA04:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 30u);
      if (branch_taken) {
          goto L_088EBA20;
      }
      goto L_088EBA10;
    }
L_088EBA10:
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_4;
      if (branch_taken) {
          goto L_088EBA20;
      }
      goto L_088EBA18;
    }
L_088EBA18:
    aot_gpr_4 = (17098u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    goto L_088EBA20;
L_088EBA20:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EBB1C;
      }
      goto L_088EBA2C;
    }
L_088EBA2C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_088EBB1C;
      }
      goto L_088EBA34;
    }
L_088EBA34:
    aot_gpr_31 = (0x088EBA3Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBA3Cu) goto L_088EBA3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EBA3C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EBB1C;
      }
      goto L_088EBA44;
    }
L_088EBA44:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088EBA50u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBA50u) goto L_088EBA50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EBA50:
    aot_gpr_16 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088EBA5Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 766u, 0x088EBA5Cu, 0x08AD0600u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 58u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 58u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 58u, 0x08AD0600u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBA5Cu) goto L_088EBA5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBA5C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088EBA84;
      }
      goto L_088EBA64;
    }
L_088EBA64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 19u);
      if (branch_taken) {
          goto L_088EBA78;
      }
      goto L_088EBA70;
    }
L_088EBA70:
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_4;
      if (branch_taken) {
          goto L_088EBA84;
      }
      goto L_088EBA78;
    }
L_088EBA78:
    aot_gpr_4 = (16320u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_088EBA84;
L_088EBA84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 14u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EBB1C;
      }
      goto L_088EBAA0;
    }
L_088EBAA0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EBB1C;
      }
      goto L_088EBAB4;
    }
L_088EBAB4:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8680)));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr_16 = (2237u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EBADCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0056.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 773u, 0x088EBADCu, 0x088E4C6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0056_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0056_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 164u, 0x088E4C6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBADCu) goto L_088EBADC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBADC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_088EBB00;
    }
    goto L_088EBB00;
L_088EBB00:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x088EBB1Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 775u, 0x088EBB1Cu, 0x08ADCA34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 189u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 189u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBB1Cu) goto L_088EBB1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBB1C:
    aot_gpr_31 = (0x088EBB24u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBB24u) goto L_088EBB24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EBB24:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_088EBB64;
      }
      goto L_088EBB2C;
    }
L_088EBB2C:
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    aot_gpr_4 = (0u | 5u);
      if (branch_taken) {
          goto L_088EBB5C;
      }
      goto L_088EBB34;
    }
L_088EBB34:
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    aot_gpr_4 = (0u | 8u);
      if (branch_taken) {
          goto L_088EBB5C;
      }
      goto L_088EBB3C;
    }
L_088EBB3C:
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    aot_gpr_4 = (0u | 9u);
      if (branch_taken) {
          goto L_088EBB5C;
      }
      goto L_088EBB44;
    }
L_088EBB44:
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    aot_gpr_4 = (0u | 10u);
      if (branch_taken) {
          goto L_088EBB5C;
      }
      goto L_088EBB4C;
    }
L_088EBB4C:
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    aot_gpr_4 = (0u | 11u);
      if (branch_taken) {
          goto L_088EBB5C;
      }
      goto L_088EBB54;
    }
L_088EBB54:
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_4;
      if (branch_taken) {
          goto L_088EBB64;
      }
      goto L_088EBB5C;
    }
L_088EBB5C:
    aot_gpr_4 = (0u | 200u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1935), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088EBB64;
L_088EBB64:
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088EBBCC;
      }
      goto L_088EBB78;
    }
L_088EBB78:
    aot_gpr_4 = (48793u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088EBB8Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 786u, 0x088EBB8Cu, 0x088E3DD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 563u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 563u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBB8Cu) goto L_088EBB8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBB8C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088EBC68;
      }
      goto L_088EBB94;
    }
L_088EBB94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x088EBBA0u);
    aot_gpr_5 = (0u | 4096u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 788u, 0x088EBBA0u, 0x0886D4F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 211u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 211u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBBA0u) goto L_088EBBA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBBA0:
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = aot_gpr_2 == 0u;
    { const float fs = aot_fpr_22; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088EBBB8;
      }
      goto L_088EBBB0;
    }
L_088EBBB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 42u);
      if (branch_taken) {
          goto L_088EBBBC;
      }
      goto L_088EBBB8;
    }
L_088EBBB8:
    ctx.gpr[20] = (0u | 40u);
    goto L_088EBBBC;
L_088EBBBC:
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_088EBC68;
      }
      goto L_088EBBCC;
    }
L_088EBBCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088EBC68;
      }
      goto L_088EBBDC;
    }
L_088EBBDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x088EBBE8u);
    aot_gpr_5 = (0u | 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 794u, 0x088EBBE8u, 0x0886D4F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 211u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 211u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBBE8u) goto L_088EBBE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBBE8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EBC3C;
      }
      goto L_088EBBF4;
    }
L_088EBBF4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088EBC3C;
      }
      goto L_088EBC04;
    }
L_088EBC04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    { const float fs = aot_fpr_22; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088EBC2C;
      }
      goto L_088EBC24;
    }
L_088EBC24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 42u);
      if (branch_taken) {
          goto L_088EBC30;
      }
      goto L_088EBC2C;
    }
L_088EBC2C:
    ctx.gpr[20] = (0u | 40u);
    goto L_088EBC30;
L_088EBC30:
    aot_gpr_4 = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088EBC64;
      }
      goto L_088EBC3C;
    }
L_088EBC3C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EBC60;
      }
      goto L_088EBC44;
    }
L_088EBC44:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088EBC60;
      }
      goto L_088EBC58;
    }
L_088EBC58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 173u);
      if (branch_taken) {
          goto L_088EBC64;
      }
      goto L_088EBC60;
    }
L_088EBC60:
    ctx.gpr[20] = (0u | 16u);
    goto L_088EBC64;
L_088EBC64:
    aot_gpr_16 = (0u | 0u);
    goto L_088EBC68;
L_088EBC68:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 131u, 0x088EC5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EBC70;
    }
L_088EBC70:
    aot_gpr_4 = (ctx.gpr[23] < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 131u, 0x088EC5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EBC7C;
    }
L_088EBC7C:
    ctx.gpr[23] = (ctx.gpr[23] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[23]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16224)));
    jump_target = ctx.gpr[1];
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 2u));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088EBC94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EBCC0;
      }
      goto L_088EBCA8;
    }
L_088EBCA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EBCC8;
      }
      goto L_088EBCB8;
    }
L_088EBCB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBD20;
      }
      goto L_088EBCC0;
    }
L_088EBCC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EBCC8;
    }
L_088EBCC8:
    aot_gpr_4 = (48793u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088EBCDCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 813u, 0x088EBCDCu, 0x088E3DD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 563u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 563u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBCDCu) goto L_088EBCDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBCDC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088EBD18;
      }
      goto L_088EBCE4;
    }
L_088EBCE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x088EBCF0u);
    aot_gpr_5 = (0u | 4096u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 815u, 0x088EBCF0u, 0x0886D4F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 211u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 211u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBCF0u) goto L_088EBCF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBCF0:
    aot_gpr_4 = (16384u << 16u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088EBD04;
      }
      goto L_088EBCFC;
    }
L_088EBCFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 42u);
      if (branch_taken) {
          goto L_088EBD08;
      }
      goto L_088EBD04;
    }
L_088EBD04:
    ctx.gpr[20] = (0u | 40u);
    goto L_088EBD08;
L_088EBD08:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD18;
    }
L_088EBD18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 173u);
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD20;
    }
L_088EBD20:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBD48;
      }
      goto L_088EBD2C;
    }
L_088EBD2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD34;
    }
L_088EBD34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
      if (branch_taken) {
          goto L_088EBD60;
      }
      goto L_088EBD3C;
    }
L_088EBD3C:
    ctx.gpr[20] = (0u | 28u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD48;
    }
L_088EBD48:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBD6C;
      }
      goto L_088EBD50;
    }
L_088EBD50:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EBD78;
      }
      goto L_088EBD58;
    }
L_088EBD58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD60;
    }
L_088EBD60:
    ctx.gpr[20] = (0u | 29u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD6C;
    }
L_088EBD6C:
    ctx.gpr[20] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBD7C;
      }
      goto L_088EBD78;
    }
L_088EBD78:
    ctx.gpr[20] = (0u | 31u);
    goto L_088EBD7C;
L_088EBD7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 131u, 0x088EC5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EBD84;
    }
L_088EBD84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EBDB0;
      }
      goto L_088EBD98;
    }
L_088EBD98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088EBDB8;
      }
      goto L_088EBDA8;
    }
L_088EBDA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBE10;
      }
      goto L_088EBDB0;
    }
L_088EBDB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EBDB8;
    }
L_088EBDB8:
    aot_gpr_4 = (48793u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088EBDCCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 836u, 0x088EBDCCu, 0x088E3DD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 563u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 563u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBDCCu) goto L_088EBDCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBDCC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088EBE08;
      }
      goto L_088EBDD4;
    }
L_088EBDD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x088EBDE0u);
    aot_gpr_5 = (0u | 4096u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0026.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 838u, 0x088EBDE0u, 0x0886D4F4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0026_entry(rt, ctx, 211u, aot_mem);
#else
        recomp_unit_0026_entry(rt, ctx, 211u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBDE0u) goto L_088EBDE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBDE0:
    aot_gpr_4 = (16384u << 16u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088EBDF4;
      }
      goto L_088EBDEC;
    }
L_088EBDEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 42u);
      if (branch_taken) {
          goto L_088EBDF8;
      }
      goto L_088EBDF4;
    }
L_088EBDF4:
    ctx.gpr[20] = (0u | 40u);
    goto L_088EBDF8;
L_088EBDF8:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE08;
    }
L_088EBE08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 173u);
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE10;
    }
L_088EBE10:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBE38;
      }
      goto L_088EBE1C;
    }
L_088EBE1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE24;
    }
L_088EBE24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
      if (branch_taken) {
          goto L_088EBE50;
      }
      goto L_088EBE2C;
    }
L_088EBE2C:
    ctx.gpr[20] = (0u | 28u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE38;
    }
L_088EBE38:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBE5C;
      }
      goto L_088EBE40;
    }
L_088EBE40:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EBE68;
      }
      goto L_088EBE48;
    }
L_088EBE48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE50;
    }
L_088EBE50:
    ctx.gpr[20] = (0u | 29u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE5C;
    }
L_088EBE5C:
    ctx.gpr[20] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBE6C;
      }
      goto L_088EBE68;
    }
L_088EBE68:
    ctx.gpr[20] = (0u | 31u);
    goto L_088EBE6C;
L_088EBE6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 131u, 0x088EC5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EBE74;
    }
L_088EBE74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (1024u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EBEA0;
      }
      goto L_088EBE88;
    }
L_088EBE88:
    aot_gpr_31 = (0x088EBE90u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBE90u) goto L_088EBE90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EBE90:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
        goto L_088EBEB8;
    }
    goto L_088EBE98;
L_088EBE98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_088EBEA8;
      }
      goto L_088EBEA0;
    }
L_088EBEA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 308u, 0x088ED0E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EBEA8;
    }
L_088EBEA8:
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EBEC8;
      }
      goto L_088EBEB4;
    }
L_088EBEB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    goto L_088EBEB8;
L_088EBEB8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088EBEC8;
      }
      goto L_088EBEC0;
    }
L_088EBEC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088EBF2C;
      }
      goto L_088EBEC8;
    }
L_088EBEC8:
    aot_gpr_4 = (0u | 30u);
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    aot_gpr_4 = (0u | 31u);
      if (branch_taken) {
          goto L_088EBEF4;
      }
      goto L_088EBED4;
    }
L_088EBED4:
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    aot_gpr_4 = (0u | 29u);
      if (branch_taken) {
          goto L_088EBEF4;
      }
      goto L_088EBEDC;
    }
L_088EBEDC:
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    aot_gpr_4 = (0u | 28u);
      if (branch_taken) {
          goto L_088EBEF4;
      }
      goto L_088EBEE4;
    }
L_088EBEE4:
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    aot_gpr_4 = (0u | 34u);
      if (branch_taken) {
          goto L_088EBEF4;
      }
      goto L_088EBEEC;
    }
L_088EBEEC:
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_4;
      if (branch_taken) {
          goto L_088EBEFC;
      }
      goto L_088EBEF4;
    }
L_088EBEF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088EBF2C;
      }
      goto L_088EBEFC;
    }
L_088EBEFC:
    aot_gpr_4 = (0u | 21u);
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_4;
      if (branch_taken) {
          goto L_088EBF1C;
      }
      goto L_088EBF08;
    }
L_088EBF08:
    aot_gpr_31 = (0x088EBF10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBF10u) goto L_088EBF10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EBF10:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 7u);
      if (branch_taken) {
          goto L_088EBF2C;
      }
      goto L_088EBF1C;
    }
L_088EBF1C:
    aot_gpr_31 = (0x088EBF24u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBF24u) goto L_088EBF24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088EBF24:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    goto L_088EBF2C;
L_088EBF2C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EBFAC;
      }
      goto L_088EBF34;
    }
L_088EBF34:
    aot_gpr_4 = (0u | 21u);
    { const bool branch_taken = ctx.gpr[23] != aot_gpr_4;
      if (branch_taken) {
          goto L_088EBF9C;
      }
      goto L_088EBF40;
    }
L_088EBF40:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBF68;
      }
      goto L_088EBF4C;
    }
L_088EBF4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF54;
    }
L_088EBF54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
      if (branch_taken) {
          goto L_088EBF84;
      }
      goto L_088EBF5C;
    }
L_088EBF5C:
    ctx.gpr[20] = (0u | 28u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF68;
    }
L_088EBF68:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EBF90;
      }
      goto L_088EBF70;
    }
L_088EBF70:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF78;
    }
L_088EBF78:
    ctx.gpr[20] = (0u | 31u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF84;
    }
L_088EBF84:
    ctx.gpr[20] = (0u | 29u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF90;
    }
L_088EBF90:
    ctx.gpr[20] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088EBFA0;
      }
      goto L_088EBF9C;
    }
L_088EBF9C:
    ctx.gpr[20] = (0u | 16u);
    goto L_088EBFA0;
L_088EBFA0:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 18u, 0x088EC0E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EBFAC;
    }
L_088EBFAC:
    aot_gpr_4 = (ctx.gpr[30] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 18u, 0x088EC0E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EBFB8;
    }
L_088EBFB8:
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[30]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16032)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088EBFD0:
    ctx.gpr[20] = (0u | 20u);
    aot_gpr_6 = (ctx.gpr[22] << 24u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 24u));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088EBFE8u);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0057->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0057_entry, 890u, 0x088EBFE8u, 0x088E3C60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 547u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 547u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088EBFE8u) goto L_088EBFE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_088EBFE8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 18u, 0x088EC0E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088EBFF8;
    }
L_088EBFF8:
    ctx.gpr[20] = (0u | 16u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x088EC000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0057(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0057_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_57(Runtime &runtime) {
    runtime.register_generated_unit(57u, 0x088E8000u, 16384u, &recomp_unit_0057, &recomp_unit_0057_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x088E8000u, &recomp_unit_0057, "recomp_unit_0057",
                                          kEntryMasks_recomp_unit_0057, 64u);
}
} // namespace psprecomp
