#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0110[64] = {
    0x8404280534D00801ull, 0x0020021114504900ull, 0x5402040002A80412ull, 0xA010200540204080ull,
    0x40122A8040810142ull, 0x0922AA5248001034ull, 0x0018005140334AD1ull, 0x5054094025690405ull,
    0x84A44A90004002A4ull, 0x068600944C305042ull, 0x002A800040800000ull, 0x4080000000010010ull,
    0x0002940000028100ull, 0x1100228000002801ull, 0x301140204000A604ull, 0x15554A0834401560ull,
    0x4814148155205548ull, 0x2918218880000004ull, 0x1096282002012B49ull, 0x6928895548000800ull,
    0x1020408122484869ull, 0x00AA208002A5A408ull, 0x411290A44524C500ull, 0x4000220000000880ull,
    0x9402080410502054ull, 0x0401204004220242ull, 0xA211022000001000ull, 0x411282200092A900ull,
    0x0400002A24202004ull, 0xA924A55020000106ull, 0x8000926000920806ull, 0x4A44954924000803ull,
    0x0651402695421255ull, 0x00128044A9040280ull, 0x0062522800A28000ull, 0x0D00344001500801ull,
    0x2104010A00000340ull, 0x808080C420005010ull, 0x002A908400050800ull, 0x2500889520805001ull,
    0x04400AA491402A00ull, 0x2A20924800401001ull, 0x080200148A0102A8ull, 0x00AA4840500A8200ull,
    0x2008001000809000ull, 0x0100400080012400ull, 0x9200080200000920ull, 0x1004000901004100ull,
    0x0115400808089200ull, 0x2A454008008A0050ull, 0x41054A8055AAA522ull, 0x4024410104121040ull,
    0x1631222A8A901041ull, 0x10055200034A8800ull, 0x0062800300110222ull, 0x401001020000C890ull,
    0x0040000820020000ull, 0x1000894480402A04ull, 0x40820000AA020800ull, 0x81002A0102040A80ull,
    0x4500810202404500ull, 0x4956924AB4960488ull, 0x049200A54A912AD2ull, 0x0080000100341490ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0110[64] = {
    1u, 16u, 27u, 39u, 49u, 62u, 79u, 96u, 114u, 129u, 146u, 152u, 156u, 163u, 171u, 183u,
    203u, 222u, 233u, 250u, 266u, 281u, 296u, 314u, 319u, 332u, 342u, 350u, 364u, 373u, 389u, 401u,
    418u, 439u, 451u, 463u, 475u, 484u, 494u, 504u, 518u, 532u, 544u, 556u, 569u, 575u, 581u, 589u,
    596u, 607u, 620u, 642u, 653u, 672u, 685u, 696u, 705u, 709u, 721u, 730u, 741u, 752u, 776u, 797u,
};
void recomp_unit_0110_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,5,6,29,2 fprs=12,13,14,15 gpr_occ=3607 fpr_occ=1600 gpr_total=5103 fpr_total=2184
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089BC000u;
        entry_id = 0u;
        if (entry_delta < 16352u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0110[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0110[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_089BC000;
    case 2u: goto L_089BC02C;
    case 3u: goto L_089BC050;
    case 4u: goto L_089BC058;
    case 5u: goto L_089BC05C;
    case 6u: goto L_089BC068;
    case 7u: goto L_089BC070;
    case 8u: goto L_089BC074;
    case 9u: goto L_089BC080;
    case 10u: goto L_089BC088;
    case 11u: goto L_089BC0AC;
    case 12u: goto L_089BC0B4;
    case 13u: goto L_089BC0C8;
    case 14u: goto L_089BC0E8;
    case 15u: goto L_089BC0FC;
    case 16u: goto L_089BC120;
    case 17u: goto L_089BC12C;
    case 18u: goto L_089BC138;
    case 19u: goto L_089BC150;
    case 20u: goto L_089BC158;
    case 21u: goto L_089BC168;
    case 22u: goto L_089BC170;
    case 23u: goto L_089BC180;
    case 24u: goto L_089BC190;
    case 25u: goto L_089BC1A4;
    case 26u: goto L_089BC1D4;
    case 27u: goto L_089BC204;
    case 28u: goto L_089BC210;
    case 29u: goto L_089BC228;
    case 30u: goto L_089BC24C;
    case 31u: goto L_089BC254;
    case 32u: goto L_089BC25C;
    case 33u: goto L_089BC264;
    case 34u: goto L_089BC2A8;
    case 35u: goto L_089BC2C4;
    case 36u: goto L_089BC2E8;
    case 37u: goto L_089BC2F0;
    case 38u: goto L_089BC2F8;
    case 39u: goto L_089BC31C;
    case 40u: goto L_089BC338;
    case 41u: goto L_089BC354;
    case 42u: goto L_089BC378;
    case 43u: goto L_089BC380;
    case 44u: goto L_089BC388;
    case 45u: goto L_089BC3B4;
    case 46u: goto L_089BC3D0;
    case 47u: goto L_089BC3F4;
    case 48u: goto L_089BC3FC;
    case 49u: goto L_089BC404;
    case 50u: goto L_089BC418;
    case 51u: goto L_089BC420;
    case 52u: goto L_089BC440;
    case 53u: goto L_089BC45C;
    case 54u: goto L_089BC478;
    case 55u: goto L_089BC49C;
    case 56u: goto L_089BC4A4;
    case 57u: goto L_089BC4AC;
    case 58u: goto L_089BC4B4;
    case 59u: goto L_089BC4C4;
    case 60u: goto L_089BC4D0;
    case 61u: goto L_089BC4F8;
    case 62u: goto L_089BC508;
    case 63u: goto L_089BC510;
    case 64u: goto L_089BC514;
    case 65u: goto L_089BC530;
    case 66u: goto L_089BC56C;
    case 67u: goto L_089BC578;
    case 68u: goto L_089BC584;
    case 69u: goto L_089BC590;
    case 70u: goto L_089BC598;
    case 71u: goto L_089BC5A4;
    case 72u: goto L_089BC5AC;
    case 73u: goto L_089BC5B4;
    case 74u: goto L_089BC5BC;
    case 75u: goto L_089BC5C4;
    case 76u: goto L_089BC5D4;
    case 77u: goto L_089BC5E0;
    case 78u: goto L_089BC5EC;
    case 79u: goto L_089BC600;
    case 80u: goto L_089BC610;
    case 81u: goto L_089BC618;
    case 82u: goto L_089BC61C;
    case 83u: goto L_089BC624;
    case 84u: goto L_089BC62C;
    case 85u: goto L_089BC638;
    case 86u: goto L_089BC640;
    case 87u: goto L_089BC644;
    case 88u: goto L_089BC650;
    case 89u: goto L_089BC654;
    case 90u: goto L_089BC678;
    case 91u: goto L_089BC680;
    case 92u: goto L_089BC690;
    case 93u: goto L_089BC698;
    case 94u: goto L_089BC6CC;
    case 95u: goto L_089BC6D0;
    case 96u: goto L_089BC700;
    case 97u: goto L_089BC708;
    case 98u: goto L_089BC728;
    case 99u: goto L_089BC740;
    case 100u: goto L_089BC74C;
    case 101u: goto L_089BC754;
    case 102u: goto L_089BC758;
    case 103u: goto L_089BC760;
    case 104u: goto L_089BC768;
    case 105u: goto L_089BC774;
    case 106u: goto L_089BC798;
    case 107u: goto L_089BC7A0;
    case 108u: goto L_089BC7AC;
    case 109u: goto L_089BC7C8;
    case 110u: goto L_089BC7D0;
    case 111u: goto L_089BC7D8;
    case 112u: goto L_089BC7F0;
    case 113u: goto L_089BC7F8;
    case 114u: goto L_089BC808;
    case 115u: goto L_089BC814;
    case 116u: goto L_089BC81C;
    case 117u: goto L_089BC824;
    case 118u: goto L_089BC858;
    case 119u: goto L_089BC890;
    case 120u: goto L_089BC89C;
    case 121u: goto L_089BC8A4;
    case 122u: goto L_089BC8AC;
    case 123u: goto L_089BC8B8;
    case 124u: goto L_089BC8C8;
    case 125u: goto L_089BC8D4;
    case 126u: goto L_089BC8DC;
    case 127u: goto L_089BC8E8;
    case 128u: goto L_089BC8FC;
    case 129u: goto L_089BC904;
    case 130u: goto L_089BC918;
    case 131u: goto L_089BC930;
    case 132u: goto L_089BC938;
    case 133u: goto L_089BC950;
    case 134u: goto L_089BC954;
    case 135u: goto L_089BC968;
    case 136u: goto L_089BC96C;
    case 137u: goto L_089BC978;
    case 138u: goto L_089BC988;
    case 139u: goto L_089BC990;
    case 140u: goto L_089BC99C;
    case 141u: goto L_089BC9C4;
    case 142u: goto L_089BC9C8;
    case 143u: goto L_089BC9DC;
    case 144u: goto L_089BC9E4;
    case 145u: goto L_089BC9E8;
    case 146u: goto L_089BCA5C;
    case 147u: goto L_089BCA78;
    case 148u: goto L_089BCABC;
    case 149u: goto L_089BCAC4;
    case 150u: goto L_089BCACC;
    case 151u: goto L_089BCAD4;
    case 152u: goto L_089BCB10;
    case 153u: goto L_089BCB40;
    case 154u: goto L_089BCBDC;
    case 155u: goto L_089BCBF8;
    case 156u: goto L_089BCC20;
    case 157u: goto L_089BCC3C;
    case 158u: goto L_089BCC44;
    case 159u: goto L_089BCCA8;
    case 160u: goto L_089BCCB0;
    case 161u: goto L_089BCCBC;
    case 162u: goto L_089BCCC4;
    case 163u: goto L_089BCD00;
    case 164u: goto L_089BCD2C;
    case 165u: goto L_089BCD34;
    case 166u: goto L_089BCD9C;
    case 167u: goto L_089BCDA4;
    case 168u: goto L_089BCDB4;
    case 169u: goto L_089BCDE0;
    case 170u: goto L_089BCDF0;
    case 171u: goto L_089BCE08;
    case 172u: goto L_089BCE24;
    case 173u: goto L_089BCE28;
    case 174u: goto L_089BCE34;
    case 175u: goto L_089BCE3C;
    case 176u: goto L_089BCE78;
    case 177u: goto L_089BCE94;
    case 178u: goto L_089BCEB8;
    case 179u: goto L_089BCEC0;
    case 180u: goto L_089BCED0;
    case 181u: goto L_089BCEF0;
    case 182u: goto L_089BCEF4;
    case 183u: goto L_089BCF14;
    case 184u: goto L_089BCF18;
    case 185u: goto L_089BCF20;
    case 186u: goto L_089BCF28;
    case 187u: goto L_089BCF30;
    case 188u: goto L_089BCF58;
    case 189u: goto L_089BCF68;
    case 190u: goto L_089BCF70;
    case 191u: goto L_089BCF74;
    case 192u: goto L_089BCF8C;
    case 193u: goto L_089BCFA4;
    case 194u: goto L_089BCFAC;
    case 195u: goto L_089BCFB8;
    case 196u: goto L_089BCFC0;
    case 197u: goto L_089BCFC8;
    case 198u: goto L_089BCFD0;
    case 199u: goto L_089BCFD8;
    case 200u: goto L_089BCFE0;
    case 201u: goto L_089BCFE8;
    case 202u: goto L_089BCFF0;
    case 203u: goto L_089BD00C;
    case 204u: goto L_089BD018;
    case 205u: goto L_089BD020;
    case 206u: goto L_089BD028;
    case 207u: goto L_089BD030;
    case 208u: goto L_089BD038;
    case 209u: goto L_089BD054;
    case 210u: goto L_089BD060;
    case 211u: goto L_089BD068;
    case 212u: goto L_089BD070;
    case 213u: goto L_089BD078;
    case 214u: goto L_089BD080;
    case 215u: goto L_089BD09C;
    case 216u: goto L_089BD0A8;
    case 217u: goto L_089BD0B0;
    case 218u: goto L_089BD0C8;
    case 219u: goto L_089BD0D0;
    case 220u: goto L_089BD0EC;
    case 221u: goto L_089BD0F8;
    case 222u: goto L_089BD108;
    case 223u: goto L_089BD17C;
    case 224u: goto L_089BD18C;
    case 225u: goto L_089BD19C;
    case 226u: goto L_089BD1A0;
    case 227u: goto L_089BD1B4;
    case 228u: goto L_089BD1CC;
    case 229u: goto L_089BD1D0;
    case 230u: goto L_089BD1E0;
    case 231u: goto L_089BD1EC;
    case 232u: goto L_089BD1F4;
    case 233u: goto L_089BD200;
    case 234u: goto L_089BD20C;
    case 235u: goto L_089BD218;
    case 236u: goto L_089BD220;
    case 237u: goto L_089BD224;
    case 238u: goto L_089BD22C;
    case 239u: goto L_089BD234;
    case 240u: goto L_089BD240;
    case 241u: goto L_089BD264;
    case 242u: goto L_089BD294;
    case 243u: goto L_089BD2AC;
    case 244u: goto L_089BD2B4;
    case 245u: goto L_089BD2C4;
    case 246u: goto L_089BD2C8;
    case 247u: goto L_089BD2D0;
    case 248u: goto L_089BD2DC;
    case 249u: goto L_089BD2F0;
    case 250u: goto L_089BD32C;
    case 251u: goto L_089BD36C;
    case 252u: goto L_089BD378;
    case 253u: goto L_089BD380;
    case 254u: goto L_089BD388;
    case 255u: goto L_089BD390;
    case 256u: goto L_089BD398;
    case 257u: goto L_089BD3A0;
    case 258u: goto L_089BD3AC;
    case 259u: goto L_089BD3BC;
    case 260u: goto L_089BD3CC;
    case 261u: goto L_089BD3D4;
    case 262u: goto L_089BD3E0;
    case 263u: goto L_089BD3EC;
    case 264u: goto L_089BD3F4;
    case 265u: goto L_089BD3F8;
    case 266u: goto L_089BD400;
    case 267u: goto L_089BD40C;
    case 268u: goto L_089BD414;
    case 269u: goto L_089BD418;
    case 270u: goto L_089BD42C;
    case 271u: goto L_089BD438;
    case 272u: goto L_089BD44C;
    case 273u: goto L_089BD458;
    case 274u: goto L_089BD464;
    case 275u: goto L_089BD474;
    case 276u: goto L_089BD480;
    case 277u: goto L_089BD49C;
    case 278u: goto L_089BD4B8;
    case 279u: goto L_089BD4D4;
    case 280u: goto L_089BD4F0;
    case 281u: goto L_089BD50C;
    case 282u: goto L_089BD528;
    case 283u: goto L_089BD534;
    case 284u: goto L_089BD53C;
    case 285u: goto L_089BD540;
    case 286u: goto L_089BD548;
    case 287u: goto L_089BD554;
    case 288u: goto L_089BD55C;
    case 289u: goto L_089BD564;
    case 290u: goto L_089BD59C;
    case 291u: goto L_089BD5B4;
    case 292u: goto L_089BD5C4;
    case 293u: goto L_089BD5CC;
    case 294u: goto L_089BD5D4;
    case 295u: goto L_089BD5DC;
    case 296u: goto L_089BD620;
    case 297u: goto L_089BD628;
    case 298u: goto L_089BD638;
    case 299u: goto L_089BD63C;
    case 300u: goto L_089BD648;
    case 301u: goto L_089BD654;
    case 302u: goto L_089BD660;
    case 303u: goto L_089BD668;
    case 304u: goto L_089BD678;
    case 305u: goto L_089BD688;
    case 306u: goto L_089BD694;
    case 307u: goto L_089BD69C;
    case 308u: goto L_089BD6B0;
    case 309u: goto L_089BD6BC;
    case 310u: goto L_089BD6C4;
    case 311u: goto L_089BD6D0;
    case 312u: goto L_089BD6E0;
    case 313u: goto L_089BD6F8;
    case 314u: goto L_089BD71C;
    case 315u: goto L_089BD72C;
    case 316u: goto L_089BD7A4;
    case 317u: goto L_089BD7B4;
    case 318u: goto L_089BD7F8;
    case 319u: goto L_089BD808;
    case 320u: goto L_089BD810;
    case 321u: goto L_089BD818;
    case 322u: goto L_089BD834;
    case 323u: goto L_089BD850;
    case 324u: goto L_089BD858;
    case 325u: goto L_089BD870;
    case 326u: goto L_089BD888;
    case 327u: goto L_089BD8AC;
    case 328u: goto L_089BD8C4;
    case 329u: goto L_089BD8E8;
    case 330u: goto L_089BD8F0;
    case 331u: goto L_089BD8FC;
    case 332u: goto L_089BD904;
    case 333u: goto L_089BD918;
    case 334u: goto L_089BD924;
    case 335u: goto L_089BD944;
    case 336u: goto L_089BD954;
    case 337u: goto L_089BD968;
    case 338u: goto L_089BD998;
    case 339u: goto L_089BD9B4;
    case 340u: goto L_089BD9C0;
    case 341u: goto L_089BD9E8;
    case 342u: goto L_089BDA30;
    case 343u: goto L_089BDA94;
    case 344u: goto L_089BDAA4;
    case 345u: goto L_089BDAC0;
    case 346u: goto L_089BDAD0;
    case 347u: goto L_089BDAE4;
    case 348u: goto L_089BDAF4;
    case 349u: goto L_089BDAFC;
    case 350u: goto L_089BDB20;
    case 351u: goto L_089BDB2C;
    case 352u: goto L_089BDB34;
    case 353u: goto L_089BDB3C;
    case 354u: goto L_089BDB44;
    case 355u: goto L_089BDB50;
    case 356u: goto L_089BDB5C;
    case 357u: goto L_089BDB94;
    case 358u: goto L_089BDBA4;
    case 359u: goto L_089BDBBC;
    case 360u: goto L_089BDBC4;
    case 361u: goto L_089BDBD0;
    case 362u: goto L_089BDBE0;
    case 363u: goto L_089BDBF8;
    case 364u: goto L_089BDC08;
    case 365u: goto L_089BDC34;
    case 366u: goto L_089BDC54;
    case 367u: goto L_089BDC68;
    case 368u: goto L_089BDC74;
    case 369u: goto L_089BDC84;
    case 370u: goto L_089BDC8C;
    case 371u: goto L_089BDC94;
    case 372u: goto L_089BDCE8;
    case 373u: goto L_089BDD04;
    case 374u: goto L_089BDD08;
    case 375u: goto L_089BDD20;
    case 376u: goto L_089BDD74;
    case 377u: goto L_089BDD90;
    case 378u: goto L_089BDD98;
    case 379u: goto L_089BDDA0;
    case 380u: goto L_089BDDA8;
    case 381u: goto L_089BDDB4;
    case 382u: goto L_089BDDBC;
    case 383u: goto L_089BDDC8;
    case 384u: goto L_089BDDD4;
    case 385u: goto L_089BDDE0;
    case 386u: goto L_089BDDEC;
    case 387u: goto L_089BDDF4;
    case 388u: goto L_089BDDFC;
    case 389u: goto L_089BDE04;
    case 390u: goto L_089BDE08;
    case 391u: goto L_089BDE2C;
    case 392u: goto L_089BDE44;
    case 393u: goto L_089BDE50;
    case 394u: goto L_089BDE5C;
    case 395u: goto L_089BDE94;
    case 396u: goto L_089BDE98;
    case 397u: goto L_089BDEA4;
    case 398u: goto L_089BDEB0;
    case 399u: goto L_089BDEBC;
    case 400u: goto L_089BDEFC;
    case 401u: goto L_089BDF00;
    case 402u: goto L_089BDF04;
    case 403u: goto L_089BDF2C;
    case 404u: goto L_089BDF68;
    case 405u: goto L_089BDF74;
    case 406u: goto L_089BDF80;
    case 407u: goto L_089BDF8C;
    case 408u: goto L_089BDF98;
    case 409u: goto L_089BDFA0;
    case 410u: goto L_089BDFA8;
    case 411u: goto L_089BDFB0;
    case 412u: goto L_089BDFBC;
    case 413u: goto L_089BDFC8;
    case 414u: goto L_089BDFD8;
    case 415u: goto L_089BDFE4;
    case 416u: goto L_089BDFEC;
    case 417u: goto L_089BDFF8;
    case 418u: goto L_089BE000;
    case 419u: goto L_089BE008;
    case 420u: goto L_089BE010;
    case 421u: goto L_089BE018;
    case 422u: goto L_089BE024;
    case 423u: goto L_089BE030;
    case 424u: goto L_089BE044;
    case 425u: goto L_089BE058;
    case 426u: goto L_089BE060;
    case 427u: goto L_089BE068;
    case 428u: goto L_089BE070;
    case 429u: goto L_089BE07C;
    case 430u: goto L_089BE084;
    case 431u: goto L_089BE088;
    case 432u: goto L_089BE094;
    case 433u: goto L_089BE0B8;
    case 434u: goto L_089BE0C0;
    case 435u: goto L_089BE0D0;
    case 436u: goto L_089BE0D8;
    case 437u: goto L_089BE0E4;
    case 438u: goto L_089BE0E8;
    case 439u: goto L_089BE11C;
    case 440u: goto L_089BE124;
    case 441u: goto L_089BE148;
    case 442u: goto L_089BE160;
    case 443u: goto L_089BE16C;
    case 444u: goto L_089BE174;
    case 445u: goto L_089BE17C;
    case 446u: goto L_089BE188;
    case 447u: goto L_089BE198;
    case 448u: goto L_089BE1BC;
    case 449u: goto L_089BE1C4;
    case 450u: goto L_089BE1D0;
    case 451u: goto L_089BE23C;
    case 452u: goto L_089BE244;
    case 453u: goto L_089BE254;
    case 454u: goto L_089BE25C;
    case 455u: goto L_089BE28C;
    case 456u: goto L_089BE294;
    case 457u: goto L_089BE2A4;
    case 458u: goto L_089BE2B0;
    case 459u: goto L_089BE2B8;
    case 460u: goto L_089BE2C4;
    case 461u: goto L_089BE2D4;
    case 462u: goto L_089BE2D8;
    case 463u: goto L_089BE300;
    case 464u: goto L_089BE32C;
    case 465u: goto L_089BE350;
    case 466u: goto L_089BE358;
    case 467u: goto L_089BE360;
    case 468u: goto L_089BE398;
    case 469u: goto L_089BE3A8;
    case 470u: goto L_089BE3B0;
    case 471u: goto L_089BE3B4;
    case 472u: goto L_089BE3E0;
    case 473u: goto L_089BE3E8;
    case 474u: goto L_089BE3EC;
    case 475u: goto L_089BE418;
    case 476u: goto L_089BE420;
    case 477u: goto L_089BE424;
    case 478u: goto L_089BE484;
    case 479u: goto L_089BE48C;
    case 480u: goto L_089BE4A0;
    case 481u: goto L_089BE4C8;
    case 482u: goto L_089BE4E0;
    case 483u: goto L_089BE4F4;
    case 484u: goto L_089BE510;
    case 485u: goto L_089BE530;
    case 486u: goto L_089BE538;
    case 487u: goto L_089BE574;
    case 488u: goto L_089BE588;
    case 489u: goto L_089BE598;
    case 490u: goto L_089BE59C;
    case 491u: goto L_089BE5BC;
    case 492u: goto L_089BE5DC;
    case 493u: goto L_089BE5FC;
    case 494u: goto L_089BE62C;
    case 495u: goto L_089BE640;
    case 496u: goto L_089BE648;
    case 497u: goto L_089BE688;
    case 498u: goto L_089BE69C;
    case 499u: goto L_089BE6B0;
    case 500u: goto L_089BE6BC;
    case 501u: goto L_089BE6C4;
    case 502u: goto L_089BE6CC;
    case 503u: goto L_089BE6D4;
    case 504u: goto L_089BE700;
    case 505u: goto L_089BE730;
    case 506u: goto L_089BE738;
    case 507u: goto L_089BE75C;
    case 508u: goto L_089BE774;
    case 509u: goto L_089BE780;
    case 510u: goto L_089BE788;
    case 511u: goto L_089BE790;
    case 512u: goto L_089BE79C;
    case 513u: goto L_089BE7AC;
    case 514u: goto L_089BE7BC;
    case 515u: goto L_089BE7E0;
    case 516u: goto L_089BE7E8;
    case 517u: goto L_089BE7F4;
    case 518u: goto L_089BE824;
    case 519u: goto L_089BE82C;
    case 520u: goto L_089BE834;
    case 521u: goto L_089BE858;
    case 522u: goto L_089BE860;
    case 523u: goto L_089BE870;
    case 524u: goto L_089BE87C;
    case 525u: goto L_089BE888;
    case 526u: goto L_089BE894;
    case 527u: goto L_089BE89C;
    case 528u: goto L_089BE8A4;
    case 529u: goto L_089BE8AC;
    case 530u: goto L_089BE8D8;
    case 531u: goto L_089BE8E8;
    case 532u: goto L_089BE900;
    case 533u: goto L_089BE930;
    case 534u: goto L_089BE958;
    case 535u: goto L_089BE98C;
    case 536u: goto L_089BE998;
    case 537u: goto L_089BE9A4;
    case 538u: goto L_089BE9B0;
    case 539u: goto L_089BE9BC;
    case 540u: goto L_089BE9D4;
    case 541u: goto L_089BE9E4;
    case 542u: goto L_089BE9EC;
    case 543u: goto L_089BE9F4;
    case 544u: goto L_089BEA0C;
    case 545u: goto L_089BEA14;
    case 546u: goto L_089BEA1C;
    case 547u: goto L_089BEA24;
    case 548u: goto L_089BEA40;
    case 549u: goto L_089BEA64;
    case 550u: goto L_089BEA6C;
    case 551u: goto L_089BEA7C;
    case 552u: goto L_089BEA88;
    case 553u: goto L_089BEA90;
    case 554u: goto L_089BEAC4;
    case 555u: goto L_089BEAEC;
    case 556u: goto L_089BEB24;
    case 557u: goto L_089BEB3C;
    case 558u: goto L_089BEB44;
    case 559u: goto L_089BEB4C;
    case 560u: goto L_089BEB70;
    case 561u: goto L_089BEB78;
    case 562u: goto L_089BEB98;
    case 563u: goto L_089BEBAC;
    case 564u: goto L_089BEBB8;
    case 565u: goto L_089BEBC4;
    case 566u: goto L_089BEBCC;
    case 567u: goto L_089BEBD4;
    case 568u: goto L_089BEBDC;
    case 569u: goto L_089BEC30;
    case 570u: goto L_089BEC3C;
    case 571u: goto L_089BEC5C;
    case 572u: goto L_089BEC90;
    case 573u: goto L_089BECCC;
    case 574u: goto L_089BECF4;
    case 575u: goto L_089BED28;
    case 576u: goto L_089BED34;
    case 577u: goto L_089BED40;
    case 578u: goto L_089BED7C;
    case 579u: goto L_089BEDB8;
    case 580u: goto L_089BEDE0;
    case 581u: goto L_089BEE14;
    case 582u: goto L_089BEE20;
    case 583u: goto L_089BEE2C;
    case 584u: goto L_089BEE84;
    case 585u: goto L_089BEEAC;
    case 586u: goto L_089BEEE4;
    case 587u: goto L_089BEEF0;
    case 588u: goto L_089BEEFC;
    case 589u: goto L_089BEF20;
    case 590u: goto L_089BEF38;
    case 591u: goto L_089BEF60;
    case 592u: goto L_089BEF80;
    case 593u: goto L_089BEF8C;
    case 594u: goto L_089BEFC8;
    case 595u: goto L_089BEFF0;
    case 596u: goto L_089BF024;
    case 597u: goto L_089BF030;
    case 598u: goto L_089BF03C;
    case 599u: goto L_089BF04C;
    case 600u: goto L_089BF06C;
    case 601u: goto L_089BF08C;
    case 602u: goto L_089BF0B8;
    case 603u: goto L_089BF0C0;
    case 604u: goto L_089BF0C8;
    case 605u: goto L_089BF0D0;
    case 606u: goto L_089BF0E0;
    case 607u: goto L_089BF110;
    case 608u: goto L_089BF118;
    case 609u: goto L_089BF144;
    case 610u: goto L_089BF14C;
    case 611u: goto L_089BF15C;
    case 612u: goto L_089BF18C;
    case 613u: goto L_089BF1B8;
    case 614u: goto L_089BF1C0;
    case 615u: goto L_089BF1C8;
    case 616u: goto L_089BF1D8;
    case 617u: goto L_089BF1E4;
    case 618u: goto L_089BF1EC;
    case 619u: goto L_089BF1F4;
    case 620u: goto L_089BF204;
    case 621u: goto L_089BF214;
    case 622u: goto L_089BF220;
    case 623u: goto L_089BF228;
    case 624u: goto L_089BF234;
    case 625u: goto L_089BF23C;
    case 626u: goto L_089BF244;
    case 627u: goto L_089BF24C;
    case 628u: goto L_089BF254;
    case 629u: goto L_089BF25C;
    case 630u: goto L_089BF260;
    case 631u: goto L_089BF268;
    case 632u: goto L_089BF270;
    case 633u: goto L_089BF278;
    case 634u: goto L_089BF29C;
    case 635u: goto L_089BF2A4;
    case 636u: goto L_089BF2AC;
    case 637u: goto L_089BF2B8;
    case 638u: goto L_089BF2C0;
    case 639u: goto L_089BF2C8;
    case 640u: goto L_089BF2E0;
    case 641u: goto L_089BF2F8;
    case 642u: goto L_089BF318;
    case 643u: goto L_089BF330;
    case 644u: goto L_089BF344;
    case 645u: goto L_089BF350;
    case 646u: goto L_089BF368;
    case 647u: goto L_089BF380;
    case 648u: goto L_089BF3A0;
    case 649u: goto L_089BF3B8;
    case 650u: goto L_089BF3C8;
    case 651u: goto L_089BF3D4;
    case 652u: goto L_089BF3F8;
    case 653u: goto L_089BF400;
    case 654u: goto L_089BF418;
    case 655u: goto L_089BF430;
    case 656u: goto L_089BF450;
    case 657u: goto L_089BF45C;
    case 658u: goto L_089BF464;
    case 659u: goto L_089BF46C;
    case 660u: goto L_089BF47C;
    case 661u: goto L_089BF484;
    case 662u: goto L_089BF48C;
    case 663u: goto L_089BF494;
    case 664u: goto L_089BF4A4;
    case 665u: goto L_089BF4B4;
    case 666u: goto L_089BF4C0;
    case 667u: goto L_089BF4D0;
    case 668u: goto L_089BF4D4;
    case 669u: goto L_089BF4E4;
    case 670u: goto L_089BF4E8;
    case 671u: goto L_089BF4F0;
    case 672u: goto L_089BF52C;
    case 673u: goto L_089BF53C;
    case 674u: goto L_089BF544;
    case 675u: goto L_089BF54C;
    case 676u: goto L_089BF558;
    case 677u: goto L_089BF560;
    case 678u: goto L_089BF564;
    case 679u: goto L_089BF5A4;
    case 680u: goto L_089BF5B0;
    case 681u: goto L_089BF5B8;
    case 682u: goto L_089BF5C0;
    case 683u: goto L_089BF5C8;
    case 684u: goto L_089BF5F0;
    case 685u: goto L_089BF604;
    case 686u: goto L_089BF614;
    case 687u: goto L_089BF624;
    case 688u: goto L_089BF640;
    case 689u: goto L_089BF650;
    case 690u: goto L_089BF680;
    case 691u: goto L_089BF684;
    case 692u: goto L_089BF6BC;
    case 693u: goto L_089BF6C4;
    case 694u: goto L_089BF6D4;
    case 695u: goto L_089BF6D8;
    case 696u: goto L_089BF710;
    case 697u: goto L_089BF71C;
    case 698u: goto L_089BF72C;
    case 699u: goto L_089BF738;
    case 700u: goto L_089BF73C;
    case 701u: goto L_089BF784;
    case 702u: goto L_089BF7A0;
    case 703u: goto L_089BF7D0;
    case 704u: goto L_089BF7F8;
    case 705u: goto L_089BF844;
    case 706u: goto L_089BF874;
    case 707u: goto L_089BF88C;
    case 708u: goto L_089BF8D8;
    case 709u: goto L_089BF908;
    case 710u: goto L_089BF924;
    case 711u: goto L_089BF92C;
    case 712u: goto L_089BF934;
    case 713u: goto L_089BF958;
    case 714u: goto L_089BF97C;
    case 715u: goto L_089BF988;
    case 716u: goto L_089BF998;
    case 717u: goto L_089BF9A0;
    case 718u: goto L_089BF9AC;
    case 719u: goto L_089BF9BC;
    case 720u: goto L_089BF9F0;
    case 721u: goto L_089BFA2C;
    case 722u: goto L_089BFA44;
    case 723u: goto L_089BFA64;
    case 724u: goto L_089BFA6C;
    case 725u: goto L_089BFA74;
    case 726u: goto L_089BFA7C;
    case 727u: goto L_089BFAC4;
    case 728u: goto L_089BFADC;
    case 729u: goto L_089BFAF8;
    case 730u: goto L_089BFB1C;
    case 731u: goto L_089BFB24;
    case 732u: goto L_089BFB2C;
    case 733u: goto L_089BFB48;
    case 734u: goto L_089BFB64;
    case 735u: goto L_089BFB80;
    case 736u: goto L_089BFBA4;
    case 737u: goto L_089BFBAC;
    case 738u: goto L_089BFBB4;
    case 739u: goto L_089BFBE0;
    case 740u: goto L_089BFBFC;
    case 741u: goto L_089BFC20;
    case 742u: goto L_089BFC28;
    case 743u: goto L_089BFC38;
    case 744u: goto L_089BFC58;
    case 745u: goto L_089BFC64;
    case 746u: goto L_089BFC84;
    case 747u: goto L_089BFCA0;
    case 748u: goto L_089BFCBC;
    case 749u: goto L_089BFCE0;
    case 750u: goto L_089BFCE8;
    case 751u: goto L_089BFCF8;
    case 752u: goto L_089BFD0C;
    case 753u: goto L_089BFD1C;
    case 754u: goto L_089BFD28;
    case 755u: goto L_089BFD44;
    case 756u: goto L_089BFD48;
    case 757u: goto L_089BFD50;
    case 758u: goto L_089BFD5C;
    case 759u: goto L_089BFD68;
    case 760u: goto L_089BFD70;
    case 761u: goto L_089BFD74;
    case 762u: goto L_089BFD7C;
    case 763u: goto L_089BFD84;
    case 764u: goto L_089BFD8C;
    case 765u: goto L_089BFD98;
    case 766u: goto L_089BFDA4;
    case 767u: goto L_089BFDB0;
    case 768u: goto L_089BFDBC;
    case 769u: goto L_089BFDC4;
    case 770u: goto L_089BFDC8;
    case 771u: goto L_089BFDD0;
    case 772u: goto L_089BFDD8;
    case 773u: goto L_089BFDE0;
    case 774u: goto L_089BFDEC;
    case 775u: goto L_089BFDF8;
    case 776u: goto L_089BFE04;
    case 777u: goto L_089BFE10;
    case 778u: goto L_089BFE18;
    case 779u: goto L_089BFE1C;
    case 780u: goto L_089BFE24;
    case 781u: goto L_089BFE2C;
    case 782u: goto L_089BFE34;
    case 783u: goto L_089BFE40;
    case 784u: goto L_089BFE50;
    case 785u: goto L_089BFE5C;
    case 786u: goto L_089BFE64;
    case 787u: goto L_089BFE6C;
    case 788u: goto L_089BFE78;
    case 789u: goto L_089BFE80;
    case 790u: goto L_089BFE88;
    case 791u: goto L_089BFE94;
    case 792u: goto L_089BFE9C;
    case 793u: goto L_089BFEC4;
    case 794u: goto L_089BFED0;
    case 795u: goto L_089BFEDC;
    case 796u: goto L_089BFEE8;
    case 797u: goto L_089BFF10;
    case 798u: goto L_089BFF1C;
    case 799u: goto L_089BFF28;
    case 800u: goto L_089BFF30;
    case 801u: goto L_089BFF48;
    case 802u: goto L_089BFF50;
    case 803u: goto L_089BFF54;
    case 804u: goto L_089BFF80;
    case 805u: goto L_089BFFDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x089BC000u;
        if (local_delta_v813 >= 16352u || (local_delta_v813 & 3u) != 0u) {
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
L_089BC000:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_31 = (0x089BC02Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC02Cu) goto L_089BC02C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC02C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (aot_gpr_4 & 1u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089BC05C;
      }
      goto L_089BC050;
    }
L_089BC050:
    aot_gpr_31 = (0x089BC058u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC058u) goto L_089BC058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC058:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    goto L_089BC05C;
L_089BC05C:
    aot_gpr_5 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089BC074;
      }
      goto L_089BC068;
    }
L_089BC068:
    aot_gpr_31 = (0x089BC070u);
    aot_gpr_4 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC070u) goto L_089BC070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC070:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    goto L_089BC074;
