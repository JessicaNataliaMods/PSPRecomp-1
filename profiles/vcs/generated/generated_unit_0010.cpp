#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0010[64] = {
    0x4054005548AAA021ull, 0x82822842800A8085ull, 0x0A0A828282828282ull, 0x0004A2010A808095ull,
    0x0004011029268516ull, 0x440A400012685150ull, 0x1029268516000400ull, 0x0112210018080401ull,
    0x02808681502A5050ull, 0x0010000808006A88ull, 0x1400000000000000ull, 0x924848888A924944ull,
    0x5152000100064924ull, 0x84100000404000A0ull, 0x0042200021420A88ull, 0x0002821010008000ull,
    0x0410042095000000ull, 0x814400000200200Aull, 0x0408090008244800ull, 0x0051002001200021ull,
    0x0020848004041001ull, 0x09110820A4800004ull, 0x68848B4425242451ull, 0x0000002000ADA254ull,
    0xA0229512C4200000ull, 0x52AA552804028B02ull, 0x90114AAAAA081595ull, 0x400880010023006Aull,
    0x04446922A80A0104ull, 0xA4AA48082A880120ull, 0x20A4924889249229ull, 0x2810349054D51280ull,
    0x01010891090B0AAAull, 0xA421040090020048ull, 0x5495549255A955C8ull, 0x04802B5559495552ull,
    0x8802402A114AA110ull, 0x8062290055552848ull, 0x0801200011405114ull, 0xAAA555455552AA82ull,
    0xA1002801122A8AA2ull, 0x414AAAA942901802ull, 0x852A555520224142ull, 0x52400001412B4914ull,
    0x00020082A215510Aull, 0x0105442AA214A480ull, 0x10A4400A51920014ull, 0x900080214C428529ull,
    0x142948852200528Cull, 0x9528A49504010A62ull, 0x15150B2CA5080011ull, 0x000000A0A81500ADull,
    0xA000000000000000ull, 0x21485A4B4969502Aull, 0x04034AA484A52905ull, 0x15510AA480249510ull,
    0x200928AB484212A2ull, 0xD21084A8855442A9ull, 0x215510AA48024A2Aull, 0x0AB48422B484212Aull,
    0x09000102802A5020ull, 0x0205510A52401292ull, 0x08AD210895105691ull, 0x08AD21020934AD21ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0010[64] = {
    1u, 19u, 34u, 50u, 63u, 78u, 93u, 107u, 117u, 133u, 142u, 144u, 164u, 178u, 185u, 196u,
    202u, 210u, 218u, 227u, 235u, 243u, 254u, 275u, 287u, 301u, 321u, 344u, 355u, 371u, 388u, 408u,
    427u, 444u, 455u, 483u, 507u, 523u, 542u, 553u, 581u, 598u, 618u, 639u, 655u, 669u, 686u, 701u,
    717u, 735u, 755u, 774u, 787u, 789u, 813u, 833u, 852u, 871u, 893u, 913u, 934u, 945u, 962u, 983u,
};
void recomp_unit_0010_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,16,29,6 fprs=12,13,20,14 gpr_occ=4501 fpr_occ=275 gpr_total=6155 fpr_total=350
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0882C000u;
        entry_id = 0u;
        if (entry_delta < 16368u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0010[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0010[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_0882C000;
    case 2u: goto L_0882C014;
    case 3u: goto L_0882C034;
    case 4u: goto L_0882C03C;
    case 5u: goto L_0882C044;
    case 6u: goto L_0882C04C;
    case 7u: goto L_0882C054;
    case 8u: goto L_0882C05C;
    case 9u: goto L_0882C06C;
    case 10u: goto L_0882C078;
    case 11u: goto L_0882C080;
    case 12u: goto L_0882C088;
    case 13u: goto L_0882C090;
    case 14u: goto L_0882C098;
    case 15u: goto L_0882C0C8;
    case 16u: goto L_0882C0D0;
    case 17u: goto L_0882C0D8;
    case 18u: goto L_0882C0F8;
    case 19u: goto L_0882C100;
    case 20u: goto L_0882C108;
    case 21u: goto L_0882C11C;
    case 22u: goto L_0882C13C;
    case 23u: goto L_0882C144;
    case 24u: goto L_0882C14C;
    case 25u: goto L_0882C17C;
    case 26u: goto L_0882C184;
    case 27u: goto L_0882C198;
    case 28u: goto L_0882C1AC;
    case 29u: goto L_0882C1B4;
    case 30u: goto L_0882C1C4;
    case 31u: goto L_0882C1DC;
    case 32u: goto L_0882C1E4;
    case 33u: goto L_0882C1FC;
    case 34u: goto L_0882C204;
    case 35u: goto L_0882C21C;
    case 36u: goto L_0882C224;
    case 37u: goto L_0882C23C;
    case 38u: goto L_0882C244;
    case 39u: goto L_0882C25C;
    case 40u: goto L_0882C264;
    case 41u: goto L_0882C27C;
    case 42u: goto L_0882C284;
    case 43u: goto L_0882C29C;
    case 44u: goto L_0882C2A4;
    case 45u: goto L_0882C2BC;
    case 46u: goto L_0882C2C4;
    case 47u: goto L_0882C2CC;
    case 48u: goto L_0882C2E4;
    case 49u: goto L_0882C2EC;
    case 50u: goto L_0882C300;
    case 51u: goto L_0882C308;
    case 52u: goto L_0882C310;
    case 53u: goto L_0882C31C;
    case 54u: goto L_0882C33C;
    case 55u: goto L_0882C35C;
    case 56u: goto L_0882C364;
    case 57u: goto L_0882C36C;
    case 58u: goto L_0882C380;
    case 59u: goto L_0882C3A4;
    case 60u: goto L_0882C3B4;
    case 61u: goto L_0882C3BC;
    case 62u: goto L_0882C3C8;
    case 63u: goto L_0882C404;
    case 64u: goto L_0882C408;
    case 65u: goto L_0882C410;
    case 66u: goto L_0882C420;
    case 67u: goto L_0882C428;
    case 68u: goto L_0882C43C;
    case 69u: goto L_0882C444;
    case 70u: goto L_0882C448;
    case 71u: goto L_0882C454;
    case 72u: goto L_0882C460;
    case 73u: goto L_0882C46C;
    case 74u: goto L_0882C474;
    case 75u: goto L_0882C490;
    case 76u: goto L_0882C4A0;
    case 77u: goto L_0882C4C8;
    case 78u: goto L_0882C510;
    case 79u: goto L_0882C518;
    case 80u: goto L_0882C520;
    case 81u: goto L_0882C530;
    case 82u: goto L_0882C538;
    case 83u: goto L_0882C54C;
    case 84u: goto L_0882C554;
    case 85u: goto L_0882C558;
    case 86u: goto L_0882C564;
    case 87u: goto L_0882C570;
    case 88u: goto L_0882C5B8;
    case 89u: goto L_0882C5C4;
    case 90u: goto L_0882C5CC;
    case 91u: goto L_0882C5E8;
    case 92u: goto L_0882C5F8;
    case 93u: goto L_0882C628;
    case 94u: goto L_0882C664;
    case 95u: goto L_0882C668;
    case 96u: goto L_0882C670;
    case 97u: goto L_0882C680;
    case 98u: goto L_0882C688;
    case 99u: goto L_0882C69C;
    case 100u: goto L_0882C6A4;
    case 101u: goto L_0882C6A8;
    case 102u: goto L_0882C6B4;
    case 103u: goto L_0882C6C0;
    case 104u: goto L_0882C6CC;
    case 105u: goto L_0882C6D4;
    case 106u: goto L_0882C6F0;
    case 107u: goto L_0882C700;
    case 108u: goto L_0882C728;
    case 109u: goto L_0882C74C;
    case 110u: goto L_0882C76C;
    case 111u: goto L_0882C770;
    case 112u: goto L_0882C7A0;
    case 113u: goto L_0882C7B4;
    case 114u: goto L_0882C7C4;
    case 115u: goto L_0882C7D0;
    case 116u: goto L_0882C7E0;
    case 117u: goto L_0882C810;
    case 118u: goto L_0882C818;
    case 119u: goto L_0882C830;
    case 120u: goto L_0882C838;
    case 121u: goto L_0882C844;
    case 122u: goto L_0882C84C;
    case 123u: goto L_0882C854;
    case 124u: goto L_0882C870;
    case 125u: goto L_0882C878;
    case 126u: goto L_0882C880;
    case 127u: goto L_0882C89C;
    case 128u: goto L_0882C8A4;
    case 129u: goto L_0882C8A8;
    case 130u: goto L_0882C8BC;
    case 131u: goto L_0882C8DC;
    case 132u: goto L_0882C8E4;
    case 133u: goto L_0882C90C;
    case 134u: goto L_0882C91C;
    case 135u: goto L_0882C924;
    case 136u: goto L_0882C92C;
    case 137u: goto L_0882C934;
    case 138u: goto L_0882C938;
    case 139u: goto L_0882C96C;
    case 140u: goto L_0882C98C;
    case 141u: goto L_0882C9D0;
    case 142u: goto L_0882CAE8;
    case 143u: goto L_0882CAF0;
    case 144u: goto L_0882CB08;
    case 145u: goto L_0882CB18;
    case 146u: goto L_0882CB20;
    case 147u: goto L_0882CB2C;
    case 148u: goto L_0882CB38;
    case 149u: goto L_0882CB44;
    case 150u: goto L_0882CB50;
    case 151u: goto L_0882CB5C;
    case 152u: goto L_0882CB64;
    case 153u: goto L_0882CB6C;
    case 154u: goto L_0882CB7C;
    case 155u: goto L_0882CB8C;
    case 156u: goto L_0882CB9C;
    case 157u: goto L_0882CBAC;
    case 158u: goto L_0882CBB8;
    case 159u: goto L_0882CBCC;
    case 160u: goto L_0882CBD8;
    case 161u: goto L_0882CBE4;
    case 162u: goto L_0882CBF0;
    case 163u: goto L_0882CBFC;
    case 164u: goto L_0882CC08;
    case 165u: goto L_0882CC14;
    case 166u: goto L_0882CC20;
    case 167u: goto L_0882CC2C;
    case 168u: goto L_0882CC38;
    case 169u: goto L_0882CC44;
    case 170u: goto L_0882CC48;
    case 171u: goto L_0882CC80;
    case 172u: goto L_0882CCC4;
    case 173u: goto L_0882CCD0;
    case 174u: goto L_0882CCD8;
    case 175u: goto L_0882CCE0;
    case 176u: goto L_0882CCF0;
    case 177u: goto L_0882CCF8;
    case 178u: goto L_0882CD14;
    case 179u: goto L_0882CD1C;
    case 180u: goto L_0882CD58;
    case 181u: goto L_0882CD78;
    case 182u: goto L_0882CDD0;
    case 183u: goto L_0882CDE8;
    case 184u: goto L_0882CDFC;
    case 185u: goto L_0882CE0C;
    case 186u: goto L_0882CE1C;
    case 187u: goto L_0882CE24;
    case 188u: goto L_0882CE2C;
    case 189u: goto L_0882CE44;
    case 190u: goto L_0882CE58;
    case 191u: goto L_0882CE60;
    case 192u: goto L_0882CE74;
    case 193u: goto L_0882CEB4;
    case 194u: goto L_0882CEC4;
    case 195u: goto L_0882CED8;
    case 196u: goto L_0882CF3C;
    case 197u: goto L_0882CF70;
    case 198u: goto L_0882CF90;
    case 199u: goto L_0882CFA4;
    case 200u: goto L_0882CFBC;
    case 201u: goto L_0882CFC4;
    case 202u: goto L_0882D060;
    case 203u: goto L_0882D068;
    case 204u: goto L_0882D070;
    case 205u: goto L_0882D07C;
    case 206u: goto L_0882D094;
    case 207u: goto L_0882D0A8;
    case 208u: goto L_0882D0D0;
    case 209u: goto L_0882D0E8;
    case 210u: goto L_0882D104;
    case 211u: goto L_0882D10C;
    case 212u: goto L_0882D134;
    case 213u: goto L_0882D164;
    case 214u: goto L_0882D1C8;
    case 215u: goto L_0882D1D8;
    case 216u: goto L_0882D1E0;
    case 217u: goto L_0882D1FC;
    case 218u: goto L_0882D22C;
    case 219u: goto L_0882D238;
    case 220u: goto L_0882D248;
    case 221u: goto L_0882D254;
    case 222u: goto L_0882D26C;
    case 223u: goto L_0882D2A0;
    case 224u: goto L_0882D2AC;
    case 225u: goto L_0882D2CC;
    case 226u: goto L_0882D2E8;
    case 227u: goto L_0882D300;
    case 228u: goto L_0882D314;
    case 229u: goto L_0882D354;
    case 230u: goto L_0882D360;
    case 231u: goto L_0882D394;
    case 232u: goto L_0882D3C0;
    case 233u: goto L_0882D3D0;
    case 234u: goto L_0882D3D8;
    case 235u: goto L_0882D400;
    case 236u: goto L_0882D430;
    case 237u: goto L_0882D448;
    case 238u: goto L_0882D468;
    case 239u: goto L_0882D49C;
    case 240u: goto L_0882D4A8;
    case 241u: goto L_0882D4BC;
    case 242u: goto L_0882D4D4;
    case 243u: goto L_0882D508;
    case 244u: goto L_0882D55C;
    case 245u: goto L_0882D568;
    case 246u: goto L_0882D574;
    case 247u: goto L_0882D57C;
    case 248u: goto L_0882D594;
    case 249u: goto L_0882D5AC;
    case 250u: goto L_0882D5C0;
    case 251u: goto L_0882D5D0;
    case 252u: goto L_0882D5E0;
    case 253u: goto L_0882D5EC;
    case 254u: goto L_0882D600;
    case 255u: goto L_0882D610;
    case 256u: goto L_0882D618;
    case 257u: goto L_0882D628;
    case 258u: goto L_0882D634;
    case 259u: goto L_0882D648;
    case 260u: goto L_0882D654;
    case 261u: goto L_0882D660;
    case 262u: goto L_0882D668;
    case 263u: goto L_0882D674;
    case 264u: goto L_0882D688;
    case 265u: goto L_0882D698;
    case 266u: goto L_0882D6A0;
    case 267u: goto L_0882D6A4;
    case 268u: goto L_0882D6AC;
    case 269u: goto L_0882D6BC;
    case 270u: goto L_0882D6C8;
    case 271u: goto L_0882D6DC;
    case 272u: goto L_0882D6EC;
    case 273u: goto L_0882D6F4;
    case 274u: goto L_0882D6F8;
    case 275u: goto L_0882D708;
    case 276u: goto L_0882D710;
    case 277u: goto L_0882D718;
    case 278u: goto L_0882D724;
    case 279u: goto L_0882D734;
    case 280u: goto L_0882D73C;
    case 281u: goto L_0882D740;
    case 282u: goto L_0882D748;
    case 283u: goto L_0882D74C;
    case 284u: goto L_0882D754;
    case 285u: goto L_0882D75C;
    case 286u: goto L_0882D794;
    case 287u: goto L_0882D854;
    case 288u: goto L_0882D868;
    case 289u: goto L_0882D878;
    case 290u: goto L_0882D87C;
    case 291u: goto L_0882D884;
    case 292u: goto L_0882D890;
    case 293u: goto L_0882D8A0;
    case 294u: goto L_0882D8A8;
    case 295u: goto L_0882D8B0;
    case 296u: goto L_0882D8BC;
    case 297u: goto L_0882D8C4;
    case 298u: goto L_0882D8D4;
    case 299u: goto L_0882D8F4;
    case 300u: goto L_0882D8FC;
    case 301u: goto L_0882D904;
    case 302u: goto L_0882D920;
    case 303u: goto L_0882D924;
    case 304u: goto L_0882D92C;
    case 305u: goto L_0882D93C;
    case 306u: goto L_0882D944;
    case 307u: goto L_0882D968;
    case 308u: goto L_0882D98C;
    case 309u: goto L_0882D994;
    case 310u: goto L_0882D9A0;
    case 311u: goto L_0882D9A8;
    case 312u: goto L_0882D9B0;
    case 313u: goto L_0882D9B8;
    case 314u: goto L_0882D9C4;
    case 315u: goto L_0882D9CC;
    case 316u: goto L_0882D9D4;
    case 317u: goto L_0882D9DC;
    case 318u: goto L_0882D9E4;
    case 319u: goto L_0882D9F0;
    case 320u: goto L_0882D9F8;
    case 321u: goto L_0882DA00;
    case 322u: goto L_0882DA08;
    case 323u: goto L_0882DA10;
    case 324u: goto L_0882DA1C;
    case 325u: goto L_0882DA20;
    case 326u: goto L_0882DA28;
    case 327u: goto L_0882DA30;
    case 328u: goto L_0882DA4C;
    case 329u: goto L_0882DA64;
    case 330u: goto L_0882DA6C;
    case 331u: goto L_0882DA74;
    case 332u: goto L_0882DA7C;
    case 333u: goto L_0882DA84;
    case 334u: goto L_0882DA8C;
    case 335u: goto L_0882DA94;
    case 336u: goto L_0882DA9C;
    case 337u: goto L_0882DAA4;
    case 338u: goto L_0882DAAC;
    case 339u: goto L_0882DAB8;
    case 340u: goto L_0882DAC0;
    case 341u: goto L_0882DAD0;
    case 342u: goto L_0882DAF0;
    case 343u: goto L_0882DAFC;
    case 344u: goto L_0882DB04;
    case 345u: goto L_0882DB0C;
    case 346u: goto L_0882DB14;
    case 347u: goto L_0882DB18;
    case 348u: goto L_0882DB40;
    case 349u: goto L_0882DB44;
    case 350u: goto L_0882DB54;
    case 351u: goto L_0882DB80;
    case 352u: goto L_0882DBBC;
    case 353u: goto L_0882DBCC;
    case 354u: goto L_0882DBF8;
    case 355u: goto L_0882DC08;
    case 356u: goto L_0882DC20;
    case 357u: goto L_0882DC44;
    case 358u: goto L_0882DC4C;
    case 359u: goto L_0882DC6C;
    case 360u: goto L_0882DC74;
    case 361u: goto L_0882DC7C;
    case 362u: goto L_0882DC84;
    case 363u: goto L_0882DC94;
    case 364u: goto L_0882DCA0;
    case 365u: goto L_0882DCAC;
    case 366u: goto L_0882DCB4;
    case 367u: goto L_0882DCB8;
    case 368u: goto L_0882DCC8;
    case 369u: goto L_0882DCD8;
    case 370u: goto L_0882DCE8;
    case 371u: goto L_0882DD14;
    case 372u: goto L_0882DD20;
    case 373u: goto L_0882DD4C;
    case 374u: goto L_0882DD5C;
    case 375u: goto L_0882DD64;
    case 376u: goto L_0882DD6C;
    case 377u: goto L_0882DD74;
    case 378u: goto L_0882DD8C;
    case 379u: goto L_0882DDAC;
    case 380u: goto L_0882DDB8;
    case 381u: goto L_0882DDC4;
    case 382u: goto L_0882DDCC;
    case 383u: goto L_0882DDD4;
    case 384u: goto L_0882DDDC;
    case 385u: goto L_0882DDE8;
    case 386u: goto L_0882DDF4;
    case 387u: goto L_0882DDFC;
    case 388u: goto L_0882DE00;
    case 389u: goto L_0882DE0C;
    case 390u: goto L_0882DE14;
    case 391u: goto L_0882DE24;
    case 392u: goto L_0882DE30;
    case 393u: goto L_0882DE3C;
    case 394u: goto L_0882DE48;
    case 395u: goto L_0882DE54;
    case 396u: goto L_0882DE60;
    case 397u: goto L_0882DE6C;
    case 398u: goto L_0882DE7C;
    case 399u: goto L_0882DE8C;
    case 400u: goto L_0882DE98;
    case 401u: goto L_0882DEA4;
    case 402u: goto L_0882DEB0;
    case 403u: goto L_0882DEBC;
    case 404u: goto L_0882DEC8;
    case 405u: goto L_0882DED4;
    case 406u: goto L_0882DEDC;
    case 407u: goto L_0882DEF4;
    case 408u: goto L_0882DF1C;
    case 409u: goto L_0882DF24;
    case 410u: goto L_0882DF30;
    case 411u: goto L_0882DF40;
    case 412u: goto L_0882DF48;
    case 413u: goto L_0882DF50;
    case 414u: goto L_0882DF58;
    case 415u: goto L_0882DF5C;
    case 416u: goto L_0882DF68;
    case 417u: goto L_0882DF70;
    case 418u: goto L_0882DF78;
    case 419u: goto L_0882DF90;
    case 420u: goto L_0882DF9C;
    case 421u: goto L_0882DFA8;
    case 422u: goto L_0882DFB0;
    case 423u: goto L_0882DFB4;
    case 424u: goto L_0882DFD0;
    case 425u: goto L_0882DFEC;
    case 426u: goto L_0882DFF4;
    case 427u: goto L_0882E004;
    case 428u: goto L_0882E00C;
    case 429u: goto L_0882E014;
    case 430u: goto L_0882E01C;
    case 431u: goto L_0882E024;
    case 432u: goto L_0882E02C;
    case 433u: goto L_0882E040;
    case 434u: goto L_0882E044;
    case 435u: goto L_0882E04C;
    case 436u: goto L_0882E060;
    case 437u: goto L_0882E06C;
    case 438u: goto L_0882E080;
    case 439u: goto L_0882E090;
    case 440u: goto L_0882E09C;
    case 441u: goto L_0882E0AC;
    case 442u: goto L_0882E0C0;
    case 443u: goto L_0882E0E0;
    case 444u: goto L_0882E10C;
    case 445u: goto L_0882E118;
    case 446u: goto L_0882E144;
    case 447u: goto L_0882E170;
    case 448u: goto L_0882E17C;
    case 449u: goto L_0882E1A8;
    case 450u: goto L_0882E1C0;
    case 451u: goto L_0882E1D4;
    case 452u: goto L_0882E1E8;
    case 453u: goto L_0882E1F4;
    case 454u: goto L_0882E1FC;
    case 455u: goto L_0882E20C;
    case 456u: goto L_0882E218;
    case 457u: goto L_0882E21C;
    case 458u: goto L_0882E220;
    case 459u: goto L_0882E228;
    case 460u: goto L_0882E230;
    case 461u: goto L_0882E238;
    case 462u: goto L_0882E240;
    case 463u: goto L_0882E24C;
    case 464u: goto L_0882E254;
    case 465u: goto L_0882E25C;
    case 466u: goto L_0882E260;
    case 467u: goto L_0882E268;
    case 468u: goto L_0882E270;
    case 469u: goto L_0882E278;
    case 470u: goto L_0882E284;
    case 471u: goto L_0882E290;
    case 472u: goto L_0882E29C;
    case 473u: goto L_0882E2A8;
    case 474u: goto L_0882E2B0;
    case 475u: goto L_0882E2B8;
    case 476u: goto L_0882E2C0;
    case 477u: goto L_0882E2C8;
    case 478u: goto L_0882E2D0;
    case 479u: goto L_0882E2DC;
    case 480u: goto L_0882E2E8;
    case 481u: goto L_0882E2F0;
    case 482u: goto L_0882E2F8;
    case 483u: goto L_0882E304;
    case 484u: goto L_0882E310;
    case 485u: goto L_0882E318;
    case 486u: goto L_0882E320;
    case 487u: goto L_0882E328;
    case 488u: goto L_0882E330;
    case 489u: goto L_0882E338;
    case 490u: goto L_0882E340;
    case 491u: goto L_0882E34C;
    case 492u: goto L_0882E358;
    case 493u: goto L_0882E360;
    case 494u: goto L_0882E36C;
    case 495u: goto L_0882E370;
    case 496u: goto L_0882E378;
    case 497u: goto L_0882E380;
    case 498u: goto L_0882E388;
    case 499u: goto L_0882E390;
    case 500u: goto L_0882E398;
    case 501u: goto L_0882E3A0;
    case 502u: goto L_0882E3A4;
    case 503u: goto L_0882E3AC;
    case 504u: goto L_0882E3B4;
    case 505u: goto L_0882E3DC;
    case 506u: goto L_0882E3E8;
    case 507u: goto L_0882E410;
    case 508u: goto L_0882E420;
    case 509u: goto L_0882E434;
    case 510u: goto L_0882E43C;
    case 511u: goto L_0882E444;
    case 512u: goto L_0882E44C;
    case 513u: goto L_0882E458;
    case 514u: goto L_0882E460;
    case 515u: goto L_0882E470;
    case 516u: goto L_0882E484;
    case 517u: goto L_0882E48C;
    case 518u: goto L_0882E494;
    case 519u: goto L_0882E4B8;
    case 520u: goto L_0882E4C4;
    case 521u: goto L_0882E4EC;
    case 522u: goto L_0882E4FC;
    case 523u: goto L_0882E50C;
    case 524u: goto L_0882E518;
    case 525u: goto L_0882E52C;
    case 526u: goto L_0882E534;
    case 527u: goto L_0882E540;
    case 528u: goto L_0882E548;
    case 529u: goto L_0882E550;
    case 530u: goto L_0882E558;
    case 531u: goto L_0882E560;
    case 532u: goto L_0882E568;
    case 533u: goto L_0882E570;
    case 534u: goto L_0882E578;
    case 535u: goto L_0882E5A0;
    case 536u: goto L_0882E5AC;
    case 537u: goto L_0882E5B4;
    case 538u: goto L_0882E5C4;
    case 539u: goto L_0882E5D4;
    case 540u: goto L_0882E5D8;
    case 541u: goto L_0882E5FC;
    case 542u: goto L_0882E608;
    case 543u: goto L_0882E610;
    case 544u: goto L_0882E620;
    case 545u: goto L_0882E630;
    case 546u: goto L_0882E638;
    case 547u: goto L_0882E658;
    case 548u: goto L_0882E660;
    case 549u: goto L_0882E670;
    case 550u: goto L_0882E6B4;
    case 551u: goto L_0882E6C0;
    case 552u: goto L_0882E6EC;
    case 553u: goto L_0882E704;
    case 554u: goto L_0882E71C;
    case 555u: goto L_0882E724;
    case 556u: goto L_0882E72C;
    case 557u: goto L_0882E734;
    case 558u: goto L_0882E73C;
    case 559u: goto L_0882E744;
    case 560u: goto L_0882E750;
    case 561u: goto L_0882E758;
    case 562u: goto L_0882E760;
    case 563u: goto L_0882E768;
    case 564u: goto L_0882E770;
    case 565u: goto L_0882E778;
    case 566u: goto L_0882E780;
    case 567u: goto L_0882E788;
    case 568u: goto L_0882E798;
    case 569u: goto L_0882E7A0;
    case 570u: goto L_0882E7A8;
    case 571u: goto L_0882E7B0;
    case 572u: goto L_0882E7B8;
    case 573u: goto L_0882E7C0;
    case 574u: goto L_0882E7C8;
    case 575u: goto L_0882E7D4;
    case 576u: goto L_0882E7DC;
    case 577u: goto L_0882E7E4;
    case 578u: goto L_0882E7EC;
    case 579u: goto L_0882E7F4;
    case 580u: goto L_0882E7FC;
    case 581u: goto L_0882E804;
    case 582u: goto L_0882E814;
    case 583u: goto L_0882E81C;
    case 584u: goto L_0882E824;
    case 585u: goto L_0882E82C;
    case 586u: goto L_0882E83C;
    case 587u: goto L_0882E844;
    case 588u: goto L_0882E84C;
    case 589u: goto L_0882E854;
    case 590u: goto L_0882E864;
    case 591u: goto L_0882E870;
    case 592u: goto L_0882E880;
    case 593u: goto L_0882E8AC;
    case 594u: goto L_0882E8B4;
    case 595u: goto L_0882E8E0;
    case 596u: goto L_0882E8F4;
    case 597u: goto L_0882E8FC;
    case 598u: goto L_0882E904;
    case 599u: goto L_0882E92C;
    case 600u: goto L_0882E930;
    case 601u: goto L_0882E950;
    case 602u: goto L_0882E95C;
    case 603u: goto L_0882E964;
    case 604u: goto L_0882E978;
    case 605u: goto L_0882E980;
    case 606u: goto L_0882E98C;
    case 607u: goto L_0882E994;
    case 608u: goto L_0882E99C;
    case 609u: goto L_0882E9A4;
    case 610u: goto L_0882E9AC;
    case 611u: goto L_0882E9B4;
    case 612u: goto L_0882E9BC;
    case 613u: goto L_0882E9C4;
    case 614u: goto L_0882E9CC;
    case 615u: goto L_0882E9D8;
    case 616u: goto L_0882E9E0;
    case 617u: goto L_0882E9F8;
    case 618u: goto L_0882EA04;
    case 619u: goto L_0882EA18;
    case 620u: goto L_0882EA20;
    case 621u: goto L_0882EA38;
    case 622u: goto L_0882EA44;
    case 623u: goto L_0882EA54;
    case 624u: goto L_0882EA74;
    case 625u: goto L_0882EA80;
    case 626u: goto L_0882EA88;
    case 627u: goto L_0882EA90;
    case 628u: goto L_0882EA98;
    case 629u: goto L_0882EAA0;
    case 630u: goto L_0882EAA8;
    case 631u: goto L_0882EAB0;
    case 632u: goto L_0882EAB8;
    case 633u: goto L_0882EAC4;
    case 634u: goto L_0882EACC;
    case 635u: goto L_0882EAD4;
    case 636u: goto L_0882EAE0;
    case 637u: goto L_0882EAE8;
    case 638u: goto L_0882EAFC;
    case 639u: goto L_0882EB08;
    case 640u: goto L_0882EB10;
    case 641u: goto L_0882EB20;
    case 642u: goto L_0882EB2C;
    case 643u: goto L_0882EB38;
    case 644u: goto L_0882EB40;
    case 645u: goto L_0882EB44;
    case 646u: goto L_0882EB4C;
    case 647u: goto L_0882EB54;
    case 648u: goto L_0882EB60;
    case 649u: goto L_0882EB78;
    case 650u: goto L_0882EB80;
    case 651u: goto L_0882EBD8;
    case 652u: goto L_0882EBE4;
    case 653u: goto L_0882EBF0;
    case 654u: goto L_0882EBF8;
    case 655u: goto L_0882EC04;
    case 656u: goto L_0882EC0C;
    case 657u: goto L_0882EC20;
    case 658u: goto L_0882EC30;
    case 659u: goto L_0882EC38;
    case 660u: goto L_0882EC40;
    case 661u: goto L_0882EC48;
    case 662u: goto L_0882EC50;
    case 663u: goto L_0882EC64;
    case 664u: goto L_0882EC74;
    case 665u: goto L_0882EC7C;
    case 666u: goto L_0882EC84;
    case 667u: goto L_0882EC9C;
    case 668u: goto L_0882ECC4;
    case 669u: goto L_0882ED1C;
    case 670u: goto L_0882ED28;
    case 671u: goto L_0882ED34;
    case 672u: goto L_0882ED3C;
    case 673u: goto L_0882ED48;
    case 674u: goto L_0882ED50;
    case 675u: goto L_0882ED64;
    case 676u: goto L_0882ED74;
    case 677u: goto L_0882ED7C;
    case 678u: goto L_0882ED84;
    case 679u: goto L_0882ED8C;
    case 680u: goto L_0882ED94;
    case 681u: goto L_0882EDA8;
    case 682u: goto L_0882EDB8;
    case 683u: goto L_0882EDC0;
    case 684u: goto L_0882EDC8;
    case 685u: goto L_0882EDE0;
    case 686u: goto L_0882EE08;
    case 687u: goto L_0882EE10;
    case 688u: goto L_0882EE44;
    case 689u: goto L_0882EE50;
    case 690u: goto L_0882EE5C;
    case 691u: goto L_0882EE60;
    case 692u: goto L_0882EE70;
    case 693u: goto L_0882EE78;
    case 694u: goto L_0882EE84;
    case 695u: goto L_0882EE8C;
    case 696u: goto L_0882EEB8;
    case 697u: goto L_0882EEC8;
    case 698u: goto L_0882EED4;
    case 699u: goto L_0882EEDC;
    case 700u: goto L_0882EEF0;
    case 701u: goto L_0882EF00;
    case 702u: goto L_0882EF0C;
    case 703u: goto L_0882EF14;
    case 704u: goto L_0882EF20;
    case 705u: goto L_0882EF28;
    case 706u: goto L_0882EF3C;
    case 707u: goto L_0882EF44;
    case 708u: goto L_0882EF58;
    case 709u: goto L_0882EF68;
    case 710u: goto L_0882EF6C;
    case 711u: goto L_0882EF78;
    case 712u: goto L_0882EF80;
    case 713u: goto L_0882EF94;
    case 714u: goto L_0882EFBC;
    case 715u: goto L_0882EFF0;
    case 716u: goto L_0882EFFC;
    case 717u: goto L_0882F008;
    case 718u: goto L_0882F00C;
    case 719u: goto L_0882F01C;
    case 720u: goto L_0882F024;
    case 721u: goto L_0882F030;
    case 722u: goto L_0882F038;
    case 723u: goto L_0882F064;
    case 724u: goto L_0882F074;
    case 725u: goto L_0882F080;
    case 726u: goto L_0882F088;
    case 727u: goto L_0882F09C;
    case 728u: goto L_0882F0AC;
    case 729u: goto L_0882F0B8;
    case 730u: goto L_0882F0C0;
    case 731u: goto L_0882F0CC;
    case 732u: goto L_0882F0D4;
    case 733u: goto L_0882F0E8;
    case 734u: goto L_0882F0F0;
    case 735u: goto L_0882F104;
    case 736u: goto L_0882F114;
    case 737u: goto L_0882F118;
    case 738u: goto L_0882F124;
    case 739u: goto L_0882F12C;
    case 740u: goto L_0882F140;
    case 741u: goto L_0882F168;
    case 742u: goto L_0882F180;
    case 743u: goto L_0882F188;
    case 744u: goto L_0882F190;
    case 745u: goto L_0882F19C;
    case 746u: goto L_0882F1A8;
    case 747u: goto L_0882F1B4;
    case 748u: goto L_0882F1BC;
    case 749u: goto L_0882F1CC;
    case 750u: goto L_0882F1D4;
    case 751u: goto L_0882F1E0;
    case 752u: goto L_0882F1E8;
    case 753u: goto L_0882F1F0;
    case 754u: goto L_0882F1FC;
    case 755u: goto L_0882F200;
    case 756u: goto L_0882F210;
    case 757u: goto L_0882F24C;
    case 758u: goto L_0882F260;
    case 759u: goto L_0882F268;
    case 760u: goto L_0882F274;
    case 761u: goto L_0882F27C;
    case 762u: goto L_0882F288;
    case 763u: goto L_0882F28C;
    case 764u: goto L_0882F294;
    case 765u: goto L_0882F2A0;
    case 766u: goto L_0882F2A4;
    case 767u: goto L_0882F2AC;
    case 768u: goto L_0882F2C0;
    case 769u: goto L_0882F2C8;
    case 770u: goto L_0882F2D0;
    case 771u: goto L_0882F2E0;
    case 772u: goto L_0882F2E8;
    case 773u: goto L_0882F2F0;
    case 774u: goto L_0882F300;
    case 775u: goto L_0882F308;
    case 776u: goto L_0882F30C;
    case 777u: goto L_0882F314;
    case 778u: goto L_0882F31C;
    case 779u: goto L_0882F340;
    case 780u: goto L_0882F348;
    case 781u: goto L_0882F350;
    case 782u: goto L_0882F36C;
    case 783u: goto L_0882F374;
    case 784u: goto L_0882F37C;
    case 785u: goto L_0882F394;
    case 786u: goto L_0882F39C;
    case 787u: goto L_0882F4F4;
    case 788u: goto L_0882F4FC;
    case 789u: goto L_0882F504;
    case 790u: goto L_0882F50C;
    case 791u: goto L_0882F514;
    case 792u: goto L_0882F530;
    case 793u: goto L_0882F538;
    case 794u: goto L_0882F540;
    case 795u: goto L_0882F54C;
    case 796u: goto L_0882F554;
    case 797u: goto L_0882F558;
    case 798u: goto L_0882F560;
    case 799u: goto L_0882F56C;
    case 800u: goto L_0882F578;
    case 801u: goto L_0882F580;
    case 802u: goto L_0882F584;
    case 803u: goto L_0882F58C;
    case 804u: goto L_0882F598;
    case 805u: goto L_0882F5A4;
    case 806u: goto L_0882F5AC;
    case 807u: goto L_0882F5B0;
    case 808u: goto L_0882F5B8;
    case 809u: goto L_0882F5CC;
    case 810u: goto L_0882F5D8;
    case 811u: goto L_0882F5E0;
    case 812u: goto L_0882F5F4;
    case 813u: goto L_0882F600;
    case 814u: goto L_0882F608;
    case 815u: goto L_0882F620;
    case 816u: goto L_0882F62C;
    case 817u: goto L_0882F634;
    case 818u: goto L_0882F640;
    case 819u: goto L_0882F648;
    case 820u: goto L_0882F654;
    case 821u: goto L_0882F65C;
    case 822u: goto L_0882F668;
    case 823u: goto L_0882F67C;
    case 824u: goto L_0882F688;
    case 825u: goto L_0882F694;
    case 826u: goto L_0882F69C;
    case 827u: goto L_0882F6A4;
    case 828u: goto L_0882F6AC;
    case 829u: goto L_0882F6B8;
    case 830u: goto L_0882F6C0;
    case 831u: goto L_0882F6C4;
    case 832u: goto L_0882F6E8;
    case 833u: goto L_0882F710;
    case 834u: goto L_0882F720;
    case 835u: goto L_0882F728;
    case 836u: goto L_0882F730;
    case 837u: goto L_0882F73C;
    case 838u: goto L_0882F748;
    case 839u: goto L_0882F754;
    case 840u: goto L_0882F77C;
    case 841u: goto L_0882F788;
    case 842u: goto L_0882F794;
    case 843u: goto L_0882F79C;
    case 844u: goto L_0882F7A4;
    case 845u: goto L_0882F7AC;
    case 846u: goto L_0882F7C0;
    case 847u: goto L_0882F7D0;
    case 848u: goto L_0882F7D8;
    case 849u: goto L_0882F7E0;
    case 850u: goto L_0882F7E8;
    case 851u: goto L_0882F7F0;
    case 852u: goto L_0882F804;
    case 853u: goto L_0882F814;
    case 854u: goto L_0882F81C;
    case 855u: goto L_0882F824;
    case 856u: goto L_0882F830;
    case 857u: goto L_0882F844;
    case 858u: goto L_0882F858;
    case 859u: goto L_0882F86C;
    case 860u: goto L_0882F878;
    case 861u: goto L_0882F880;
    case 862u: goto L_0882F884;
    case 863u: goto L_0882F88C;
    case 864u: goto L_0882F894;
    case 865u: goto L_0882F89C;
    case 866u: goto L_0882F8AC;
    case 867u: goto L_0882F8B4;
    case 868u: goto L_0882F8C0;
    case 869u: goto L_0882F8CC;
    case 870u: goto L_0882F8F4;
    case 871u: goto L_0882F900;
    case 872u: goto L_0882F90C;
    case 873u: goto L_0882F914;
    case 874u: goto L_0882F91C;
    case 875u: goto L_0882F924;
    case 876u: goto L_0882F938;
    case 877u: goto L_0882F948;
    case 878u: goto L_0882F950;
    case 879u: goto L_0882F958;
    case 880u: goto L_0882F960;
    case 881u: goto L_0882F968;
    case 882u: goto L_0882F97C;
    case 883u: goto L_0882F98C;
    case 884u: goto L_0882F994;
    case 885u: goto L_0882F99C;
    case 886u: goto L_0882F9A8;
    case 887u: goto L_0882F9BC;
    case 888u: goto L_0882F9D0;
    case 889u: goto L_0882F9E4;
    case 890u: goto L_0882F9F0;
    case 891u: goto L_0882F9F8;
    case 892u: goto L_0882F9FC;
    case 893u: goto L_0882FA04;
    case 894u: goto L_0882FA0C;
    case 895u: goto L_0882FA14;
    case 896u: goto L_0882FA24;
    case 897u: goto L_0882FA2C;
    case 898u: goto L_0882FA38;
    case 899u: goto L_0882FA44;
    case 900u: goto L_0882FA6C;
    case 901u: goto L_0882FA78;
    case 902u: goto L_0882FA84;
    case 903u: goto L_0882FA8C;
    case 904u: goto L_0882FA94;
    case 905u: goto L_0882FA9C;
    case 906u: goto L_0882FAB0;
    case 907u: goto L_0882FAC0;
    case 908u: goto L_0882FAC8;
    case 909u: goto L_0882FAD0;
    case 910u: goto L_0882FAD8;
    case 911u: goto L_0882FAE0;
    case 912u: goto L_0882FAF4;
    case 913u: goto L_0882FB04;
    case 914u: goto L_0882FB0C;
    case 915u: goto L_0882FB14;
    case 916u: goto L_0882FB20;
    case 917u: goto L_0882FB34;
    case 918u: goto L_0882FB48;
    case 919u: goto L_0882FB5C;
    case 920u: goto L_0882FB68;
    case 921u: goto L_0882FB70;
    case 922u: goto L_0882FB74;
    case 923u: goto L_0882FB7C;
    case 924u: goto L_0882FB84;
    case 925u: goto L_0882FB94;
    case 926u: goto L_0882FBA8;
    case 927u: goto L_0882FBBC;
    case 928u: goto L_0882FBC8;
    case 929u: goto L_0882FBD0;
    case 930u: goto L_0882FBD4;
    case 931u: goto L_0882FBDC;
    case 932u: goto L_0882FBE4;
    case 933u: goto L_0882FBEC;
    case 934u: goto L_0882FC14;
    case 935u: goto L_0882FC30;
    case 936u: goto L_0882FC38;
    case 937u: goto L_0882FC44;
    case 938u: goto L_0882FC4C;
    case 939u: goto L_0882FC54;
    case 940u: goto L_0882FC7C;
    case 941u: goto L_0882FC84;
    case 942u: goto L_0882FCA0;
    case 943u: goto L_0882FCE0;
    case 944u: goto L_0882FCEC;
    case 945u: goto L_0882FD04;
    case 946u: goto L_0882FD10;
    case 947u: goto L_0882FD1C;
    case 948u: goto L_0882FD24;
    case 949u: goto L_0882FD30;
    case 950u: goto L_0882FD58;
    case 951u: goto L_0882FD64;
    case 952u: goto L_0882FD70;
    case 953u: goto L_0882FD78;
    case 954u: goto L_0882FD84;
    case 955u: goto L_0882FD8C;
    case 956u: goto L_0882FDA0;
    case 957u: goto L_0882FDB0;
    case 958u: goto L_0882FDB8;
    case 959u: goto L_0882FDC0;
    case 960u: goto L_0882FDC8;
    case 961u: goto L_0882FDE4;
    case 962u: goto L_0882FE00;
    case 963u: goto L_0882FE10;
    case 964u: goto L_0882FE1C;
    case 965u: goto L_0882FE24;
    case 966u: goto L_0882FE28;
    case 967u: goto L_0882FE30;
    case 968u: goto L_0882FE38;
    case 969u: goto L_0882FE50;
    case 970u: goto L_0882FE60;
    case 971u: goto L_0882FE68;
    case 972u: goto L_0882FE70;
    case 973u: goto L_0882FE7C;
    case 974u: goto L_0882FE8C;
    case 975u: goto L_0882FEA0;
    case 976u: goto L_0882FEB4;
    case 977u: goto L_0882FEC0;
    case 978u: goto L_0882FEC8;
    case 979u: goto L_0882FECC;
    case 980u: goto L_0882FED4;
    case 981u: goto L_0882FEDC;
    case 982u: goto L_0882FEEC;
    case 983u: goto L_0882FF00;
    case 984u: goto L_0882FF14;
    case 985u: goto L_0882FF20;
    case 986u: goto L_0882FF28;
    case 987u: goto L_0882FF2C;
    case 988u: goto L_0882FF34;
    case 989u: goto L_0882FF3C;
    case 990u: goto L_0882FF48;
    case 991u: goto L_0882FF50;
    case 992u: goto L_0882FF54;
    case 993u: goto L_0882FF60;
    case 994u: goto L_0882FF6C;
    case 995u: goto L_0882FF84;
    case 996u: goto L_0882FFA0;
    case 997u: goto L_0882FFB4;
    case 998u: goto L_0882FFC0;
    case 999u: goto L_0882FFC8;
    case 1000u: goto L_0882FFCC;
    case 1001u: goto L_0882FFD4;
    case 1002u: goto L_0882FFDC;
    case 1003u: goto L_0882FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x0882C000u;
        if (local_delta_v813 >= 16368u || (local_delta_v813 & 3u) != 0u) {
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
L_0882C000:
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882C03C;
      }
      goto L_0882C014;
    }
L_0882C014:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (17174u << 16u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882C05C;
      }
      goto L_0882C034;
    }
L_0882C034:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C054;
      }
      goto L_0882C03C;
    }
L_0882C03C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C044;
    }
L_0882C044:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C04C;
    }
L_0882C04C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C054;
    }
L_0882C054:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C05C;
    }
L_0882C05C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(473)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C06C;
    }
L_0882C06C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0882C098;
      }
      goto L_0882C078;
    }
L_0882C078:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0882C0D0;
      }
      goto L_0882C080;
    }
L_0882C080:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882C0D8;
      }
      goto L_0882C088;
    }
L_0882C088:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_0882C108;
      }
      goto L_0882C090;
    }
L_0882C090:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C098;
    }
L_0882C098:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (512u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0882C0C8u);
    aot_gpr_6 = (0u | 0u);
    goto L_0882C198;
L_0882C0C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C0D0;
    }
L_0882C0D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C0D8;
    }
L_0882C0D8:
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0882C0F8u);
    aot_gpr_6 = (0u | 1u);
    goto L_0882C198;
L_0882C0F8:
    aot_gpr_31 = (0x0882C100u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882C8BC;
L_0882C100:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C108;
    }
L_0882C108:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (512u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882C14C;
      }
      goto L_0882C11C;
    }
L_0882C11C:
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0882C13Cu);
    aot_gpr_6 = (0u | 1u);
    goto L_0882C198;
L_0882C13C:
    aot_gpr_31 = (0x0882C144u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882C8BC;
L_0882C144:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C14C;
    }