L_089BC074:
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BC088;
      }
      goto L_089BC080;
    }
L_089BC080:
    aot_gpr_31 = (0x089BC088u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC088u) goto L_089BC088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC088:
    aot_gpr_5 = (ctx.gpr[20] + ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[19]);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x089BC0ACu);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC0ACu) goto L_089BC0AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC0AC:
    aot_gpr_31 = (0x089BC0B4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 12u, 0x089BC0B4u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC0B4u) goto L_089BC0B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC0B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_31 = (0x089BC0C8u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 13u, 0x089BC0C8u, 0x08B0C5C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 78u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 78u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 78u, 0x08B0C5C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC0C8u) goto L_089BC0C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC0C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089BC0E8u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC0E8u) goto L_089BC0E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC0E8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(168));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 844u, 0x089BBFC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089BC0FC;
    }
L_089BC0FC:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (2240u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[22] = (aot_gpr_4 + ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-29728));
    goto L_089BC120;
L_089BC120:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BC190;
      }
      goto L_089BC12C;
    }
L_089BC12C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BC190;
      }
      goto L_089BC138;
    }
L_089BC138:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(22))))));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089BC170;
      }
      goto L_089BC150;
    }
L_089BC150:
    aot_gpr_31 = (0x089BC158u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC158u) goto L_089BC158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC158:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089BC168u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 21u, 0x089BC168u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC168u) goto L_089BC168;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC168:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BC190;
      }
      goto L_089BC170;
    }