L_0882C14C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (512u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0882C17Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_0882C198;
L_0882C17C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C184;
    }
L_0882C184:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882C198:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    if (aot_gpr_6 == 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(480)));
        goto L_0882C1B4;
    }
    goto L_0882C1AC;
L_0882C1AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(481)));
      if (branch_taken) {
          goto L_0882C1B4;
      }
      goto L_0882C1B4;
    }
L_0882C1B4:
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (aot_gpr_6 < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_0882C308;
      }
      goto L_0882C1C4;
    }
L_0882C1C4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18072)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882C1DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C310;
      }
      goto L_0882C1E4;
    }
L_0882C1E4:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0882C1FCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0100.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 33u, 0x0882C1FCu, 0x08997988u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0100_entry(rt, ctx, 975u, aot_mem);
#else
        recomp_unit_0100_entry(rt, ctx, 975u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 975u, 0x08997988u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C1FCu) goto L_0882C1FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C1FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C204;
    }
L_0882C204:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0882C21Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0100.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 35u, 0x0882C21Cu, 0x0899773Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0100_entry(rt, ctx, 961u, aot_mem);
#else
        recomp_unit_0100_entry(rt, ctx, 961u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 961u, 0x0899773Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C21Cu) goto L_0882C21C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C21C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C224;
    }
L_0882C224:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0882C23Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0100.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 37u, 0x0882C23Cu, 0x08997BD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0100_entry(rt, ctx, 989u, aot_mem);
#else
        recomp_unit_0100_entry(rt, ctx, 989u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 989u, 0x08997BD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C23Cu) goto L_0882C23C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C23C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C244;
    }
L_0882C244:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0882C25Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0100.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 39u, 0x0882C25Cu, 0x08997C24u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0100_entry(rt, ctx, 992u, aot_mem);
#else
        recomp_unit_0100_entry(rt, ctx, 992u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 992u, 0x08997C24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C25Cu) goto L_0882C25C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C25C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C264;
    }
L_0882C264:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0882C27Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0100.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 41u, 0x0882C27Cu, 0x08997EE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0100_entry(rt, ctx, 1009u, aot_mem);
#else
        recomp_unit_0100_entry(rt, ctx, 1009u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 1009u, 0x08997EE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C27Cu) goto L_0882C27C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C27C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C284;
    }
L_0882C284:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0882C29Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0101.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 43u, 0x0882C29Cu, 0x08998118u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0101_entry(rt, ctx, 11u, aot_mem);
#else
        recomp_unit_0101_entry(rt, ctx, 11u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 11u, 0x08998118u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C29Cu) goto L_0882C29C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C29C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C2A4;
    }
L_0882C2A4:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0882C2BCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0101.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 45u, 0x0882C2BCu, 0x089983B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0101_entry(rt, ctx, 23u, aot_mem);
#else
        recomp_unit_0101_entry(rt, ctx, 23u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 23u, 0x089983B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C2BCu) goto L_0882C2BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C2BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C2C4;
    }
L_0882C2C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C2CC;
    }
L_0882C2CC:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0882C2E4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0101.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 48u, 0x0882C2E4u, 0x08998650u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0101_entry(rt, ctx, 35u, aot_mem);
#else
        recomp_unit_0101_entry(rt, ctx, 35u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 35u, 0x08998650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C2E4u) goto L_0882C2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C2E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C2EC;
    }
L_0882C2EC:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    aot_gpr_31 = (0x0882C300u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0101.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 50u, 0x0882C300u, 0x089988BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0101_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0101_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 47u, 0x089988BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C300u) goto L_0882C300;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C300:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C308;
    }
L_0882C308:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C310;
    }
L_0882C310:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882C31C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0882C33Cu);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 54u, 0x0882C33Cu, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C33Cu) goto L_0882C33C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C33C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_31 = (0x0882C35Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 55u, 0x0882C35Cu, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C35Cu) goto L_0882C35C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C35C:
    aot_gpr_31 = (0x0882C364u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 56u, 0x0882C364u, 0x08AD065Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 66u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 66u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C364u) goto L_0882C364;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C364:
    aot_gpr_31 = (0x0882C36Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 57u, 0x0882C36Cu, 0x08891A2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 224u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 224u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C36Cu) goto L_0882C36C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C36C:
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
L_0882C380:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882C3B4;
      }
      goto L_0882C3A4;
    }
L_0882C3A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_0882C3B4;
L_0882C3B4:
    aot_gpr_31 = (0x0882C3BCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0054.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 61u, 0x0882C3BCu, 0x088DF74Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0054_entry(rt, ctx, 458u, aot_mem);
#else
        recomp_unit_0054_entry(rt, ctx, 458u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 458u, 0x088DF74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C3BCu) goto L_0882C3BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C3BC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882C3C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (0u | 3u);
      if (branch_taken) {
          goto L_0882C4A0;
      }
      goto L_0882C404;
    }
L_0882C404:
    ctx.gpr[17] = (0u | 0u);
    goto L_0882C408;
L_0882C408:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
      if (branch_taken) {
          goto L_0882C420;
      }
      goto L_0882C410;
    }
L_0882C410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_0882C428;
    }
    goto L_0882C420;
L_0882C420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C448;
      }
      goto L_0882C428;
    }
L_0882C428:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_0882C444;
    }
    goto L_0882C43C;
L_0882C43C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C448;
      }
      goto L_0882C444;
    }
L_0882C444:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[17]);
    goto L_0882C448;
L_0882C448:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_0882C490;
      }
      goto L_0882C454;
    }
L_0882C454:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_16;
      if (branch_taken) {
          goto L_0882C490;
      }
      goto L_0882C460;
    }
L_0882C460:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0882C46Cu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 73u, 0x0882C46Cu, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C46Cu) goto L_0882C46C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C46C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0882C490;
      }
      goto L_0882C474;
    }
L_0882C474:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0882C490u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C490u) goto L_0882C490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882C490:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_0882C408;
      }
      goto L_0882C4A0;
    }
L_0882C4A0:
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
L_0882C4C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_0882C5F8;
      }
      goto L_0882C510;
    }
L_0882C510:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    ctx.gpr[18] = (0u | 0u);
    goto L_0882C518;
L_0882C518:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
      if (branch_taken) {
          goto L_0882C530;
      }
      goto L_0882C520;
    }
L_0882C520:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_0882C538;
    }
    goto L_0882C530;
L_0882C530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C558;
      }
      goto L_0882C538;
    }
L_0882C538:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0882C554;
    }
    goto L_0882C54C;
L_0882C54C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C558;
      }
      goto L_0882C554;
    }
L_0882C554:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    goto L_0882C558;
L_0882C558:
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_0882C5E8;
      }
      goto L_0882C564;
    }
L_0882C564:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0882C5E8;
      }
      goto L_0882C570;
    }
L_0882C570:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0882C5E8;
      }
      goto L_0882C5B8;
    }
L_0882C5B8:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0882C5C4u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 89u, 0x0882C5C4u, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C5C4u) goto L_0882C5C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C5C4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0882C5E8;
      }
      goto L_0882C5CC;
    }
L_0882C5CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0882C5E8u);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C5E8u) goto L_0882C5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882C5E8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_0882C518;
      }
      goto L_0882C5F8;
    }
L_0882C5F8:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882C628:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (0u | 2u);
      if (branch_taken) {
          goto L_0882C700;
      }
      goto L_0882C664;
    }
L_0882C664:
    ctx.gpr[17] = (0u | 0u);
    goto L_0882C668;
L_0882C668:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
      if (branch_taken) {
          goto L_0882C680;
      }
      goto L_0882C670;
    }
L_0882C670:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_0882C688;
    }
    goto L_0882C680;
L_0882C680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C6A8;
      }
      goto L_0882C688;
    }
L_0882C688:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_0882C6A4;
    }
    goto L_0882C69C;
L_0882C69C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C6A8;
      }
      goto L_0882C6A4;
    }
L_0882C6A4:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[17]);
    goto L_0882C6A8;
L_0882C6A8:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_0882C6F0;
      }
      goto L_0882C6B4;
    }
L_0882C6B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_16;
      if (branch_taken) {
          goto L_0882C6F0;
      }
      goto L_0882C6C0;
    }
L_0882C6C0:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0882C6CCu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 104u, 0x0882C6CCu, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C6CCu) goto L_0882C6CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C6CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0882C6F0;
      }
      goto L_0882C6D4;
    }
L_0882C6D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0882C6F0u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C6F0u) goto L_0882C6F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882C6F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_0882C668;
      }
      goto L_0882C700;
    }