L_089BC170:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_31 = (0x089BC180u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC180u) goto L_089BC180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC180:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BC190u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 24u, 0x089BC190u, 0x08AF4650u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 72u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 72u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC190u) goto L_089BC190;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC190:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089BC120;
      }
      goto L_089BC1A4;
    }
L_089BC1A4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BC1D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(3610)));
    ctx.gpr[17] = (2279u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17968));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BC510;
      }
      goto L_089BC204;
    }
L_089BC204:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1050)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BC510;
      }
      goto L_089BC210;
    }
L_089BC210:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2279u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(18000));
      if (branch_taken) {
          goto L_089BC24C;
      }
      goto L_089BC228;
    }
L_089BC228:
    aot_gpr_4 = (49776u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9248), 0u);
      if (branch_taken) {
          goto L_089BC514;
      }
      goto L_089BC24C;
    }
L_089BC24C:
    aot_gpr_31 = (0x089BC254u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC254u) goto L_089BC254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC254:
    aot_gpr_31 = (0x089BC25Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC25Cu) goto L_089BC25C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC25C:
    aot_gpr_31 = (0x089BC264u);
    aot_gpr_4 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC264u) goto L_089BC264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC264:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[18] = aot_fpr_14 / aot_fpr_15;
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (20224u << 16u);
    aot_gpr_5 = (2279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18032));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_6);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089BC2C4;
      }
      goto L_089BC2A8;
    }
L_089BC2A8:
    ctx.fpr[18] = aot_fpr_14 / aot_fpr_15;
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
      if (branch_taken) {
          goto L_089BC2E8;
      }
      goto L_089BC2C4;
    }
L_089BC2C4:
    ctx.fpr[18] = aot_fpr_14 / aot_fpr_15;
    aot_gpr_4 = (32768u << 16u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    goto L_089BC2E8;
L_089BC2E8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_089BC2F8;
      }
      goto L_089BC2F0;
    }
L_089BC2F0:
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[0];
    goto L_089BC2F8;
L_089BC2F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[18];
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-20));
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BC420;
      }
      goto L_089BC31C;
    }
L_089BC31C:
    aot_fpr_12 = aot_fpr_14 / aot_fpr_15;
    aot_gpr_4 = (17279u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_089BC354;
      }
      goto L_089BC338;
    }
L_089BC338:
    aot_fpr_12 = aot_fpr_14 / aot_fpr_15;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_089BC378;
      }
      goto L_089BC354;
    }
L_089BC354:
    aot_fpr_12 = aot_fpr_14 / aot_fpr_15;
    aot_gpr_4 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[17];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    goto L_089BC378;
L_089BC378:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_089BC388;
      }
      goto L_089BC380;
    }
L_089BC380:
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[0];
    goto L_089BC388;
L_089BC388:
    ctx.fpr[0] = aot_fpr_14 / aot_fpr_15;
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[2] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BC3D0;
      }
      goto L_089BC3B4;
    }
L_089BC3B4:
    aot_fpr_12 = aot_fpr_14 / aot_fpr_15;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_089BC3F4;
      }
      goto L_089BC3D0;
    }
L_089BC3D0:
    aot_fpr_12 = aot_fpr_14 / aot_fpr_15;
    aot_gpr_4 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[17];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    goto L_089BC3F4;
L_089BC3F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_089BC404;
      }
      goto L_089BC3FC;
    }
L_089BC3FC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    goto L_089BC404;
L_089BC404:
    aot_fpr_12 = ctx.fpr[19] + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BC4D0;
      }
      goto L_089BC418;
    }
L_089BC418:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_089BC4D0;
      }
      goto L_089BC420;
    }
L_089BC420:
    aot_gpr_4 = (17820u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BC4B4;
      }
      goto L_089BC440;
    }
L_089BC440:
    aot_fpr_13 = aot_fpr_14 / aot_fpr_15;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BC478;
      }
      goto L_089BC45C;
    }
L_089BC45C:
    aot_fpr_12 = aot_fpr_14 / aot_fpr_15;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_089BC49C;
      }
      goto L_089BC478;
    }
L_089BC478:
    aot_fpr_12 = aot_fpr_14 / aot_fpr_15;
    aot_gpr_4 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[17];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    goto L_089BC49C;
L_089BC49C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_089BC4AC;
      }
      goto L_089BC4A4;
    }
L_089BC4A4:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    goto L_089BC4AC;
L_089BC4AC:
    ctx.fpr[19] = ctx.fpr[19] - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_089BC4B4;
L_089BC4B4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] <= ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BC4D0;
      }
      goto L_089BC4C4;
    }
L_089BC4C4:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(3610), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089BC4D0;
L_089BC4D0:
    aot_gpr_4 = (0u | 220u);
    aot_gpr_5 = (0u | 172u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x089BC4F8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC4F8u) goto L_089BC4F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC4F8:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(3610));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BC508u);
    aot_gpr_6 = (0u | 268u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC508u) goto L_089BC508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC508:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BC514;
      }
      goto L_089BC510;
    }
L_089BC510:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089BC514;
L_089BC514:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BC530:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BC824;
      }
      goto L_089BC56C;
    }
L_089BC56C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1562)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BC824;
      }
      goto L_089BC578;
    }
L_089BC578:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(536)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BC824;
      }
      goto L_089BC584;
    }
L_089BC584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10848)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089BC598;
      }
      goto L_089BC590;
    }
L_089BC590:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), aot_gpr_4);
    goto L_089BC598;
L_089BC598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9252)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BC5AC;
      }
      goto L_089BC5A4;
    }
L_089BC5A4:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), aot_gpr_4);
    goto L_089BC5AC;
L_089BC5AC:
    aot_gpr_31 = (0x089BC5B4u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC5B4u) goto L_089BC5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC5B4:
    aot_gpr_31 = (0x089BC5BCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC5BCu) goto L_089BC5BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC5BC:
    aot_gpr_31 = (0x089BC5C4u);
    aot_gpr_4 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC5C4u) goto L_089BC5C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC5C4:
    aot_gpr_4 = (16156u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 10486u);
    aot_gpr_31 = (0x089BC5D4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 76u, 0x089BC5D4u, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC5D4u) goto L_089BC5D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC5D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BC5EC;
      }
      goto L_089BC5E0;
    }
L_089BC5E0:
    aot_gpr_4 = (16256u << 16u);
    aot_gpr_31 = (0x089BC5ECu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 78u, 0x089BC5ECu, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC5ECu) goto L_089BC5EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC5EC:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (17389u << 16u);
      if (branch_taken) {
          goto L_089BC698;
      }
      goto L_089BC600;
    }
L_089BC600:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-12148), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BC61C;
      }
      goto L_089BC610;
    }
L_089BC610:
    aot_gpr_31 = (0x089BC618u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC618u) goto L_089BC618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC618:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089BC61C;
L_089BC61C:
    aot_gpr_31 = (0x089BC624u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 83u, 0x089BC624u, 0x089C6D68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 629u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 629u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 629u, 0x089C6D68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC624u) goto L_089BC624;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC624:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_5 = (16880u << 16u);
      if (branch_taken) {
          goto L_089BC654;
      }
      goto L_089BC62C;
    }
L_089BC62C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_089BC644;
    }
    goto L_089BC638;
L_089BC638:
    aot_gpr_31 = (0x089BC640u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC640u) goto L_089BC640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC640:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_089BC644;
L_089BC644:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BC824;
      }
      goto L_089BC650;
    }
L_089BC650:
    aot_gpr_5 = (16880u << 16u);
    goto L_089BC654;
L_089BC654:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (17241u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17377u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17288u << 16u);
    aot_gpr_31 = (0x089BC678u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC678u) goto L_089BC678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC678:
    aot_gpr_31 = (0x089BC680u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 91u, 0x089BC680u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC680u) goto L_089BC680;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC680:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BC690u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC690u) goto L_089BC690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC690:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BC824;
      }
      goto L_089BC698;
    }
L_089BC698:
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-12148)));
    aot_gpr_5 = (17285u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (17245u << 16u);
    aot_gpr_5 = (16544u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_089BC6D0;
      }
      goto L_089BC6CC;
    }
L_089BC6CC:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    goto L_089BC6D0;
L_089BC6D0:
    aot_gpr_5 = (17948u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (17288u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-12148), static_cast<std::uint8_t>(0u));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x089BC700u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC700u) goto L_089BC700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC700:
    aot_gpr_31 = (0x089BC708u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 97u, 0x089BC708u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC708u) goto L_089BC708;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC708:
    aot_gpr_5 = (17391u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (17287u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x089BC728u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC728u) goto L_089BC728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC728:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BC740u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 99u, 0x089BC740u, 0x08B0C660u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC740u) goto L_089BC740;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC740:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_089BC758;
      }
      goto L_089BC74C;
    }
L_089BC74C:
    aot_gpr_31 = (0x089BC754u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC754u) goto L_089BC754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC754:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089BC758;
L_089BC758:
    aot_gpr_31 = (0x089BC760u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 103u, 0x089BC760u, 0x089C6D88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 633u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 633u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 633u, 0x089C6D88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC760u) goto L_089BC760;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC760:
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[17];
      if (branch_taken) {
          goto L_089BC7D8;
      }
      goto L_089BC768;
    }
L_089BC768:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11240)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_089BC7D8;
      }
      goto L_089BC774;
    }
L_089BC774:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[18]);
    aot_gpr_4 = (17312u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BC7D8;
      }
      goto L_089BC798;
    }
L_089BC798:
    aot_gpr_31 = (0x089BC7A0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 107u, 0x089BC7A0u, 0x089BAAD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 565u, 0x089BAAD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC7A0u) goto L_089BC7A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC7A0:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x089BC7ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 108u, 0x089BC7ACu, 0x089BAA88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 558u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 558u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 558u, 0x089BAA88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC7ACu) goto L_089BC7AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC7AC:
    aot_fpr_12 = ctx.fpr[0] + ctx.fpr[24];
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x089BC7C8u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[28];
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC7C8u) goto L_089BC7C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC7C8:
    aot_gpr_31 = (0x089BC7D0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 110u, 0x089BC7D0u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC7D0u) goto L_089BC7D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC7D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BC7F8;
      }
      goto L_089BC7D8;
    }
L_089BC7D8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x089BC7F0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC7F0u) goto L_089BC7F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC7F0:
    aot_gpr_31 = (0x089BC7F8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 113u, 0x089BC7F8u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC7F8u) goto L_089BC7F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC7F8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BC808u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC808u) goto L_089BC808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC808:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BC81C;
      }
      goto L_089BC814;
    }
L_089BC814:
    aot_gpr_31 = (0x089BC81Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC81Cu) goto L_089BC81C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BC81C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6849), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_089BC824;