L_0882C700:
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
L_0882C728:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(478))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_0882C8A4;
      }
      goto L_0882C74C;
    }
L_0882C74C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (17150u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0882C770;
      }
      goto L_0882C76C;
    }
L_0882C76C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0882C770;
L_0882C770:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(478))))));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (aot_gpr_6 << 24u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 24u));
    aot_gpr_6 = (aot_gpr_6 << 24u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 24u));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(478), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(478))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
      if (branch_taken) {
          goto L_0882C878;
      }
      goto L_0882C7A0;
    }
L_0882C7A0:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(473)));
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_5 = (512u << 16u);
      if (branch_taken) {
          goto L_0882C7C4;
      }
      goto L_0882C7B4;
    }
L_0882C7B4:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(473)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_0882C7D0;
      }
      goto L_0882C7C4;
    }
L_0882C7C4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_6);
    goto L_0882C7D0;
L_0882C7D0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0882C818;
      }
      goto L_0882C7E0;
    }
L_0882C7E0:
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(478), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_5);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0882C810u);
    aot_gpr_6 = (0u | 0u);
    goto L_0882C198;
L_0882C810:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C89C;
      }
      goto L_0882C818;
    }
L_0882C818:
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882C830u);
    aot_gpr_6 = (0u | 1u);
    goto L_0882C198;
L_0882C830:
    aot_gpr_31 = (0x0882C838u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882C8BC;
L_0882C838:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882C844u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 121u, 0x0882C844u, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C844u) goto L_0882C844;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C844:
    aot_gpr_31 = (0x0882C84Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 122u, 0x0882C84Cu, 0x0889358Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 537u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 537u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 537u, 0x0889358Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C84Cu) goto L_0882C84C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C84C:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0882C870;
      }
      goto L_0882C854;
    }
L_0882C854:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0882C870u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C870u) goto L_0882C870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882C870:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882C89C;
      }
      goto L_0882C878;
    }
L_0882C878:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882C89C;
      }
      goto L_0882C880;
    }
L_0882C880:
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882C89Cu);
    aot_gpr_6 = (0u | 0u);
    goto L_0882C198;
L_0882C89C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882C8A8;
      }
      goto L_0882C8A4;
    }
L_0882C8A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0882C8A8;
L_0882C8A8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882C8BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(452)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882C8E4;
      }
      goto L_0882C8DC;
    }
L_0882C8DC:
    aot_gpr_31 = (0x0882C8E4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0114.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 132u, 0x0882C8E4u, 0x089CF934u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0114_entry(rt, ctx, 649u, aot_mem);
#else
        recomp_unit_0114_entry(rt, ctx, 649u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C8E4u) goto L_0882C8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C8E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (65528u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_5 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882C91C;
      }
      goto L_0882C90C;
    }
L_0882C90C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0882C924;
      }
      goto L_0882C91C;
    }
L_0882C91C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0882C924;
L_0882C924:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
        goto L_0882C938;
    }
    goto L_0882C92C;
L_0882C92C:
    aot_gpr_31 = (0x0882C934u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 137u, 0x0882C934u, 0x08A660DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 475u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 475u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C934u) goto L_0882C934;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C934:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    goto L_0882C938;
L_0882C938:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (65532u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 | 2048u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x0882C96Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 139u, 0x0882C96Cu, 0x08A6669Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 537u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 537u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C96Cu) goto L_0882C96C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C96C:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(112), aot_run_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882C98C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-15));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(480), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(481), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    aot_gpr_31 = (0x0882C9D0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0119.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 141u, 0x0882C9D0u, 0x089E224Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0119_entry(rt, ctx, 435u, aot_mem);
#else
        recomp_unit_0119_entry(rt, ctx, 435u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0119_entry, 119u, 435u, 0x089E224Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882C9D0u) goto L_0882C9D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882C9D0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(482))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_6 = (aot_gpr_6 | 2048u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(482))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(435), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(434), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(433), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(432), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(439), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(438), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(437), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(436), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(483))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(444), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(448), 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x0882CAE8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 142u, 0x0882CAE8u, 0x08891DD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 287u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 287u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CAE8u) goto L_0882CAE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CAE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_0882CB08;
      }
      goto L_0882CAF0;
    }
L_0882CAF0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(483))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(440), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(194)));
      if (branch_taken) {
          goto L_0882CB18;
      }
      goto L_0882CB08;
    }
L_0882CB08:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(440), 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(483))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(194)));
    goto L_0882CB18;
L_0882CB18:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CB5C;
      }
      goto L_0882CB20;
    }
L_0882CB20:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CB5C;
      }
      goto L_0882CB2C;
    }
L_0882CB2C:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(198)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CB5C;
      }
      goto L_0882CB38;
    }
L_0882CB38:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CB5C;
      }
      goto L_0882CB44;
    }
L_0882CB44:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(202)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CB5C;
      }
      goto L_0882CB50;
    }
L_0882CB50:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_0882CB64;
      }
      goto L_0882CB5C;
    }
L_0882CB5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 1u);
      if (branch_taken) {
          goto L_0882CB64;
      }
      goto L_0882CB64;
    }
L_0882CB64:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0882CB7C;
      }
      goto L_0882CB6C;
    }
L_0882CB6C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    ctx.gpr[7] = (1024u << 16u);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(236), aot_gpr_6);
    goto L_0882CB7C;
L_0882CB7C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_0882CB9C;
      }
      goto L_0882CB8C;
    }
L_0882CB8C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_0882CB9C;
L_0882CB9C:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CBB8;
      }
      goto L_0882CBAC;
    }
L_0882CBAC:
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(483))))));
    goto L_0882CBB8;
L_0882CBB8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[8];
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CBCC;
    }
L_0882CBCC:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(226)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CBD8;
    }
L_0882CBD8:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CBE4;
    }
L_0882CBE4:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CBF0;
    }
L_0882CBF0:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CBFC;
    }
L_0882CBFC:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CC08;
    }
L_0882CC08:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CC14;
    }
L_0882CC14:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CC20;
    }
L_0882CC20:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(186)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CC2C;
    }
L_0882CC2C:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_0882CC44;
      }
      goto L_0882CC38;
    }
L_0882CC38:
    aot_gpr_4 = (aot_gpr_5 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0882CC48;
      }
      goto L_0882CC44;
    }
L_0882CC44:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_0882CC48;
L_0882CC48:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(90))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-249));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 104u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(478), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(452), 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882CC80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-352));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(477), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(448)));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(304), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882CCD8;
      }
      goto L_0882CCC4;
    }
L_0882CCC4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(473)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882CCE0;
      }
      goto L_0882CCD0;
    }
L_0882CCD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882CCF0;
      }
      goto L_0882CCD8;
    }
L_0882CCD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882D4D4;
      }
      goto L_0882CCE0;
    }
L_0882CCE0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(268)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882CCF0u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0009.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 176u, 0x0882CCF0u, 0x0882BFC8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0009_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0009_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 482u, 0x0882BFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CCF0u) goto L_0882CCF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CCF0:
    aot_gpr_31 = (0x0882CCF8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 177u, 0x0882CCF8u, 0x08A666DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 540u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 540u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CCF8u) goto L_0882CCF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CCF8:
    aot_gpr_4 = (2238u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(344)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0882CD14u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(14064));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0162.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 178u, 0x0882CD14u, 0x08A8F64Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0162_entry(rt, ctx, 644u, aot_mem);
#else
        recomp_unit_0162_entry(rt, ctx, 644u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 644u, 0x08A8F64Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CD14u) goto L_0882CD14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CD14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882CDE8;
      }
      goto L_0882CD1C;
    }
L_0882CD1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (1024u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 256u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2049));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x0882CD58u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 180u, 0x0882CD58u, 0x08A66CD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CD58u) goto L_0882CD58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CD58:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x0882CD78u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 181u, 0x0882CD78u, 0x08A66E08u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CD78u) goto L_0882CD78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CD78:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (16248u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_5);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<32u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0882CDD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 182u, 0x0882CDD0u, 0x08A666C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CDD0u) goto L_0882CDD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CDD0:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0882CDE8;
L_0882CDE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0882CE1C;
      }
      goto L_0882CDFC;
    }
L_0882CDFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(190)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0882CE1C;
      }
      goto L_0882CE0C;
    }
L_0882CE0C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882CE24;
      }
      goto L_0882CE1C;
    }
L_0882CE1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_0882CE24;
      }
      goto L_0882CE24;
    }
L_0882CE24:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882CEC4;
      }
      goto L_0882CE2C;
    }
L_0882CE2C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(482))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882CEC4;
      }
      goto L_0882CE44;
    }
L_0882CE44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882CEC4;
      }
      goto L_0882CE58;
    }
L_0882CE58:
    aot_gpr_31 = (0x0882CE60u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CE60u) goto L_0882CE60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882CE60:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 31u);
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0882CEC4;
      }
      goto L_0882CE74;
    }
L_0882CE74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (4u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (65528u << 16u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x0882CEB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 193u, 0x0882CEB4u, 0x08A6669Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 537u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 537u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CEB4u) goto L_0882CEB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CEB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(236), aot_gpr_4);
    goto L_0882CEC4;
L_0882CEC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(242)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_0882CF90;
      }
      goto L_0882CED8;
    }
L_0882CED8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (48460u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 3u, 2u>();
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x0882CF3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 196u, 0x0882CF3Cu, 0x08A66E08u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CF3Cu) goto L_0882CF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CF3C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x0882CF70u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0009.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 197u, 0x0882CF70u, 0x0882B4BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0009_entry(rt, ctx, 348u, aot_mem);
#else
        recomp_unit_0009_entry(rt, ctx, 348u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 348u, 0x0882B4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CF70u) goto L_0882CF70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CF70:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882CF90u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 198u, 0x0882CF90u, 0x08A666C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CF90u) goto L_0882CF90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882CF90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882CFA4;
    }
L_0882CFA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882CFBCu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882CFBCu) goto L_0882CFBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882CFBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882CFC4;
    }
L_0882CFC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(320)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(324)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[22] = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (16243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_5);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<32u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0882D060u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 202u, 0x0882D060u, 0x08A666C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D060u) goto L_0882D060;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D060:
    aot_gpr_31 = (0x0882D068u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 203u, 0x0882D068u, 0x089602C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D068u) goto L_0882D068;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D068:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882D070;
    }
L_0882D070:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_31 = (0x0882D07Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 205u, 0x0882D07Cu, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D07Cu) goto L_0882D07C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D07C:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0882D094u);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 206u, 0x0882D094u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D094u) goto L_0882D094;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D094:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0882D0A8u);
    ctx.fpr[24] = aot_fpr_14 - ctx.fpr[15];
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 207u, 0x0882D0A8u, 0x08960154u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D0A8u) goto L_0882D0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D0A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fpr[24] = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[16];
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D0D0;
    }
L_0882D0D0:
    aot_gpr_4 = (16320u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D0E8;
    }
L_0882D0E8:
    aot_fpr_12 = std::sqrt(ctx.fpr[26]);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D104;
    }
L_0882D104:
    aot_gpr_31 = (0x0882D10Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 211u, 0x0882D10Cu, 0x08960240u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 22u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 22u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D10Cu) goto L_0882D10C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D10C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (15692u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D134;
    }
L_0882D134:
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
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D164;
    }
L_0882D164:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_20));
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
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
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
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882D1C8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 214u, 0x0882D1C8u, 0x08A666C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D1C8u) goto L_0882D1C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D1C8:
    aot_gpr_4 = (0u | 85u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882D1D8u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0018.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 215u, 0x0882D1D8u, 0x0884C57Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0018_entry(rt, ctx, 46u, aot_mem);
#else
        recomp_unit_0018_entry(rt, ctx, 46u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D1D8u) goto L_0882D1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D1D8:
    aot_gpr_31 = (0x0882D1E0u);
    ctx.gpr[20] = (aot_gpr_16 + static_cast<std::uint32_t>(112));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D1E0u) goto L_0882D1E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D1E0:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x0882D1FCu);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D1FCu) goto L_0882D1FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D1FC:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0882D22Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D22Cu) goto L_0882D22C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D22C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(475)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882D248;
      }
      goto L_0882D238;
    }
L_0882D238:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(475)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(475), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0882D248;
L_0882D248:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(475)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D254;
    }
L_0882D254:
    aot_gpr_4 = (2238u << 16u);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(14304));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30376));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(475)));
    aot_gpr_31 = (0x0882D26Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D26Cu) goto L_0882D26C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D26C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16153u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 50u);
    aot_gpr_31 = (0x0882D2A0u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0042.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 223u, 0x0882D2A0u, 0x088AC684u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0042_entry(rt, ctx, 57u, aot_mem);
#else
        recomp_unit_0042_entry(rt, ctx, 57u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0042_entry, 42u, 57u, 0x088AC684u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D2A0u) goto L_0882D2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D2A0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(475)));
    aot_gpr_31 = (0x0882D2ACu);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 224u, 0x0882D2ACu, 0x08990B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 159u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 159u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 159u, 0x08990B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D2ACu) goto L_0882D2AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D2AC:
    aot_fpr_12 = std::sqrt(ctx.fpr[26]);
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882D2CC;
    }
L_0882D2CC:
    aot_gpr_4 = (48921u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (49030u << 16u);
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882D2E8;
    }
L_0882D2E8:
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882D300;
    }
L_0882D300:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(328)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882D314;
    }
L_0882D314:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(216)));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_0882D354;
    }
    goto L_0882D354;
L_0882D354:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x0882D360u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D360u) goto L_0882D360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D360:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-3));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_gpr_31 = (0x0882D394u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D394u) goto L_0882D394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D394:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-3));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_gpr_31 = (0x0882D3C0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 232u, 0x0882D3C0u, 0x08A666C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D3C0u) goto L_0882D3C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D3C0:
    aot_gpr_4 = (0u | 85u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882D3D0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0018.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 233u, 0x0882D3D0u, 0x0884C57Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0018_entry(rt, ctx, 46u, aot_mem);
#else
        recomp_unit_0018_entry(rt, ctx, 46u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D3D0u) goto L_0882D3D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D3D0:
    aot_gpr_31 = (0x0882D3D8u);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(112));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D3D8u) goto L_0882D3D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D3D8:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0882D400u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D400u) goto L_0882D400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D400:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x0882D430u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D430u) goto L_0882D430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D430:
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(475)));
    aot_gpr_4 = (0u | 250u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 250 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[17] | 0u);
        goto L_0882D448;
    }
    goto L_0882D448;
L_0882D448:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(475), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2238u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(14304));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30376));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(475)));
    aot_gpr_31 = (0x0882D468u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D468u) goto L_0882D468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D468:
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
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 50u);
    aot_gpr_31 = (0x0882D49Cu);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0042.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 239u, 0x0882D49Cu, 0x088AC684u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0042_entry(rt, ctx, 57u, aot_mem);
#else
        recomp_unit_0042_entry(rt, ctx, 57u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0042_entry, 42u, 57u, 0x088AC684u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D49Cu) goto L_0882D49C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D49C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(475)));
    aot_gpr_31 = (0x0882D4A8u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0099.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 240u, 0x0882D4A8u, 0x08990B80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0099_entry(rt, ctx, 159u, aot_mem);
#else
        recomp_unit_0099_entry(rt, ctx, 159u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 159u, 0x08990B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D4A8u) goto L_0882D4A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D4A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (128u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882D4D4;
      }
      goto L_0882D4BC;
    }
L_0882D4BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (65535u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32767));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_0882D4D4;
L_0882D4D4:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(304), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      aot_gpr_16 = aot_run_words[5];
      ctx.gpr[17] = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      ctx.gpr[20] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882D508:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882D568;
      }
      goto L_0882D55C;
    }
L_0882D55C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0882D574;
      }
      goto L_0882D568;
    }
L_0882D568:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_0882D574;
L_0882D574:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D5D0;
      }
      goto L_0882D57C;
    }
L_0882D57C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x0882D594u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 248u, 0x0882D594u, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D594u) goto L_0882D594;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D594:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0882D5D0;
      }
      goto L_0882D5AC;
    }
L_0882D5AC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x0882D5C0u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D5C0u) goto L_0882D5C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D5C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_0882D5D0;
L_0882D5D0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882D618;
      }
      goto L_0882D5E0;
    }
L_0882D5E0:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_0882D610;
    }
    goto L_0882D5EC;
L_0882D5EC:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_0882D610;
    }
    goto L_0882D600;
L_0882D600:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_0882D610;
L_0882D610:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882D5E0;
      }
      goto L_0882D618;
    }
L_0882D618:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_0882D660;
      }
      goto L_0882D628;
    }
L_0882D628:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_0882D654;
      }
      goto L_0882D634;
    }
L_0882D634:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_0882D654;
      }
      goto L_0882D648;
    }
L_0882D648:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    goto L_0882D654;
L_0882D654:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0882D6A4;
      }
      goto L_0882D660;
    }
L_0882D660:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882D6A0;
      }
      goto L_0882D668;
    }
L_0882D668:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_0882D698;
    }
    goto L_0882D674;
L_0882D674:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_0882D698;
    }
    goto L_0882D688;
L_0882D688:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_0882D698;
L_0882D698:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882D668;
      }
      goto L_0882D6A0;
    }
L_0882D6A0:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_0882D6A4;
L_0882D6A4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882D6F8;
      }
      goto L_0882D6AC;
    }
L_0882D6AC:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882D6F8;
      }
      goto L_0882D6BC;
    }
L_0882D6BC:
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_0882D6EC;
    }
    goto L_0882D6C8;
L_0882D6C8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
        goto L_0882D6EC;
    }
    goto L_0882D6DC;
L_0882D6DC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_0882D6EC;
L_0882D6EC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882D6BC;
      }
      goto L_0882D6F4;
    }
L_0882D6F4:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    goto L_0882D6F8;
L_0882D6F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882D74C;
      }
      goto L_0882D708;
    }
L_0882D708:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_0882D740;
    }
    goto L_0882D710;
L_0882D710:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_0882D740;
    }
    goto L_0882D718;
L_0882D718:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_0882D740;
    }
    goto L_0882D724;
L_0882D724:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_0882D73C;
      }
      goto L_0882D734;
    }
L_0882D734:
    aot_gpr_31 = (0x0882D73Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D73Cu) goto L_0882D73C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D73C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_0882D740;
L_0882D740:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
      if (branch_taken) {
          goto L_0882D708;
      }
      goto L_0882D748;
    }
L_0882D748:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_0882D74C;
L_0882D74C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882D75C;
      }
      goto L_0882D754;
    }
L_0882D754:
    aot_gpr_31 = (0x0882D75Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D75Cu) goto L_0882D75C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D75C:
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882D794:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), 0u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30368)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30364)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_5, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    ctx.gpr[17] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    aot_gpr_31 = (0x0882D854u);
    aot_gpr_4 = (0u | 20u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 287u, 0x0882D854u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D854u) goto L_0882D854;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882D854:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29232));
      if (branch_taken) {
          goto L_0882D87C;
      }
      goto L_0882D868;
    }
L_0882D868:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882D878u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 663u, 0x08B66BE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D878u) goto L_0882D878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D878:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0882D87C;
L_0882D87C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882D890;
      }
      goto L_0882D884;
    }
L_0882D884:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_0882D890;
L_0882D890:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882D8D4;
      }
      goto L_0882D8A0;
    }
L_0882D8A0:
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0882D8C4;
      }
      goto L_0882D8A8;
    }
L_0882D8A8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0882D8BC;
      }
      goto L_0882D8B0;
    }
L_0882D8B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_0882D8BC;
L_0882D8BC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    goto L_0882D8C4;
L_0882D8C4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(308), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(301)));
      if (branch_taken) {
          goto L_0882D8FC;
      }
      goto L_0882D8D4;
    }
L_0882D8D4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(304));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x0882D8F4u);
    ctx.gpr[9] = (0u | 1u);
    goto L_0882D508;
L_0882D8F4:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(301)));
    goto L_0882D8FC;
L_0882D8FC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0882D924;
      }
      goto L_0882D904;
    }
L_0882D904:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0882D920u);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D920u) goto L_0882D920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D920:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_0882D924;
L_0882D924:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0882D944;
      }
      goto L_0882D92C;
    }
L_0882D92C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_0882D944;
      }
      goto L_0882D93C;
    }
L_0882D93C:
    aot_gpr_31 = (0x0882D944u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D944u) goto L_0882D944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D944:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882D968:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0882DA30;
      }
      goto L_0882D98C;
    }
L_0882D98C:
    aot_gpr_31 = (0x0882D994u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0882E9B4;
L_0882D994:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882D9A8;
      }
      goto L_0882D9A0;
    }
L_0882D9A0:
    aot_gpr_31 = (0x0882D9A8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0882DA4C;
L_0882D9A8:
    aot_gpr_31 = (0x0882D9B0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0882DAD0;
L_0882D9B0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0882D9DC;
      }
      goto L_0882D9B8;
    }
L_0882D9B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882D9DC;
      }
      goto L_0882D9C4;
    }
L_0882D9C4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882D9DC;
      }
      goto L_0882D9CC;
    }
L_0882D9CC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882D9DC;
      }
      goto L_0882D9D4;
    }
L_0882D9D4:
    aot_gpr_31 = (0x0882D9DCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882D9DCu) goto L_0882D9DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882D9DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0882DA08;
      }
      goto L_0882D9E4;
    }
L_0882D9E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882DA08;
      }
      goto L_0882D9F0;
    }
L_0882D9F0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882DA08;
      }
      goto L_0882D9F8;
    }
L_0882D9F8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882DA08;
      }
      goto L_0882DA00;
    }
L_0882DA00:
    aot_gpr_31 = (0x0882DA08u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DA08u) goto L_0882DA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882DA08:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_0882DA20;
      }
      goto L_0882DA10;
    }
L_0882DA10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0882DA1Cu);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 324u, 0x0882DA1Cu, 0x08AE1CE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 528u, 0x08AE1CE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DA1Cu) goto L_0882DA1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DA1C:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_0882DA20;
L_0882DA20:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882DA30;
      }
      goto L_0882DA28;
    }
L_0882DA28:
    aot_gpr_31 = (0x0882DA30u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DA30u) goto L_0882DA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882DA30:
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
L_0882DA4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(41)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882DA84;
      }
      goto L_0882DA64;
    }
L_0882DA64:
    aot_gpr_31 = (0x0882DA6Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DA6Cu) goto L_0882DA6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882DA6C:
    aot_gpr_31 = (0x0882DA74u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 331u, 0x0882DA74u, 0x0898C078u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 15u, 0x0898C078u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DA74u) goto L_0882DA74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DA74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882DA8C;
      }
      goto L_0882DA7C;
    }
L_0882DA7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882DAAC;
      }
      goto L_0882DA84;
    }
L_0882DA84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882DAC0;
      }
      goto L_0882DA8C;
    }
L_0882DA8C:
    aot_gpr_31 = (0x0882DA94u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DA94u) goto L_0882DA94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882DA94:
    aot_gpr_31 = (0x0882DA9Cu);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 336u, 0x0882DA9Cu, 0x0898B2C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 816u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 816u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 816u, 0x0898B2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DA9Cu) goto L_0882DA9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DA9C:
    aot_gpr_31 = (0x0882DAA4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DAA4u) goto L_0882DAA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882DAA4:
    aot_gpr_31 = (0x0882DAACu);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 338u, 0x0882DAACu, 0x0898B2C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 816u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 816u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 816u, 0x0898B2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DAACu) goto L_0882DAAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DAAC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882DAB8u);
    aot_gpr_5 = (0u | 0u);
    goto L_0882DFD0;
L_0882DAB8:
    aot_gpr_31 = (0x0882DAC0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882DC20;
L_0882DAC0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882DAD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(34)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882DB04;
      }
      goto L_0882DAF0;
    }
L_0882DAF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882DB0C;
      }
      goto L_0882DAFC;
    }
L_0882DAFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0882DB18;
      }
      goto L_0882DB04;
    }
L_0882DB04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882DC08;
      }
      goto L_0882DB0C;
    }
L_0882DB0C:
    aot_gpr_31 = (0x0882DB14u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 346u, 0x0882DB14u, 0x08AE1CE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 528u, 0x08AE1CE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DB14u) goto L_0882DB14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DB14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    goto L_0882DB18;
L_0882DB18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0882DB80;
      }
      goto L_0882DB40;
    }
L_0882DB40:
    ctx.gpr[18] = (0u | 0u);
    goto L_0882DB44;
L_0882DB44:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0882DB54u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 350u, 0x0882DB54u, 0x08AE1CE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 528u, 0x08AE1CE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DB54u) goto L_0882DB54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DB54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882DB44;
      }
      goto L_0882DB80;
    }
L_0882DB80:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882DBF8;
      }
      goto L_0882DBBC;
    }
L_0882DBBC:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0882DBCCu);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 353u, 0x0882DBCCu, 0x08AE1CE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 528u, 0x08AE1CE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DBCCu) goto L_0882DBCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DBCC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882DBBC;
      }
      goto L_0882DBF8;
    }
L_0882DBF8:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    goto L_0882DC08;
L_0882DC08:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882DC20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882DC4C;
      }
      goto L_0882DC44;
    }
L_0882DC44:
    aot_gpr_31 = (0x0882DC4Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DC4Cu) goto L_0882DC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882DC4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6851), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2264), 0u);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x0882DC6Cu);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8706), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 359u, 0x0882DC6Cu, 0x08A0787Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 841u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 841u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 841u, 0x08A0787Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DC6Cu) goto L_0882DC6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DC6C:
    aot_gpr_31 = (0x0882DC74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 360u, 0x0882DC74u, 0x08AD31E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 538u, 0x08AD31E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DC74u) goto L_0882DC74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DC74:
    aot_gpr_31 = (0x0882DC7Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 361u, 0x0882DC7Cu, 0x08A1155Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 172u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 172u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 172u, 0x08A1155Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DC7Cu) goto L_0882DC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DC7C:
    aot_gpr_31 = (0x0882DC84u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 362u, 0x0882DC84u, 0x08A0638Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 561u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 561u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 561u, 0x08A0638Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DC84u) goto L_0882DC84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DC84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0882DCC8;
      }
      goto L_0882DC94;
    }
L_0882DC94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882DCC8;
      }
      goto L_0882DCA0;
    }
L_0882DCA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
        goto L_0882DCB8;
    }
    goto L_0882DCAC;
L_0882DCAC:
    aot_gpr_31 = (0x0882DCB4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DCB4u) goto L_0882DCB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882DCB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    goto L_0882DCB8;
L_0882DCB8:
    aot_gpr_5 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_gpr_31 = (0x0882DCC8u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 368u, 0x0882DCC8u, 0x089C6F68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 680u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 680u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 680u, 0x089C6F68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DCC8u) goto L_0882DCC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DCC8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882DCD8u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 369u, 0x0882DCD8u, 0x08A063CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DCD8u) goto L_0882DCD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DCD8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x0882DCE8u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 370u, 0x0882DCE8u, 0x0880A6ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 556u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 556u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 556u, 0x0880A6ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DCE8u) goto L_0882DCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DCE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882DD4C;
      }
      goto L_0882DD14;
    }
L_0882DD14:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_31 = (0x0882DD20u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 372u, 0x0882DD20u, 0x08AE2020u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 572u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 572u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 572u, 0x08AE2020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DD20u) goto L_0882DD20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DD20:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882DD14;
      }
      goto L_0882DD4C;
    }
L_0882DD4C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0882DD6C;
      }
      goto L_0882DD5C;
    }
L_0882DD5C:
    aot_gpr_31 = (0x0882DD64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DD64u) goto L_0882DD64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882DD64:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882DD6C;
L_0882DD6C:
    aot_gpr_31 = (0x0882DD74u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 377u, 0x0882DD74u, 0x089BB280u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 686u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 686u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 686u, 0x089BB280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DD74u) goto L_0882DD74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DD74:
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
L_0882DD8C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(34)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882DDCC;
      }
      goto L_0882DDAC;
    }
L_0882DDAC:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30252));
    aot_gpr_31 = (0x0882DDB8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 380u, 0x0882DDB8u, 0x08AAECA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 584u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 584u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DDB8u) goto L_0882DDB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DDB8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_0882DDD4;
      }
      goto L_0882DDC4;
    }
L_0882DDC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882DDDC;
      }
      goto L_0882DDCC;
    }
L_0882DDCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882DEDC;
      }
      goto L_0882DDD4;
    }
L_0882DDD4:
    aot_gpr_31 = (0x0882DDDCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 384u, 0x0882DDDCu, 0x08AAEBC8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 571u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 571u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 571u, 0x08AAEBC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DDDCu) goto L_0882DDDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DDDC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0882DDE8u);
    aot_gpr_4 = (0u | 56u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 385u, 0x0882DDE8u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DDE8u) goto L_0882DDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DDE8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30240));
      if (branch_taken) {
          goto L_0882DE00;
      }
      goto L_0882DDF4;
    }
L_0882DDF4:
    aot_gpr_31 = (0x0882DDFCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 387u, 0x0882DDFCu, 0x08AE1B78u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 506u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 506u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 506u, 0x08AE1B78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DDFCu) goto L_0882DDFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DDFC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0882DE00;
L_0882DE00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_0882DE14;
      }
      goto L_0882DE0C;
    }
L_0882DE0C:
    aot_gpr_31 = (0x0882DE14u);
    aot_gpr_5 = (0u | 3u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 390u, 0x0882DE14u, 0x08AE1CE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 528u, 0x08AE1CE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DE14u) goto L_0882DE14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DE14:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30232));
    aot_gpr_31 = (0x0882DE24u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EE10;
L_0882DE24:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30224));
    aot_gpr_31 = (0x0882DE30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EE10;
L_0882DE30:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30212));
    aot_gpr_31 = (0x0882DE3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EE10;
L_0882DE3C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30200));
    aot_gpr_31 = (0x0882DE48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EE10;
L_0882DE48:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30188));
    aot_gpr_31 = (0x0882DE54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EE10;
L_0882DE54:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30172));
    aot_gpr_31 = (0x0882DE60u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EE10;
L_0882DE60:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30160));
    aot_gpr_31 = (0x0882DE6Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EE10;
L_0882DE6C:
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882DE7Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18120));
    goto L_0882EE10;
L_0882DE7C:
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882DE8Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18140));
    goto L_0882EE10;
L_0882DE8C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30148));
    aot_gpr_31 = (0x0882DE98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EE10;
L_0882DE98:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30132));
    aot_gpr_31 = (0x0882DEA4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EE10;
L_0882DEA4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30120));
    aot_gpr_31 = (0x0882DEB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EFBC;
L_0882DEB0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30108));
    aot_gpr_31 = (0x0882DEBCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EFBC;
L_0882DEBC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30096));
    aot_gpr_31 = (0x0882DEC8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EFBC;
L_0882DEC8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30084));
    aot_gpr_31 = (0x0882DED4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EFBC;
L_0882DED4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0882DEDC;
L_0882DEDC:
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
L_0882DEF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(33)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882DF48;
      }
      goto L_0882DF1C;
    }
L_0882DF1C:
    aot_gpr_31 = (0x0882DF24u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 409u, 0x0882DF24u, 0x08AAEFC8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 640u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 640u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DF24u) goto L_0882DF24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DF24:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30252));
    aot_gpr_31 = (0x0882DF30u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 410u, 0x0882DF30u, 0x08AAECA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 584u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 584u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DF30u) goto L_0882DF30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DF30:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
      if (branch_taken) {
          goto L_0882DF50;
      }
      goto L_0882DF40;
    }
L_0882DF40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882DF5C;
      }
      goto L_0882DF48;
    }
L_0882DF48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0882DFB4;
      }
      goto L_0882DF50;
    }
L_0882DF50:
    aot_gpr_31 = (0x0882DF58u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 414u, 0x0882DF58u, 0x08AAEBC8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 571u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 571u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 571u, 0x08AAEBC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DF58u) goto L_0882DF58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DF58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0882DF5C;
L_0882DF5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882DF70;
      }
      goto L_0882DF68;
    }
L_0882DF68:
    aot_gpr_31 = (0x0882DF70u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DF70u) goto L_0882DF70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882DF70:
    aot_gpr_31 = (0x0882DF78u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0084.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 418u, 0x0882DF78u, 0x08954DE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0084_entry(rt, ctx, 201u, aot_mem);
#else
        recomp_unit_0084_entry(rt, ctx, 201u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0084_entry, 84u, 201u, 0x08954DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DF78u) goto L_0882DF78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DF78:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0882DF90u);
    aot_gpr_6 = (16u << 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 419u, 0x0882DF90u, 0x0893681Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 694u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 694u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 694u, 0x0893681Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DF90u) goto L_0882DF90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DF90:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882DF9Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 420u, 0x0882DF9Cu, 0x08AAF460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 721u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 721u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 721u, 0x08AAF460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DF9Cu) goto L_0882DF9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DF9C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_31 = (0x0882DFA8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 421u, 0x0882DFA8u, 0x08AAF008u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 644u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 644u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 644u, 0x08AAF008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DFA8u) goto L_0882DFA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DFA8:
    aot_gpr_31 = (0x0882DFB0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 422u, 0x0882DFB0u, 0x08AAEFE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 642u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 642u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DFB0u) goto L_0882DFB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DFB0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_0882DFB4;
L_0882DFB4:
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
L_0882DFD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(33)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882E00C;
      }
      goto L_0882DFEC;
    }
L_0882DFEC:
    aot_gpr_31 = (0x0882DFF4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30252));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 426u, 0x0882DFF4u, 0x08AAECA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 584u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 584u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882DFF4u) goto L_0882DFF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882DFF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_0882E014;
      }
      goto L_0882E004;
    }
L_0882E004:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E0AC;
      }
      goto L_0882E00C;
    }
L_0882E00C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E0AC;
      }
      goto L_0882E014;
    }
L_0882E014:
    aot_gpr_31 = (0x0882E01Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0205.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 430u, 0x0882E01Cu, 0x08B3AAE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0205_entry(rt, ctx, 733u, aot_mem);
#else
        recomp_unit_0205_entry(rt, ctx, 733u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E01Cu) goto L_0882E01C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E01C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882E090;
      }
      goto L_0882E024;
    }
L_0882E024:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882E044;
      }
      goto L_0882E02C;
    }
L_0882E02C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
        goto L_0882E04C;
    }
    goto L_0882E040;
L_0882E040:
    aot_gpr_4 = (0u | 0u);
    goto L_0882E044;
L_0882E044:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882E080;
      }
      goto L_0882E04C;
    }
L_0882E04C:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_0882E06C;
    }
    goto L_0882E060;
L_0882E060:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882E080;
      }
      goto L_0882E06C;
    }
L_0882E06C:
    aot_gpr_5 = (ctx.gpr[17] << 5u);
    aot_gpr_6 = (ctx.gpr[17] << 2u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_0882E080;
L_0882E080:
    aot_gpr_5 = (2226u << 16u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0882E090u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4936));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 439u, 0x0882E090u, 0x08A65998u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 352u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 352u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 352u, 0x08A65998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E090u) goto L_0882E090;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E090:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x0882E09Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 440u, 0x0882E09Cu, 0x08AAF24Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 680u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 680u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 680u, 0x08AAF24Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E09Cu) goto L_0882E09C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E09C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0882E0ACu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 441u, 0x0882E0ACu, 0x08AAEE00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 610u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 610u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 610u, 0x08AAEE00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E0ACu) goto L_0882E0AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E0AC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
L_0882E0C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x0882E0E0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 443u, 0x0882E0E0u, 0x08AE2540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 634u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 634u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 634u, 0x08AE2540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E0E0u) goto L_0882E0E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E0E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
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
          goto L_0882E144;
      }
      goto L_0882E10C;
    }
L_0882E10C:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_31 = (0x0882E118u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 445u, 0x0882E118u, 0x08AE2540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 634u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 634u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 634u, 0x08AE2540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E118u) goto L_0882E118;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E118:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
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
          goto L_0882E10C;
      }
      goto L_0882E144;
    }
L_0882E144:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
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
          goto L_0882E1A8;
      }
      goto L_0882E170;
    }
L_0882E170:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_31 = (0x0882E17Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 448u, 0x0882E17Cu, 0x08AE2540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 634u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 634u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 634u, 0x08AE2540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E17Cu) goto L_0882E17C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E17C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
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
          goto L_0882E170;
      }
      goto L_0882E1A8;
    }
L_0882E1A8:
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
L_0882E1C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0882E1D4u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_0882F168;
L_0882E1D4:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882E2D0;
      }
      goto L_0882E1E8;
    }
L_0882E1E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882E2D0;
      }
      goto L_0882E1F4;
    }
L_0882E1F4:
    aot_gpr_31 = (0x0882E1FCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E1FCu) goto L_0882E1FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E1FC:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882E21C;
      }
      goto L_0882E20C;
    }