L_089BC824:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.gpr[16] = aot_run_words[5];
      ctx.gpr[17] = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      ctx.gpr[20] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BC858:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2052)));
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BC8A4;
      }
      goto L_089BC890;
    }
L_089BC890:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8730)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13168))))));
      if (branch_taken) {
          goto L_089BC8AC;
      }
      goto L_089BC89C;
    }
L_089BC89C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BC8C8;
      }
      goto L_089BC8A4;
    }
L_089BC8A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BCBF8;
      }
      goto L_089BC8AC;
    }
L_089BC8AC:
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089BC8C8;
      }
      goto L_089BC8B8;
    }
L_089BC8B8:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13168), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9524), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13168))))));
    goto L_089BC8C8;
L_089BC8C8:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8730)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (0u | 2u);
      if (branch_taken) {
          goto L_089BC8DC;
      }
      goto L_089BC8D4;
    }
L_089BC8D4:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089BCBF8;
      }
      goto L_089BC8DC;
    }
L_089BC8DC:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BC8FC;
      }
      goto L_089BC8E8;
    }
L_089BC8E8:
    aot_gpr_4 = (17174u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13168), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13168))))));
    goto L_089BC8FC;
L_089BC8FC:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_089BC990;
      }
      goto L_089BC904;
    }
L_089BC904:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9520)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16672u << 16u);
      if (branch_taken) {
          goto L_089BC96C;
      }
      goto L_089BC918;
    }
L_089BC918:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_14 / aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BC938;
      }
      goto L_089BC930;
    }
L_089BC930:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BC954;
      }
      goto L_089BC938;
    }
L_089BC938:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BC954;
      }
      goto L_089BC950;
    }
L_089BC950:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BC954;
L_089BC954:
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089BC968;
    }
    goto L_089BC968;
L_089BC968:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9520), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_089BC96C;
L_089BC96C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9524))))));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
        goto L_089BC9E8;
    }
    goto L_089BC978;
L_089BC978:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 101u);
    aot_gpr_31 = (0x089BC988u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 138u, 0x089BC988u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BC988u) goto L_089BC988;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BC988:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9524), static_cast<std::uint16_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089BC9E4;
      }
      goto L_089BC990;
    }
L_089BC990:
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (16672u << 16u);
      if (branch_taken) {
          goto L_089BC9E4;
      }
      goto L_089BC99C;
    }
L_089BC99C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9520)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_13 / aot_fpr_15;
    aot_gpr_4 = (16384u << 16u);
    aot_gpr_5 = (17174u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_089BC9C8;
      }
      goto L_089BC9C4;
    }
L_089BC9C4:
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_089BC9C8;
L_089BC9C8:
    aot_fpr_13 = aot_fpr_15 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9520), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089BC9E4;
      }
      goto L_089BC9DC;
    }
L_089BC9DC:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13168), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BC9E4;
L_089BC9E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    goto L_089BC9E8;
L_089BC9E8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_5 = (16856u << 16u);
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9520)));
    ctx.gpr[7] = (16848u << 16u);
    ctx.gpr[8] = (17210u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(11052));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_15 = aot_fpr_15 / aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_fpr_15 = aot_fpr_13 + aot_fpr_15;
    aot_gpr_31 = (0x089BCA5Cu);
    aot_fpr_14 = ctx.fpr[16] - aot_fpr_14;
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCA5Cu) goto L_089BCA5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCA5C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x089BCA78u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCA78u) goto L_089BCA78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCA78:
    ctx.gpr[7] = (15477u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 49807u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (16254u << 16u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[7] | 47186u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BCABCu);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 148u, 0x089BCABCu, 0x08AF4770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCABCu) goto L_089BCABC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCABC:
    aot_gpr_31 = (0x089BCAC4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCAC4u) goto L_089BCAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCAC4:
    aot_gpr_31 = (0x089BCACCu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCACCu) goto L_089BCACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCACC:
    aot_gpr_31 = (0x089BCAD4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCAD4u) goto L_089BCAD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCAD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16204u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_gpr_31 = (0x089BCB10u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 152u, 0x089BCB10u, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCB10u) goto L_089BCB10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCB10:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 128u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x089BCB40u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 153u, 0x089BCB40u, 0x08B0C7E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 104u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 104u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 104u, 0x08B0C7E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCB40u) goto L_089BCB40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCB40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (16932u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9520)));
    aot_gpr_6 = (16928u << 16u);
    aot_gpr_4 = (0u | 72u);
    ctx.gpr[7] = (0u | 77u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 71u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (16888u << 16u);
    ctx.gpr[8] = (17193u << 16u);
    ctx.gpr[9] = (16976u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8730));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = aot_fpr_15 - aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_5 = (16924u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[9]);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_31 = (0x089BCBDCu);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCBDCu) goto L_089BCBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCBDC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BCBF8u);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 155u, 0x089BCBF8u, 0x08B0C1B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 24u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 24u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCBF8u) goto L_089BCBF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCBF8:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BCC20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) > 0;
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089BCCB0;
      }
      goto L_089BCC3C;
    }
L_089BCC3C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) < 0;
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_089BCCA8;
      }
      goto L_089BCC44;
    }
L_089BCC44:
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(3));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(5));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_6 = (ctx.gpr[16] >> 24u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[7] = (ctx.gpr[16] >> 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[16] >> 8u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089BCCA8u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 159u, 0x089BCCA8u, 0x08AF5238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 124u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 124u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCCA8u) goto L_089BCCA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCCA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BCDA4;
      }
      goto L_089BCCB0;
    }
L_089BCCB0:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BCD34;
      }
      goto L_089BCCBC;
    }
L_089BCCBC:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089BCCA8;
      }
      goto L_089BCCC4;
    }
L_089BCCC4:
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_31 = (0x089BCD00u);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCD00u) goto L_089BCD00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCD00:
    aot_gpr_4 = (ctx.gpr[16] >> 24u);
    aot_gpr_5 = (ctx.gpr[16] >> 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[16] >> 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089BCD2Cu);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 164u, 0x089BCD2Cu, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCD2Cu) goto L_089BCD2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCD2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BCCA8;
      }
      goto L_089BCD34;
    }
L_089BCD34:
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-3));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(3));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_6 = (ctx.gpr[16] >> 24u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[7] = (ctx.gpr[16] >> 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[16] >> 8u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089BCD9Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 166u, 0x089BCD9Cu, 0x08AF5238u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 124u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 124u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCD9Cu) goto L_089BCD9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCD9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BCCA8;
      }
      goto L_089BCDA4;
    }
L_089BCDA4:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BCDB4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1562)));
    ctx.gpr[17] = (2279u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17968));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BCF70;
      }
      goto L_089BCDE0;
    }
L_089BCDE0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x089BCDF0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 170u, 0x089BCDF0u, 0x089BA604u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 468u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 468u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 468u, 0x089BA604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCDF0u) goto L_089BCDF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCDF0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (2279u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18032));
      if (branch_taken) {
          goto L_089BCE3C;
      }
      goto L_089BCE08;
    }
L_089BCE08:
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10848)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BCE28;
      }
      goto L_089BCE24;
    }
L_089BCE24:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), 0u);
    goto L_089BCE28;
L_089BCE28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9252)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BCF74;
      }
      goto L_089BCE34;
    }
L_089BCE34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), 0u);
      if (branch_taken) {
          goto L_089BCF74;
      }
      goto L_089BCE3C;
    }
L_089BCE3C:
    aot_gpr_5 = (16968u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[18] = ctx.fpr[17] / ctx.fpr[16];
    aot_gpr_5 = (17530u << 16u);
    aot_gpr_6 = (20224u << 16u);
    ctx.gpr[7] = (17279u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BCE94;
      }
      goto L_089BCE78;
    }
L_089BCE78:
    aot_fpr_13 = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_089BCEB8;
      }
      goto L_089BCE94;
    }
L_089BCE94:
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    aot_gpr_5 = (32768u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_13 = aot_fpr_15 - aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    goto L_089BCEB8;
L_089BCEB8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_gpr_5 = (16076u << 16u);
      if (branch_taken) {
          goto L_089BCED0;
      }
      goto L_089BCEC0;
    }
L_089BCEC0:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_15;
    aot_gpr_5 = (16076u << 16u);
    goto L_089BCED0;
L_089BCED0:
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089BCEF4;
      }
      goto L_089BCEF0;
    }
L_089BCEF0:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BCEF4;
L_089BCEF4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089BCF18;
      }
      goto L_089BCF14;
    }
L_089BCF14:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_089BCF18;
L_089BCF18:
    aot_gpr_31 = (0x089BCF20u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCF20u) goto L_089BCF20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCF20:
    aot_gpr_31 = (0x089BCF28u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCF28u) goto L_089BCF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCF28:
    aot_gpr_31 = (0x089BCF30u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCF30u) goto L_089BCF30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCF30:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 220u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 135u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089BCF58u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCF58u) goto L_089BCF58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCF58:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1562));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BCF68u);
    aot_gpr_6 = (0u | 76u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCF68u) goto L_089BCF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCF68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BCF74;
      }
      goto L_089BCF70;
    }
L_089BCF70:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089BCF74;
L_089BCF74:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BCF8C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BCFE0;
      }
      goto L_089BCFA4;
    }
L_089BCFA4:
    aot_gpr_31 = (0x089BCFACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCFACu) goto L_089BCFAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BCFAC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BCFB8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 195u, 0x089BCFB8u, 0x0894763Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 695u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 695u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 695u, 0x0894763Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCFB8u) goto L_089BCFB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCFB8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089BCFD8;
      }
      goto L_089BCFC0;
    }
L_089BCFC0:
    aot_gpr_31 = (0x089BCFC8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 197u, 0x089BCFC8u, 0x089476BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 707u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 707u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 707u, 0x089476BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCFC8u) goto L_089BCFC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCFC8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089BCFE8;
      }
      goto L_089BCFD0;
    }
L_089BCFD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD020;
      }
      goto L_089BCFD8;
    }
L_089BCFD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD0F8;
      }
      goto L_089BCFE0;
    }
L_089BCFE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD0F8;
      }
      goto L_089BCFE8;
    }
L_089BCFE8:
    aot_gpr_31 = (0x089BCFF0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 202u, 0x089BCFF0u, 0x08947928u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 743u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 743u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 743u, 0x08947928u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BCFF0u) goto L_089BCFF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BCFF0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 130u);
    ctx.gpr[7] = (0u | 230u);
    aot_gpr_31 = (0x089BD00Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD00Cu) goto L_089BD00C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD00C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089BD018u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 204u, 0x089BD018u, 0x08A356D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 352u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 352u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A356D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD018u) goto L_089BD018;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD018:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD0F8;
      }
      goto L_089BD020;
    }
L_089BD020:
    aot_gpr_31 = (0x089BD028u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 206u, 0x089BD028u, 0x089476D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 709u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 709u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 709u, 0x089476D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD028u) goto L_089BD028;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD028:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089BD068;
      }
      goto L_089BD030;
    }
L_089BD030:
    aot_gpr_31 = (0x089BD038u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 208u, 0x089BD038u, 0x08947928u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 743u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 743u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 743u, 0x08947928u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD038u) goto L_089BD038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD038:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (0u | 235u);
    aot_gpr_6 = (0u | 45u);
    ctx.gpr[7] = (0u | 45u);
    aot_gpr_31 = (0x089BD054u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD054u) goto L_089BD054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD054:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089BD060u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 210u, 0x089BD060u, 0x08A356D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 352u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 352u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A356D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD060u) goto L_089BD060;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD060:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD0F8;
      }
      goto L_089BD068;
    }
L_089BD068:
    aot_gpr_31 = (0x089BD070u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 212u, 0x089BD070u, 0x089476C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 708u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 708u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 708u, 0x089476C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD070u) goto L_089BD070;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD070:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089BD0B0;
      }
      goto L_089BD078;
    }
L_089BD078:
    aot_gpr_31 = (0x089BD080u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 214u, 0x089BD080u, 0x08947928u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 743u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 743u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 743u, 0x08947928u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD080u) goto L_089BD080;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD080:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (0u | 235u);
    aot_gpr_6 = (0u | 220u);
    ctx.gpr[7] = (0u | 220u);
    aot_gpr_31 = (0x089BD09Cu);
    ctx.gpr[8] = (0u | 220u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD09Cu) goto L_089BD09C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD09C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089BD0A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 216u, 0x089BD0A8u, 0x08A356D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 352u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 352u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A356D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD0A8u) goto L_089BD0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD0A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD0F8;
      }
      goto L_089BD0B0;
    }
L_089BD0B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3330)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BD0F8;
      }
      goto L_089BD0C8;
    }
L_089BD0C8:
    aot_gpr_31 = (0x089BD0D0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 219u, 0x089BD0D0u, 0x08947928u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 743u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 743u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 743u, 0x08947928u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD0D0u) goto L_089BD0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD0D0:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (0u | 235u);
    aot_gpr_6 = (0u | 220u);
    ctx.gpr[7] = (0u | 220u);
    aot_gpr_31 = (0x089BD0ECu);
    ctx.gpr[8] = (0u | 220u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD0ECu) goto L_089BD0EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD0EC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089BD0F8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 221u, 0x089BD0F8u, 0x08A356D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 352u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 352u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 352u, 0x08A356D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD0F8u) goto L_089BD0F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD0F8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BD108:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2240u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_gpr_4 + static_cast<std::uint32_t>(-25888));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(68));
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words); }
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[22] = (aot_gpr_4 + ctx.gpr[22]);
    aot_gpr_4 = (17389u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (17362u << 16u);
    ctx.gpr[23] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[28] | 0u);
    goto L_089BD17C;
L_089BD17C:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
      if (branch_taken) {
          goto L_089BD2DC;
      }
      goto L_089BD18C;
    }
L_089BD18C:
    aot_gpr_4 = (ctx.gpr[28] + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9536)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089BD1A0;
      }
      goto L_089BD19C;
    }
L_089BD19C:
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(9540), static_cast<std::uint16_t>(ctx.gpr[23]));
    goto L_089BD1A0;
L_089BD1A0:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9536), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(9540))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BD1D0;
      }
      goto L_089BD1B4;
    }
L_089BD1B4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(9540), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(9540))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 51 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BD1D0;
      }
      goto L_089BD1CC;
    }
L_089BD1CC:
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(9540), static_cast<std::uint16_t>(0u));
    goto L_089BD1D0;
L_089BD1D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18))))));
      if (branch_taken) {
          goto L_089BD1EC;
      }
      goto L_089BD1E0;
    }
L_089BD1E0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(9540))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089BD2C8;
      }
      goto L_089BD1EC;
    }
L_089BD1EC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BD2C8;
      }
      goto L_089BD1F4;
    }
L_089BD1F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_089BD22C;
    }
    goto L_089BD200;
L_089BD200:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x089BD20Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 234u, 0x089BD20Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD20Cu) goto L_089BD20C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD20C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_089BD224;
      }
      goto L_089BD218;
    }
L_089BD218:
    aot_gpr_31 = (0x089BD220u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD220u) goto L_089BD220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD220:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089BD224;
L_089BD224:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_089BD22C;
L_089BD22C:
    aot_gpr_31 = (0x089BD234u);
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(18));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 239u, 0x089BD234u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD234u) goto L_089BD234;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD234:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BD240u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 240u, 0x089BD240u, 0x089BB298u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 689u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 689u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 689u, 0x089BB298u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD240u) goto L_089BD240;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD240:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11221)));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089BD264u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD264u) goto L_089BD264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD264:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11236)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11237)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(100));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x089BD294u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 242u, 0x089BD294u, 0x08B0C580u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 75u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 75u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD294u) goto L_089BD294;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD294:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_15 = ctx.fpr[24] + ctx.fpr[0];
    aot_gpr_31 = (0x089BD2ACu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD2ACu) goto L_089BD2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD2AC:
    aot_gpr_31 = (0x089BD2B4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 244u, 0x089BD2B4u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD2B4u) goto L_089BD2B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD2B4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BD2C4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD2C4u) goto L_089BD2C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD2C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18))))));
    goto L_089BD2C8;
L_089BD2C8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BD2DC;
      }
      goto L_089BD2D0;
    }
L_089BD2D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11237)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11237), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089BD2DC;
L_089BD2DC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(88));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089BD17C;
      }
      goto L_089BD2F0;
    }
L_089BD2F0:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BD32C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9270)));
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BD380;
      }
      goto L_089BD36C;
    }
L_089BD36C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_089BD388;
      }
      goto L_089BD378;
    }
L_089BD378:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD390;
      }
      goto L_089BD380;
    }