L_0882E20C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0882E220;
      }
      goto L_0882E218;
    }
L_0882E218:
    aot_gpr_4 = (0u | 1u);
    goto L_0882E21C;
L_0882E21C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0882E220;
L_0882E220:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882E268;
      }
      goto L_0882E228;
    }
L_0882E228:
    aot_gpr_31 = (0x0882E230u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E230u) goto L_0882E230;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E230:
    aot_gpr_31 = (0x0882E238u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 461u, 0x0882E238u, 0x0898C078u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 15u, 0x0898C078u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E238u) goto L_0882E238;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E238:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4214)));
        goto L_0882E260;
    }
    goto L_0882E240;
L_0882E240:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(30)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4214)));
        goto L_0882E260;
    }
    goto L_0882E24C;
L_0882E24C:
    aot_gpr_31 = (0x0882E254u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E9B4;
L_0882E254:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882E268;
      }
      goto L_0882E25C;
    }
L_0882E25C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4214)));
    goto L_0882E260;
L_0882E260:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882E2D0;
      }
      goto L_0882E268;
    }
L_0882E268:
    aot_gpr_31 = (0x0882E270u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E9B4;
L_0882E270:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882E2C0;
      }
      goto L_0882E278;
    }
L_0882E278:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882E284u);
    aot_gpr_5 = (0u | 1u);
    goto L_0882F210;
L_0882E284:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4214)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882E2E8;
      }
      goto L_0882E290;
    }
L_0882E290:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4214), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x0882E29Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882EA20;
L_0882E29C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882E2A8u);
    aot_gpr_5 = (0u | 0u);
    goto L_0882DFD0;
L_0882E2A8:
    aot_gpr_31 = (0x0882E2B0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0172.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 474u, 0x0882E2B0u, 0x08AB5428u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0172_entry(rt, ctx, 297u, aot_mem);
#else
        recomp_unit_0172_entry(rt, ctx, 297u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 297u, 0x08AB5428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E2B0u) goto L_0882E2B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E2B0:
    aot_gpr_31 = (0x0882E2B8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0172.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 475u, 0x0882E2B8u, 0x08AB6E88u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0172_entry(rt, ctx, 807u, aot_mem);
#else
        recomp_unit_0172_entry(rt, ctx, 807u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 807u, 0x08AB6E88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E2B8u) goto L_0882E2B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E2B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E2E8;
      }
      goto L_0882E2C0;
    }
L_0882E2C0:
    aot_gpr_31 = (0x0882E2C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882DA4C;
L_0882E2C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E2E8;
      }
      goto L_0882E2D0;
    }
L_0882E2D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882E2E8;
      }
      goto L_0882E2DC;
    }
L_0882E2DC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x0882E2E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882DA4C;
L_0882E2E8:
    aot_gpr_31 = (0x0882E2F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E9B4;
L_0882E2F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882E318;
      }
      goto L_0882E2F8;
    }
L_0882E2F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882E318;
      }
      goto L_0882E304;
    }
L_0882E304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882E320;
      }
      goto L_0882E310;
    }
L_0882E310:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E328;
      }
      goto L_0882E318;
    }
L_0882E318:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E460;
      }
      goto L_0882E320;
    }
L_0882E320:
    aot_gpr_31 = (0x0882E328u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E328u) goto L_0882E328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E328:
    aot_gpr_31 = (0x0882E330u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0148.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 488u, 0x0882E330u, 0x08A54ED4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0148_entry(rt, ctx, 237u, aot_mem);
#else
        recomp_unit_0148_entry(rt, ctx, 237u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E330u) goto L_0882E330;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E330:
    aot_gpr_31 = (0x0882E338u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E9C4;
L_0882E338:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882E3AC;
      }
      goto L_0882E340;
    }
L_0882E340:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882E360;
      }
      goto L_0882E34C;
    }
L_0882E34C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882E358u);
    aot_gpr_5 = (0u | 1u);
    goto L_0882EE08;
L_0882E358:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
      if (branch_taken) {
          goto L_0882E370;
      }
      goto L_0882E360;
    }
L_0882E360:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882E36Cu);
    aot_gpr_5 = (0u | 0u);
    goto L_0882EE08;
L_0882E36C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    goto L_0882E370;
L_0882E370:
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(424)));
        goto L_0882E388;
    }
    goto L_0882E378;
L_0882E378:
    aot_gpr_31 = (0x0882E380u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E380u) goto L_0882E380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E380:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(424)));
    goto L_0882E388;
L_0882E388:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0882E3AC;
      }
      goto L_0882E390;
    }
L_0882E390:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882E3A4;
      }
      goto L_0882E398;
    }
L_0882E398:
    aot_gpr_31 = (0x0882E3A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E3A0u) goto L_0882E3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E3A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    goto L_0882E3A4;
L_0882E3A4:
    aot_gpr_31 = (0x0882E3ACu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 503u, 0x0882E3ACu, 0x088739ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 839u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 839u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 839u, 0x088739ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E3ACu) goto L_0882E3AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E3AC:
    aot_gpr_31 = (0x0882E3B4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 504u, 0x0882E3B4u, 0x08AE1E48u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 552u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 552u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 552u, 0x08AE1E48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E3B4u) goto L_0882E3B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E3B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0882E43C;
      }
      goto L_0882E3DC;
    }
L_0882E3DC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_0882E43C;
      }
      goto L_0882E3E8;
    }
L_0882E3E8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    aot_gpr_6 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_5 << 2u);
      if (branch_taken) {
          goto L_0882E43C;
      }
      goto L_0882E410;
    }
L_0882E410:
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0882E43C;
      }
      goto L_0882E420;
    }
L_0882E420:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882E43C;
      }
      goto L_0882E434;
    }
L_0882E434:
    aot_gpr_31 = (0x0882E43Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 510u, 0x0882E43Cu, 0x08AE1E48u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 552u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 552u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 552u, 0x08AE1E48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E43Cu) goto L_0882E43C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E43C:
    aot_gpr_31 = (0x0882E444u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E9B4;
L_0882E444:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882E460;
      }
      goto L_0882E44C;
    }
L_0882E44C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882E460;
      }
      goto L_0882E458;
    }
L_0882E458:
    aot_gpr_31 = (0x0882E460u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E470;
L_0882E460:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E470:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
        goto L_0882E494;
    }
    goto L_0882E484;
L_0882E484:
    aot_gpr_31 = (0x0882E48Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 517u, 0x0882E48Cu, 0x08AE2228u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 592u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 592u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 592u, 0x08AE2228u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E48Cu) goto L_0882E48C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E48C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E50C;
      }
      goto L_0882E494;
    }
L_0882E494:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_0882E50C;
      }
      goto L_0882E4B8;
    }
L_0882E4B8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_0882E50C;
      }
      goto L_0882E4C4;
    }
L_0882E4C4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 2u));
    aot_gpr_6 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_5 << 2u);
      if (branch_taken) {
          goto L_0882E50C;
      }
      goto L_0882E4EC;
    }
L_0882E4EC:
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0882E50C;
      }
      goto L_0882E4FC;
    }
L_0882E4FC:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x0882E50Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 523u, 0x0882E50Cu, 0x08AE2228u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 592u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 592u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 592u, 0x08AE2228u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E50Cu) goto L_0882E50C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E50C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E518:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0882E52Cu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_0882E9B4;
L_0882E52C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882E550;
      }
      goto L_0882E534;
    }
L_0882E534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E558;
      }
      goto L_0882E540;
    }
L_0882E540:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E548;
    }
L_0882E548:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E570;
      }
      goto L_0882E550;
    }
L_0882E550:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E558;
    }
L_0882E558:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E638;
      }
      goto L_0882E560;
    }
L_0882E560:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E568;
    }
L_0882E568:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E570;
    }
L_0882E570:
    aot_gpr_31 = (0x0882E578u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 534u, 0x0882E578u, 0x08AE20C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 576u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 576u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 576u, 0x08AE20C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E578u) goto L_0882E578;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
        goto L_0882E5D8;
    }
    goto L_0882E5A0;
L_0882E5A0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(29))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E5D4;
      }
      goto L_0882E5AC;
    }
L_0882E5AC:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 << 2u);
      if (branch_taken) {
          goto L_0882E5D4;
      }
      goto L_0882E5B4;
    }
L_0882E5B4:
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
        goto L_0882E5D8;
    }
    goto L_0882E5C4;
L_0882E5C4:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_31 = (0x0882E5D4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 539u, 0x0882E5D4u, 0x08AE20C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 576u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 576u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 576u, 0x08AE20C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E5D4u) goto L_0882E5D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E5D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    goto L_0882E5D8;
L_0882E5D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_6 = (aot_gpr_4 & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
      if (branch_taken) {
          goto L_0882E630;
      }
      goto L_0882E5FC;
    }
L_0882E5FC:
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_16 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E630;
      }
      goto L_0882E608;
    }
L_0882E608:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 << 2u);
      if (branch_taken) {
          goto L_0882E630;
      }
      goto L_0882E610;
    }
L_0882E610:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882E630;
      }
      goto L_0882E620;
    }
L_0882E620:
    aot_gpr_4 = (aot_gpr_16 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_31 = (0x0882E630u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 545u, 0x0882E630u, 0x08AE20C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 576u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 576u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 576u, 0x08AE20C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E630u) goto L_0882E630;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E630:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E638;
    }
L_0882E638:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29552));
    aot_gpr_31 = (0x0882E658u);
    ctx.gpr[8] = (65280u << 16u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0054.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 547u, 0x0882E658u, 0x088DFE80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0054_entry(rt, ctx, 525u, aot_mem);
#else
        recomp_unit_0054_entry(rt, ctx, 525u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E658u) goto L_0882E658;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E658:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E660;
    }
L_0882E660:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E670:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
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
          goto L_0882E6EC;
      }
      goto L_0882E6B4;
    }
L_0882E6B4:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_31 = (0x0882E6C0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 551u, 0x0882E6C0u, 0x08AE1F78u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 568u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 568u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 568u, 0x08AE1F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E6C0u) goto L_0882E6C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E6C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
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
          goto L_0882E6B4;
      }
      goto L_0882E6EC;
    }
L_0882E6EC:
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
L_0882E704:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0882E71Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E71Cu) goto L_0882E71C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E71C:
    aot_gpr_31 = (0x0882E724u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 555u, 0x0882E724u, 0x0898D9A8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 584u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 584u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 584u, 0x0898D9A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E724u) goto L_0882E724;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E724:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882E744;
      }
      goto L_0882E72C;
    }
L_0882E72C:
    aot_gpr_31 = (0x0882E734u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E734u) goto L_0882E734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E734:
    aot_gpr_31 = (0x0882E73Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 558u, 0x0882E73Cu, 0x0898BD24u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 998u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 998u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 998u, 0x0898BD24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E73Cu) goto L_0882E73C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E73C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882E758;
      }
      goto L_0882E744;
    }
L_0882E744:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[2] = (0u | 1u);
    goto L_0882E750;
L_0882E750:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882E870;
      }
      goto L_0882E758;
    }
L_0882E758:
    aot_gpr_31 = (0x0882E760u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E760u) goto L_0882E760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E760:
    aot_gpr_31 = (0x0882E768u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 563u, 0x0882E768u, 0x0898D950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 577u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 577u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 577u, 0x0898D950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E768u) goto L_0882E768;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E768:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882E788;
      }
      goto L_0882E770;
    }
L_0882E770:
    aot_gpr_31 = (0x0882E778u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E778u) goto L_0882E778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E778:
    aot_gpr_31 = (0x0882E780u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 566u, 0x0882E780u, 0x0898BCCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 988u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 988u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 988u, 0x0898BCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E780u) goto L_0882E780;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882E798;
      }
      goto L_0882E788;
    }
L_0882E788:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882E750;
      }
      goto L_0882E798;
    }
L_0882E798:
    aot_gpr_31 = (0x0882E7A0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E7A0u) goto L_0882E7A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E7A0:
    aot_gpr_31 = (0x0882E7A8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 570u, 0x0882E7A8u, 0x0898DA00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 591u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 591u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 591u, 0x0898DA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E7A8u) goto L_0882E7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E7A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882E7C8;
      }
      goto L_0882E7B0;
    }
L_0882E7B0:
    aot_gpr_31 = (0x0882E7B8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E7B8u) goto L_0882E7B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E7B8:
    aot_gpr_31 = (0x0882E7C0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 573u, 0x0882E7C0u, 0x0898BD7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 1008u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 1008u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1008u, 0x0898BD7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E7C0u) goto L_0882E7C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E7C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882E7D4;
      }
      goto L_0882E7C8;
    }
L_0882E7C8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882E750;
      }
      goto L_0882E7D4;
    }
L_0882E7D4:
    aot_gpr_31 = (0x0882E7DCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E7DCu) goto L_0882E7DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E7DC:
    aot_gpr_31 = (0x0882E7E4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 577u, 0x0882E7E4u, 0x0898DA58u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 598u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 598u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 598u, 0x0898DA58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E7E4u) goto L_0882E7E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E7E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882E804;
      }
      goto L_0882E7EC;
    }
L_0882E7EC:
    aot_gpr_31 = (0x0882E7F4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E7F4u) goto L_0882E7F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E7F4:
    aot_gpr_31 = (0x0882E7FCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 580u, 0x0882E7FCu, 0x0898BDD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 1018u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 1018u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 1018u, 0x0898BDD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E7FCu) goto L_0882E7FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E7FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882E814;
      }
      goto L_0882E804;
    }
L_0882E804:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882E750;
      }
      goto L_0882E814;
    }
L_0882E814:
    aot_gpr_31 = (0x0882E81Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E81Cu) goto L_0882E81C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E81C:
    aot_gpr_31 = (0x0882E824u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 584u, 0x0882E824u, 0x0898C078u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 15u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 15u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 15u, 0x0898C078u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E824u) goto L_0882E824;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E824:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882E83C;
      }
      goto L_0882E82C;
    }
L_0882E82C:
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882E750;
      }
      goto L_0882E83C;
    }
L_0882E83C:
    aot_gpr_31 = (0x0882E844u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E844u) goto L_0882E844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882E844:
    aot_gpr_31 = (0x0882E84Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 588u, 0x0882E84Cu, 0x0898C054u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 11u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 11u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 11u, 0x0898C054u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E84Cu) goto L_0882E84C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E84C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882E864;
      }
      goto L_0882E854;
    }
L_0882E854:
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882E750;
      }
      goto L_0882E864;
    }
L_0882E864:
    aot_gpr_4 = (0u | 7u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[2] = (0u | 0u);
    goto L_0882E870;
L_0882E870:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E880:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30072));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0882E8B4;
      }
      goto L_0882E8AC;
    }
L_0882E8AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882E930;
      }
      goto L_0882E8B4;
    }
L_0882E8B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[18]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (ctx.gpr[20] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882E92C;
      }
      goto L_0882E8E0;
    }
L_0882E8E0:
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882E8F4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 596u, 0x0882E8F4u, 0x08B58180u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 31u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 31u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882E8F4u) goto L_0882E8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882E8F4:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_0882E904;
    }
    goto L_0882E8FC;
L_0882E8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0882E930;
      }
      goto L_0882E904;
    }
L_0882E904:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[18]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (ctx.gpr[20] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882E8E0;
      }
      goto L_0882E92C;
    }
L_0882E92C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0882E930;
L_0882E930:
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
L_0882E950:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0882E964;
      }
      goto L_0882E95C;
    }
L_0882E95C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882E978;
      }
      goto L_0882E964;
    }
L_0882E964:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(28))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_0882E978;
L_0882E978:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E980:
    aot_gpr_5 = (0u | 1u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E98C:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E994:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E99C:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E9A4:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(41)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E9AC:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E9B4:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E9BC:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(56), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E9C4:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E9CC:
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30)));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E9D8:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882E9E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(42)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882EA04;
      }
      goto L_0882E9F8;
    }
L_0882E9F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882EA04u);
    aot_gpr_5 = (0u | 2u);
    goto L_0882E9D8;
L_0882EA04:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882EA18:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882EA20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0882EA38u);
    aot_gpr_5 = (0u | 1u);
    goto L_0882EA18;
L_0882EA38:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882EA44u);
    aot_gpr_5 = (0u | 1u);
    goto L_0882E9D8;
L_0882EA44:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882EA54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(60)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[17] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882EB60;
      }
      goto L_0882EA74;
    }
L_0882EA74:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882EA90;
      }
      goto L_0882EA80;
    }
L_0882EA80:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_0882EB60;
      }
      goto L_0882EA88;
    }
L_0882EA88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882EB60;
      }
      goto L_0882EA90;
    }
L_0882EA90:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882EB54;
      }
      goto L_0882EA98;
    }
L_0882EA98:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882EB60;
      }
      goto L_0882EAA0;
    }
L_0882EAA0:
    aot_gpr_31 = (0x0882EAA8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0882DEF4;
L_0882EAA8:
    aot_gpr_31 = (0x0882EAB0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0882E0C0;
L_0882EAB0:
    aot_gpr_31 = (0x0882EAB8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0882E950;
L_0882EAB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0882EAC4u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30064));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 633u, 0x0882EAC4u, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EAC4u) goto L_0882EAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EAC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_16 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30052));
      if (branch_taken) {
          goto L_0882EAE8;
      }
      goto L_0882EACC;
    }
L_0882EACC:
    aot_gpr_31 = (0x0882EAD4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0882E950;
L_0882EAD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0882EAE0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 636u, 0x0882EAE0u, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EAE0u) goto L_0882EAE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EAE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882EB4C;
      }
      goto L_0882EAE8;
    }
L_0882EAE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0882EB10;
      }
      goto L_0882EAFC;
    }
L_0882EAFC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[18]);
    aot_gpr_31 = (0x0882EB08u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0882D794;
L_0882EB08:
    aot_gpr_31 = (0x0882EB10u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30272));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EB10u) goto L_0882EB10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882EB10:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0882EB20u);
    aot_gpr_6 = (0u | 0u);
    goto L_0882FCA0;
L_0882EB20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882EB44;
      }
      goto L_0882EB2C;
    }
L_0882EB2C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[18]);
    aot_gpr_31 = (0x0882EB38u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0882D794;
L_0882EB38:
    aot_gpr_31 = (0x0882EB40u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30272));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EB40u) goto L_0882EB40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882EB40:
    aot_gpr_4 = (0u | 0u);
    goto L_0882EB44;
L_0882EB44:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), aot_gpr_16);
    goto L_0882EB4C;
L_0882EB4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882EB60;
      }
      goto L_0882EB54;
    }
L_0882EB54:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882EB60u);
    aot_gpr_5 = (0u | 0u);
    goto L_0882DFD0;
L_0882EB60:
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
L_0882EB78:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882EB80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[8] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_31 = (0x0882EBD8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EBD8u) goto L_0882EBD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882EBD8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0882EBE4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 652u, 0x0882EBE4u, 0x08AE22DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 603u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 603u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EBE4u) goto L_0882EBE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EBE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882EBF8;
      }
      goto L_0882EBF0;
    }
L_0882EBF0:
    aot_gpr_31 = (0x0882EBF8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EBF8u) goto L_0882EBF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882EBF8:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0882EC9C;
      }
      goto L_0882EC04;
    }
L_0882EC04:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882EC40;
      }
      goto L_0882EC0C;
    }
L_0882EC0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882EC20u);
    ctx.gpr[22] = (ctx.gpr[19] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 657u, 0x0882EC20u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EC20u) goto L_0882EC20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EC20:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882EC30u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EC30u) goto L_0882EC30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882EC30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882EC40;
      }
      goto L_0882EC38;
    }
L_0882EC38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0882EC40;
      }
      goto L_0882EC40;
    }
L_0882EC40:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882EC9C;
      }
      goto L_0882EC48;
    }
L_0882EC48:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0882EC7C;
      }
      goto L_0882EC50;
    }
L_0882EC50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882EC64u);
    ctx.gpr[21] = (ctx.gpr[19] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 663u, 0x0882EC64u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EC64u) goto L_0882EC64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EC64:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882EC74u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EC74u) goto L_0882EC74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882EC74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882EC84;
      }
      goto L_0882EC7C;
    }
L_0882EC7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882EC84;
      }
      goto L_0882EC84;
    }
L_0882EC84:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882EC9Cu);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 667u, 0x0882EC9Cu, 0x08AC5DF8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 520u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 520u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 520u, 0x08AC5DF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EC9Cu) goto L_0882EC9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EC9C:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882ECC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[8] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_31 = (0x0882ED1Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882ED1Cu) goto L_0882ED1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882ED1C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0882ED28u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 670u, 0x0882ED28u, 0x08AE22DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 603u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 603u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882ED28u) goto L_0882ED28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882ED28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882ED3C;
      }
      goto L_0882ED34;
    }
L_0882ED34:
    aot_gpr_31 = (0x0882ED3Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882ED3Cu) goto L_0882ED3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882ED3C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0882EDE0;
      }
      goto L_0882ED48;
    }
L_0882ED48:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882ED84;
      }
      goto L_0882ED50;
    }
L_0882ED50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882ED64u);
    ctx.gpr[22] = (ctx.gpr[19] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 675u, 0x0882ED64u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882ED64u) goto L_0882ED64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882ED64:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882ED74u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882ED74u) goto L_0882ED74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882ED74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882ED84;
      }
      goto L_0882ED7C;
    }
L_0882ED7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0882ED84;
      }
      goto L_0882ED84;
    }
L_0882ED84:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882EDE0;
      }
      goto L_0882ED8C;
    }
L_0882ED8C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0882EDC0;
      }
      goto L_0882ED94;
    }
L_0882ED94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882EDA8u);
    ctx.gpr[21] = (ctx.gpr[19] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 681u, 0x0882EDA8u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EDA8u) goto L_0882EDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EDA8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882EDB8u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EDB8u) goto L_0882EDB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882EDB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882EDC8;
      }
      goto L_0882EDC0;
    }
L_0882EDC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882EDC8;
      }
      goto L_0882EDC8;
    }
L_0882EDC8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882EDE0u);
    ctx.gpr[8] = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 685u, 0x0882EDE0u, 0x08AC5DF8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 520u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 520u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 520u, 0x08AC5DF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EDE0u) goto L_0882EDE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EDE0:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882EE08:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882EE10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_31 = (0x0882EE44u);
    aot_gpr_4 = (0u | 56u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 688u, 0x0882EE44u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EE44u) goto L_0882EE44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EE44:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0882EE60;
      }
      goto L_0882EE50;
    }
L_0882EE50:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0882EE5Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 690u, 0x0882EE5Cu, 0x08AE1B78u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 506u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 506u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 506u, 0x08AE1B78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EE5Cu) goto L_0882EE5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EE5C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0882EE60;
L_0882EE60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882EE8C;
      }
      goto L_0882EE70;
    }
L_0882EE70:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882EE84;
      }
      goto L_0882EE78;
    }
L_0882EE78:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_0882EE84;
L_0882EE84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_0882EF94;
      }
      goto L_0882EE8C;
    }
L_0882EE8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_0882EEC8;
      }
      goto L_0882EEB8;
    }
L_0882EEB8:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882EED4;
      }
      goto L_0882EEC8;
    }
L_0882EEC8:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
    goto L_0882EED4;
L_0882EED4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0882EF14;
      }
      goto L_0882EEDC;
    }
L_0882EEDC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_31 = (0x0882EEF0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 700u, 0x0882EEF0u, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EEF0u) goto L_0882EEF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EEF0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0882EF14;
      }
      goto L_0882EF00;
    }
L_0882EF00:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_31 = (0x0882EF0Cu);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EF0Cu) goto L_0882EF0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882EF0C:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_0882EF14;
L_0882EF14:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    ctx.gpr[19] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0882EF28;
      }
      goto L_0882EF20;
    }
L_0882EF20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0882EF44;
      }
      goto L_0882EF28;
    }
L_0882EF28:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[21] = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0882EF3Cu);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 706u, 0x0882EF3Cu, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EF3Cu) goto L_0882EF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EF3C:
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_0882EF44;
L_0882EF44:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_0882EF6C;
    }
    goto L_0882EF58;
L_0882EF58:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882EF58;
      }
      goto L_0882EF68;
    }
L_0882EF68:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_0882EF6C;
L_0882EF6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882EF80;
      }
      goto L_0882EF78;
    }
L_0882EF78:
    aot_gpr_31 = (0x0882EF80u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EF80u) goto L_0882EF80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882EF80:
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4);
    goto L_0882EF94;
L_0882EF94:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882EFBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_31 = (0x0882EFF0u);
    aot_gpr_4 = (0u | 56u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 715u, 0x0882EFF0u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882EFF0u) goto L_0882EFF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882EFF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0882F00C;
      }
      goto L_0882EFFC;
    }
L_0882EFFC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0882F008u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 717u, 0x0882F008u, 0x08AE1B78u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 506u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 506u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 506u, 0x08AE1B78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F008u) goto L_0882F008;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F008:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0882F00C;
L_0882F00C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882F038;
      }
      goto L_0882F01C;
    }
L_0882F01C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882F030;
      }
      goto L_0882F024;
    }
L_0882F024:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    goto L_0882F030;
L_0882F030:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
      if (branch_taken) {
          goto L_0882F140;
      }
      goto L_0882F038;
    }
L_0882F038:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_0882F074;
      }
      goto L_0882F064;
    }
L_0882F064:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882F080;
      }
      goto L_0882F074;
    }
L_0882F074:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_gpr_5 + ctx.gpr[17]);
    goto L_0882F080;
L_0882F080:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0882F0C0;
      }
      goto L_0882F088;
    }
L_0882F088:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_31 = (0x0882F09Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 727u, 0x0882F09Cu, 0x08ABE308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 474u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 474u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F09Cu) goto L_0882F09C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F09C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0882F0C0;
      }
      goto L_0882F0AC;
    }
L_0882F0AC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_31 = (0x0882F0B8u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F0B8u) goto L_0882F0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F0B8:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_0882F0C0;
L_0882F0C0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    ctx.gpr[19] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0882F0D4;
      }
      goto L_0882F0CC;
    }
L_0882F0CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0882F0F0;
      }
      goto L_0882F0D4;
    }
L_0882F0D4:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[21] = (aot_gpr_4 - aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0882F0E8u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0188.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 733u, 0x0882F0E8u, 0x08AF54A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0188_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0188_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F0E8u) goto L_0882F0E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F0E8:
    aot_gpr_5 = (ctx.gpr[2] + ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_0882F0F0;
L_0882F0F0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_0882F118;
    }
    goto L_0882F104;
L_0882F104:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882F104;
      }
      goto L_0882F114;
    }
L_0882F114:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_0882F118;
L_0882F118:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882F12C;
      }
      goto L_0882F124;
    }
L_0882F124:
    aot_gpr_31 = (0x0882F12Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F12Cu) goto L_0882F12C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F12C:
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), aot_gpr_4);
    goto L_0882F140;
L_0882F140:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882F168:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(42)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0882F1D4;
      }
      goto L_0882F180;
    }
L_0882F180:
    aot_gpr_31 = (0x0882F188u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E9B4;
L_0882F188:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882F1D4;
      }
      goto L_0882F190;
    }
L_0882F190:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(43)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882F1BC;
      }
      goto L_0882F19C;
    }
L_0882F19C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882F1A8u);
    aot_gpr_5 = (0u | 0u);
    goto L_0882DFD0;
L_0882F1A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882F1B4u);
    aot_gpr_5 = (0u | 1u);
    goto L_0882E9D8;
L_0882F1B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882F1D4;
      }
      goto L_0882F1BC;
    }
L_0882F1BC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882F1CCu);
    aot_gpr_5 = (0u | 0u);
    goto L_0882DFD0;
L_0882F1CC:
    aot_gpr_31 = (0x0882F1D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882DC20;
L_0882F1D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882F200;
      }
      goto L_0882F1E0;
    }
L_0882F1E0:
    aot_gpr_31 = (0x0882F1E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E9B4;
L_0882F1E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882F1FC;
      }
      goto L_0882F1F0;
    }
L_0882F1F0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882F1FCu);
    aot_gpr_5 = (0u | 0u);
    goto L_0882F210;
L_0882F1FC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_0882F200;
L_0882F200:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882F210:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1008));
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    ctx.gpr[19] = (0u | 1u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_31 = (0x0882F24Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 757u, 0x0882F24Cu, 0x08888058u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 7u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 7u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 7u, 0x08888058u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F24Cu) goto L_0882F24C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F24C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(141)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0882F268;
      }
      goto L_0882F260;
    }
L_0882F260:
    aot_gpr_31 = (0x0882F268u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0181.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 759u, 0x0882F268u, 0x08ADB9DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0181_entry(rt, ctx, 881u, aot_mem);
#else
        recomp_unit_0181_entry(rt, ctx, 881u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0181_entry, 181u, 881u, 0x08ADB9DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F268u) goto L_0882F268;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F268:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(41)));
      if (branch_taken) {
          goto L_0882F288;
      }
      goto L_0882F274;
    }
L_0882F274:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882F288;
      }
      goto L_0882F27C;
    }
L_0882F27C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0882F28C;
      }
      goto L_0882F288;
    }
L_0882F288:
    ctx.gpr[19] = (0u | 0u);
    goto L_0882F28C;
L_0882F28C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882F2A4;
      }
      goto L_0882F294;
    }
L_0882F294:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882F2A4;
      }
      goto L_0882F2A0;
    }
L_0882F2A0:
    ctx.gpr[19] = (0u | 1u);
    goto L_0882F2A4;
L_0882F2A4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0882F2E8;
      }
      goto L_0882F2AC;
    }
L_0882F2AC:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882F2C0u);
    aot_gpr_5 = (0u | 0u);
    goto L_0882EA18;
L_0882F2C0:
    aot_gpr_31 = (0x0882F2C8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 769u, 0x0882F2C8u, 0x08AD3204u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 540u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 540u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 540u, 0x08AD3204u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F2C8u) goto L_0882F2C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F2C8:
    aot_gpr_31 = (0x0882F2D0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 770u, 0x0882F2D0u, 0x08A11550u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 171u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 171u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 171u, 0x08A11550u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F2D0u) goto L_0882F2D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F2D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[20] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0882F2F0;
      }
      goto L_0882F2E0;
    }
L_0882F2E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0882F30C;
      }
      goto L_0882F2E8;
    }
L_0882F2E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882F6C4;
      }
      goto L_0882F2F0;
    }
L_0882F2F0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x0882F300u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_0882D794;
L_0882F300:
    aot_gpr_31 = (0x0882F308u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30272));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F308u) goto L_0882F308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F308:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_0882F30C;
L_0882F30C:
    aot_gpr_31 = (0x0882F314u);
    aot_gpr_5 = (0u | 0u);
    goto L_0882E9D8;
L_0882F314:
    aot_gpr_31 = (0x0882F31Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 778u, 0x0882F31Cu, 0x08A06D3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 704u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 704u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F31Cu) goto L_0882F31C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F31C:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(29552));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0882F340u);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0054.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 779u, 0x0882F340u, 0x088DFE80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0054_entry(rt, ctx, 525u, aot_mem);
#else
        recomp_unit_0054_entry(rt, ctx, 525u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F340u) goto L_0882F340;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F340:
    aot_gpr_31 = (0x0882F348u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 780u, 0x0882F348u, 0x08A06FE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F348u) goto L_0882F348;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F348:
    aot_gpr_31 = (0x0882F350u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 781u, 0x0882F350u, 0x08A06D3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 704u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 704u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F350u) goto L_0882F350;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F350:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0882F36Cu);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0054.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 782u, 0x0882F36Cu, 0x088DFE80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0054_entry(rt, ctx, 525u, aot_mem);
#else
        recomp_unit_0054_entry(rt, ctx, 525u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F36Cu) goto L_0882F36C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F36C:
    aot_gpr_31 = (0x0882F374u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 783u, 0x0882F374u, 0x08A06FE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F374u) goto L_0882F374;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F374:
    aot_gpr_31 = (0x0882F37Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 784u, 0x0882F37Cu, 0x08A06CBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 691u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 691u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 691u, 0x08A06CBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F37Cu) goto L_0882F37C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F37C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 480u);
    ctx.gpr[7] = (0u | 272u);
    aot_gpr_31 = (0x0882F394u);
    ctx.gpr[8] = (0u | 512u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 785u, 0x0882F394u, 0x08A069DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 664u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 664u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 664u, 0x08A069DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F394u) goto L_0882F394;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F394:
    aot_gpr_31 = (0x0882F39Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 786u, 0x0882F39Cu, 0x08A06D3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 704u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 704u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F39Cu) goto L_0882F39C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F39C:
    aot_gpr_4 = (17264u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_6 = (16896u << 16u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (49928u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (17152u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (17664u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (17664u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 >> 8u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (ctx.gpr[7] >> 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (17920u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (19456u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28928));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (19712u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30592));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[7] = (54272u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 & 1023u);
    aot_gpr_6 = (aot_gpr_6 << 10u);
    ctx.gpr[7] = (54528u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 & 1023u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[7] = (5376u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (aot_gpr_6 << 10u);
    ctx.gpr[7] = (5632u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x0882F4F4u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 787u, 0x0882F4F4u, 0x08A06FE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 723u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 723u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F4F4u) goto L_0882F4F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F4F4:
    aot_gpr_31 = (0x0882F4FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E670;
L_0882F4FC:
    aot_gpr_31 = (0x0882F504u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882DEF4;
L_0882F504:
    aot_gpr_31 = (0x0882F50Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E0C0;
L_0882F50C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0882F5B8;
      }
      goto L_0882F514;
    }
L_0882F514:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1399)));
    aot_gpr_5 = (0u | 110u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0882F538;
      }
      goto L_0882F530;
    }
L_0882F530:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_0882F538;
L_0882F538:
    aot_gpr_31 = (0x0882F540u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0033.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 794u, 0x0882F540u, 0x08888008u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0033_entry(rt, ctx, 2u, aot_mem);
#else
        recomp_unit_0033_entry(rt, ctx, 2u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0033_entry, 33u, 2u, 0x08888008u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F540u) goto L_0882F540;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F540:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0882F558;
      }
      goto L_0882F54C;
    }
L_0882F54C:
    aot_gpr_31 = (0x0882F554u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F554u) goto L_0882F554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F554:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0882F558;
L_0882F558:
    aot_gpr_31 = (0x0882F560u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 798u, 0x0882F560u, 0x089C6F60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 679u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 679u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F560u) goto L_0882F560;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F560:
    aot_gpr_4 = (0u | 9u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882F5B8;
      }
      goto L_0882F56C;
    }
L_0882F56C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882F584;
      }
      goto L_0882F578;
    }
L_0882F578:
    aot_gpr_31 = (0x0882F580u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F580u) goto L_0882F580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F580:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0882F584;
L_0882F584:
    aot_gpr_31 = (0x0882F58Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 803u, 0x0882F58Cu, 0x089C70C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 712u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 712u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F58Cu) goto L_0882F58C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F58C:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_0882F5B8;
      }
      goto L_0882F598;
    }
L_0882F598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882F5B0;
      }
      goto L_0882F5A4;
    }
L_0882F5A4:
    aot_gpr_31 = (0x0882F5ACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F5ACu) goto L_0882F5AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F5AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0882F5B0;
L_0882F5B0:
    aot_gpr_31 = (0x0882F5B8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0112.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 808u, 0x0882F5B8u, 0x089C6F68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0112_entry(rt, ctx, 680u, aot_mem);
#else
        recomp_unit_0112_entry(rt, ctx, 680u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 680u, 0x089C6F68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F5B8u) goto L_0882F5B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F5B8:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 170u);
    aot_gpr_31 = (0x0882F5CCu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 809u, 0x0882F5CCu, 0x08A062F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 553u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 553u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F5CCu) goto L_0882F5CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F5CC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882F5D8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 810u, 0x0882F5D8u, 0x08A063CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 565u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 565u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F5D8u) goto L_0882F5D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F5D8:
    aot_gpr_31 = (0x0882F5E0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 811u, 0x0882F5E0u, 0x08A05EFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 495u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 495u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A05EFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F5E0u) goto L_0882F5E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F5E0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7702)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_gpr_31 = (0x0882F5F4u);
    aot_gpr_5 = (0u | 127u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0001.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 812u, 0x0882F5F4u, 0x0880A6ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0001_entry(rt, ctx, 556u, aot_mem);
#else
        recomp_unit_0001_entry(rt, ctx, 556u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 556u, 0x0880A6ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F5F4u) goto L_0882F5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F5F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882F608;
      }
      goto L_0882F600;
    }
L_0882F600:
    aot_gpr_31 = (0x0882F608u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F608u) goto L_0882F608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F608:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6851), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882F6A4;
      }
      goto L_0882F620;
    }