L_089BD380:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD564;
      }
      goto L_089BD388;
    }
L_089BD388:
    aot_gpr_31 = (0x089BD390u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD390u) goto L_089BD390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD390:
    aot_gpr_31 = (0x089BD398u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 256u, 0x089BD398u, 0x089C6D88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 633u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 633u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 633u, 0x089C6D88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD398u) goto L_089BD398;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD398:
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[17];
      if (branch_taken) {
          goto L_089BD564;
      }
      goto L_089BD3A0;
    }
L_089BD3A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11240)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_089BD564;
      }
      goto L_089BD3AC;
    }
L_089BD3AC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(9260))))));
    aot_gpr_4 = (0u | 8u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_089BD3CC;
      }
      goto L_089BD3BC;
    }
L_089BD3BC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_6 = (aot_gpr_6 & 8u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089BD3D4;
      }
      goto L_089BD3CC;
    }
L_089BD3CC:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_089BD548;
      }
      goto L_089BD3D4;
    }
L_089BD3D4:
    aot_gpr_4 = (0u | 7u);
    aot_gpr_31 = (0x089BD3E0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD3E0u) goto L_089BD3E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD3E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BD3F8;
      }
      goto L_089BD3EC;
    }
L_089BD3EC:
    aot_gpr_31 = (0x089BD3F4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD3F4u) goto L_089BD3F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD3F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089BD3F8;
L_089BD3F8:
    aot_gpr_31 = (0x089BD400u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0002.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 266u, 0x089BD400u, 0x0880D548u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0002_entry(rt, ctx, 329u, aot_mem);
#else
        recomp_unit_0002_entry(rt, ctx, 329u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 329u, 0x0880D548u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD400u) goto L_089BD400;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD400:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BD418;
      }
      goto L_089BD40C;
    }
L_089BD40C:
    aot_gpr_31 = (0x089BD414u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD414u) goto L_089BD414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD414:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089BD418;
L_089BD418:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6848)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BD42C;
      }
      goto L_089BD42C;
    }
L_089BD42C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(11124));
    aot_gpr_31 = (0x089BD438u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 271u, 0x089BD438u, 0x089BAA88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 558u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 558u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 558u, 0x089BAA88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD438u) goto L_089BD438;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD438:
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089BD44Cu);
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[20];
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 272u, 0x089BD44Cu, 0x089BAAA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 561u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 561u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 561u, 0x089BAAA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD44Cu) goto L_089BD44C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD44C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089BD458u);
    ctx.fpr[24] = ctx.fpr[0] - ctx.fpr[20];
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 273u, 0x089BD458u, 0x089BAA88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 558u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 558u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 558u, 0x089BAA88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD458u) goto L_089BD458;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD458:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x089BD464u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 274u, 0x089BD464u, 0x089BAAD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 565u, 0x089BAAD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD464u) goto L_089BD464;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD464:
    aot_fpr_12 = ctx.fpr[26] + ctx.fpr[0];
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089BD474u);
    ctx.fpr[28] = aot_fpr_12 + ctx.fpr[20];
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 275u, 0x089BD474u, 0x089BAAA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 561u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 561u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 561u, 0x089BAAA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD474u) goto L_089BD474;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD474:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x089BD480u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 276u, 0x089BD480u, 0x089BAAFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 569u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 569u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 569u, 0x089BAAFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD480u) goto L_089BD480;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD480:
    aot_fpr_15 = ctx.fpr[30] + ctx.fpr[0];
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x089BD49Cu);
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[20];
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD49Cu) goto L_089BD49C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD49C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x089BD4B8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD4B8u) goto L_089BD4B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD4B8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x089BD4D4u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD4D4u) goto L_089BD4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD4D4:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x089BD4F0u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD4F0u) goto L_089BD4F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD4F0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x089BD50Cu);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD50Cu) goto L_089BD50C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD50C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089BD528u);
    ctx.gpr[9] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 282u, 0x089BD528u, 0x08AF46A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 76u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 76u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 76u, 0x08AF46A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD528u) goto L_089BD528;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD528:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BD540;
      }
      goto L_089BD534;
    }
L_089BD534:
    aot_gpr_31 = (0x089BD53Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD53Cu) goto L_089BD53C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD53C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_089BD540;
L_089BD540:
    aot_gpr_31 = (0x089BD548u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0003.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 286u, 0x089BD548u, 0x08810A58u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0003_entry(rt, ctx, 151u, aot_mem);
#else
        recomp_unit_0003_entry(rt, ctx, 151u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0003_entry, 3u, 151u, 0x08810A58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD548u) goto L_089BD548;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD548:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6849), static_cast<std::uint8_t>(0u));
        goto L_089BD564;
    }
    goto L_089BD554;
L_089BD554:
    aot_gpr_31 = (0x089BD55Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD55Cu) goto L_089BD55C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD55C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6849), static_cast<std::uint8_t>(0u));
    goto L_089BD564;
L_089BD564:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
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
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BD59C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9263)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BD5CC;
      }
      goto L_089BD5B4;
    }
L_089BD5B4:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11226)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089BD5D4;
      }
      goto L_089BD5C4;
    }
L_089BD5C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD694;
      }
      goto L_089BD5CC;
    }
L_089BD5CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD71C;
      }
      goto L_089BD5D4;
    }
L_089BD5D4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (0u | 60u);
      if (branch_taken) {
          goto L_089BD660;
      }
      goto L_089BD5DC;
    }
L_089BD5DC:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_5 = (17008u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11223)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[8] - aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
      if (branch_taken) {
          goto L_089BD628;
      }
      goto L_089BD620;
    }
L_089BD620:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(60));
    goto L_089BD628;
L_089BD628:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11222)));
    aot_gpr_6 = (ctx.gpr[8] - aot_gpr_6);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
      if (branch_taken) {
          goto L_089BD63C;
      }
      goto L_089BD638;
    }
L_089BD638:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    goto L_089BD63C;
L_089BD63C:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
      if (branch_taken) {
          goto L_089BD660;
      }
      goto L_089BD648;
    }
L_089BD648:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_089BD660;
      }
      goto L_089BD654;
    }
L_089BD654:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11226), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11226)));
    goto L_089BD660;
L_089BD660:
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_089BD694;
      }
      goto L_089BD668;
    }
L_089BD668:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11222)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_089BD694;
      }
      goto L_089BD678;
    }
L_089BD678:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11223)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_089BD694;
      }
      goto L_089BD688;
    }
L_089BD688:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11226), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(11224), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11226)));
    goto L_089BD694;
L_089BD694:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_4;
      if (branch_taken) {
          goto L_089BD6B0;
      }
      goto L_089BD69C;
    }
L_089BD69C:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7650)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 31 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089BD6C4;
      }
      goto L_089BD6B0;
    }
L_089BD6B0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11253)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_089BD6D0;
      }
      goto L_089BD6BC;
    }
L_089BD6BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BD6E0;
      }
      goto L_089BD6C4;
    }
L_089BD6C4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11253), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089BD71C;
      }
      goto L_089BD6D0;
    }
L_089BD6D0:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 168u);
    aot_gpr_31 = (0x089BD6E0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 312u, 0x089BD6E0u, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD6E0u) goto L_089BD6E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD6E0:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11253), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12144));
    aot_gpr_31 = (0x089BD6F8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD6F8u) goto L_089BD6F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD6F8:
    ctx.gpr[7] = (17336u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 32768u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_31 = (0x089BD71Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_089BD72C;
L_089BD71C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(204)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BD72C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    ctx.gpr[23] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_31);
    aot_gpr_31 = (0x089BD7A4u);
    ctx.gpr[7] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD7A4u) goto L_089BD7A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD7A4:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (16720u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_089BD9E8;
      }
      goto L_089BD7B4;
    }
L_089BD7B4:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(11160));
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (0u | 22u);
    aot_gpr_4 = (15872u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (16008u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (0u | 10u);
    aot_gpr_4 = (17392u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    goto L_089BD7F8;
L_089BD7F8:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BD850;
      }
      goto L_089BD808;
    }
L_089BD808:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BD850;
      }
      goto L_089BD810;
    }
L_089BD810:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_089BD834;
      }
      goto L_089BD818;
    }
L_089BD818:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    aot_gpr_4 = (aot_gpr_4 >> 29u);
    ctx.gpr[17] = (ctx.gpr[16] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_089BD904;
      }
      goto L_089BD834;
    }
L_089BD834:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-37));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    aot_gpr_4 = (aot_gpr_4 >> 29u);
    ctx.gpr[17] = (ctx.gpr[16] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_089BD904;
      }
      goto L_089BD850;
    }
L_089BD850:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
      if (branch_taken) {
          goto L_089BD8E8;
      }
      goto L_089BD858;
    }
L_089BD858:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    aot_gpr_5 = (aot_gpr_4 >> 29u);
    ctx.gpr[17] = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(11221)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_089BD8AC;
      }
      goto L_089BD870;
    }
L_089BD870:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_5 = (0u | 241u);
    aot_gpr_6 = (0u | 170u);
    aot_gpr_31 = (0x089BD888u);
    ctx.gpr[7] = (0u | 57u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD888u) goto L_089BD888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD888:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089BD904;
      }
      goto L_089BD8AC;
    }
L_089BD8AC:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 62u);
    aot_gpr_6 = (0u | 141u);
    aot_gpr_31 = (0x089BD8C4u);
    ctx.gpr[7] = (0u | 188u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD8C4u) goto L_089BD8C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD8C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089BD904;
      }
      goto L_089BD8E8;
    }
L_089BD8E8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_089BD8FC;
      }
      goto L_089BD8F0;
    }
L_089BD8F0:
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD904;
      }
      goto L_089BD8FC;
    }
L_089BD8FC:
    ctx.gpr[16] = (0u | 21u);
    ctx.gpr[17] = (0u | 2u);
    goto L_089BD904;
L_089BD904:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (ctx.gpr[18] << 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
    ctx.gpr[17] = (ctx.gpr[16] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_089BD924;
      }
      goto L_089BD918;
    }
L_089BD918:
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    goto L_089BD924;
L_089BD924:
    aot_fpr_14 = ctx.fpr[20] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (16768u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_15 = aot_fpr_13 + aot_fpr_15;
    aot_gpr_31 = (0x089BD944u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD944u) goto L_089BD944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BD944:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (static_cast<std::int32_t>(ctx.gpr[17]) < 0) {
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[30];
        goto L_089BD954;
    }
    goto L_089BD954;
L_089BD954:
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[18]);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    if (static_cast<std::int32_t>(ctx.gpr[18]) < 0) {
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[30];
        goto L_089BD968;
    }
    goto L_089BD968;
L_089BD968:
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_fpr_14 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.fpr[17] = ctx.fpr[26] + aot_fpr_13;
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_31 = (0x089BD998u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 338u, 0x089BD998u, 0x08AF4770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BD998u) goto L_089BD998;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BD998:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.fpr[20] = ctx.fpr[20] + aot_fpr_12;
    ctx.gpr[16] = (aot_gpr_4 + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[30];
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089BD9C0;
      }
      goto L_089BD9B4;
    }
L_089BD9B4:
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[20] = ctx.fpr[20] - aot_fpr_12;
    goto L_089BD9C0;
L_089BD9C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = aot_fpr_12 / ctx.fpr[24];
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(aot_fpr_13));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_12 = ctx.fpr[24] / aot_fpr_12;
    { const bool branch_taken = ctx.gpr[16] != 0u;
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_089BD7F8;
      }
      goto L_089BD9E8;
    }
L_089BD9E8:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BDA30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10888)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2320)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2324)));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[18];
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BDAC0;
      }
      goto L_089BDA94;
    }
L_089BDA94:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BDAA4u);
    aot_gpr_6 = (0u | 1u);
    goto L_089BF18C;
L_089BDAA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10888), ctx.gpr[18]);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10900)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_089BDAE4;
      }
      goto L_089BDAC0;
    }
L_089BDAC0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BDAD0u);
    aot_gpr_6 = (0u | 0u);
    goto L_089BF18C;
L_089BDAD0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10900)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    goto L_089BDAE4;
L_089BDAE4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BDAF4;
      }
      goto L_089BDAF4;
    }
L_089BDAF4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (0u | 22u);
      if (branch_taken) {
          goto L_089BDC08;
      }
      goto L_089BDAFC;
    }
L_089BDAFC:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (17378u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (17050u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (16776u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    goto L_089BDB20;
L_089BDB20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BDB34;
      }
      goto L_089BDB2C;
    }
L_089BDB2C:
    aot_gpr_31 = (0x089BDB34u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDB34u) goto L_089BDB34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BDB34:
    aot_gpr_31 = (0x089BDB3Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 353u, 0x089BDB3Cu, 0x089C6DBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 638u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 638u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDB3Cu) goto L_089BDB3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BDB3C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089BDBF8;
      }
      goto L_089BDB44;
    }
L_089BDB44:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9267)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BDBF8;
      }
      goto L_089BDB50;
    }
L_089BDB50:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BDBC4;
      }
      goto L_089BDB5C;
    }
L_089BDB5C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2300)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2000));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BDBA4;
      }
      goto L_089BDB94;
    }
L_089BDB94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BDBC4;
      }
      goto L_089BDBA4;
    }
L_089BDBA4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x089BDBBCu);
    aot_gpr_6 = (0u | 0u);
    goto L_089BD72C;
L_089BDBBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BDBF8;
      }
      goto L_089BDBC4;
    }
L_089BDBC4:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BDBF8;
      }
      goto L_089BDBD0;
    }
L_089BDBD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BDBF8;
      }
      goto L_089BDBE0;
    }
L_089BDBE0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x089BDBF8u);
    aot_gpr_6 = (0u | 1u);
    goto L_089BD72C;
L_089BDBF8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[20];
      if (branch_taken) {
          goto L_089BDB20;
      }
      goto L_089BDC08;
    }
L_089BDC08:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BDC34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4122)));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BDD08;
      }
      goto L_089BDC54;
    }
L_089BDC54:
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1562)));
    aot_gpr_5 = (17199u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_089BDC74;
      }
      goto L_089BDC68;
    }
L_089BDC68:
    aot_gpr_4 = (16840u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[20] = ctx.fpr[20] - aot_fpr_12;
    goto L_089BDC74;
L_089BDC74:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17152), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089BDC84u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDC84u) goto L_089BDC84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BDC84:
    aot_gpr_31 = (0x089BDC8Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDC8Cu) goto L_089BDC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BDC8C:
    aot_gpr_31 = (0x089BDC94u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDC94u) goto L_089BDC94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BDC94:
    aot_gpr_5 = (0u | 237u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    aot_gpr_6 = (0u | 130u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 180u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_5 = (17389u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (17288u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4122));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x089BDCE8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDCE8u) goto L_089BDCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BDCE8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BDD04u);
    ctx.gpr[9] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 373u, 0x089BDD04u, 0x08B0C1B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 24u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 24u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDD04u) goto L_089BDD04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BDD04:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17152), static_cast<std::uint8_t>(0u));
    goto L_089BDD08;
L_089BDD08:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BDD20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BDD98;
      }
      goto L_089BDD74;
    }
L_089BDD74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11216)));
    aot_gpr_5 = (aot_gpr_5 & 256u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(11212));
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(11215));
      if (branch_taken) {
          goto L_089BDDA0;
      }
      goto L_089BDD90;
    }
L_089BDD90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BDDE0;
      }
      goto L_089BDD98;
    }
L_089BDD98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_089BDF04;
      }
      goto L_089BDDA0;
    }
L_089BDDA0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_089BDDB4;
      }
      goto L_089BDDA8;
    }
L_089BDDA8:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11216), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089BDE04;
      }
      goto L_089BDDB4;
    }
L_089BDDB4:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
    aot_gpr_5 = (17328u << 16u);
      if (branch_taken) {
          goto L_089BDE08;
      }
      goto L_089BDDBC;
    }
L_089BDDBC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11213)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (17328u << 16u);
      if (branch_taken) {
          goto L_089BDE08;
      }
      goto L_089BDDC8;
    }
L_089BDDC8:
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (17328u << 16u);
      if (branch_taken) {
          goto L_089BDE08;
      }
      goto L_089BDDD4;
    }
L_089BDDD4:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11213), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089BDE04;
      }
      goto L_089BDDE0;
    }
L_089BDDE0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[19];
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11213)));
      if (branch_taken) {
          goto L_089BDDF4;
      }
      goto L_089BDDEC;
    }