L_0882F620:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0882F62Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882F6E8;
L_0882F62C:
    aot_gpr_31 = (0x0882F634u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E98C;
L_0882F634:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (0x0882F640u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30064));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 818u, 0x0882F640u, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F640u) goto L_0882F640;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882F65C;
      }
      goto L_0882F648;
    }
L_0882F648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (0x0882F654u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30052));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 820u, 0x0882F654u, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F654u) goto L_0882F654;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F654:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882F69C;
      }
      goto L_0882F65C;
    }
L_0882F65C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882F668u);
    aot_gpr_5 = (0u | 1u);
    goto L_0882EE08;
L_0882F668:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30028));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x0882F67Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F67Cu) goto L_0882F67C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F67C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882F688u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 824u, 0x0882F688u, 0x08AE2634u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 641u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 641u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 641u, 0x08AE2634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F688u) goto L_0882F688;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F688:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882F69C;
      }
      goto L_0882F694;
    }
L_0882F694:
    aot_gpr_31 = (0x0882F69Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F69Cu) goto L_0882F69C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F69C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_0882F6C0;
      }
      goto L_0882F6A4;
    }
L_0882F6A4:
    aot_gpr_31 = (0x0882F6ACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 828u, 0x0882F6ACu, 0x08AE25E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 638u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 638u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 638u, 0x08AE25E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F6ACu) goto L_0882F6AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F6AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882F6B8u);
    aot_gpr_5 = (0u | 0u);
    goto L_0882EE08;
L_0882F6B8:
    aot_gpr_31 = (0x0882F6C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882E980;
L_0882F6C0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_0882F6C4;
L_0882F6C4:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
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
L_0882F6E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_16);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0882F730;
      }
      goto L_0882F710;
    }
L_0882F710:
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882F720u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18184));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 834u, 0x0882F720u, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F720u) goto L_0882F720;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F720:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0882F73C;
      }
      goto L_0882F728;
    }
L_0882F728:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882F89C;
      }
      goto L_0882F730;
    }
L_0882F730:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0882FC84;
      }
      goto L_0882F73C;
    }
L_0882F73C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882F748u);
    aot_gpr_5 = (0u | 5u);
    goto L_0882EB78;
L_0882F748:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30008));
    aot_gpr_31 = (0x0882F754u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882F6E8;
L_0882F754:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(28))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0882F77Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F77Cu) goto L_0882F77C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F77C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882F788u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 841u, 0x0882F788u, 0x08AE22DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 603u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 603u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F788u) goto L_0882F788;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F788:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882F79C;
      }
      goto L_0882F794;
    }
L_0882F794:
    aot_gpr_31 = (0x0882F79Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F79Cu) goto L_0882F79C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F79C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0882F894;
      }
      goto L_0882F7A4;
    }
L_0882F7A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882F7E0;
      }
      goto L_0882F7AC;
    }
L_0882F7AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882F7C0u);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 846u, 0x0882F7C0u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F7C0u) goto L_0882F7C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F7C0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882F7D0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F7D0u) goto L_0882F7D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F7D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882F7E0;
      }
      goto L_0882F7D8;
    }
L_0882F7D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882F7E0;
      }
      goto L_0882F7E0;
    }
L_0882F7E0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882F894;
      }
      goto L_0882F7E8;
    }
L_0882F7E8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0882F81C;
      }
      goto L_0882F7F0;
    }
L_0882F7F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882F804u);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 852u, 0x0882F804u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F804u) goto L_0882F804;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F804:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882F814u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F814u) goto L_0882F814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F814:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882F824;
      }
      goto L_0882F81C;
    }
L_0882F81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F824;
      }
      goto L_0882F824;
    }
L_0882F824:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882F830u);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 856u, 0x0882F830u, 0x08AC6068u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 554u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 554u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 554u, 0x08AC6068u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F830u) goto L_0882F830;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F830:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_31 = (0x0882F844u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F844u) goto L_0882F844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F844:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    aot_gpr_31 = (0x0882F858u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F858u) goto L_0882F858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F858:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882F86Cu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882F86C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    if (aot_gpr_16 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
        goto L_0882F884;
    }
    goto L_0882F878;
L_0882F878:
    aot_gpr_31 = (0x0882F880u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F880u) goto L_0882F880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F880:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    goto L_0882F884;
L_0882F884:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882F894;
      }
      goto L_0882F88C;
    }
L_0882F88C:
    aot_gpr_31 = (0x0882F894u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F894u) goto L_0882F894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F894:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882FC84;
      }
      goto L_0882F89C;
    }
L_0882F89C:
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882F8ACu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18204));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 866u, 0x0882F8ACu, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F8ACu) goto L_0882F8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F8AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882FA14;
      }
      goto L_0882F8B4;
    }
L_0882F8B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882F8C0u);
    aot_gpr_5 = (0u | 6u);
    goto L_0882EB78;
L_0882F8C0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30008));
    aot_gpr_31 = (0x0882F8CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882F6E8;
L_0882F8CC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(28))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(60));
    aot_gpr_31 = (0x0882F8F4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F8F4u) goto L_0882F8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F8F4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882F900u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 871u, 0x0882F900u, 0x08AE22DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 603u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 603u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F900u) goto L_0882F900;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F900:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882F914;
      }
      goto L_0882F90C;
    }
L_0882F90C:
    aot_gpr_31 = (0x0882F914u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F914u) goto L_0882F914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F914:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0882FA0C;
      }
      goto L_0882F91C;
    }
L_0882F91C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882F958;
      }
      goto L_0882F924;
    }
L_0882F924:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882F938u);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 876u, 0x0882F938u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F938u) goto L_0882F938;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F938:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882F948u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F948u) goto L_0882F948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F948:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882F958;
      }
      goto L_0882F950;
    }
L_0882F950:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882F958;
      }
      goto L_0882F958;
    }
L_0882F958:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882FA0C;
      }
      goto L_0882F960;
    }
L_0882F960:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0882F994;
      }
      goto L_0882F968;
    }
L_0882F968:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882F97Cu);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 882u, 0x0882F97Cu, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F97Cu) goto L_0882F97C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F97C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882F98Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F98Cu) goto L_0882F98C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F98C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882F99C;
      }
      goto L_0882F994;
    }
L_0882F994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F99C;
      }
      goto L_0882F99C;
    }
L_0882F99C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882F9A8u);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 886u, 0x0882F9A8u, 0x08AC6068u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 554u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 554u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 554u, 0x08AC6068u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F9A8u) goto L_0882F9A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882F9A8:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(76));
    aot_gpr_31 = (0x0882F9BCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F9BCu) goto L_0882F9BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F9BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(92));
    aot_gpr_31 = (0x0882F9D0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F9D0u) goto L_0882F9D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F9D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882F9E4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882F9E4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    if (aot_gpr_16 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        goto L_0882F9FC;
    }
    goto L_0882F9F0;
L_0882F9F0:
    aot_gpr_31 = (0x0882F9F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882F9F8u) goto L_0882F9F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882F9F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    goto L_0882F9FC;
L_0882F9FC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882FA0C;
      }
      goto L_0882FA04;
    }
L_0882FA04:
    aot_gpr_31 = (0x0882FA0Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FA0Cu) goto L_0882FA0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FA0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882FC84;
      }
      goto L_0882FA14;
    }
L_0882FA14:
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882FA24u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18224));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 896u, 0x0882FA24u, 0x08B582CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 56u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 56u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FA24u) goto L_0882FA24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FA24:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
        goto L_0882FBEC;
    }
    goto L_0882FA2C;
L_0882FA2C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882FA38u);
    aot_gpr_5 = (0u | 7u);
    goto L_0882EB78;
L_0882FA38:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30008));
    aot_gpr_31 = (0x0882FA44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0882F6E8;
L_0882FA44:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(28))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(108));
    aot_gpr_31 = (0x0882FA6Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FA6Cu) goto L_0882FA6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FA6C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882FA78u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 901u, 0x0882FA78u, 0x08AE22DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 603u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 603u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FA78u) goto L_0882FA78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FA78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882FA8C;
      }
      goto L_0882FA84;
    }
L_0882FA84:
    aot_gpr_31 = (0x0882FA8Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FA8Cu) goto L_0882FA8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FA8C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0882FBE4;
      }
      goto L_0882FA94;
    }
L_0882FA94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882FAD0;
      }
      goto L_0882FA9C;
    }
L_0882FA9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882FAB0u);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 906u, 0x0882FAB0u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FAB0u) goto L_0882FAB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FAB0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882FAC0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FAC0u) goto L_0882FAC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FAC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882FAD0;
      }
      goto L_0882FAC8;
    }
L_0882FAC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882FAD0;
      }
      goto L_0882FAD0;
    }
L_0882FAD0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882FBE4;
      }
      goto L_0882FAD8;
    }
L_0882FAD8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0882FB0C;
      }
      goto L_0882FAE0;
    }
L_0882FAE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882FAF4u);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 912u, 0x0882FAF4u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FAF4u) goto L_0882FAF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FAF4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882FB04u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FB04u) goto L_0882FB04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FB04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0882FB14;
      }
      goto L_0882FB0C;
    }
L_0882FB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882FB14;
      }
      goto L_0882FB14;
    }
L_0882FB14:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882FB20u);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 916u, 0x0882FB20u, 0x08AC6068u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 554u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 554u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 554u, 0x08AC6068u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FB20u) goto L_0882FB20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FB20:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(124));
    aot_gpr_31 = (0x0882FB34u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FB34u) goto L_0882FB34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FB34:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(140));
    aot_gpr_31 = (0x0882FB48u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FB48u) goto L_0882FB48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FB48:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 19u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882FB5Cu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882FB5C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    if (ctx.gpr[17] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
        goto L_0882FB74;
    }
    goto L_0882FB68;
L_0882FB68:
    aot_gpr_31 = (0x0882FB70u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FB70u) goto L_0882FB70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FB70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    goto L_0882FB74;
L_0882FB74:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882FB84;
      }
      goto L_0882FB7C;
    }
L_0882FB7C:
    aot_gpr_31 = (0x0882FB84u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FB84u) goto L_0882FB84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FB84:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-29992));
    aot_gpr_31 = (0x0882FB94u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(140));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FB94u) goto L_0882FB94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FB94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    aot_gpr_31 = (0x0882FBA8u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(124));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FBA8u) goto L_0882FBA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FBA8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882FBBCu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882FBBC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    if (aot_gpr_16 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
        goto L_0882FBD4;
    }
    goto L_0882FBC8;
L_0882FBC8:
    aot_gpr_31 = (0x0882FBD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FBD0u) goto L_0882FBD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FBD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    goto L_0882FBD4;
L_0882FBD4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882FBE4;
      }
      goto L_0882FBDC;
    }
L_0882FBDC:
    aot_gpr_31 = (0x0882FBE4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FBE4u) goto L_0882FBE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FBE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882FC84;
      }
      goto L_0882FBEC;
    }
L_0882FBEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882FC7C;
      }
      goto L_0882FC14;
    }
L_0882FC14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882FC30u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0213.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 935u, 0x0882FC30u, 0x08B58180u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0213_entry(rt, ctx, 31u, aot_mem);
#else
        recomp_unit_0213_entry(rt, ctx, 31u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FC30u) goto L_0882FC30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FC30:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
        goto L_0882FC54;
    }
    goto L_0882FC38;
L_0882FC38:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_31 = (0x0882FC44u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 937u, 0x0882FC44u, 0x08AE25E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 638u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 638u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 638u, 0x08AE25E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FC44u) goto L_0882FC44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FC44:
    aot_gpr_31 = (0x0882FC4Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 938u, 0x0882FC4Cu, 0x08AE2438u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 623u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 623u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 623u, 0x08AE2438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FC4Cu) goto L_0882FC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FC4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0882FC84;
      }
      goto L_0882FC54;
    }
L_0882FC54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0882FC14;
      }
      goto L_0882FC7C;
    }
L_0882FC7C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0882FC84;
L_0882FC84:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0882FCA0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_run_words); }
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words); }
    aot_gpr_31 = (0x0882FCE0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_0882EB78;
L_0882FCE0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30072));
    aot_gpr_31 = (0x0882FCECu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_0882E880;
L_0882FCEC:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30028));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0882FD04u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FD04u) goto L_0882FD04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FD04:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882FD10u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 946u, 0x0882FD10u, 0x08AE23A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 612u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 612u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 612u, 0x08AE23A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FD10u) goto L_0882FD10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FD10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882FD24;
      }
      goto L_0882FD1C;
    }
L_0882FD1C:
    aot_gpr_31 = (0x0882FD24u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FD24u) goto L_0882FD24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FD24:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30052));
    aot_gpr_31 = (0x0882FD30u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_0882F6E8;
L_0882FD30:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(28))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882FD58u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(18164));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FD58u) goto L_0882FD58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FD58:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0882FD64u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0183.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 951u, 0x0882FD64u, 0x08AE22DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0183_entry(rt, ctx, 603u, aot_mem);
#else
        recomp_unit_0183_entry(rt, ctx, 603u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FD64u) goto L_0882FD64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FD64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882FD78;
      }
      goto L_0882FD70;
    }
L_0882FD70:
    aot_gpr_31 = (0x0882FD78u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FD78u) goto L_0882FD78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FD78:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 24u, 0x08830114u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0882FD84;
    }
L_0882FD84:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882FDC0;
      }
      goto L_0882FD8C;
    }
L_0882FD8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882FDA0u);
    ctx.gpr[20] = (aot_gpr_16 + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 956u, 0x0882FDA0u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FDA0u) goto L_0882FDA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FDA0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882FDB0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FDB0u) goto L_0882FDB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FDB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0882FDC0;
      }
      goto L_0882FDB8;
    }
L_0882FDB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0882FDC0;
      }
      goto L_0882FDC0;
    }
L_0882FDC0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 24u, 0x08830114u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0882FDC8;
    }
L_0882FDC8:
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30064));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0882FE24;
      }
      goto L_0882FDE4;
    }
L_0882FDE4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882FE00u);
    ctx.gpr[18] = (aot_gpr_16 + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 962u, 0x0882FE00u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FE00u) goto L_0882FE00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FE00:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882FE10u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FE10u) goto L_0882FE10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FE10:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_0882FE24;
      }
      goto L_0882FE1C;
    }
L_0882FE1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0882FE28;
      }
      goto L_0882FE24;
    }
L_0882FE24:
    aot_gpr_4 = (0u | 0u);
    goto L_0882FE28;
L_0882FE28:
    aot_gpr_31 = (0x0882FE30u);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 967u, 0x0882FE30u, 0x08AC6068u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 554u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 554u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 554u, 0x08AC6068u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FE30u) goto L_0882FE30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FE30:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0882FE68;
      }
      goto L_0882FE38;
    }
L_0882FE38:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0882FE50u);
    ctx.gpr[20] = (aot_gpr_16 + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 969u, 0x0882FE50u, 0x08AC5950u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 463u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 463u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FE50u) goto L_0882FE50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FE50:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0882FE60u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FE60u) goto L_0882FE60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FE60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_0882FE70;
      }
      goto L_0882FE68;
    }
L_0882FE68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_0882FE70;
      }
      goto L_0882FE70;
    }
L_0882FE70:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882FE7Cu);
    aot_gpr_5 = (0u | 5u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 973u, 0x0882FE7Cu, 0x08AC6068u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 554u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 554u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 554u, 0x08AC6068u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FE7Cu) goto L_0882FE7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FE7C:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0882FE8Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FE8Cu) goto L_0882FE8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FE8C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882FEA0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FEA0u) goto L_0882FEA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FEA0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882FEB4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882FEB4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    if (aot_gpr_16 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
        goto L_0882FECC;
    }
    goto L_0882FEC0;
L_0882FEC0:
    aot_gpr_31 = (0x0882FEC8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FEC8u) goto L_0882FEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FEC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    goto L_0882FECC;
L_0882FECC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882FEDC;
      }
      goto L_0882FED4;
    }
L_0882FED4:
    aot_gpr_31 = (0x0882FEDCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FEDCu) goto L_0882FEDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FEDC:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0882FEECu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FEECu) goto L_0882FEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FEEC:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882FF00u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FF00u) goto L_0882FF00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FF00:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0882FF14u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882ECC4;
L_0882FF14:
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[30] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
        goto L_0882FF2C;
    }
    goto L_0882FF20;
L_0882FF20:
    aot_gpr_31 = (0x0882FF28u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FF28u) goto L_0882FF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FF28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    goto L_0882FF2C;
L_0882FF2C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882FF3C;
      }
      goto L_0882FF34;
    }
L_0882FF34:
    aot_gpr_31 = (0x0882FF3Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FF3Cu) goto L_0882FF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FF3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
        goto L_0882FF54;
    }
    goto L_0882FF48;
L_0882FF48:
    aot_gpr_31 = (0x0882FF50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FF50u) goto L_0882FF50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FF50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    goto L_0882FF54;
L_0882FF54:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30360));
    aot_gpr_31 = (0x0882FF60u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30352));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0010->0027.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0010_entry, 993u, 0x0882FF60u, 0x08873D30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0027_entry(rt, ctx, 896u, aot_mem);
#else
        recomp_unit_0027_entry(rt, ctx, 896u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FF60u) goto L_0882FF60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0882FF60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 8u, 0x08830044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0882FF6C;
    }
L_0882FF6C:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(60));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882FF84u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FF84u) goto L_0882FF84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FF84:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(76));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882FFA0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FFA0u) goto L_0882FFA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FFA0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 5u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0882FFB4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882FFB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
        goto L_0882FFCC;
    }
    goto L_0882FFC0;
L_0882FFC0:
    aot_gpr_31 = (0x0882FFC8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FFC8u) goto L_0882FFC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FFC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    goto L_0882FFCC;
L_0882FFCC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0882FFDC;
      }
      goto L_0882FFD4;
    }
L_0882FFD4:
    aot_gpr_31 = (0x0882FFDCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FFDCu) goto L_0882FFDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FFDC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0882FFECu);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0882FFECu) goto L_0882FFEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0882FFEC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08830000u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }());
    AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0010(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0010_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_10(Runtime &runtime) {
    runtime.register_generated_unit(10u, 0x0882C000u, 16384u, &recomp_unit_0010, &recomp_unit_0010_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x0882C000u, &recomp_unit_0010, "recomp_unit_0010",
                                          kEntryMasks_recomp_unit_0010, 64u);
}
} // namespace psprecomp