L_089BDDEC:
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11216), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_089BDDF4;
L_089BDDF4:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    aot_gpr_5 = (17328u << 16u);
      if (branch_taken) {
          goto L_089BDE08;
      }
      goto L_089BDDFC;
    }
L_089BDDFC:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11213), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089BDE04;
L_089BDE04:
    aot_gpr_5 = (17328u << 16u);
    goto L_089BDE08;
L_089BDE08:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (16932u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17360u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16840u << 16u);
    aot_gpr_31 = (0x089BDE2Cu);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDE2Cu) goto L_089BDE2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BDE2C:
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089BDE44u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 392u, 0x089BDE44u, 0x08AAFA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 815u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 815u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 815u, 0x08AAFA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDE44u) goto L_089BDE44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BDE44:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11213)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_089BDE98;
      }
      goto L_089BDE50;
    }
L_089BDE50:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9272)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BDE98;
      }
      goto L_089BDE5C;
    }
L_089BDE5C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2092)));
    aot_gpr_4 = (0u | 31u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 127u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(11164));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(11152));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(11172));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089BDE94u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 395u, 0x089BDE94u, 0x08AAFB70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 835u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 835u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 835u, 0x08AAFB70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDE94u) goto L_089BDE94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BDE94:
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    goto L_089BDE98;
L_089BDE98:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089BDEA4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 397u, 0x089BDEA4u, 0x08AAFA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 815u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 815u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 815u, 0x08AAFA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDEA4u) goto L_089BDEA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BDEA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11216)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_089BDF00;
      }
      goto L_089BDEB0;
    }
L_089BDEB0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9273)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BDF00;
      }
      goto L_089BDEBC;
    }
L_089BDEBC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3264)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3160)));
    aot_gpr_4 = (0u | 31u);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_5 = (0u | 127u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(11164));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(11152));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(11172));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089BDEFCu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 400u, 0x089BDEFCu, 0x08AAFB70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 835u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 835u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 835u, 0x08AAFB70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDEFCu) goto L_089BDEFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BDEFC:
    ctx.gpr[21] = (0u | 1u);
    goto L_089BDF00;
L_089BDF00:
    aot_gpr_2 = (ctx.gpr[21] | 0u);
    goto L_089BDF04;
L_089BDF04:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BDF2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-240));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 7u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words); }
    aot_gpr_31 = (0x089BDF68u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDF68u) goto L_089BDF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BDF68:
    aot_gpr_4 = (0u | 2u);
    aot_gpr_31 = (0x089BDF74u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDF74u) goto L_089BDF74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BDF74:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x089BDF80u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDF80u) goto L_089BDF80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BDF80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BDFA0;
      }
      goto L_089BDF8C;
    }
L_089BDF8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BDFA8;
      }
      goto L_089BDF98;
    }
L_089BDF98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BDFB0;
      }
      goto L_089BDFA0;
    }
L_089BDFA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF15C;
      }
      goto L_089BDFA8;
    }
L_089BDFA8:
    aot_gpr_31 = (0x089BDFB0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 411u, 0x089BDFB0u, 0x089C57B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 361u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 361u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 361u, 0x089C57B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BDFB0u) goto L_089BDFB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BDFB0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BE2C4;
      }
      goto L_089BDFBC;
    }
L_089BDFBC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1562)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BE2C4;
      }
      goto L_089BDFC8;
    }
L_089BDFC8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089BE2C4;
      }
      goto L_089BDFD8;
    }
L_089BDFD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10848)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BDFEC;
      }
      goto L_089BDFE4;
    }
L_089BDFE4:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10848), aot_gpr_4);
    goto L_089BDFEC;
L_089BDFEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(9252)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BE000;
      }
      goto L_089BDFF8;
    }
L_089BDFF8:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), aot_gpr_4);
    goto L_089BE000;
L_089BE000:
    aot_gpr_31 = (0x089BE008u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE008u) goto L_089BE008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE008:
    aot_gpr_31 = (0x089BE010u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE010u) goto L_089BE010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE010:
    aot_gpr_31 = (0x089BE018u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE018u) goto L_089BE018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE018:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BE030;
      }
      goto L_089BE024;
    }
L_089BE024:
    aot_gpr_4 = (16256u << 16u);
    aot_gpr_31 = (0x089BE030u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 423u, 0x089BE030u, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE030u) goto L_089BE030;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE030:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BE0D8;
      }
      goto L_089BE044;
    }
L_089BE044:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-12117), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BE060;
      }
      goto L_089BE058;
    }
L_089BE058:
    aot_gpr_31 = (0x089BE060u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE060u) goto L_089BE060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE060:
    aot_gpr_31 = (0x089BE068u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 427u, 0x089BE068u, 0x089C6D68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 629u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 629u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 629u, 0x089C6D68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE068u) goto L_089BE068;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE068:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089BE2C4;
      }
      goto L_089BE070;
    }
L_089BE070:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
        goto L_089BE088;
    }
    goto L_089BE07C;
L_089BE07C:
    aot_gpr_31 = (0x089BE084u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE084u) goto L_089BE084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE084:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_089BE088;
L_089BE088:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BE2C4;
      }
      goto L_089BE094;
    }
L_089BE094:
    aot_gpr_5 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (17377u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17288u << 16u);
    aot_gpr_31 = (0x089BE0B8u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE0B8u) goto L_089BE0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE0B8:
    aot_gpr_31 = (0x089BE0C0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 434u, 0x089BE0C0u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE0C0u) goto L_089BE0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE0C0:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BE0D0u);
    aot_gpr_6 = (0u | 217u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE0D0u) goto L_089BE0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE0D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BE2C4;
      }
      goto L_089BE0D8;
    }
L_089BE0D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-12117)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BE0E8;
      }
      goto L_089BE0E4;
    }
L_089BE0E4:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    goto L_089BE0E8;
L_089BE0E8:
    aot_gpr_5 = (17948u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (17245u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-12117), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (17288u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089BE11Cu);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE11Cu) goto L_089BE11C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE11C:
    aot_gpr_31 = (0x089BE124u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 440u, 0x089BE124u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE124u) goto L_089BE124;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE124:
    aot_gpr_5 = (17391u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (17287u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089BE148u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE148u) goto L_089BE148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE148:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BE160u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 442u, 0x089BE160u, 0x08B0C660u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE160u) goto L_089BE160;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE160:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_089BE174;
      }
      goto L_089BE16C;
    }
L_089BE16C:
    aot_gpr_31 = (0x089BE174u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE174u) goto L_089BE174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE174:
    aot_gpr_31 = (0x089BE17Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 445u, 0x089BE17Cu, 0x089C6D88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 633u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 633u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 633u, 0x089C6D88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE17Cu) goto L_089BE17C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE17C:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_089BE25C;
      }
      goto L_089BE188;
    }
L_089BE188:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11240)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089BE25C;
      }
      goto L_089BE198;
    }
L_089BE198:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_gpr_4 = (17312u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BE25C;
      }
      goto L_089BE1BC;
    }
L_089BE1BC:
    aot_gpr_31 = (0x089BE1C4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 449u, 0x089BE1C4u, 0x089BAAD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 565u, 0x089BAAD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE1C4u) goto L_089BE1C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE1C4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x089BE1D0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 450u, 0x089BE1D0u, 0x089BAA88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 558u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 558u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 558u, 0x089BAA88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE1D0u) goto L_089BE1D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE1D0:
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    aot_gpr_4 = (17385u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17392u << 16u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[20];
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_6 = (17288u << 16u);
    aot_gpr_5 = (0u | 480u);
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_fpr_13 = std::bit_cast<float>(0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x089BE23Cu);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE23Cu) goto L_089BE23C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE23C:
    aot_gpr_31 = (0x089BE244u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 452u, 0x089BE244u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE244u) goto L_089BE244;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE244:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BE254u);
    aot_gpr_6 = (0u | 221u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE254u) goto L_089BE254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE254:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BE2A4;
      }
      goto L_089BE25C;
    }
L_089BE25C:
    aot_gpr_5 = (0u | 13u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (0u | 480u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (17288u << 16u);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_31 = (0x089BE28Cu);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE28Cu) goto L_089BE28C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE28C:
    aot_gpr_31 = (0x089BE294u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 456u, 0x089BE294u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE294u) goto L_089BE294;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE294:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BE2A4u);
    aot_gpr_6 = (0u | 221u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE2A4u) goto L_089BE2A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE2A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BE2B8;
      }
      goto L_089BE2B0;
    }
L_089BE2B0:
    aot_gpr_31 = (0x089BE2B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE2B8u) goto L_089BE2B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE2B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6849), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_089BE2C4;
L_089BE2C4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BE588;
      }
      goto L_089BE2D4;
    }
L_089BE2D4:
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    goto L_089BE2D8;
L_089BE2D8:
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2239u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32064));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] << 6u);
      if (branch_taken) {
          goto L_089BE574;
      }
      goto L_089BE300;
    }
L_089BE300:
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2239u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32064));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] << 6u);
      if (branch_taken) {
          goto L_089BE574;
      }
      goto L_089BE32C;
    }
L_089BE32C:
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2239u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32064));
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x089BE350u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE350u) goto L_089BE350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE350:
    aot_gpr_31 = (0x089BE358u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE358u) goto L_089BE358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE358:
    aot_gpr_31 = (0x089BE360u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 467u, 0x089BE360u, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE360u) goto L_089BE360;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE360:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_31 = (0x089BE398u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE398u) goto L_089BE398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE398:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] << 6u);
      if (branch_taken) {
          goto L_089BE3B4;
      }
      goto L_089BE3A8;
    }
L_089BE3A8:
    aot_gpr_31 = (0x089BE3B0u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE3B0u) goto L_089BE3B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE3B0:
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    goto L_089BE3B4;
L_089BE3B4:
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2239u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32064));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] << 6u);
      if (branch_taken) {
          goto L_089BE3EC;
      }
      goto L_089BE3E0;
    }
L_089BE3E0:
    aot_gpr_31 = (0x089BE3E8u);
    aot_gpr_4 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE3E8u) goto L_089BE3E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE3E8:
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    goto L_089BE3EC;
L_089BE3EC:
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2239u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32064));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] << 6u);
      if (branch_taken) {
          goto L_089BE424;
      }
      goto L_089BE418;
    }
L_089BE418:
    aot_gpr_31 = (0x089BE420u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE420u) goto L_089BE420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE420:
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    goto L_089BE424;
L_089BE424:
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (2239u << 16u);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(32064));
    ctx.gpr[22] = (ctx.gpr[20] + ctx.gpr[21]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (17948u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_gpr_6 = (17288u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x089BE484u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE484u) goto L_089BE484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE484:
    aot_gpr_31 = (0x089BE48Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 479u, 0x089BE48Cu, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE48Cu) goto L_089BE48C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE48C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_31 = (0x089BE4A0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 480u, 0x089BE4A0u, 0x08B0C5C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 78u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 78u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 78u, 0x08B0C5C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE4A0u) goto L_089BE4A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE4A0:
    aot_gpr_5 = (17391u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(38));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[20] = (ctx.gpr[20] + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (17287u << 16u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x089BE4C8u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE4C8u) goto L_089BE4C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE4C8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BE4E0u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 482u, 0x089BE4E0u, 0x08B0C660u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE4E0u) goto L_089BE4E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE4E0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 481 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089BE510;
      }
      goto L_089BE4F4;
    }
L_089BE4F4:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 480u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_5 - ctx.gpr[18]);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_089BE510;
    }
    goto L_089BE510;
L_089BE510:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (17288u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x089BE530u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE530u) goto L_089BE530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE530:
    aot_gpr_31 = (0x089BE538u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 486u, 0x089BE538u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE538u) goto L_089BE538;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE538:
    aot_gpr_4 = (ctx.gpr[17] << 6u);
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2239u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32064));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(38));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089BE574u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE574u) goto L_089BE574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE574:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] << 6u);
      if (branch_taken) {
          goto L_089BE2D8;
      }
      goto L_089BE588;
    }
L_089BE588:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BE6B0;
      }
      goto L_089BE598;
    }
L_089BE598:
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    goto L_089BE59C;
L_089BE59C:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-30112));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_089BE69C;
      }
      goto L_089BE5BC;
    }
L_089BE5BC:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-30112));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_089BE69C;
      }
      goto L_089BE5DC;
    }
L_089BE5DC:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2240u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-30112));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_089BE648;
      }
      goto L_089BE5FC;
    }
L_089BE5FC:
    aot_gpr_4 = (ctx.gpr[17] << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (2240u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-30112));
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[19]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(92));
    aot_gpr_31 = (0x089BE62Cu);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE62Cu) goto L_089BE62C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE62C:
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BE640u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 495u, 0x089BE640u, 0x08AF5130u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 107u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 107u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE640u) goto L_089BE640;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE640:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BE69C;
      }
      goto L_089BE648;
    }
L_089BE648:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (2240u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-30112));
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[19]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(22))))));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (2240u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-29728));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(108));
    aot_gpr_31 = (0x089BE688u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE688u) goto L_089BE688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE688:
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (ctx.gpr[18] + aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089BE69Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 498u, 0x089BE69Cu, 0x08AF4650u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 72u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 72u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE69Cu) goto L_089BE69C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE69C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_089BE59C;
      }
      goto L_089BE6B0;
    }
L_089BE6B0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2074)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BE870;
      }
      goto L_089BE6BC;
    }
L_089BE6BC:
    aot_gpr_31 = (0x089BE6C4u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE6C4u) goto L_089BE6C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE6C4:
    aot_gpr_31 = (0x089BE6CCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE6CCu) goto L_089BE6CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE6CC:
    aot_gpr_31 = (0x089BE6D4u);
    aot_gpr_4 = (0u | 10u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE6D4u) goto L_089BE6D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE6D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 106u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (0u | 164u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(127), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089BE700u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(124));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE700u) goto L_089BE700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE700:
    aot_gpr_5 = (17948u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (17220u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (17288u << 16u);
    aot_gpr_31 = (0x089BE730u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE730u) goto L_089BE730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE730:
    aot_gpr_31 = (0x089BE738u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 506u, 0x089BE738u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE738u) goto L_089BE738;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE738:
    aot_gpr_5 = (17391u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(2074));
    aot_gpr_5 = (17287u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089BE75Cu);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE75Cu) goto L_089BE75C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE75C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x089BE774u);
    ctx.gpr[8] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 508u, 0x089BE774u, 0x08B0C660u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE774u) goto L_089BE774;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE774:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_089BE788;
      }
      goto L_089BE780;
    }
L_089BE780:
    aot_gpr_31 = (0x089BE788u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE788u) goto L_089BE788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE788:
    aot_gpr_31 = (0x089BE790u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 511u, 0x089BE790u, 0x089C6D88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 633u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 633u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 633u, 0x089C6D88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE790u) goto L_089BE790;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE790:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_089BE834;
      }
      goto L_089BE79C;
    }
L_089BE79C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11240)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089BE834;
      }
      goto L_089BE7AC;
    }
L_089BE7AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9256)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089BE834;
      }
      goto L_089BE7BC;
    }
L_089BE7BC:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_gpr_4 = (17312u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BE834;
      }
      goto L_089BE7E0;
    }
L_089BE7E0:
    aot_gpr_31 = (0x089BE7E8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 516u, 0x089BE7E8u, 0x089BAAD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 565u, 0x089BAAD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE7E8u) goto L_089BE7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE7E8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x089BE7F4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 517u, 0x089BE7F4u, 0x089BAA88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 558u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 558u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 558u, 0x089BAA88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE7F4u) goto L_089BE7F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE7F4:
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (17220u << 16u);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17392u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17288u << 16u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[20];
    aot_gpr_31 = (0x089BE824u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE824u) goto L_089BE824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE824:
    aot_gpr_31 = (0x089BE82Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 519u, 0x089BE82Cu, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE82Cu) goto L_089BE82C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE82C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BE860;
      }
      goto L_089BE834;
    }
L_089BE834:
    aot_gpr_5 = (17220u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (17392u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17288u << 16u);
    aot_gpr_31 = (0x089BE858u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE858u) goto L_089BE858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE858:
    aot_gpr_31 = (0x089BE860u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 522u, 0x089BE860u, 0x08B0C4D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 64u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 64u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE860u) goto L_089BE860;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BE860:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2074));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BE870u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE870u) goto L_089BE870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE870:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1050)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BE8E8;
      }
      goto L_089BE87C;
    }
L_089BE87C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(3610)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BE8E8;
      }
      goto L_089BE888;
    }
L_089BE888:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2586)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BE8E8;
      }
      goto L_089BE894;
    }
L_089BE894:
    aot_gpr_31 = (0x089BE89Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE89Cu) goto L_089BE89C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE89C:
    aot_gpr_31 = (0x089BE8A4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE8A4u) goto L_089BE8A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE8A4:
    aot_gpr_31 = (0x089BE8ACu);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE8ACu) goto L_089BE8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE8AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    aot_gpr_5 = (0u | 8u);
    aot_gpr_6 = (0u | 143u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (0u | 59u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089BE8D8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE8D8u) goto L_089BE8D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE8D8:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2586));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089BE8E8u);
    aot_gpr_6 = (0u | 196u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BE8E8u) goto L_089BE8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BE8E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9532)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_089BE9B0;
      }
      goto L_089BE900;
    }
L_089BE900:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_089BE958;
      }
      goto L_089BE930;
    }
L_089BE930:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BE98C;
      }
      goto L_089BE958;
    }
L_089BE958:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (20224u << 16u);
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    goto L_089BE98C;
L_089BE98C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_089BE9A4;
      }
      goto L_089BE998;
    }
L_089BE998:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_089BE9A4;
L_089BE9A4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9532)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9532), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BE9B0;
L_089BE9B0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(3098)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BEC30;
      }
      goto L_089BE9BC;
    }
L_089BE9BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9532)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BEC30;
      }
      goto L_089BE9D4;
    }
L_089BE9D4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13166))))));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BEA0C;
      }
      goto L_089BE9E4;
    }
L_089BE9E4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_089BEBAC;
      }
      goto L_089BE9EC;
    }
L_089BE9EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_089BEA24;
      }
      goto L_089BE9F4;
    }
L_089BE9F4:
    aot_gpr_4 = (17342u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9528), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13166), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089BEBAC;
      }
      goto L_089BEA0C;
    }
L_089BEA0C:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BEA90;
      }
      goto L_089BEA14;
    }
L_089BEA14:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (16544u << 16u);
      if (branch_taken) {
          goto L_089BEB4C;
      }
      goto L_089BEA1C;
    }
L_089BEA1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BEBAC;
      }
      goto L_089BEA24;
    }
L_089BEA24:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9528)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16576u << 16u);
      if (branch_taken) {
          goto L_089BEA7C;
      }
      goto L_089BEA40;
    }
L_089BEA40:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9528)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BEA6C;
      }
      goto L_089BEA64;
    }
L_089BEA64:
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_089BEA6C;
L_089BEA6C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9528)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9528), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BEA88;
      }
      goto L_089BEA7C;
    }
L_089BEA7C:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13166), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9526), static_cast<std::uint16_t>(0u));
    goto L_089BEA88;
L_089BEA88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BEBAC;
      }
      goto L_089BEA90;
    }
L_089BEA90:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_5 = (17530u << 16u);
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9526))))));
      if (branch_taken) {
          goto L_089BEAEC;
      }
      goto L_089BEAC4;
    }
L_089BEAC4:
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_5 = (17530u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BEB24;
      }
      goto L_089BEAEC;
    }
L_089BEAEC:
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_5 = (17530u << 16u);
    aot_gpr_6 = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    goto L_089BEB24;
L_089BEB24:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9526), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9526))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 1501 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BEB44;
      }
      goto L_089BEB3C;
    }
L_089BEB3C:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13166), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_089BEB44;
L_089BEB44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BEBAC;
      }
      goto L_089BEB4C;
    }
L_089BEB4C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9528)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BEB78;
      }
      goto L_089BEB70;
    }
L_089BEB70:
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_089BEB78;
L_089BEB78:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9528)));
    aot_gpr_4 = (50110u << 16u);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9528), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BEBAC;
      }
      goto L_089BEB98;
    }
L_089BEB98:
    aot_gpr_4 = (17820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13166), static_cast<std::uint16_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9532), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BEBAC;
L_089BEBAC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1050)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BEC30;
      }
      goto L_089BEBB8;
    }
L_089BEBB8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(3610)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BEC30;
      }
      goto L_089BEBC4;
    }
L_089BEBC4:
    aot_gpr_31 = (0x089BEBCCu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BEBCCu) goto L_089BEBCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BEBCC:
    aot_gpr_31 = (0x089BEBD4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BEBD4u) goto L_089BEBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BEBD4:
    aot_gpr_31 = (0x089BEBDCu);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BEBDCu) goto L_089BEBDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BEBDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_5 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_15;
    aot_gpr_6 = (17234u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(3098));
    aot_gpr_5 = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_31 = (0x089BEC30u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BEC30u) goto L_089BEC30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BEC30:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1050)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BF14C;
      }
      goto L_089BEC3C;
    }
L_089BEC3C:
    aot_gpr_4 = (2279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17968));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_089BEC90;
      }
      goto L_089BEC5C;
    }
L_089BEC5C:
    aot_gpr_4 = (49776u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18000));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17968));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9252), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(9248), 0u);
      if (branch_taken) {
          goto L_089BF15C;
      }
      goto L_089BEC90;
    }
L_089BEC90:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17968));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_089BECF4;
      }
      goto L_089BECCC;
    }
L_089BECCC:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089BED28;
      }
      goto L_089BECF4;
    }
L_089BECF4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (20224u << 16u);
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[16];
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    goto L_089BED28;
L_089BED28:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_089BED40;
      }
      goto L_089BED34;
    }
L_089BED34:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_089BED40;
L_089BED40:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-20));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17968));
    aot_gpr_4 = (2279u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18000));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_089BEF38;
      }
      goto L_089BED7C;
    }
L_089BED7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18000));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_089BEDE0;
      }
      goto L_089BEDB8;
    }
L_089BEDB8:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089BEE14;
      }
      goto L_089BEDE0;
    }
L_089BEDE0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (20224u << 16u);
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[16];
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    goto L_089BEE14;
L_089BEE14:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_089BEE2C;
      }
      goto L_089BEE20;
    }
L_089BEE20:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_089BEE2C;
L_089BEE2C:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 / aot_fpr_15;
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.gpr[8] = (17530u << 16u);
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_6 = (2279u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18000));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(18032));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[17])) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089BEEAC;
      }
      goto L_089BEE84;
    }
L_089BEE84:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089BEEE4;
      }
      goto L_089BEEAC;
    }
L_089BEEAC:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (20224u << 16u);
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[16];
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    goto L_089BEEE4;
L_089BEEE4:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_089BEEFC;
      }
      goto L_089BEEF0;
    }
L_089BEEF0:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_089BEEFC;
L_089BEEFC:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (17279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18032));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BF08C;
      }
      goto L_089BEF20;
    }
L_089BEF20:
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18032));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BF08C;
      }
      goto L_089BEF38;
    }
L_089BEF38:
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17968));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (17820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17820u << 16u);
      if (branch_taken) {
          goto L_089BF04C;
      }
      goto L_089BEF60;
    }
L_089BEF60:
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17968));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x089BEF80u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 592u, 0x089BEF80u, 0x08A1C770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BEF80u) goto L_089BEF80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BEF80:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_089BF04C;
      }
      goto L_089BEF8C;
    }
L_089BEF8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18032));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_089BEFF0;
      }
      goto L_089BEFC8;
    }
L_089BEFC8:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089BF024;
      }
      goto L_089BEFF0;
    }
L_089BEFF0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (20224u << 16u);
    aot_gpr_6 = (32768u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[16];
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    goto L_089BF024;
L_089BF024:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_089BF03C;
      }
      goto L_089BF030;
    }
L_089BF030:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_089BF03C;
L_089BF03C:
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18032));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BF04C;
L_089BF04C:
    aot_gpr_4 = (2279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18032));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF08C;
      }
      goto L_089BF06C;
    }
L_089BF06C:
    aot_gpr_4 = (2279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(18032));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (2279u << 16u);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1050), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17968));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BF08C;
L_089BF08C:
    aot_gpr_4 = (0u | 220u);
    aot_gpr_5 = (0u | 172u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(180));
    aot_gpr_31 = (0x089BF0B8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF0B8u) goto L_089BF0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF0B8:
    aot_gpr_31 = (0x089BF0C0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF0C0u) goto L_089BF0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF0C0:
    aot_gpr_31 = (0x089BF0C8u);
    aot_gpr_4 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF0C8u) goto L_089BF0C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF0C8:
    aot_gpr_31 = (0x089BF0D0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF0D0u) goto L_089BF0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF0D0:
    aot_gpr_4 = (16281u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_gpr_31 = (0x089BF0E0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 606u, 0x089BF0E0u, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF0E0u) goto L_089BF0E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BF0E0:
    aot_gpr_5 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(184));
    aot_gpr_5 = (17392u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_14 = aot_fpr_15 - aot_fpr_14;
    aot_gpr_5 = (17288u << 16u);
    aot_gpr_31 = (0x089BF110u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF110u) goto L_089BF110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF110:
    aot_gpr_31 = (0x089BF118u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1050));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 608u, 0x089BF118u, 0x08B0C580u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 75u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 75u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF118u) goto L_089BF118;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BF118:
    aot_gpr_4 = (17286u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[0];
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x089BF144u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 609u, 0x089BF144u, 0x08B0C1B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 24u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 24u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF144u) goto L_089BF144;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BF144:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF15C;
      }
      goto L_089BF14C;
    }
L_089BF14C:
    aot_gpr_4 = (2279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17968));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BF15C;
L_089BF15C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BF18C:
    ctx.gpr[11] = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[10] = (aot_gpr_6 & 255u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_089BF1D8;
      }
      goto L_089BF1B8;
    }
L_089BF1B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
      if (branch_taken) {
          goto L_089BF220;
      }
      goto L_089BF1C0;
    }
L_089BF1C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) > 0;
      if (branch_taken) {
          goto L_089BF1F4;
      }
      goto L_089BF1C8;
    }
L_089BF1C8:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10900)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10892)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10896)));
      if (branch_taken) {
          goto L_089BF220;
      }
      goto L_089BF1D8;
    }
L_089BF1D8:
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BF204;
      }
      goto L_089BF1E4;
    }
L_089BF1E4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_089BF214;
      }
      goto L_089BF1EC;
    }
L_089BF1EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF220;
      }
      goto L_089BF1F4;
    }
L_089BF1F4:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10868)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10860)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10864)));
      if (branch_taken) {
          goto L_089BF220;
      }
      goto L_089BF204;
    }
L_089BF204:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10884)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10876)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10880)));
      if (branch_taken) {
          goto L_089BF220;
      }
      goto L_089BF214;
    }
L_089BF214:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10916)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10908)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10912)));
    goto L_089BF220;
L_089BF220:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_089BF268;
      }
      goto L_089BF228;
    }
L_089BF228:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 3u);
      if (branch_taken) {
          goto L_089BF24C;
      }
      goto L_089BF234;
    }
L_089BF234:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
      if (branch_taken) {
          goto L_089BF268;
      }
      goto L_089BF23C;
    }
L_089BF23C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
      if (branch_taken) {
          goto L_089BF25C;
      }
      goto L_089BF244;
    }
L_089BF244:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF260;
      }
      goto L_089BF24C;
    }
L_089BF24C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
      if (branch_taken) {
          goto L_089BF260;
      }
      goto L_089BF254;
    }
L_089BF254:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF268;
      }
      goto L_089BF25C;
    }
L_089BF25C:
    aot_gpr_6 = (0u | 0u);
    goto L_089BF260;
L_089BF260:
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[7] = (0u | 5u);
    goto L_089BF268;
L_089BF268:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (0u | 5u);
      if (branch_taken) {
          goto L_089BF450;
      }
      goto L_089BF270;
    }
L_089BF270:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
      if (branch_taken) {
          goto L_089BF450;
      }
      goto L_089BF278;
    }
L_089BF278:
    ctx.gpr[10] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.gpr[10] = (17530u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[10] = (20224u << 16u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[10]);
      if (branch_taken) {
          goto L_089BF2AC;
      }
      goto L_089BF29C;
    }
L_089BF29C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
      if (branch_taken) {
          goto L_089BF400;
      }
      goto L_089BF2A4;
    }
L_089BF2A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF3D4;
      }
      goto L_089BF2AC;
    }
L_089BF2AC:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BF2C8;
      }
      goto L_089BF2B8;
    }
L_089BF2B8:
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_089BF350;
      }
      goto L_089BF2C0;
    }
L_089BF2C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF400;
      }
      goto L_089BF2C8;
    }
L_089BF2C8:
    aot_fpr_13 = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF2F8;
      }
      goto L_089BF2E0;
    }
L_089BF2E0:
    aot_fpr_13 = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089BF318;
      }
      goto L_089BF2F8;
    }
L_089BF2F8:
    aot_fpr_13 = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[9] = (32768u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[9]);
    goto L_089BF318;
L_089BF318:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF344;
      }
      goto L_089BF330;
    }
L_089BF330:
    ctx.gpr[9] = (17530u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_6 = (0u | 1000u);
    ctx.gpr[8] = (0u | 1u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
    goto L_089BF344;
L_089BF344:
    ctx.fpr[0] = aot_fpr_13 / aot_fpr_15;
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_089BF400;
      }
      goto L_089BF350;
    }
L_089BF350:
    aot_fpr_13 = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF380;
      }
      goto L_089BF368;
    }
L_089BF368:
    aot_fpr_13 = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[9]);
      if (branch_taken) {
          goto L_089BF3A0;
      }
      goto L_089BF380;
    }
L_089BF380:
    aot_fpr_13 = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[9] = (32768u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[9]);
    goto L_089BF3A0;
L_089BF3A0:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF3C8;
      }
      goto L_089BF3B8;
    }
L_089BF3B8:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BF3C8;
L_089BF3C8:
    ctx.fpr[0] = aot_fpr_13 / aot_fpr_15;
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_089BF400;
      }
      goto L_089BF3D4;
    }
L_089BF3D4:
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[9] = (17948u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.gpr[9] = (ctx.gpr[9] | 16384u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (0u | 1000u);
      if (branch_taken) {
          goto L_089BF400;
      }
      goto L_089BF3F8;
    }
L_089BF3F8:
    ctx.gpr[8] = (0u | 3u);
    aot_gpr_6 = (0u | 3000u);
    goto L_089BF400;
L_089BF400:
    aot_fpr_13 = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF430;
      }
      goto L_089BF418;
    }
L_089BF418:
    aot_fpr_13 = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089BF450;
      }
      goto L_089BF430;
    }
L_089BF430:
    aot_fpr_13 = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[9] = (32768u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_089BF450;
L_089BF450:
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BF47C;
      }
      goto L_089BF45C;
    }
L_089BF45C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_089BF4C0;
      }
      goto L_089BF464;
    }
L_089BF464:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
      if (branch_taken) {
          goto L_089BF494;
      }
      goto L_089BF46C;
    }
L_089BF46C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10900), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10892), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10896), aot_gpr_6);
      if (branch_taken) {
          goto L_089BF4C0;
      }
      goto L_089BF47C;
    }
L_089BF47C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BF4A4;
      }
      goto L_089BF484;
    }
L_089BF484:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089BF4B4;
      }
      goto L_089BF48C;
    }
L_089BF48C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF4C0;
      }
      goto L_089BF494;
    }
L_089BF494:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10868), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10860), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10864), aot_gpr_6);
      if (branch_taken) {
          goto L_089BF4C0;
      }
      goto L_089BF4A4;
    }
L_089BF4A4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10884), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10876), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10880), aot_gpr_6);
      if (branch_taken) {
          goto L_089BF4C0;
      }
      goto L_089BF4B4;
    }
L_089BF4B4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10916), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10908), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10912), aot_gpr_6);
    goto L_089BF4C0;
L_089BF4C0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF4D4;
      }
      goto L_089BF4D0;
    }
L_089BF4D0:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BF4D4;
L_089BF4D4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF4E8;
      }
      goto L_089BF4E4;
    }
L_089BF4E4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089BF4E8;
L_089BF4E8:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BF4F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9265)));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BF544;
      }
      goto L_089BF52C;
    }
L_089BF52C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(9260))))));
    ctx.gpr[17] = (0u | 3u);
    if (aot_gpr_4 == ctx.gpr[17]) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
        goto L_089BF54C;
    }
    goto L_089BF53C;
L_089BF53C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF558;
      }
      goto L_089BF544;
    }
L_089BF544:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF9BC;
      }
      goto L_089BF54C;
    }
L_089BF54C:
    aot_gpr_5 = (aot_gpr_5 & 8u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089BF564;
    }
    goto L_089BF558;
L_089BF558:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_089BF9BC;
      }
      goto L_089BF560;
    }
L_089BF560:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_089BF564;
L_089BF564:
    ctx.gpr[18] = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1256)));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF9BC;
      }
      goto L_089BF5A4;
    }
L_089BF5A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BF5B8;
      }
      goto L_089BF5B0;
    }
L_089BF5B0:
    aot_gpr_31 = (0x089BF5B8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF5B8u) goto L_089BF5B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF5B8:
    aot_gpr_31 = (0x089BF5C0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 682u, 0x089BF5C0u, 0x089C6DBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 638u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 638u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF5C0u) goto L_089BF5C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BF5C0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089BF9BC;
      }
      goto L_089BF5C8;
    }
L_089BF5C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089BF614;
      }
      goto L_089BF5F0;
    }
L_089BF5F0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2000));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089BF614;
      }
      goto L_089BF604;
    }
L_089BF604:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089BF9BC;
      }
      goto L_089BF614;
    }
L_089BF614:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(9260))))));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[17];
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089BF680;
      }
      goto L_089BF624;
    }
L_089BF624:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1256)));
    aot_gpr_6 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1256)));
        goto L_089BF684;
    }
    goto L_089BF640;
L_089BF640:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12116)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12116), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BF680;
      }
      goto L_089BF650;
    }
L_089BF650:
    aot_gpr_4 = (0u | 50u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12116), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(9260), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089BF680;
L_089BF680:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1256)));
    goto L_089BF684;
L_089BF684:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(337)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF6C4;
      }
      goto L_089BF6BC;
    }
L_089BF6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089BF6D8;
      }
      goto L_089BF6C4;
    }
L_089BF6C4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF6D8;
      }
      goto L_089BF6D4;
    }
L_089BF6D4:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_089BF6D8;
L_089BF6D8:
    aot_fpr_13 = ctx.fpr[26] / ctx.fpr[22];
    aot_gpr_4 = (16928u << 16u);
    aot_gpr_6 = (16768u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[8] = (15488u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_15;
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    { const bool branch_taken = aot_gpr_5 != 0u;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_089BF71C;
      }
      goto L_089BF710;
    }
L_089BF710:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_089BF738;
      }
      goto L_089BF71C;
    }
L_089BF71C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[22])) && aot_fpr_12 == ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16267u << 16u);
      if (branch_taken) {
          goto L_089BF73C;
      }
      goto L_089BF72C;
    }
L_089BF72C:
    aot_gpr_4 = (17024u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_089BF738;
L_089BF738:
    aot_gpr_4 = (16267u << 16u);
    goto L_089BF73C;
L_089BF73C:
    aot_gpr_4 = (aot_gpr_4 | 34079u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (17328u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (16840u << 16u);
    aot_gpr_6 = (16932u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.fpr[30] = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x089BF784u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF784u) goto L_089BF784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF784:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(11164));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    aot_gpr_31 = (0x089BF7A0u);
    ctx.gpr[7] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF7A0u) goto L_089BF7A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF7A0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_6 = (aot_gpr_2 | 0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x089BF7D0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 703u, 0x089BF7D0u, 0x08AF4770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF7D0u) goto L_089BF7D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BF7D0:
    aot_gpr_5 = (17362u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (aot_gpr_5 | 57672u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x089BF7F8u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF7F8u) goto L_089BF7F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF7F8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(11152));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    aot_gpr_31 = (0x089BF844u);
    ctx.gpr[7] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF844u) goto L_089BF844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF844:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_6 = (aot_gpr_2 | 0u);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x089BF874u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 706u, 0x089BF874u, 0x08AF4770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF874u) goto L_089BF874;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BF874:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x089BF88Cu);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF88Cu) goto L_089BF88C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF88C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(11172));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    aot_gpr_31 = (0x089BF8D8u);
    ctx.gpr[7] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF8D8u) goto L_089BF8D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF8D8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_6 = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x089BF908u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 709u, 0x089BF908u, 0x08AF4770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 84u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 84u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF908u) goto L_089BF908;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BF908:
    aot_gpr_4 = (17096u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BF9BC;
      }
      goto L_089BF924;
    }
L_089BF924:
    aot_gpr_31 = (0x089BF92Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF92Cu) goto L_089BF92C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF92C:
    aot_gpr_31 = (0x089BF934u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF934u) goto L_089BF934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF934:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089BF958u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF958u) goto L_089BF958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF958:
    aot_gpr_4 = (0u | 43u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (17146u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089BF9A0;
      }
      goto L_089BF97C;
    }
L_089BF97C:
    aot_gpr_4 = (16288u << 16u);
    aot_gpr_31 = (0x089BF988u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 715u, 0x089BF988u, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF988u) goto L_089BF988;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BF988:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 362u);
    aot_gpr_31 = (0x089BF998u);
    aot_gpr_6 = (0u | 18u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF998u) goto L_089BF998;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF998:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BF9BC;
      }
      goto L_089BF9A0;
    }
L_089BF9A0:
    aot_gpr_4 = (16192u << 16u);
    aot_gpr_31 = (0x089BF9ACu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 718u, 0x089BF9ACu, 0x08B0C520u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 68u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 68u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF9ACu) goto L_089BF9AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BF9AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 366u);
    aot_gpr_31 = (0x089BF9BCu);
    aot_gpr_6 = (0u | 23u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BF9BCu) goto L_089BF9BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BF9BC:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
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
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BF9F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-816));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(538)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(780), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[7]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(784), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (2279u << 16u);
      if (branch_taken) {
          goto L_089BFF50;
      }
      goto L_089BFA2C;
    }
L_089BFA2C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17968)));
    ctx.gpr[18] = (2279u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[19] = (2279u << 16u);
      if (branch_taken) {
          goto L_089BFA64;
      }
      goto L_089BFA44;
    }
L_089BFA44:
    aot_gpr_4 = (49776u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18000), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17968), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18032), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BFF54;
      }
      goto L_089BFA64;
    }
L_089BFA64:
    aot_gpr_31 = (0x089BFA6Cu);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFA6Cu) goto L_089BFA6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BFA6C:
    aot_gpr_31 = (0x089BFA74u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFA74u) goto L_089BFA74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BFA74:
    aot_gpr_31 = (0x089BFA7Cu);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFA7Cu) goto L_089BFA7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BFA7C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18032)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18000)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_5 = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    aot_gpr_5 = (17530u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(538));
    aot_gpr_5 = (20224u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_089BFAC4;
      }
      goto L_089BFAC4;
    }
L_089BFAC4:
    ctx.fpr[19] = aot_fpr_15 / ctx.fpr[16];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] < ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17968)));
      if (branch_taken) {
          goto L_089BFAF8;
      }
      goto L_089BFADC;
    }
L_089BFADC:
    ctx.fpr[19] = aot_fpr_15 / ctx.fpr[16];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
      if (branch_taken) {
          goto L_089BFB1C;
      }
      goto L_089BFAF8;
    }
L_089BFAF8:
    ctx.fpr[19] = aot_fpr_15 / ctx.fpr[16];
    aot_gpr_4 = (32768u << 16u);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    goto L_089BFB1C;
L_089BFB1C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_089BFB2C;
      }
      goto L_089BFB24;
    }
L_089BFB24:
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    goto L_089BFB2C;
L_089BFB2C:
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[19];
    aot_gpr_4 = (17382u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17968), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BFC64;
      }
      goto L_089BFB48;
    }
L_089BFB48:
    aot_fpr_12 = aot_fpr_15 / ctx.fpr[16];
    aot_gpr_4 = (17279u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_089BFB80;
      }
      goto L_089BFB64;
    }
L_089BFB64:
    aot_fpr_12 = aot_fpr_15 / ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_089BFBA4;
      }
      goto L_089BFB80;
    }
L_089BFB80:
    aot_fpr_12 = aot_fpr_15 / ctx.fpr[16];
    aot_gpr_4 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[18];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    goto L_089BFBA4;
L_089BFBA4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_089BFBB4;
      }
      goto L_089BFBAC;
    }
L_089BFBAC:
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[0];
    goto L_089BFBB4;
L_089BFBB4:
    ctx.fpr[0] = aot_fpr_15 / ctx.fpr[16];
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[2] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18000), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BFBFC;
      }
      goto L_089BFBE0;
    }
L_089BFBE0:
    aot_fpr_12 = aot_fpr_15 / ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
      if (branch_taken) {
          goto L_089BFC20;
      }
      goto L_089BFBFC;
    }
L_089BFBFC:
    aot_fpr_12 = aot_fpr_15 / ctx.fpr[16];
    aot_gpr_4 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[18];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    goto L_089BFC20;
L_089BFC20:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (16076u << 16u);
      if (branch_taken) {
          goto L_089BFC38;
      }
      goto L_089BFC28;
    }
L_089BFC28:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_15 + aot_fpr_12;
    aot_gpr_4 = (16076u << 16u);
    goto L_089BFC38;
L_089BFC38:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18032), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_089BFD28;
      }
      goto L_089BFC58;
    }
L_089BFC58:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18032), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_089BFD28;
      }
      goto L_089BFC64;
    }
L_089BFC64:
    aot_gpr_4 = (17820u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17968)));
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BFD0C;
      }
      goto L_089BFC84;
    }
L_089BFC84:
    aot_fpr_13 = aot_fpr_15 / ctx.fpr[16];
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17968), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BFCBC;
      }
      goto L_089BFCA0;
    }
L_089BFCA0:
    aot_fpr_12 = aot_fpr_15 / ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
      if (branch_taken) {
          goto L_089BFCE0;
      }
      goto L_089BFCBC;
    }
L_089BFCBC:
    aot_fpr_12 = aot_fpr_15 / ctx.fpr[16];
    aot_gpr_4 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[18];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    goto L_089BFCE0;
L_089BFCE0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (16076u << 16u);
      if (branch_taken) {
          goto L_089BFCF8;
      }
      goto L_089BFCE8;
    }
L_089BFCE8:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_15 + aot_fpr_12;
    aot_gpr_4 = (16076u << 16u);
    goto L_089BFCF8;
L_089BFCF8:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18032), std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_089BFD0C;
L_089BFD0C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BFD28;
      }
      goto L_089BFD1C;
    }
L_089BFD1C:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18032), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18032)));
    goto L_089BFD28;
L_089BFD28:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_089BFD48;
      }
      goto L_089BFD44;
    }
L_089BFD44:
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_089BFD48;
L_089BFD48:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12112));
      if (branch_taken) {
          goto L_089BFD7C;
      }
      goto L_089BFD50;
    }
L_089BFD50:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089BFD5Cu);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 758u, 0x089BFD5Cu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFD5Cu) goto L_089BFD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFD5C:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_089BFD74;
      }
      goto L_089BFD68;
    }
L_089BFD68:
    aot_gpr_31 = (0x089BFD70u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFD70u) goto L_089BFD70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BFD70:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089BFD74;
L_089BFD74:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12112));
    goto L_089BFD7C;
L_089BFD7C:
    aot_gpr_31 = (0x089BFD84u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 763u, 0x089BFD84u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFD84u) goto L_089BFD84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFD84:
    aot_gpr_31 = (0x089BFD8Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 764u, 0x089BFD8Cu, 0x089F5AC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFD8Cu) goto L_089BFD8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFD8C:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089BFD98u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 765u, 0x089BFD98u, 0x08B5831Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFD98u) goto L_089BFD98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFD98:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12104));
      if (branch_taken) {
          goto L_089BFDD0;
      }
      goto L_089BFDA4;
    }
L_089BFDA4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089BFDB0u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 767u, 0x089BFDB0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFDB0u) goto L_089BFDB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFDB0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_089BFDC8;
      }
      goto L_089BFDBC;
    }
L_089BFDBC:
    aot_gpr_31 = (0x089BFDC4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFDC4u) goto L_089BFDC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BFDC4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089BFDC8;
L_089BFDC8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12104));
    goto L_089BFDD0;
L_089BFDD0:
    aot_gpr_31 = (0x089BFDD8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 772u, 0x089BFDD8u, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFDD8u) goto L_089BFDD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFDD8:
    aot_gpr_31 = (0x089BFDE0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 773u, 0x089BFDE0u, 0x089F5AC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFDE0u) goto L_089BFDE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFDE0:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089BFDECu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 774u, 0x089BFDECu, 0x08B5831Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFDECu) goto L_089BFDEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFDEC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12096));
      if (branch_taken) {
          goto L_089BFE24;
      }
      goto L_089BFDF8;
    }
L_089BFDF8:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089BFE04u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 776u, 0x089BFE04u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE04u) goto L_089BFE04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFE04:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_089BFE1C;
      }
      goto L_089BFE10;
    }
L_089BFE10:
    aot_gpr_31 = (0x089BFE18u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE18u) goto L_089BFE18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BFE18:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089BFE1C;
L_089BFE1C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12096));
    goto L_089BFE24;
L_089BFE24:
    aot_gpr_31 = (0x089BFE2Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 781u, 0x089BFE2Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE2Cu) goto L_089BFE2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFE2C:
    aot_gpr_31 = (0x089BFE34u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 782u, 0x089BFE34u, 0x089F5AC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE34u) goto L_089BFE34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFE34:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089BFE40u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 783u, 0x089BFE40u, 0x08B5831Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 63u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 63u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE40u) goto L_089BFE40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFE40:
    aot_gpr_5 = (17159u << 16u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089BFE50u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 784u, 0x089BFE50u, 0x089F5AC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE50u) goto L_089BFE50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFE50:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089BFE5Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 785u, 0x089BFE5Cu, 0x08B58180u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 31u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 31u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE5Cu) goto L_089BFE5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFE5C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089BFE9C;
      }
      goto L_089BFE64;
    }
L_089BFE64:
    aot_gpr_31 = (0x089BFE6Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 787u, 0x089BFE6Cu, 0x089F5AC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE6Cu) goto L_089BFE6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFE6C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089BFE78u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 788u, 0x089BFE78u, 0x08B58180u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 31u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 31u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE78u) goto L_089BFE78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFE78:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_089BFE9C;
      }
      goto L_089BFE80;
    }
L_089BFE80:
    aot_gpr_31 = (0x089BFE88u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 790u, 0x089BFE88u, 0x089F5AC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 309u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 309u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE88u) goto L_089BFE88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFE88:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089BFE94u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0110->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0110_entry, 791u, 0x089BFE94u, 0x08B58180u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 31u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 31u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFE94u) goto L_089BFE94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089BFE94:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089BFEE8;
      }
      goto L_089BFE9C;
    }
L_089BFE9C:
    aot_gpr_5 = (0u | 237u);
    aot_gpr_6 = (0u | 130u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(768), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 180u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(769), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(770), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(771), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089BFEC4u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(768));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFEC4u) goto L_089BFEC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BFEC4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1562)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BFEDC;
      }
      goto L_089BFED0;
    }
L_089BFED0:
    aot_gpr_4 = (16840u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[20] = ctx.fpr[20] - aot_fpr_12;
    goto L_089BFEDC;
L_089BFEDC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BFF30;
      }
      goto L_089BFEE8;
    }
L_089BFEE8:
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 227u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(772), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 79u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(773), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(774), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(775), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089BFF10u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(772));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFF10u) goto L_089BFF10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BFF10:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1562)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BFF28;
      }
      goto L_089BFF1C;
    }
L_089BFF1C:
    aot_gpr_4 = (16916u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[20] = ctx.fpr[20] - aot_fpr_12;
    goto L_089BFF28;
L_089BFF28:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089BFF30;
L_089BFF30:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17152), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089BFF48u);
    aot_gpr_5 = (0u | 240u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BFF48u) goto L_089BFF48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BFF48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17152), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089BFF54;
      }
      goto L_089BFF50;
    }
L_089BFF50:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17968), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089BFF54;
L_089BFF54:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(776), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BFF80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-544));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(536), ctx.gpr[30]);
    ctx.gpr[30] = (2240u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-25888));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[30] + static_cast<std::uint32_t>(332)));
    aot_gpr_5 = (0u | 1u);
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(480), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(540), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    ctx.gpr[19] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0111_entry, 111u, 47u, 0x089C0420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089BFFDC;
    }
L_089BFFDC:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(68));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[30] = (aot_gpr_4 + ctx.gpr[30]);
    aot_gpr_4 = (17389u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (16256u << 16u);
    ctx.pc = 0x089C0000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0110(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0110_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_110(Runtime &runtime) {
    runtime.register_generated_unit(110u, 0x089BC000u, 16384u, &recomp_unit_0110, &recomp_unit_0110_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x089BC000u, &recomp_unit_0110, "recomp_unit_0110",
                                          kEntryMasks_recomp_unit_0110, 64u);
}
} // namespace psprecomp
