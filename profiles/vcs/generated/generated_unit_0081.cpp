#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0081[64] = {
    0x80818002240501A5ull, 0x3054804104102022ull, 0x40020A8A55120211ull, 0x08A02AA02AC21400ull,
    0x04100710A22A2418ull, 0x4445100084AA4404ull, 0x1084A94813144511ull, 0x0081096510429AA0ull,
    0x2810825100820088ull, 0x2088500080101100ull, 0x1592244950410108ull, 0x6C40050002200010ull,
    0x0028422811104544ull, 0x54898A0000000002ull, 0xAA50000442000802ull, 0x401AA52555300800ull,
    0x4400C80852214528ull, 0x020240400D528329ull, 0x4505220444444410ull, 0x4510250822288128ull,
    0x1021001450010912ull, 0x2100420A0A810480ull, 0x20008AA900815480ull, 0x1100140020008800ull,
    0x0089528524A51711ull, 0x5010480048104410ull, 0x04011A8904004204ull, 0x0208248100235080ull,
    0x8224040D10000415ull, 0x895040011C040200ull, 0x0000000020002122ull, 0x0502044522124480ull,
    0x0001210000000090ull, 0x1000540800B42050ull, 0x0A00101204004020ull, 0x4809100400249500ull,
    0x10148000024010C2ull, 0x952264A912948000ull, 0x1111120002011080ull, 0x2A00A502A8012421ull,
    0x1580100440488020ull, 0x70060404140A0820ull, 0x089022AAAA40A880ull, 0x002A610801202080ull,
    0x015A402A19500404ull, 0x094A242511109569ull, 0xA0548A114242222Aull, 0x00809518508060A0ull,
    0x9128A41401548A4Aull, 0xA552A52000AA8082ull, 0x129554222A88204Aull, 0x2B9254B001220008ull,
    0x4A94457925724BC9ull, 0xE010080402022010ull, 0x554A889004444522ull, 0x4448888A52082A8Aull,
    0x90528A922A500802ull, 0x4C550A088102444Aull, 0xA440004008005402ull, 0x8881004102A22202ull,
    0x208A010102140280ull, 0x2112000001944A91ull, 0x200028A2009AAA42ull, 0x9084211001505000ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0081[64] = {
    1u, 15u, 28u, 44u, 60u, 76u, 91u, 110u, 127u, 139u, 148u, 165u, 175u, 189u, 199u, 210u,
    228u, 244u, 260u, 275u, 291u, 303u, 315u, 329u, 336u, 357u, 368u, 380u, 392u, 405u, 417u, 422u,
    436u, 441u, 453u, 461u, 473u, 483u, 502u, 512u, 528u, 539u, 552u, 570u, 581u, 597u, 618u, 637u,
    651u, 671u, 690u, 710u, 727u, 756u, 766u, 785u, 804u, 822u, 840u, 850u, 863u, 874u, 888u, 904u,
};
void recomp_unit_0081_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,16,31,6,29 fprs=12,13,20,14 gpr_occ=4286 fpr_occ=956 gpr_total=5194 fpr_total=1157
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[16] = aot_gpr_16; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08948000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0081[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0081[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08948000;
    case 2u: goto L_08948008;
    case 3u: goto L_08948014;
    case 4u: goto L_0894801C;
    case 5u: goto L_08948020;
    case 6u: goto L_08948040;
    case 7u: goto L_08948048;
    case 8u: goto L_08948068;
    case 9u: goto L_08948074;
    case 10u: goto L_08948084;
    case 11u: goto L_089480BC;
    case 12u: goto L_089480C0;
    case 13u: goto L_089480DC;
    case 14u: goto L_089480FC;
    case 15u: goto L_08948104;
    case 16u: goto L_08948114;
    case 17u: goto L_08948134;
    case 18u: goto L_08948150;
    case 19u: goto L_08948168;
    case 20u: goto L_08948180;
    case 21u: goto L_08948198;
    case 22u: goto L_089481BC;
    case 23u: goto L_089481C8;
    case 24u: goto L_089481D0;
    case 25u: goto L_089481D8;
    case 26u: goto L_089481F0;
    case 27u: goto L_089481F4;
    case 28u: goto L_08948200;
    case 29u: goto L_08948210;
    case 30u: goto L_08948224;
    case 31u: goto L_08948244;
    case 32u: goto L_08948250;
    case 33u: goto L_08948260;
    case 34u: goto L_08948268;
    case 35u: goto L_08948270;
    case 36u: goto L_08948278;
    case 37u: goto L_08948284;
    case 38u: goto L_0894828C;
    case 39u: goto L_0894829C;
    case 40u: goto L_089482A4;
    case 41u: goto L_089482AC;
    case 42u: goto L_089482C4;
    case 43u: goto L_089482F8;
    case 44u: goto L_08948328;
    case 45u: goto L_08948330;
    case 46u: goto L_08948344;
    case 47u: goto L_08948358;
    case 48u: goto L_0894835C;
    case 49u: goto L_08948364;
    case 50u: goto L_0894836C;
    case 51u: goto L_08948374;
    case 52u: goto L_08948394;
    case 53u: goto L_0894839C;
    case 54u: goto L_089483A4;
    case 55u: goto L_089483AC;
    case 56u: goto L_089483B4;
    case 57u: goto L_089483D4;
    case 58u: goto L_089483DC;
    case 59u: goto L_089483EC;
    case 60u: goto L_0894840C;
    case 61u: goto L_08948410;
    case 62u: goto L_08948428;
    case 63u: goto L_08948434;
    case 64u: goto L_08948444;
    case 65u: goto L_0894844C;
    case 66u: goto L_08948454;
    case 67u: goto L_08948464;
    case 68u: goto L_08948474;
    case 69u: goto L_0894847C;
    case 70u: goto L_08948490;
    case 71u: goto L_089484A0;
    case 72u: goto L_089484A4;
    case 73u: goto L_089484A8;
    case 74u: goto L_089484D0;
    case 75u: goto L_089484E8;
    case 76u: goto L_08948508;
    case 77u: goto L_08948528;
    case 78u: goto L_08948538;
    case 79u: goto L_08948544;
    case 80u: goto L_0894854C;
    case 81u: goto L_08948554;
    case 82u: goto L_0894855C;
    case 83u: goto L_08948568;
    case 84u: goto L_0894857C;
    case 85u: goto L_089485B0;
    case 86u: goto L_089485C0;
    case 87u: goto L_089485C8;
    case 88u: goto L_089485D8;
    case 89u: goto L_089485E8;
    case 90u: goto L_089485F8;
    case 91u: goto L_08948600;
    case 92u: goto L_08948610;
    case 93u: goto L_08948620;
    case 94u: goto L_08948628;
    case 95u: goto L_08948638;
    case 96u: goto L_08948648;
    case 97u: goto L_08948650;
    case 98u: goto L_08948660;
    case 99u: goto L_08948664;
    case 100u: goto L_08948670;
    case 101u: goto L_0894868C;
    case 102u: goto L_08948698;
    case 103u: goto L_089486A0;
    case 104u: goto L_089486AC;
    case 105u: goto L_089486B4;
    case 106u: goto L_089486BC;
    case 107u: goto L_089486C8;
    case 108u: goto L_089486DC;
    case 109u: goto L_089486F0;
    case 110u: goto L_08948714;
    case 111u: goto L_0894871C;
    case 112u: goto L_08948724;
    case 113u: goto L_0894872C;
    case 114u: goto L_08948730;
    case 115u: goto L_0894873C;
    case 116u: goto L_08948744;
    case 117u: goto L_08948758;
    case 118u: goto L_08948770;
    case 119u: goto L_08948780;
    case 120u: goto L_08948788;
    case 121u: goto L_08948794;
    case 122u: goto L_08948798;
    case 123u: goto L_089487A0;
    case 124u: goto L_089487AC;
    case 125u: goto L_089487C0;
    case 126u: goto L_089487DC;
    case 127u: goto L_0894880C;
    case 128u: goto L_0894881C;
    case 129u: goto L_08948844;
    case 130u: goto L_0894885C;
    case 131u: goto L_08948880;
    case 132u: goto L_08948890;
    case 133u: goto L_08948898;
    case 134u: goto L_089488A4;
    case 135u: goto L_089488BC;
    case 136u: goto L_089488D0;
    case 137u: goto L_089488EC;
    case 138u: goto L_089488F4;
    case 139u: goto L_08948920;
    case 140u: goto L_08948930;
    case 141u: goto L_08948950;
    case 142u: goto L_0894897C;
    case 143u: goto L_089489B0;
    case 144u: goto L_089489B8;
    case 145u: goto L_089489CC;
    case 146u: goto L_089489DC;
    case 147u: goto L_089489F4;
    case 148u: goto L_08948A0C;
    case 149u: goto L_08948A20;
    case 150u: goto L_08948A40;
    case 151u: goto L_08948A58;
    case 152u: goto L_08948A70;
    case 153u: goto L_08948A78;
    case 154u: goto L_08948A80;
    case 155u: goto L_08948A8C;
    case 156u: goto L_08948A98;
    case 157u: goto L_08948AA8;
    case 158u: goto L_08948AB4;
    case 159u: goto L_08948AC4;
    case 160u: goto L_08948AD0;
    case 161u: goto L_08948ADC;
    case 162u: goto L_08948AE0;
    case 163u: goto L_08948AE8;
    case 164u: goto L_08948AF0;
    case 165u: goto L_08948B10;
    case 166u: goto L_08948B54;
    case 167u: goto L_08948B64;
    case 168u: goto L_08948BA0;
    case 169u: goto L_08948BA8;
    case 170u: goto L_08948BD8;
    case 171u: goto L_08948BE8;
    case 172u: goto L_08948BEC;
    case 173u: goto L_08948BF4;
    case 174u: goto L_08948BF8;
    case 175u: goto L_08948C08;
    case 176u: goto L_08948C18;
    case 177u: goto L_08948C20;
    case 178u: goto L_08948C28;
    case 179u: goto L_08948C38;
    case 180u: goto L_08948C50;
    case 181u: goto L_08948C60;
    case 182u: goto L_08948C70;
    case 183u: goto L_08948C8C;
    case 184u: goto L_08948C94;
    case 185u: goto L_08948CA4;
    case 186u: goto L_08948CB8;
    case 187u: goto L_08948CCC;
    case 188u: goto L_08948CD4;
    case 189u: goto L_08948D04;
    case 190u: goto L_08948DA4;
    case 191u: goto L_08948DAC;
    case 192u: goto L_08948DBC;
    case 193u: goto L_08948DC0;
    case 194u: goto L_08948DCC;
    case 195u: goto L_08948DDC;
    case 196u: goto L_08948DE8;
    case 197u: goto L_08948DF0;
    case 198u: goto L_08948DF8;
    case 199u: goto L_08948E04;
    case 200u: goto L_08948E2C;
    case 201u: goto L_08948E64;
    case 202u: goto L_08948E78;
    case 203u: goto L_08948E88;
    case 204u: goto L_08948ED0;
    case 205u: goto L_08948ED8;
    case 206u: goto L_08948EE4;
    case 207u: goto L_08948EEC;
    case 208u: goto L_08948EF4;
    case 209u: goto L_08948EFC;
    case 210u: goto L_08948F2C;
    case 211u: goto L_08948F50;
    case 212u: goto L_08948F54;
    case 213u: goto L_08948F60;
    case 214u: goto L_08948F68;
    case 215u: goto L_08948F70;
    case 216u: goto L_08948F78;
    case 217u: goto L_08948F80;
    case 218u: goto L_08948F88;
    case 219u: goto L_08948F94;
    case 220u: goto L_08948FA0;
    case 221u: goto L_08948FA8;
    case 222u: goto L_08948FB4;
    case 223u: goto L_08948FBC;
    case 224u: goto L_08948FC4;
    case 225u: goto L_08948FCC;
    case 226u: goto L_08948FD0;
    case 227u: goto L_08948FF8;
    case 228u: goto L_0894900C;
    case 229u: goto L_08949014;
    case 230u: goto L_08949020;
    case 231u: goto L_08949028;
    case 232u: goto L_08949038;
    case 233u: goto L_08949040;
    case 234u: goto L_08949054;
    case 235u: goto L_08949064;
    case 236u: goto L_08949070;
    case 237u: goto L_08949078;
    case 238u: goto L_0894908C;
    case 239u: goto L_089490AC;
    case 240u: goto L_089490B8;
    case 241u: goto L_089490BC;
    case 242u: goto L_089490E8;
    case 243u: goto L_089490F8;
    case 244u: goto L_08949100;
    case 245u: goto L_0894910C;
    case 246u: goto L_08949114;
    case 247u: goto L_08949120;
    case 248u: goto L_08949124;
    case 249u: goto L_0894913C;
    case 250u: goto L_08949144;
    case 251u: goto L_08949150;
    case 252u: goto L_08949158;
    case 253u: goto L_08949160;
    case 254u: goto L_08949168;
    case 255u: goto L_0894916C;
    case 256u: goto L_08949198;
    case 257u: goto L_089491B8;
    case 258u: goto L_089491C4;
    case 259u: goto L_089491E4;
    case 260u: goto L_08949210;
    case 261u: goto L_08949228;
    case 262u: goto L_08949238;
    case 263u: goto L_08949248;
    case 264u: goto L_08949258;
    case 265u: goto L_08949268;
    case 266u: goto L_08949278;
    case 267u: goto L_08949288;
    case 268u: goto L_089492A4;
    case 269u: goto L_089492B4;
    case 270u: goto L_089492C0;
    case 271u: goto L_089492C8;
    case 272u: goto L_089492E0;
    case 273u: goto L_089492E8;
    case 274u: goto L_089492F8;
    case 275u: goto L_0894930C;
    case 276u: goto L_08949314;
    case 277u: goto L_08949320;
    case 278u: goto L_0894933C;
    case 279u: goto L_0894934C;
    case 280u: goto L_08949354;
    case 281u: goto L_08949364;
    case 282u: goto L_08949374;
    case 283u: goto L_0894938C;
    case 284u: goto L_089493A0;
    case 285u: goto L_089493A8;
    case 286u: goto L_089493B4;
    case 287u: goto L_089493D0;
    case 288u: goto L_089493E0;
    case 289u: goto L_089493E8;
    case 290u: goto L_089493F8;
    case 291u: goto L_08949404;
    case 292u: goto L_08949410;
    case 293u: goto L_08949420;
    case 294u: goto L_0894942C;
    case 295u: goto L_08949440;
    case 296u: goto L_08949470;
    case 297u: goto L_08949478;
    case 298u: goto L_08949488;
    case 299u: goto L_08949490;
    case 300u: goto L_089494C0;
    case 301u: goto L_089494D4;
    case 302u: goto L_089494F0;
    case 303u: goto L_0894951C;
    case 304u: goto L_08949528;
    case 305u: goto L_08949540;
    case 306u: goto L_0894955C;
    case 307u: goto L_08949564;
    case 308u: goto L_0894956C;
    case 309u: goto L_08949584;
    case 310u: goto L_0894958C;
    case 311u: goto L_089495A4;
    case 312u: goto L_089495B8;
    case 313u: goto L_089495E0;
    case 314u: goto L_089495F4;
    case 315u: goto L_0894961C;
    case 316u: goto L_08949628;
    case 317u: goto L_08949630;
    case 318u: goto L_08949638;
    case 319u: goto L_08949640;
    case 320u: goto L_0894965C;
    case 321u: goto L_08949680;
    case 322u: goto L_0894968C;
    case 323u: goto L_08949694;
    case 324u: goto L_0894969C;
    case 325u: goto L_089496A4;
    case 326u: goto L_089496AC;
    case 327u: goto L_089496BC;
    case 328u: goto L_089496F4;
    case 329u: goto L_0894972C;
    case 330u: goto L_0894973C;
    case 331u: goto L_08949774;
    case 332u: goto L_089497A8;
    case 333u: goto L_089497B0;
    case 334u: goto L_089497E0;
    case 335u: goto L_089497F0;
    case 336u: goto L_08949800;
    case 337u: goto L_08949810;
    case 338u: goto L_08949820;
    case 339u: goto L_08949824;
    case 340u: goto L_08949828;
    case 341u: goto L_08949830;
    case 342u: goto L_08949840;
    case 343u: goto L_08949848;
    case 344u: goto L_08949854;
    case 345u: goto L_0894985C;
    case 346u: goto L_08949868;
    case 347u: goto L_08949874;
    case 348u: goto L_08949880;
    case 349u: goto L_08949888;
    case 350u: goto L_0894989C;
    case 351u: goto L_089498A4;
    case 352u: goto L_089498B0;
    case 353u: goto L_089498B8;
    case 354u: goto L_089498C0;
    case 355u: goto L_089498CC;
    case 356u: goto L_089498DC;
    case 357u: goto L_08949910;
    case 358u: goto L_08949928;
    case 359u: goto L_08949938;
    case 360u: goto L_08949950;
    case 361u: goto L_0894996C;
    case 362u: goto L_08949978;
    case 363u: goto L_089499AC;
    case 364u: goto L_089499B8;
    case 365u: goto L_089499D0;
    case 366u: goto L_089499F0;
    case 367u: goto L_089499F8;
    case 368u: goto L_08949A08;
    case 369u: goto L_08949A24;
    case 370u: goto L_08949A38;
    case 371u: goto L_08949A68;
    case 372u: goto L_08949A80;
    case 373u: goto L_08949A8C;
    case 374u: goto L_08949A9C;
    case 375u: goto L_08949AA4;
    case 376u: goto L_08949AAC;
    case 377u: goto L_08949AB0;
    case 378u: goto L_08949AC0;
    case 379u: goto L_08949AE8;
    case 380u: goto L_08949B1C;
    case 381u: goto L_08949B30;
    case 382u: goto L_08949B38;
    case 383u: goto L_08949B40;
    case 384u: goto L_08949B44;
    case 385u: goto L_08949B54;
    case 386u: goto L_08949B80;
    case 387u: goto L_08949B9C;
    case 388u: goto L_08949BA8;
    case 389u: goto L_08949BB4;
    case 390u: goto L_08949BCC;
    case 391u: goto L_08949BE4;
    case 392u: goto L_08949C00;
    case 393u: goto L_08949C08;
    case 394u: goto L_08949C10;
    case 395u: goto L_08949C28;
    case 396u: goto L_08949C70;
    case 397u: goto L_08949C80;
    case 398u: goto L_08949C88;
    case 399u: goto L_08949C8C;
    case 400u: goto L_08949CA8;
    case 401u: goto L_08949CC8;
    case 402u: goto L_08949CD4;
    case 403u: goto L_08949CE4;
    case 404u: goto L_08949CFC;
    case 405u: goto L_08949D24;
    case 406u: goto L_08949D48;
    case 407u: goto L_08949D68;
    case 408u: goto L_08949D6C;
    case 409u: goto L_08949D70;
    case 410u: goto L_08949D80;
    case 411u: goto L_08949DB8;
    case 412u: goto L_08949DD0;
    case 413u: goto L_08949DD8;
    case 414u: goto L_08949DE0;
    case 415u: goto L_08949DEC;
    case 416u: goto L_08949DFC;
    case 417u: goto L_08949E04;
    case 418u: goto L_08949E14;
    case 419u: goto L_08949E20;
    case 420u: goto L_08949E34;
    case 421u: goto L_08949E74;
    case 422u: goto L_08949F1C;
    case 423u: goto L_08949F28;
    case 424u: goto L_08949F38;
    case 425u: goto L_08949F44;
    case 426u: goto L_08949F50;
    case 427u: goto L_08949F64;
    case 428u: goto L_08949F74;
    case 429u: goto L_08949F80;
    case 430u: goto L_08949F88;
    case 431u: goto L_08949F98;
    case 432u: goto L_08949FA8;
    case 433u: goto L_08949FC4;
    case 434u: goto L_08949FE0;
    case 435u: goto L_08949FE8;
    case 436u: goto L_0894A010;
    case 437u: goto L_0894A01C;
    case 438u: goto L_0894A0A0;
    case 439u: goto L_0894A0B4;
    case 440u: goto L_0894A0C0;
    case 441u: goto L_0894A110;
    case 442u: goto L_0894A118;
    case 443u: goto L_0894A134;
    case 444u: goto L_0894A148;
    case 445u: goto L_0894A150;
    case 446u: goto L_0894A154;
    case 447u: goto L_0894A15C;
    case 448u: goto L_0894A18C;
    case 449u: goto L_0894A1A8;
    case 450u: goto L_0894A1B0;
    case 451u: goto L_0894A1B8;
    case 452u: goto L_0894A1F0;
    case 453u: goto L_0894A214;
    case 454u: goto L_0894A238;
    case 455u: goto L_0894A268;
    case 456u: goto L_0894A284;
    case 457u: goto L_0894A290;
    case 458u: goto L_0894A2B0;
    case 459u: goto L_0894A2E4;
    case 460u: goto L_0894A2EC;
    case 461u: goto L_0894A320;
    case 462u: goto L_0894A328;
    case 463u: goto L_0894A330;
    case 464u: goto L_0894A33C;
    case 465u: goto L_0894A348;
    case 466u: goto L_0894A354;
    case 467u: goto L_0894A388;
    case 468u: goto L_0894A3B0;
    case 469u: goto L_0894A3C0;
    case 470u: goto L_0894A3CC;
    case 471u: goto L_0894A3EC;
    case 472u: goto L_0894A3F8;
    case 473u: goto L_0894A404;
    case 474u: goto L_0894A418;
    case 475u: goto L_0894A41C;
    case 476u: goto L_0894A430;
    case 477u: goto L_0894A458;
    case 478u: goto L_0894A464;
    case 479u: goto L_0894A4BC;
    case 480u: goto L_0894A4C8;
    case 481u: goto L_0894A4D0;
    case 482u: goto L_0894A4F0;
    case 483u: goto L_0894A53C;
    case 484u: goto L_0894A548;
    case 485u: goto L_0894A550;
    case 486u: goto L_0894A55C;
    case 487u: goto L_0894A564;
    case 488u: goto L_0894A570;
    case 489u: goto L_0894A580;
    case 490u: goto L_0894A58C;
    case 491u: goto L_0894A594;
    case 492u: goto L_0894A59C;
    case 493u: goto L_0894A5A8;
    case 494u: goto L_0894A5B4;
    case 495u: goto L_0894A5B8;
    case 496u: goto L_0894A5C4;
    case 497u: goto L_0894A5D4;
    case 498u: goto L_0894A5E0;
    case 499u: goto L_0894A5E8;
    case 500u: goto L_0894A5F0;
    case 501u: goto L_0894A5FC;
    case 502u: goto L_0894A61C;
    case 503u: goto L_0894A630;
    case 504u: goto L_0894A640;
    case 505u: goto L_0894A664;
    case 506u: goto L_0894A6A4;
    case 507u: goto L_0894A6B0;
    case 508u: goto L_0894A6C0;
    case 509u: goto L_0894A6D0;
    case 510u: goto L_0894A6E0;
    case 511u: goto L_0894A6F0;
    case 512u: goto L_0894A700;
    case 513u: goto L_0894A714;
    case 514u: goto L_0894A728;
    case 515u: goto L_0894A734;
    case 516u: goto L_0894A740;
    case 517u: goto L_0894A76C;
    case 518u: goto L_0894A774;
    case 519u: goto L_0894A77C;
    case 520u: goto L_0894A784;
    case 521u: goto L_0894A7A0;
    case 522u: goto L_0894A7A8;
    case 523u: goto L_0894A7B4;
    case 524u: goto L_0894A7BC;
    case 525u: goto L_0894A7E4;
    case 526u: goto L_0894A7EC;
    case 527u: goto L_0894A7F4;
    case 528u: goto L_0894A814;
    case 529u: goto L_0894A83C;
    case 530u: goto L_0894A84C;
    case 531u: goto L_0894A858;
    case 532u: goto L_0894A878;
    case 533u: goto L_0894A888;
    case 534u: goto L_0894A8B0;
    case 535u: goto L_0894A8DC;
    case 536u: goto L_0894A8E0;
    case 537u: goto L_0894A8E8;
    case 538u: goto L_0894A8F0;
    case 539u: goto L_0894A914;
    case 540u: goto L_0894A92C;
    case 541u: goto L_0894A944;
    case 542u: goto L_0894A94C;
    case 543u: goto L_0894A968;
    case 544u: goto L_0894A970;
    case 545u: goto L_0894A988;
    case 546u: goto L_0894A9A8;
    case 547u: goto L_0894A9C4;
    case 548u: goto L_0894A9C8;
    case 549u: goto L_0894A9F0;
    case 550u: goto L_0894A9F4;
    case 551u: goto L_0894A9F8;
    case 552u: goto L_0894AA1C;
    case 553u: goto L_0894AA2C;
    case 554u: goto L_0894AA34;
    case 555u: goto L_0894AA3C;
    case 556u: goto L_0894AA58;
    case 557u: goto L_0894AA64;
    case 558u: goto L_0894AA6C;
    case 559u: goto L_0894AA74;
    case 560u: goto L_0894AA7C;
    case 561u: goto L_0894AA84;
    case 562u: goto L_0894AA8C;
    case 563u: goto L_0894AA94;
    case 564u: goto L_0894AA9C;
    case 565u: goto L_0894AAA4;
    case 566u: goto L_0894AAB4;
    case 567u: goto L_0894AAD0;
    case 568u: goto L_0894AADC;
    case 569u: goto L_0894AAEC;
    case 570u: goto L_0894AB1C;
    case 571u: goto L_0894AB34;
    case 572u: goto L_0894AB54;
    case 573u: goto L_0894AB60;
    case 574u: goto L_0894AB8C;
    case 575u: goto L_0894ABA0;
    case 576u: goto L_0894ABB4;
    case 577u: goto L_0894ABB8;
    case 578u: goto L_0894ABC4;
    case 579u: goto L_0894ABCC;
    case 580u: goto L_0894ABD4;
    case 581u: goto L_0894AC08;
    case 582u: goto L_0894AC28;
    case 583u: goto L_0894AC50;
    case 584u: goto L_0894AC58;
    case 585u: goto L_0894AC60;
    case 586u: goto L_0894AC6C;
    case 587u: goto L_0894AC70;
    case 588u: goto L_0894AC84;
    case 589u: goto L_0894AC8C;
    case 590u: goto L_0894AC94;
    case 591u: goto L_0894ACB8;
    case 592u: goto L_0894ACC4;
    case 593u: goto L_0894ACCC;
    case 594u: goto L_0894ACD0;
    case 595u: goto L_0894ACD8;
    case 596u: goto L_0894ACE0;
    case 597u: goto L_0894AD00;
    case 598u: goto L_0894AD0C;
    case 599u: goto L_0894AD14;
    case 600u: goto L_0894AD18;
    case 601u: goto L_0894AD20;
    case 602u: goto L_0894AD28;
    case 603u: goto L_0894AD30;
    case 604u: goto L_0894AD3C;
    case 605u: goto L_0894AD50;
    case 606u: goto L_0894AD60;
    case 607u: goto L_0894AD70;
    case 608u: goto L_0894AD80;
    case 609u: goto L_0894AD88;
    case 610u: goto L_0894AD94;
    case 611u: goto L_0894ADA8;
    case 612u: goto L_0894ADB4;
    case 613u: goto L_0894ADC4;
    case 614u: goto L_0894ADCC;
    case 615u: goto L_0894ADD8;
    case 616u: goto L_0894ADE0;
    case 617u: goto L_0894ADEC;
    case 618u: goto L_0894AE04;
    case 619u: goto L_0894AE0C;
    case 620u: goto L_0894AE14;
    case 621u: goto L_0894AE24;
    case 622u: goto L_0894AE34;
    case 623u: goto L_0894AE44;
    case 624u: goto L_0894AE58;
    case 625u: goto L_0894AE64;
    case 626u: goto L_0894AE78;
    case 627u: goto L_0894AE80;
    case 628u: goto L_0894AE90;
    case 629u: goto L_0894AEA4;
    case 630u: goto L_0894AEAC;
    case 631u: goto L_0894AEBC;
    case 632u: goto L_0894AEC8;
    case 633u: goto L_0894AED0;
    case 634u: goto L_0894AED8;
    case 635u: goto L_0894AEF4;
    case 636u: goto L_0894AEFC;
    case 637u: goto L_0894AF14;
    case 638u: goto L_0894AF1C;
    case 639u: goto L_0894AF34;
    case 640u: goto L_0894AF38;
    case 641u: goto L_0894AF5C;
    case 642u: goto L_0894AF70;
    case 643u: goto L_0894AF78;
    case 644u: goto L_0894AF8C;
    case 645u: goto L_0894AF90;
    case 646u: goto L_0894AFA0;
    case 647u: goto L_0894AFA8;
    case 648u: goto L_0894AFB0;
    case 649u: goto L_0894AFBC;
    case 650u: goto L_0894AFDC;
    case 651u: goto L_0894B004;
    case 652u: goto L_0894B00C;
    case 653u: goto L_0894B018;
    case 654u: goto L_0894B024;
    case 655u: goto L_0894B02C;
    case 656u: goto L_0894B03C;
    case 657u: goto L_0894B048;
    case 658u: goto L_0894B050;
    case 659u: goto L_0894B058;
    case 660u: goto L_0894B060;
    case 661u: goto L_0894B088;
    case 662u: goto L_0894B090;
    case 663u: goto L_0894B0A8;
    case 664u: goto L_0894B0B4;
    case 665u: goto L_0894B0BC;
    case 666u: goto L_0894B0CC;
    case 667u: goto L_0894B0D4;
    case 668u: goto L_0894B0E0;
    case 669u: goto L_0894B0F0;
    case 670u: goto L_0894B0FC;
    case 671u: goto L_0894B104;
    case 672u: goto L_0894B11C;
    case 673u: goto L_0894B13C;
    case 674u: goto L_0894B144;
    case 675u: goto L_0894B14C;
    case 676u: goto L_0894B154;
    case 677u: goto L_0894B15C;
    case 678u: goto L_0894B194;
    case 679u: goto L_0894B1A0;
    case 680u: goto L_0894B1A8;
    case 681u: goto L_0894B1B4;
    case 682u: goto L_0894B1BC;
    case 683u: goto L_0894B1C4;
    case 684u: goto L_0894B1D0;
    case 685u: goto L_0894B1D8;
    case 686u: goto L_0894B1E0;
    case 687u: goto L_0894B1E8;
    case 688u: goto L_0894B1F4;
    case 689u: goto L_0894B1FC;
    case 690u: goto L_0894B204;
    case 691u: goto L_0894B20C;
    case 692u: goto L_0894B218;
    case 693u: goto L_0894B234;
    case 694u: goto L_0894B24C;
    case 695u: goto L_0894B25C;
    case 696u: goto L_0894B264;
    case 697u: goto L_0894B26C;
    case 698u: goto L_0894B274;
    case 699u: goto L_0894B284;
    case 700u: goto L_0894B294;
    case 701u: goto L_0894B2A8;
    case 702u: goto L_0894B2B0;
    case 703u: goto L_0894B2B8;
    case 704u: goto L_0894B2C0;
    case 705u: goto L_0894B2C8;
    case 706u: goto L_0894B2D0;
    case 707u: goto L_0894B2DC;
    case 708u: goto L_0894B2E4;
    case 709u: goto L_0894B2F0;
    case 710u: goto L_0894B30C;
    case 711u: goto L_0894B344;
    case 712u: goto L_0894B354;
    case 713u: goto L_0894B360;
    case 714u: goto L_0894B390;
    case 715u: goto L_0894B394;
    case 716u: goto L_0894B39C;
    case 717u: goto L_0894B3A8;
    case 718u: goto L_0894B3B0;
    case 719u: goto L_0894B3B8;
    case 720u: goto L_0894B3C4;
    case 721u: goto L_0894B3D0;
    case 722u: goto L_0894B3DC;
    case 723u: goto L_0894B3E0;
    case 724u: goto L_0894B3E4;
    case 725u: goto L_0894B3EC;
    case 726u: goto L_0894B3F4;
    case 727u: goto L_0894B400;
    case 728u: goto L_0894B40C;
    case 729u: goto L_0894B418;
    case 730u: goto L_0894B41C;
    case 731u: goto L_0894B420;
    case 732u: goto L_0894B424;
    case 733u: goto L_0894B42C;
    case 734u: goto L_0894B438;
    case 735u: goto L_0894B444;
    case 736u: goto L_0894B450;
    case 737u: goto L_0894B454;
    case 738u: goto L_0894B458;
    case 739u: goto L_0894B460;
    case 740u: goto L_0894B468;
    case 741u: goto L_0894B474;
    case 742u: goto L_0894B480;
    case 743u: goto L_0894B48C;
    case 744u: goto L_0894B490;
    case 745u: goto L_0894B494;
    case 746u: goto L_0894B498;
    case 747u: goto L_0894B4A0;
    case 748u: goto L_0894B4A8;
    case 749u: goto L_0894B4B8;
    case 750u: goto L_0894B4C8;
    case 751u: goto L_0894B4D0;
    case 752u: goto L_0894B4DC;
    case 753u: goto L_0894B4E4;
    case 754u: goto L_0894B4EC;
    case 755u: goto L_0894B4F8;
    case 756u: goto L_0894B510;
    case 757u: goto L_0894B534;
    case 758u: goto L_0894B544;
    case 759u: goto L_0894B564;
    case 760u: goto L_0894B588;
    case 761u: goto L_0894B5AC;
    case 762u: goto L_0894B5D0;
    case 763u: goto L_0894B5F4;
    case 764u: goto L_0894B5F8;
    case 765u: goto L_0894B5FC;
    case 766u: goto L_0894B604;
    case 767u: goto L_0894B614;
    case 768u: goto L_0894B620;
    case 769u: goto L_0894B628;
    case 770u: goto L_0894B638;
    case 771u: goto L_0894B648;
    case 772u: goto L_0894B658;
    case 773u: goto L_0894B668;
    case 774u: goto L_0894B690;
    case 775u: goto L_0894B69C;
    case 776u: goto L_0894B6AC;
    case 777u: goto L_0894B6BC;
    case 778u: goto L_0894B6C4;
    case 779u: goto L_0894B6CC;
    case 780u: goto L_0894B6D8;
    case 781u: goto L_0894B6E0;
    case 782u: goto L_0894B6E8;
    case 783u: goto L_0894B6F0;
    case 784u: goto L_0894B6F8;
    case 785u: goto L_0894B704;
    case 786u: goto L_0894B70C;
    case 787u: goto L_0894B71C;
    case 788u: goto L_0894B724;
    case 789u: goto L_0894B72C;
    case 790u: goto L_0894B734;
    case 791u: goto L_0894B74C;
    case 792u: goto L_0894B764;
    case 793u: goto L_0894B770;
    case 794u: goto L_0894B778;
    case 795u: goto L_0894B784;
    case 796u: goto L_0894B78C;
    case 797u: goto L_0894B79C;
    case 798u: goto L_0894B7AC;
    case 799u: goto L_0894B7BC;
    case 800u: goto L_0894B7CC;
    case 801u: goto L_0894B7D8;
    case 802u: goto L_0894B7E8;
    case 803u: goto L_0894B7F8;
    case 804u: goto L_0894B804;
    case 805u: goto L_0894B82C;
    case 806u: goto L_0894B850;
    case 807u: goto L_0894B858;
    case 808u: goto L_0894B864;
    case 809u: goto L_0894B86C;
    case 810u: goto L_0894B874;
    case 811u: goto L_0894B884;
    case 812u: goto L_0894B890;
    case 813u: goto L_0894B89C;
    case 814u: goto L_0894B8A4;
    case 815u: goto L_0894B8AC;
    case 816u: goto L_0894B8BC;
    case 817u: goto L_0894B8C4;
    case 818u: goto L_0894B8D0;
    case 819u: goto L_0894B8D8;
    case 820u: goto L_0894B8F0;
    case 821u: goto L_0894B8FC;
    case 822u: goto L_0894B904;
    case 823u: goto L_0894B90C;
    case 824u: goto L_0894B918;
    case 825u: goto L_0894B928;
    case 826u: goto L_0894B938;
    case 827u: goto L_0894B944;
    case 828u: goto L_0894B960;
    case 829u: goto L_0894B97C;
    case 830u: goto L_0894B98C;
    case 831u: goto L_0894B9A4;
    case 832u: goto L_0894B9AC;
    case 833u: goto L_0894B9C0;
    case 834u: goto L_0894B9C8;
    case 835u: goto L_0894B9D0;
    case 836u: goto L_0894B9D8;
    case 837u: goto L_0894B9E8;
    case 838u: goto L_0894B9EC;
    case 839u: goto L_0894B9F8;
    case 840u: goto L_0894BA04;
    case 841u: goto L_0894BA28;
    case 842u: goto L_0894BA30;
    case 843u: goto L_0894BA38;
    case 844u: goto L_0894BA6C;
    case 845u: goto L_0894BA98;
    case 846u: goto L_0894BAD8;
    case 847u: goto L_0894BAE8;
    case 848u: goto L_0894BAF4;
    case 849u: goto L_0894BAFC;
    case 850u: goto L_0894BB04;
    case 851u: goto L_0894BB24;
    case 852u: goto L_0894BB34;
    case 853u: goto L_0894BB44;
    case 854u: goto L_0894BB54;
    case 855u: goto L_0894BB5C;
    case 856u: goto L_0894BB64;
    case 857u: goto L_0894BB80;
    case 858u: goto L_0894BB98;
    case 859u: goto L_0894BBC0;
    case 860u: goto L_0894BBDC;
    case 861u: goto L_0894BBEC;
    case 862u: goto L_0894BBFC;
    case 863u: goto L_0894BC1C;
    case 864u: goto L_0894BC24;
    case 865u: goto L_0894BC48;
    case 866u: goto L_0894BC50;
    case 867u: goto L_0894BC64;
    case 868u: goto L_0894BC80;
    case 869u: goto L_0894BCA0;
    case 870u: goto L_0894BCC4;
    case 871u: goto L_0894BCCC;
    case 872u: goto L_0894BCDC;
    case 873u: goto L_0894BCF4;
    case 874u: goto L_0894BD00;
    case 875u: goto L_0894BD10;
    case 876u: goto L_0894BD1C;
    case 877u: goto L_0894BD24;
    case 878u: goto L_0894BD2C;
    case 879u: goto L_0894BD38;
    case 880u: goto L_0894BD48;
    case 881u: goto L_0894BD50;
    case 882u: goto L_0894BD5C;
    case 883u: goto L_0894BD60;
    case 884u: goto L_0894BDC4;
    case 885u: goto L_0894BDD0;
    case 886u: goto L_0894BDE0;
    case 887u: goto L_0894BDF4;
    case 888u: goto L_0894BE04;
    case 889u: goto L_0894BE18;
    case 890u: goto L_0894BE24;
    case 891u: goto L_0894BE2C;
    case 892u: goto L_0894BE34;
    case 893u: goto L_0894BE3C;
    case 894u: goto L_0894BE44;
    case 895u: goto L_0894BE4C;
    case 896u: goto L_0894BE50;
    case 897u: goto L_0894BE5C;
    case 898u: goto L_0894BE84;
    case 899u: goto L_0894BE94;
    case 900u: goto L_0894BE9C;
    case 901u: goto L_0894BEAC;
    case 902u: goto L_0894BEB4;
    case 903u: goto L_0894BEF4;
    case 904u: goto L_0894BF30;
    case 905u: goto L_0894BF38;
    case 906u: goto L_0894BF50;
    case 907u: goto L_0894BF58;
    case 908u: goto L_0894BF60;
    case 909u: goto L_0894BF90;
    case 910u: goto L_0894BFA0;
    case 911u: goto L_0894BFB4;
    case 912u: goto L_0894BFC8;
    case 913u: goto L_0894BFDC;
    case 914u: goto L_0894BFF0;
    case 915u: goto L_0894BFFC;
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
L_08948000:
    aot_gpr_31 = (0x08948008u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948008u) goto L_08948008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948008:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    goto L_08948014;
L_08948014:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 842u, 0x08947EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0894801C;
    }
L_0894801C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08948020;
L_08948020:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08948040:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3304)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08948048:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089480FC;
      }
      goto L_08948068;
    }
L_08948068:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (2236u << 16u);
      if (branch_taken) {
          goto L_089480C0;
      }
      goto L_08948074;
    }
L_08948074:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_16 = (2236u << 16u);
      if (branch_taken) {
          goto L_089480C0;
      }
      goto L_08948084;
    }
L_08948084:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_gpr_6 << 5u);
    ctx.gpr[7] = (0u - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(112))))));
    aot_gpr_6 = (0u | 16u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08948104;
      }
      goto L_089480BC;
    }
L_089480BC:
    aot_gpr_16 = (2236u << 16u);
    goto L_089480C0;
L_089480C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29552)));
    aot_gpr_6 = (7168u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x089480DCu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(29552), aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 518u, 0x08926088u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089480DCu) goto L_089480DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089480DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (7168u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(29552), aot_gpr_4);
      if (branch_taken) {
          goto L_08948104;
      }
      goto L_089480FC;
    }
L_089480FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08948104;
      }
      goto L_08948104;
    }
L_08948104:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08948114:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1360)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089481D0;
      }
      goto L_08948134;
    }
L_08948134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(240));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08948150u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948150u) goto L_08948150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948150:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08948168u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948168u) goto L_08948168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948168:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089481BC;
      }
      goto L_08948180;
    }
L_08948180:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08948198u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948198u) goto L_08948198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948198:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_6);
    aot_gpr_6 = (0u | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x089481BCu);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089481BCu) goto L_089481BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089481BC:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x089481C8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089481C8u) goto L_089481C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089481C8:
    aot_gpr_31 = (0x089481D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 606u, 0x08A17A04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089481D0u) goto L_089481D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089481D0:
    aot_gpr_31 = (0x089481D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089481D8u) goto L_089481D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089481D8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
      if (branch_taken) {
          goto L_089481F4;
      }
      goto L_089481F0;
    }
L_089481F0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3332), 0u);
    goto L_089481F4;
L_089481F4:
    aot_gpr_5 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08948210;
      }
      goto L_08948200;
    }
L_08948200:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1716), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_4);
    goto L_08948210;
L_08948210:
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
L_08948224:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_08948244;
L_08948244:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(3176)));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_16;
      if (branch_taken) {
          goto L_08948268;
      }
      goto L_08948250;
    }
L_08948250:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08948244;
      }
      goto L_08948260;
    }
L_08948260:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08948270;
      }
      goto L_08948268;
    }
L_08948268:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089482AC;
      }
      goto L_08948270;
    }
L_08948270:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    goto L_08948278;
L_08948278:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_31 = (0x08948284u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3176)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948284u) goto L_08948284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948284:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089482A4;
      }
      goto L_0894828C;
    }
L_0894828C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08948278;
      }
      goto L_0894829C;
    }
L_0894829C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089482AC;
      }
      goto L_089482A4;
    }
L_089482A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3176), aot_gpr_16);
      if (branch_taken) {
          goto L_089482AC;
      }
      goto L_089482AC;
    }
L_089482AC:
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
L_089482C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x089482F8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 519u, 0x08946B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089482F8u) goto L_089482F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089482F8:
    aot_gpr_5 = (2234u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] << 5u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2288));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08948330;
      }
      goto L_08948328;
    }
L_08948328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0894835C;
      }
      goto L_08948330;
    }
L_08948330:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1272)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08948358;
      }
      goto L_08948344;
    }
L_08948344:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3264)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894835C;
      }
      goto L_08948358;
    }
L_08948358:
    ctx.gpr[18] = (0u | 1u);
    goto L_0894835C;
L_0894835C:
    aot_gpr_31 = (0x08948364u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 434u, 0x0898D300u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948364u) goto L_08948364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948364:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894839C;
      }
      goto L_0894836C;
    }
L_0894836C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894839C;
      }
      goto L_08948374;
    }
L_08948374:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1272)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_08948394;
    }
    goto L_08948394;
L_08948394:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08948410;
      }
      goto L_0894839C;
    }
L_0894839C:
    aot_gpr_31 = (0x089483A4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 543u, 0x0898D7C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089483A4u) goto L_089483A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089483A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1272)));
      if (branch_taken) {
          goto L_089483DC;
      }
      goto L_089483AC;
    }
L_089483AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089483DC;
      }
      goto L_089483B4;
    }
L_089483B4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089483D4;
    }
    goto L_089483D4;
L_089483D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08948410;
      }
      goto L_089483DC;
    }
L_089483DC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08948410;
      }
      goto L_089483EC;
    }
L_089483EC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
        goto L_0894840C;
    }
    goto L_0894840C;
L_0894840C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08948410;
L_08948410:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08948434;
      }
      goto L_08948428;
    }
L_08948428:
    ctx.fpr[24] = aot_fpr_12 / aot_fpr_14;
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08948454;
      }
      goto L_08948434;
    }
L_08948434:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08948454;
      }
      goto L_08948444;
    }
L_08948444:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08948454;
      }
      goto L_0894844C;
    }
L_0894844C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08948454;
L_08948454:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089484A4;
      }
      goto L_08948464;
    }
L_08948464:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x08948474u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 597u, 0x089470B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948474u) goto L_08948474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089484A0;
      }
      goto L_0894847C;
    }
L_0894847C:
    aot_fpr_12 = ctx.fpr[24] - ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
        goto L_08948490;
    }
    goto L_08948490;
L_08948490:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[22];
      if (branch_taken) {
          goto L_089484A8;
      }
      goto L_089484A0;
    }
L_089484A0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_089484A4;
L_089484A4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_089484A8;
L_089484A8:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089484D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1272)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17968)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08948528;
      }
      goto L_089484E8;
    }
L_089484E8:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[0])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08948508;
    }
    goto L_08948508;
L_08948508:
    aot_gpr_4 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2288));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] + aot_fpr_13;
      if (branch_taken) {
          goto L_08948544;
      }
      goto L_08948528;
    }
L_08948528:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08948544;
      }
      goto L_08948538;
    }
L_08948538:
    aot_gpr_4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08948544;
      }
      goto L_08948544;
    }
L_08948544:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894854C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08948554;
      }
      goto L_08948554;
    }
L_08948554:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894855C:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08948568:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894857C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1396));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 32u);
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_089485C8;
      }
      goto L_089485B0;
    }
L_089485B0:
    aot_gpr_5 = (0u | 8u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089485C0u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089485C0u) goto L_089485C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089485C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948664;
      }
      goto L_089485C8;
    }
L_089485C8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 30u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_089485E8;
      }
      goto L_089485D8;
    }
L_089485D8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 31u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08948600;
      }
      goto L_089485E8;
    }
L_089485E8:
    aot_gpr_5 = (0u | 7u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089485F8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089485F8u) goto L_089485F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089485F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948664;
      }
      goto L_08948600;
    }
L_08948600:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 38u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08948628;
      }
      goto L_08948610;
    }
L_08948610:
    aot_gpr_5 = (0u | 46u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08948620u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948620u) goto L_08948620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948664;
      }
      goto L_08948628;
    }
L_08948628:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (0u | 39u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08948650;
      }
      goto L_08948638;
    }
L_08948638:
    aot_gpr_5 = (0u | 47u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08948648u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948648u) goto L_08948648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948664;
      }
      goto L_08948650;
    }
L_08948650:
    aot_gpr_5 = (0u | 34u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08948660u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948660u) goto L_08948660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948660:
    ctx.gpr[2] = (0u | 0u);
    goto L_08948664;
L_08948664:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08948670:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0894868Cu);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 846u, 0x08907B5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894868Cu) goto L_0894868C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894868C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089486C8;
      }
      goto L_08948698;
    }
L_08948698:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_089486C8;
      }
      goto L_089486A0;
    }
L_089486A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089486B4;
      }
      goto L_089486AC;
    }
L_089486AC:
    aot_gpr_31 = (0x089486B4u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(3332));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089486B4u) goto L_089486B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089486B4:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3332), aot_gpr_16);
      if (branch_taken) {
          goto L_089486C8;
      }
      goto L_089486BC;
    }
L_089486BC:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(3332));
    aot_gpr_31 = (0x089486C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089486C8u) goto L_089486C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089486C8:
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
L_089486DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0894872C;
      }
      goto L_089486F0;
    }
L_089486F0:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(280)));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08948714u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 121u, 0x08804E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948714u) goto L_08948714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948714:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08948724;
      }
      goto L_0894871C;
    }
L_0894871C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948730;
      }
      goto L_08948724;
    }
L_08948724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08948730;
      }
      goto L_0894872C;
    }
L_0894872C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08948730;
L_08948730:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894873C:
    jump_target = aot_gpr_31;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3340)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08948744:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (4u << 16u);
      if (branch_taken) {
          goto L_08948794;
      }
      goto L_08948758;
    }
L_08948758:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_gpr_6 & aot_gpr_5);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (aot_gpr_6 & 16u);
      if (branch_taken) {
          goto L_08948788;
      }
      goto L_08948770;
    }
L_08948770:
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08948788;
      }
      goto L_08948780;
    }
L_08948780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08948798;
      }
      goto L_08948788;
    }
L_08948788:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08948758;
      }
      goto L_08948794;
    }
L_08948794:
    ctx.gpr[2] = (0u | 0u);
    goto L_08948798;
L_08948798:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089487A0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089487C0;
      }
      goto L_089487AC;
    }
L_089487AC:
    aot_gpr_5 = (17658u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3160), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08948890;
      }
      goto L_089487C0;
    }
L_089487C0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3264)));
    aot_gpr_5 = (49864u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3268)));
      if (branch_taken) {
          goto L_08948844;
      }
      goto L_089487DC;
    }
L_089487DC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(333)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08948844;
      }
      goto L_0894880C;
    }
L_0894880C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08948844;
      }
      goto L_0894881C;
    }
L_0894881C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_5 = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3268), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08948844;
L_08948844:
    aot_gpr_5 = (17402u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08948890;
      }
      goto L_0894885C;
    }
L_0894885C:
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3160)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3268), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (17658u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08948890;
      }
      goto L_08948880;
    }
L_08948880:
    aot_gpr_5 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3160), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08948890;
L_08948890:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08948898:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24920)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3264)));
      if (branch_taken) {
          goto L_089488BC;
      }
      goto L_089488A4;
    }
L_089488A4:
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_5 = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    goto L_089488BC;
L_089488BC:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3160)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089488EC;
      }
      goto L_089488D0;
    }
L_089488D0:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_5 = (16128u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089488EC;
L_089488EC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089488F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_31);
    aot_gpr_31 = (0x08948920u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948920u) goto L_08948920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948920:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08948930u);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948930u) goto L_08948930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948930:
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08948950u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 561u, 0x08A8EF1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948950u) goto L_08948950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948950:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = aot_fpr_14 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_20 = std::sqrt(aot_fpr_20);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16457u << 16u);
      if (branch_taken) {
          goto L_089489DC;
      }
      goto L_0894897C;
    }
L_0894897C:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17204u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1968)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[15];
    aot_gpr_31 = (0x089489B0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 543u, 0x0898D7C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089489B0u) goto L_089489B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089489B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (17008u << 16u);
      if (branch_taken) {
          goto L_089489DC;
      }
      goto L_089489B8;
    }
L_089489B8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089489DC;
      }
      goto L_089489CC;
    }
L_089489CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_089489DC;
L_089489DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089489F4u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089489F4u) goto L_089489F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089489F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08948A0Cu);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948A0Cu) goto L_08948A0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948A0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08948AF0;
      }
      goto L_08948A20;
    }
L_08948A20:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08948A40u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948A40u) goto L_08948A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948A40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08948A70;
      }
      goto L_08948A58;
    }
L_08948A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08948AF0;
      }
      goto L_08948A70;
    }
L_08948A70:
    aot_gpr_31 = (0x08948A78u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 508u, 0x0898D640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948A78u) goto L_08948A78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948A78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08948AF0;
      }
      goto L_08948A80;
    }
L_08948A80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3257)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08948AB4;
      }
      goto L_08948A8C;
    }
L_08948A8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3172)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08948AB4;
      }
      goto L_08948A98;
    }
L_08948A98:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08948AA8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 550u, 0x0891ECB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948AA8u) goto L_08948AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948AA8:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3257), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3172), 0u);
      if (branch_taken) {
          goto L_08948AF0;
      }
      goto L_08948AB4;
    }
L_08948AB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08948AE0;
      }
      goto L_08948AC4;
    }
L_08948AC4:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08948AD0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 765u, 0x0892FCA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948AD0u) goto L_08948AD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948AD0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08948AE0;
      }
      goto L_08948ADC;
    }
L_08948ADC:
    ctx.gpr[17] = (0u | 0u);
    goto L_08948AE0;
L_08948AE0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08948AF0;
      }
      goto L_08948AE8;
    }
L_08948AE8:
    aot_gpr_31 = (0x08948AF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 513u, 0x0890E2FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948AF0u) goto L_08948AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948AF0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08948B10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1968)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_31 = (0x08948B54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948B54u) goto L_08948B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948B54:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08948B64u);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948B64u) goto L_08948B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948B64:
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[2]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = aot_fpr_14 + ctx.fpr[15];
    aot_fpr_20 = std::sqrt(aot_fpr_13);
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 / aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08948BF4;
      }
      goto L_08948BA0;
    }
L_08948BA0:
    aot_gpr_31 = (0x08948BA8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948BA8u) goto L_08948BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948BA8:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (15759u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3156)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_fpr_13 = aot_fpr_20 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08948BE8;
      }
      goto L_08948BD8;
    }
L_08948BD8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3156)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08948BEC;
      }
      goto L_08948BE8;
    }
L_08948BE8:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08948BEC;
L_08948BEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08948BF8;
      }
      goto L_08948BF4;
    }
L_08948BF4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08948BF8;
L_08948BF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 43u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08948C18;
      }
      goto L_08948C08;
    }
L_08948C08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 44u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08948C20;
      }
      goto L_08948C18;
    }
L_08948C18:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08948C20;
L_08948C20:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948C28;
    }
L_08948C28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08948DAC;
      }
      goto L_08948C38;
    }
L_08948C38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948C50;
    }
L_08948C50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948C60;
    }
L_08948C60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16153u << 16u);
      if (branch_taken) {
          goto L_08948C8C;
      }
      goto L_08948C70;
    }
L_08948C70:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(296)));
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948C8C;
    }
L_08948C8C:
    aot_gpr_31 = (0x08948C94u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948C94u) goto L_08948C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948C94:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08948CA4u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948CA4u) goto L_08948CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948CA4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17956)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17960)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08948CB8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948CB8u) goto L_08948CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948CB8:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08948CCCu);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B6256C, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948CCCu) goto L_08948CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948CCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948CD4;
    }
L_08948CD4:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
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
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55051u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948D04;
    }
L_08948D04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (15502u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 64012u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (49216u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_31 = (0x08948DA4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948DA4u) goto L_08948DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948DA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948DAC;
    }
L_08948DAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08948DC0;
      }
      goto L_08948DBC;
    }
L_08948DBC:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08948DC0;
L_08948DC0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08948DCCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08949D80;
L_08948DCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08948DF8;
      }
      goto L_08948DDC;
    }
L_08948DDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_31 = (0x08948DE8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 302u, 0x0881DF8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948DE8u) goto L_08948DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948DE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08948DF8;
      }
      goto L_08948DF0;
    }
L_08948DF0:
    aot_gpr_31 = (0x08948DF8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0894BEF4;
L_08948DF8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08948E04u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 548u, 0x0894ECE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948E04u) goto L_08948E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948E04:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08948E2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[19] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08948EE4;
      }
      goto L_08948E64;
    }
L_08948E64:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08948ED8;
      }
      goto L_08948E78;
    }
L_08948E78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 224u);
      if (branch_taken) {
          goto L_08948ED8;
      }
      goto L_08948E88;
    }
L_08948E88:
    aot_gpr_5 = (0u | 27u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u | 225u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (0u | 226u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (0u | 227u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (0u | 148u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_5, aot_gpr_4, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08948EEC;
      }
      goto L_08948ED0;
    }
L_08948ED0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08948EFC;
      }
      goto L_08948ED8;
    }
L_08948ED8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), aot_gpr_4);
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08948EE4;
    }
L_08948EE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08948EEC;
    }
L_08948EEC:
    aot_gpr_31 = (0x08948EF4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948EF4u) goto L_08948EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948EF4:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08948EFC;
L_08948EFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17984)));
    aot_gpr_6 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 << 4u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08948F2Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 952u, 0x0898BB24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948F2Cu) goto L_08948F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948F2C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08948F54;
      }
      goto L_08948F50;
    }
L_08948F50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    goto L_08948F54;
L_08948F54:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < 30001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08949100;
      }
      goto L_08948F60;
    }
L_08948F60:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948F68;
    }
L_08948F68:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 12u);
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948F70;
    }
L_08948F70:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 13u);
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948F78;
    }
L_08948F78:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 14u);
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948F80;
    }
L_08948F80:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08949100;
      }
      goto L_08948F88;
    }
L_08948F88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17984)));
    aot_gpr_31 = (0x08948F94u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 556u, 0x08AD3328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948F94u) goto L_08948F94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948F94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08948FA0;
    }
L_08948FA0:
    aot_gpr_31 = (0x08948FA8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948FA8u) goto L_08948FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948FA8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[22] = (0u | 40u);
      if (branch_taken) {
          goto L_08949020;
      }
      goto L_08948FB4;
    }
L_08948FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[21] = (1u << 16u);
    goto L_08948FBC;
L_08948FBC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08948FD0;
      }
      goto L_08948FC4;
    }
L_08948FC4:
    aot_gpr_31 = (0x08948FCCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08948FCCu) goto L_08948FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08948FCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08948FD0;
L_08948FD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(316)));
    aot_gpr_5 = (ctx.gpr[20] - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.lo);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08949014;
      }
      goto L_08948FF8;
    }
L_08948FF8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08949014;
      }
      goto L_0894900C;
    }
L_0894900C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08949020;
      }
      goto L_08949014;
    }
L_08949014:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[23] != 0u;
      if (branch_taken) {
          goto L_08948FBC;
      }
      goto L_08949020;
    }
L_08949020:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949028;
    }
L_08949028:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 128u);
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949038;
    }
L_08949038:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949040;
    }
L_08949040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17952)));
    aot_gpr_4 = (ctx.gpr[19] - aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 25001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949054;
    }
L_08949054:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089490F8;
      }
      goto L_08949064;
    }
L_08949064:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17940)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17944)));
    goto L_08949070;
L_08949070:
    aot_gpr_31 = (0x08949078u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949078u) goto L_08949078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949078:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0894908Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894908Cu) goto L_0894908C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894908C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17948)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    aot_gpr_5 = (ctx.gpr[18] << 3u);
      if (branch_taken) {
          goto L_089490BC;
      }
      goto L_089490AC;
    }
L_089490AC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08949070;
      }
      goto L_089490B8;
    }
L_089490B8:
    aot_gpr_5 = (ctx.gpr[18] << 3u);
    goto L_089490BC;
L_089490BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (16640u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089490E8u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089490E8u) goto L_089490E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089490E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 512u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17948), ctx.gpr[18]);
    goto L_089490F8;
L_089490F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17952), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949100;
    }
L_08949100:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08949168;
      }
      goto L_0894910C;
    }
L_0894910C:
    aot_gpr_31 = (0x08949114u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949114u) goto L_08949114;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949114:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (49408u << 16u);
      if (branch_taken) {
          goto L_08949150;
      }
      goto L_08949120;
    }
L_08949120:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_08949124;
L_08949124:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08949144;
      }
      goto L_0894913C;
    }
L_0894913C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (0u | 1u);
    goto L_08949144;
L_08949144:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_08949124;
      }
      goto L_08949150;
    }
L_08949150:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949158;
    }
L_08949158:
    aot_gpr_31 = (0x08949160u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17984)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 570u, 0x08AD3464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949160u) goto L_08949160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949160:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894916C;
      }
      goto L_08949168;
    }
L_08949168:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17952), 0u);
    goto L_0894916C;
L_0894916C:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08949198:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 16u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08949410;
      }
      goto L_089491B8;
    }
L_089491B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08949410;
      }
      goto L_089491C4;
    }
L_089491C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x089491E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089491E4u) goto L_089491E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089491E4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-3));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08949404;
      }
      goto L_08949210;
    }
L_08949210:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-9448)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08949228:
    aot_gpr_4 = (15589u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949238;
    }
L_08949238:
    aot_gpr_4 = (15589u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949248;
    }
L_08949248:
    aot_gpr_4 = (15589u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949258;
    }
L_08949258:
    aot_gpr_4 = (15589u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949268;
    }
L_08949268:
    aot_gpr_4 = (15506u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949278;
    }
L_08949278:
    aot_gpr_4 = (15648u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55676u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949288;
    }
L_08949288:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089492C8;
      }
      goto L_089492A4;
    }
L_089492A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (0u | 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 216u);
        goto L_089492B4;
    }
    goto L_089492B4;
L_089492B4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089492C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089492C0u) goto L_089492C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089492C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089492E8;
      }
      goto L_089492C8;
    }
L_089492C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 & 8192u);
    ctx.gpr[17] = (0u < aot_gpr_6 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089492F8;
      }
      goto L_089492E0;
    }
L_089492E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894930C;
      }
      goto L_089492E8;
    }
L_089492E8:
    aot_gpr_4 = (15561u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_089492F8;
    }
L_089492F8:
    aot_gpr_4 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    goto L_0894930C;
L_0894930C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08949364;
      }
      goto L_08949314;
    }
L_08949314:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (0u | 215u);
      if (branch_taken) {
          goto L_0894933C;
      }
      goto L_08949320;
    }
L_08949320:
    aot_gpr_4 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 218u);
        goto L_0894933C;
    }
    goto L_0894933C;
L_0894933C:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0894934Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894934Cu) goto L_0894934C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894934C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08949364;
      }
      goto L_08949354;
    }
L_08949354:
    aot_gpr_4 = (15506u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949364;
    }
L_08949364:
    aot_gpr_4 = (15648u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55676u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949374;
    }
L_08949374:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] & 8192u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_089493A0;
      }
      goto L_0894938C;
    }
L_0894938C:
    aot_gpr_5 = (8u << 16u);
    aot_gpr_5 = (ctx.gpr[17] & aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    goto L_089493A0;
L_089493A0:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089493F8;
      }
      goto L_089493A8;
    }
L_089493A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 215u);
      if (branch_taken) {
          goto L_089493D0;
      }
      goto L_089493B4;
    }
L_089493B4:
    aot_gpr_5 = (8u << 16u);
    aot_gpr_6 = (ctx.gpr[17] & aot_gpr_5);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 218u);
        goto L_089493D0;
    }
    goto L_089493D0;
L_089493D0:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089493E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089493E0u) goto L_089493E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089493E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089493F8;
      }
      goto L_089493E8;
    }
L_089493E8:
    aot_gpr_4 = (15506u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_089493F8;
    }
L_089493F8:
    aot_gpr_4 = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949404;
    }
L_08949404:
    aot_gpr_4 = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894942C;
      }
      goto L_08949410;
    }
L_08949410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08949404;
      }
      goto L_08949420;
    }
L_08949420:
    aot_gpr_4 = (15589u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 51450u);
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    goto L_0894942C;
L_0894942C:
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
L_08949440:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(1914)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_089494D4;
      }
      goto L_08949470;
    }
L_08949470:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    goto L_08949478;
L_08949478:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08949488u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 571u, 0x089068C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949488u) goto L_08949488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089494C0;
      }
      goto L_08949490;
    }
L_08949490:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 56u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x089494C0u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 670u, 0x08A17F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089494C0u) goto L_089494C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089494C0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(1914)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08949478;
      }
      goto L_089494D4;
    }
L_089494D4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089494F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x0894951Cu);
    aot_gpr_6 = (0u | 141u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894951Cu) goto L_0894951C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894951C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_08949528;
    }
L_08949528:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_08949540;
    }
L_08949540:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3156)));
    aot_gpr_4 = (16320u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_0894955C;
    }
L_0894955C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_08949564;
    }
L_08949564:
    aot_gpr_31 = (0x0894956Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894956Cu) goto L_0894956C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894956C:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089495A4;
      }
      goto L_08949584;
    }
L_08949584:
    aot_gpr_31 = (0x0894958Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894958Cu) goto L_0894958C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894958C:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_089495A4;
    }
L_089495A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089495B8u);
    ctx.gpr[7] = (0u | 138u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089495B8u) goto L_089495B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089495B8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_31 = (0x089495E0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 89u, 0x0889057Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089495E0u) goto L_089495E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089495E0:
    aot_gpr_5 = (2193u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089495F4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6296));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089495F4u) goto L_089495F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089495F4:
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 43u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_5;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08949628;
      }
      goto L_0894961C;
    }
L_0894961C:
    aot_gpr_5 = (0u | 44u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08949630;
      }
      goto L_08949628;
    }
L_08949628:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08949630;
L_08949630:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08949640;
      }
      goto L_08949638;
    }
L_08949638:
    aot_gpr_31 = (0x08949640u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949640u) goto L_08949640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949640:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894965C:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_gpr_4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_08949680;
    }
L_08949680:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089496BC;
      }
      goto L_0894968C;
    }
L_0894968C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089496F4;
      }
      goto L_08949694;
    }
L_08949694:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0894972C;
      }
      goto L_0894969C;
    }
L_0894969C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0894973C;
      }
      goto L_089496A4;
    }
L_089496A4:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08949774;
      }
      goto L_089496AC;
    }
L_089496AC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_089496BC;
    }
L_089496BC:
    aot_gpr_4 = (16221u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 46039u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_089496F4;
    }
L_089496F4:
    aot_gpr_4 = (16221u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 46039u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_12 = ctx.fpr[16] - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_0894972C;
    }
L_0894972C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_0894973C;
    }
L_0894973C:
    aot_gpr_4 = (16221u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 46039u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_fpr_12 = ctx.fpr[16] - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089497A8;
      }
      goto L_08949774;
    }
L_08949774:
    aot_gpr_4 = (16221u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 46039u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089497A8;
L_089497A8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089497B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08949824;
      }
      goto L_089497E0;
    }
L_089497E0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 24u);
    if (aot_gpr_6 == ctx.gpr[7]) {
    aot_gpr_4 = (0u | 1u);
        goto L_08949824;
    }
    goto L_089497F0;
L_089497F0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 25u);
    if (aot_gpr_6 == ctx.gpr[7]) {
    aot_gpr_4 = (0u | 1u);
        goto L_08949824;
    }
    goto L_08949800;
L_08949800:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 26u);
    if (aot_gpr_6 == ctx.gpr[7]) {
    aot_gpr_4 = (0u | 1u);
        goto L_08949824;
    }
    goto L_08949810;
L_08949810:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (0u | 27u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08949828;
      }
      goto L_08949820;
    }
L_08949820:
    aot_gpr_4 = (0u | 1u);
    goto L_08949824;
L_08949824:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08949828;
L_08949828:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08949888;
      }
      goto L_08949830;
    }
L_08949830:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08949880;
      }
      goto L_08949840;
    }
L_08949840:
    aot_gpr_31 = (0x08949848u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 575u, 0x0891241Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949848u) goto L_08949848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949848:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08949854u);
    aot_gpr_5 = (0u | 0u);
    goto L_08948114;
L_08949854:
    aot_gpr_31 = (0x0894985Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894985Cu) goto L_0894985C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894985C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08949868u);
    aot_gpr_5 = (0u | 51u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949868u) goto L_08949868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949868:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08949874u);
    aot_gpr_5 = (0u | 51u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949874u) goto L_08949874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949874:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08949880u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949880u) goto L_08949880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949880:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089498CC;
      }
      goto L_08949888;
    }
L_08949888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089498B8;
      }
      goto L_0894989C;
    }
L_0894989C:
    aot_gpr_31 = (0x089498A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08948040;
L_089498A4:
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x089498B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 529u, 0x08911F98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089498B0u) goto L_089498B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089498B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089498CC;
      }
      goto L_089498B8;
    }
L_089498B8:
    aot_gpr_31 = (0x089498C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08948040;
L_089498C0:
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x089498CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 20u, 0x08930380u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089498CCu) goto L_089498CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089498CC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089498DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08949910u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949910u) goto L_08949910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949910:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08949A24;
      }
      goto L_08949928;
    }
L_08949928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08949A24;
      }
      goto L_08949938;
    }
L_08949938:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08949950u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949950u) goto L_08949950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949950:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0894996Cu);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894996Cu) goto L_0894996C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894996C:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_089499F0;
      }
      goto L_08949978;
    }
L_08949978:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2076)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (16095u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26355u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x089499ACu);
    aot_fpr_13 = aot_fpr_14 - ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089499ACu) goto L_089499AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089499AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_31 = (0x089499B8u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[0];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089499B8u) goto L_089499B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089499B8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089499F8;
      }
      goto L_089499D0;
    }
L_089499D0:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_20;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08949A24;
      }
      goto L_089499F0;
    }
L_089499F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08949A24;
      }
      goto L_089499F8;
    }
L_089499F8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08949A24;
      }
      goto L_08949A08;
    }
L_08949A08:
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08949A24;
L_08949A24:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08949A38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08949A68u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949A68u) goto L_08949A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949A68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08949A8C;
      }
      goto L_08949A80;
    }
L_08949A80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08949AA4;
      }
      goto L_08949A8C;
    }
L_08949A8C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08949AAC;
      }
      goto L_08949A9C;
    }
L_08949A9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08949AB0;
      }
      goto L_08949AA4;
    }
L_08949AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08949AB0;
      }
      goto L_08949AAC;
    }
L_08949AAC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08949AB0;
L_08949AB0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08949AC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_4 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08949B38;
      }
      goto L_08949AE8;
    }
L_08949AE8:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08949B1Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949B1Cu) goto L_08949B1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949B1C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08949B40;
      }
      goto L_08949B30;
    }
L_08949B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08949B44;
      }
      goto L_08949B38;
    }
L_08949B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08949B44;
      }
      goto L_08949B40;
    }
L_08949B40:
    ctx.gpr[2] = (0u | 0u);
    goto L_08949B44;
L_08949B44:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08949B54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08949C08;
      }
      goto L_08949B80;
    }
L_08949B80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x08949B9Cu);
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949B9Cu) goto L_08949B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949B9C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2256)));
    aot_gpr_31 = (0x08949BA8u);
    aot_fpr_12 = ctx.fpr[0] - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949BA8u) goto L_08949BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949BA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08949BB4u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949BB4u) goto L_08949BB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949BB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08949C08;
      }
      goto L_08949BCC;
    }
L_08949BCC:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
        goto L_08949BE4;
    }
    goto L_08949BE4;
L_08949BE4:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08949C08;
      }
      goto L_08949C00;
    }
L_08949C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08949C8C;
      }
      goto L_08949C08;
    }
L_08949C08:
    aot_gpr_31 = (0x08949C10u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949C10u) goto L_08949C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949C10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08949C88;
      }
      goto L_08949C28;
    }
L_08949C28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_13 = std::sqrt(aot_fpr_13);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[15];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08949C70;
    }
    goto L_08949C70;
L_08949C70:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08949C88;
      }
      goto L_08949C80;
    }
L_08949C80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08949C8C;
      }
      goto L_08949C88;
    }
L_08949C88:
    ctx.gpr[2] = (0u | 1u);
    goto L_08949C8C;
L_08949C8C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08949CA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3292)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08949CC8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 427u, 0x08A39C74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949CC8u) goto L_08949CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949CC8:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2016));
    aot_gpr_31 = (0x08949CD4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0181_entry, 181u, 455u, 0x08AD99CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949CD4u) goto L_08949CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949CD4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08949CE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08949D70;
      }
      goto L_08949CFC;
    }
L_08949CFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2076)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08949D24u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949D24u) goto L_08949D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949D24:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
        goto L_08949D48;
    }
    goto L_08949D48;
L_08949D48:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08949D6C;
      }
      goto L_08949D68;
    }
L_08949D68:
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    goto L_08949D6C;
L_08949D6C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08949D70;
L_08949D70:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08949D80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08949DB8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949DB8u) goto L_08949DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949DB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08949E20;
      }
      goto L_08949DD0;
    }
L_08949DD0:
    aot_gpr_31 = (0x08949DD8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 543u, 0x0898D7C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949DD8u) goto L_08949DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949DD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08949E20;
      }
      goto L_08949DE0;
    }
L_08949DE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08949E04;
      }
      goto L_08949DEC;
    }
L_08949DEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 8u);
      if (branch_taken) {
          goto L_08949E04;
      }
      goto L_08949DFC;
    }
L_08949DFC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08949E20;
      }
      goto L_08949E04;
    }
L_08949E04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08949E20;
      }
      goto L_08949E14;
    }
L_08949E14:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08949E20u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949E20u) goto L_08949E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949E20:
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
L_08949E34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[8]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    aot_gpr_31 = (0x08949E74u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 838u, 0x08913670u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949E74u) goto L_08949E74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949E74:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23360));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(92), aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3232), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 | 64u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[22]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_4));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(3312), aot_run_words); }
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3332), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3336), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(2288));
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(3200));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3340), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_31 = (0x08949F1Cu);
    aot_gpr_4 = (0u | 6320u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949F1Cu) goto L_08949F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949F1C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08949F98;
      }
      goto L_08949F28;
    }
L_08949F28:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08949F38u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 448u, 0x08A39E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949F38u) goto L_08949F38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949F38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x08949F44u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(152));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 768u, 0x08887688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949F44u) goto L_08949F44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949F44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x08949F50u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 387u, 0x089F2360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949F50u) goto L_08949F50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949F50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (0u | 36u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(6000), 0u);
    aot_gpr_31 = (0x08949F64u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949F64u) goto L_08949F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949F64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08949F88;
      }
      goto L_08949F74;
    }
L_08949F74:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_31 = (0x08949F80u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949F80u) goto L_08949F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949F80:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    goto L_08949F88;
L_08949F88:
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_mem.aot_direct_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6000), ctx.gpr[23]);
    ctx.gpr[23] = (aot_gpr_4 | 0u);
    goto L_08949F98;
L_08949F98:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3292), ctx.gpr[23]);
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(176));
    aot_gpr_31 = (0x08949FA8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 390u, 0x089F23ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949FA8u) goto L_08949FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949FA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08949FC4u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949FC4u) goto L_08949FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949FC4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3304), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08949FE0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0894A1F0;
L_08949FE0:
    aot_gpr_31 = (0x08949FE8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 890u, 0x08AB36D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08949FE8u) goto L_08949FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08949FE8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3152), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1929), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3272), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894A010u);
    aot_gpr_5 = (0u | 0u);
    goto L_08948670;
L_0894A010:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894A01Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A01Cu) goto L_0894A01C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A01C:
    aot_gpr_4 = (17174u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3160), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3268), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3257), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3172), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3164), 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3168), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[30]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[22]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3228), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3240), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3244), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3252), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_4);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_0894A0A0;
L_0894A0A0:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(3176), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0894A0A0;
      }
      goto L_0894A0B4;
    }
L_0894A0B4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (0u | 0u);
    goto L_0894A0C0;
L_0894A0C0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3292)));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6096));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3292)));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(6112), 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3292)));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6116))))));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[30]);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(6116), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0894A0C0;
      }
      goto L_0894A110;
    }
L_0894A110:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    goto L_0894A118;
L_0894A118:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3292)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(6288), 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0894A118;
      }
      goto L_0894A134;
    }
L_0894A134:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(3328), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3280), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0894A154;
    }
    goto L_0894A148;
L_0894A148:
    aot_gpr_31 = (0x0894A150u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A150u) goto L_0894A150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A150:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0894A154;
L_0894A154:
    aot_gpr_31 = (0x0894A15Cu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17904));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A15Cu) goto L_0894A15C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A15C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17984), ctx.gpr[2]);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3296), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3300), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3260), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x0894A18Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 558u, 0x08946D54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A18Cu) goto L_0894A18C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A18C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0894A1A8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A1A8u) goto L_0894A1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A1A8:
    aot_gpr_31 = (0x0894A1B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08949CA8;
L_0894A1B0:
    aot_gpr_31 = (0x0894A1B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0196_entry, 196u, 14u, 0x08B141E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A1B8u) goto L_0894A1B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A1B8:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894A1F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words); }
    aot_gpr_31 = (0x0894A214u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08949CA8;
L_0894A214:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3258), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x0894A238u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2856));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 517u, 0x088BA728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A238u) goto L_0894A238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A238:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3259), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3192), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0894A268u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A268u) goto L_0894A268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A268:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0894A284u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A284u) goto L_0894A284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A284:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894A290u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A290u) goto L_0894A290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A290:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x0894A2B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 44u, 0x089102D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A2B0u) goto L_0894A2B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A2B0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1368), 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(304))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2196), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(640), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 & ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 | 512u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x0894A2E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A2E4u) goto L_0894A2E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A2E4:
    aot_gpr_31 = (0x0894A2ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A2ECu) goto L_0894A2EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A2EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 & ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A328;
      }
      goto L_0894A320;
    }
L_0894A320:
    aot_gpr_31 = (0x0894A328u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1712)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A328u) goto L_0894A328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A328:
    aot_gpr_31 = (0x0894A330u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A330u) goto L_0894A330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A330:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894A33Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A33Cu) goto L_0894A33C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A33C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894A348u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A348u) goto L_0894A348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A348:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894A354u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08908E78, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A354u) goto L_0894A354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A354:
    aot_gpr_4 = (0u | 30u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(776), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (57344u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3257), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3172), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_31 = (0x0894A388u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0894BEF4;
L_0894A388:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1364)));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 50u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A3CC;
      }
      goto L_0894A3B0;
    }
L_0894A3B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894A3CC;
      }
      goto L_0894A3C0;
    }
L_0894A3C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 | 512u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_0894A3CC;
L_0894A3CC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2120), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1892), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3304)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894A430;
      }
      goto L_0894A3EC;
    }
L_0894A3EC:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x0894A3F8u);
    aot_gpr_4 = (0u | 496u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A3F8u) goto L_0894A3F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A3F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894A41C;
      }
      goto L_0894A404;
    }
L_0894A404:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(134)));
    aot_gpr_31 = (0x0894A418u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A418u) goto L_0894A418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A418:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_0894A41C;
L_0894A41C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3304), ctx.gpr[19]);
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x0894A430u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3304)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A430u) goto L_0894A430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A430:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(3312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0894A458u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A458u) goto L_0894A458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A458:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3304)));
    aot_gpr_31 = (0x0894A464u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A464u) goto L_0894A464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A464:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3304)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (65528u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3304)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3304)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-16385));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A4D0;
      }
      goto L_0894A4BC;
    }
L_0894A4BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A4D0;
      }
      goto L_0894A4C8;
    }
L_0894A4C8:
    aot_gpr_31 = (0x0894A4D0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A4D0u) goto L_0894A4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A4D0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894A4F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_run_words); }
    { const std::uint32_t aot_run_words[7]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (8u << 16u);
      if (branch_taken) {
          goto L_0894A564;
      }
      goto L_0894A53C;
    }
L_0894A53C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4203)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A564;
      }
      goto L_0894A548;
    }
L_0894A548:
    aot_gpr_31 = (0x0894A550u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 519u, 0x08946B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A550u) goto L_0894A550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A550:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A564;
      }
      goto L_0894A55C;
    }
L_0894A55C:
    aot_gpr_31 = (0x0894A564u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A564u) goto L_0894A564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A564:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3292)));
    aot_gpr_31 = (0x0894A570u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 391u, 0x089F23B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A570u) goto L_0894A570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A570:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894A594;
      }
      goto L_0894A580;
    }
L_0894A580:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3257)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_0894A59C;
      }
      goto L_0894A58C;
    }
L_0894A58C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894A5A8;
      }
      goto L_0894A594;
    }
L_0894A594:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894A59C;
    }
L_0894A59C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3257)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3257), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0894A5A8;
L_0894A5A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3257)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894A5B8;
      }
      goto L_0894A5B4;
    }
L_0894A5B4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3172), 0u);
    goto L_0894A5B8;
L_0894A5B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A5D4;
      }
      goto L_0894A5C4;
    }
L_0894A5C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), aot_gpr_4);
    goto L_0894A5D4;
L_0894A5D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0894A5E8;
      }
      goto L_0894A5E0;
    }
L_0894A5E0:
    aot_gpr_31 = (0x0894A5E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894D4DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A5E8u) goto L_0894A5E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A5E8:
    aot_gpr_31 = (0x0894A5F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 653u, 0x08952DF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A5F0u) goto L_0894A5F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A5F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A640;
      }
      goto L_0894A5FC;
    }
L_0894A5FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A640;
      }
      goto L_0894A61C;
    }
L_0894A61C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1300)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894A640;
      }
      goto L_0894A630;
    }
L_0894A630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
      if (branch_taken) {
          goto L_0894A6E0;
      }
      goto L_0894A640;
    }
L_0894A640:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894A6E0;
      }
      goto L_0894A664;
    }
L_0894A664:
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x0894A6A4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A6A4u) goto L_0894A6A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A6A4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A6D0;
      }
      goto L_0894A6B0;
    }
L_0894A6B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894A6D0;
      }
      goto L_0894A6C0;
    }
L_0894A6C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
      if (branch_taken) {
          goto L_0894A6E0;
      }
      goto L_0894A6D0;
    }
L_0894A6D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    goto L_0894A6E0;
L_0894A6E0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A734;
      }
      goto L_0894A6F0;
    }
L_0894A6F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3258)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          goto L_0894A728;
      }
      goto L_0894A700;
    }
L_0894A700:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3258), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x0894A714u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2856));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 517u, 0x088BA728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A714u) goto L_0894A714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A714:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0894A734;
      }
      goto L_0894A728;
    }
L_0894A728:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3258)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3258), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0894A734;
L_0894A734:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3258)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894A76C;
      }
      goto L_0894A740;
    }
L_0894A740:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3258)));
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(2856));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_31 = (0x0894A76Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 514u, 0x088BA6F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A76Cu) goto L_0894A76C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A76C:
    aot_gpr_31 = (0x0894A774u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 832u, 0x0891FD10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A774u) goto L_0894A774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A774:
    aot_gpr_31 = (0x0894A77Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 687u, 0x08953184u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A77Cu) goto L_0894A77C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A77C:
    aot_gpr_31 = (0x0894A784u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 402u, 0x0894DF44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A784u) goto L_0894A784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A784:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894A7EC;
      }
      goto L_0894A7A0;
    }
L_0894A7A0:
    aot_gpr_31 = (0x0894A7A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 519u, 0x08946B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A7A8u) goto L_0894A7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A7A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0894A7B4u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 897u, 0x08AB37C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A7B4u) goto L_0894A7B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A7B4:
    aot_gpr_31 = (0x0894A7BCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 450u, 0x08A930F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A7BCu) goto L_0894A7BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A7BC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 35u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[22] = (0u | 58u);
      if (branch_taken) {
          goto L_0894A7F4;
      }
      goto L_0894A7E4;
    }
L_0894A7E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
      if (branch_taken) {
          goto L_0894A9F8;
      }
      goto L_0894A7EC;
    }
L_0894A7EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894A7F4;
    }
L_0894A7F4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x0894A814u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A814u) goto L_0894A814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A814:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (32u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (0u | 214u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 55u);
        goto L_0894A83C;
    }
    goto L_0894A83C;
L_0894A83C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894A84Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A84Cu) goto L_0894A84C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A84C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0894A970;
      }
      goto L_0894A858;
    }
L_0894A858:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894A970;
      }
      goto L_0894A878;
    }
L_0894A878:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894A970;
      }
      goto L_0894A888;
    }
L_0894A888:
    aot_gpr_4 = (16102u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3244)));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894A8E0;
      }
      goto L_0894A8B0;
    }
L_0894A8B0:
    aot_gpr_4 = (15444u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (aot_gpr_4 | 65012u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3244)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3244), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0894A8E0;
      }
      goto L_0894A8DC;
    }
L_0894A8DC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3244), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_0894A8E0;
L_0894A8E0:
    aot_gpr_31 = (0x0894A8E8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 412u, 0x0898D22Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A8E8u) goto L_0894A8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A8E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894A94C;
      }
      goto L_0894A8F0;
    }
L_0894A8F0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0894A94C;
      }
      goto L_0894A914;
    }
L_0894A914:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894A94C;
      }
      goto L_0894A92C;
    }
L_0894A92C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0894A944u);
    aot_gpr_6 = (0u | 191u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A944u) goto L_0894A944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A944:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894A9F4;
      }
      goto L_0894A94C;
    }
L_0894A94C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3244)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_20;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0894A968u);
    aot_gpr_6 = (0u | 192u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A968u) goto L_0894A968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A968:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894A9F4;
      }
      goto L_0894A970;
    }
L_0894A970:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3244)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894A9F4;
      }
      goto L_0894A988;
    }
L_0894A988:
    aot_gpr_4 = (16102u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3244)));
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (15172u << 16u);
      if (branch_taken) {
          goto L_0894A9C8;
      }
      goto L_0894A9A8;
    }
L_0894A9A8:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x0894A9C4u);
    aot_gpr_6 = (0u | 193u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894A9C4u) goto L_0894A9C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894A9C4:
    aot_gpr_4 = (15172u << 16u);
    goto L_0894A9C8;
L_0894A9C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (aot_gpr_4 | 39846u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3244)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3244), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0894A9F4;
      }
      goto L_0894A9F0;
    }
L_0894A9F0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3244), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_0894A9F4;
L_0894A9F4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    goto L_0894A9F8;
L_0894A9F8:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894AA58;
      }
      goto L_0894AA1C;
    }
L_0894AA1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894AA58;
      }
      goto L_0894AA2C;
    }
L_0894AA2C:
    aot_gpr_31 = (0x0894AA34u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AA34u) goto L_0894AA34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AA34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0894AA58;
      }
      goto L_0894AA3C;
    }
L_0894AA3C:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x0894AA58u);
    aot_gpr_6 = (0u | 52u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AA58u) goto L_0894AA58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AA58:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AA64;
    }
L_0894AA64:
    aot_gpr_31 = (0x0894AA6Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 695u, 0x0894763Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AA6Cu) goto L_0894AA6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AA6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AA74;
    }
L_0894AA74:
    aot_gpr_31 = (0x0894AA7Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 739u, 0x089478B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AA7Cu) goto L_0894AA7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AA7C:
    aot_gpr_31 = (0x0894AA84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 743u, 0x08947928u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AA84u) goto L_0894AA84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AA84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
      if (branch_taken) {
          goto L_0894AA94;
      }
      goto L_0894AA8C;
    }
L_0894AA8C:
    aot_gpr_31 = (0x0894AA94u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 745u, 0x08947944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AA94u) goto L_0894AA94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AA94:
    aot_gpr_31 = (0x0894AA9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 709u, 0x089476D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AA9Cu) goto L_0894AA9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AA9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AAA4;
    }
L_0894AAA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AAB4;
    }
L_0894AAB4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AAD0;
    }
L_0894AAD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AADC;
    }
L_0894AADC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AAEC;
    }
L_0894AAEC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = aot_fpr_12 / aot_fpr_14;
    aot_gpr_5 = (17530u << 16u);
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3300)));
      if (branch_taken) {
          goto L_0894AB34;
      }
      goto L_0894AB1C;
    }
L_0894AB1C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0894AB54;
      }
      goto L_0894AB34;
    }
L_0894AB34:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = ctx.fpr[15] / aot_fpr_14;
    aot_gpr_5 = (32768u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    goto L_0894AB54;
L_0894AB54:
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3300), aot_gpr_4);
      if (branch_taken) {
          goto L_0894ABB8;
      }
      goto L_0894AB60;
    }
L_0894AB60:
    aot_gpr_4 = (0u | 2000u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3300), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17988)));
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_13 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_0894ABA0;
      }
      goto L_0894AB8C;
    }
L_0894AB8C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_0894ABB4;
      }
      goto L_0894ABA0;
    }
L_0894ABA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1252)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    goto L_0894ABB4;
L_0894ABB4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0894ABB8;
L_0894ABB8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894AD20;
      }
      goto L_0894ABC4;
    }
L_0894ABC4:
    aot_gpr_31 = (0x0894ABCCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089486DC;
L_0894ABCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[16] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0894AC6C;
      }
      goto L_0894ABD4;
    }
L_0894ABD4:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = aot_fpr_12 / ctx.fpr[15];
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3340)));
      if (branch_taken) {
          goto L_0894AC28;
      }
      goto L_0894AC08;
    }
L_0894AC08:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_0894AC50;
      }
      goto L_0894AC28;
    }
L_0894AC28:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[15] = ctx.fpr[17] / ctx.fpr[15];
    aot_gpr_4 = (32768u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    goto L_0894AC50;
L_0894AC50:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_0894AC60;
      }
      goto L_0894AC58;
    }
L_0894AC58:
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_0894AC60;
L_0894AC60:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3340), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0894AC70;
      }
      goto L_0894AC6C;
    }
L_0894AC6C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3340), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0894AC70;
L_0894AC70:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3340)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894AD20;
      }
      goto L_0894AC84;
    }
L_0894AC84:
    aot_gpr_31 = (0x0894AC8Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AC8Cu) goto L_0894AC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AC8C:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
        goto L_0894ACE0;
    }
    goto L_0894AC94;
L_0894AC94:
    ctx.gpr[10] = (17530u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[10]);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 47u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x0894ACB8u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894ACB8u) goto L_0894ACB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894ACB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_0894ACD0;
    }
    goto L_0894ACC4;
L_0894ACC4:
    aot_gpr_31 = (0x0894ACCCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894ACCCu) goto L_0894ACCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894ACCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0894ACD0;
L_0894ACD0:
    aot_gpr_31 = (0x0894ACD8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 698u, 0x089BB2F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894ACD8u) goto L_0894ACD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894ACD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894AD20;
      }
      goto L_0894ACE0;
    }
L_0894ACE0:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(328));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x0894AD00u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AD00u) goto L_0894AD00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AD00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_0894AD18;
    }
    goto L_0894AD0C;
L_0894AD0C:
    aot_gpr_31 = (0x0894AD14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AD14u) goto L_0894AD14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AD14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0894AD18;
L_0894AD18:
    aot_gpr_31 = (0x0894AD20u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 698u, 0x089BB2F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AD20u) goto L_0894AD20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AD20:
    aot_gpr_31 = (0x0894AD28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AD28u) goto L_0894AD28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AD28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894AD50;
      }
      goto L_0894AD30;
    }
L_0894AD30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894AD50;
      }
      goto L_0894AD3C;
    }
L_0894AD3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894ADA8;
      }
      goto L_0894AD50;
    }
L_0894AD50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_0894AD88;
      }
      goto L_0894AD60;
    }
L_0894AD60:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    aot_gpr_6 = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_0894AD88;
      }
      goto L_0894AD70;
    }
L_0894AD70:
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894AD80u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    goto L_08948898;
L_0894AD80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894ADA8;
      }
      goto L_0894AD88;
    }
L_0894AD88:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_0894ADA8;
      }
      goto L_0894AD94;
    }
L_0894AD94:
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894ADA8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    goto L_08948898;
L_0894ADA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_0894ADCC;
      }
      goto L_0894ADB4;
    }
L_0894ADB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894ADE0;
      }
      goto L_0894ADC4;
    }
L_0894ADC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894AE14;
      }
      goto L_0894ADCC;
    }
L_0894ADCC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894ADD8u);
    aot_gpr_5 = (0u | 0u);
    goto L_08948114;
L_0894ADD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894ADE0;
    }
L_0894ADE0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894ADECu);
    aot_gpr_5 = (0u | 0u);
    goto L_08948114;
L_0894ADEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4000));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894AE0C;
      }
      goto L_0894AE04;
    }
L_0894AE04:
    aot_gpr_31 = (0x0894AE0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AE0Cu) goto L_0894AE0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AE0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894AE14;
    }
L_0894AE14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894B00C;
      }
      goto L_0894AE24;
    }
L_0894AE24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894B00C;
      }
      goto L_0894AE34;
    }
L_0894AE34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894AE58;
      }
      goto L_0894AE44;
    }
L_0894AE44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AE58;
    }
L_0894AE58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AE64;
    }
L_0894AE64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (0u | 2u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0894AE78u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AE78u) goto L_0894AE78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AE78:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AE80;
    }
L_0894AE80:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894AE90u);
    aot_gpr_6 = (0u | 75u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AE90u) goto L_0894AE90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AE90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(564)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AEA4;
    }
L_0894AEA4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AEAC;
    }
L_0894AEAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894AEBCu);
    aot_gpr_6 = (0u | 76u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AEBCu) goto L_0894AEBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AEBC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AEC8;
    }
L_0894AEC8:
    if (ctx.gpr[18] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
        goto L_0894AF38;
    }
    goto L_0894AED0;
L_0894AED0:
    aot_gpr_31 = (0x0894AED8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AED8u) goto L_0894AED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AED8:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AEF4;
    }
L_0894AEF4:
    aot_gpr_31 = (0x0894AEFCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AEFCu) goto L_0894AEFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AEFC:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AF14;
    }
L_0894AF14:
    aot_gpr_31 = (0x0894AF1Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AF1Cu) goto L_0894AF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AF1C:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894AFA8;
      }
      goto L_0894AF34;
    }
L_0894AF34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    goto L_0894AF38;
L_0894AF38:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(564));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894AF78;
      }
      goto L_0894AF5C;
    }
L_0894AF5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0894AF70u);
    ctx.gpr[7] = (0u | 76u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AF70u) goto L_0894AF70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AF70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0894AF90;
      }
      goto L_0894AF78;
    }
L_0894AF78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0894AF8Cu);
    ctx.gpr[7] = (0u | 75u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AF8Cu) goto L_0894AF8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AF8C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_0894AF90;
L_0894AF90:
    aot_gpr_5 = (2203u << 16u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894AFA0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-20648));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894AFA0u) goto L_0894AFA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894AFA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894AFA8;
    }
L_0894AFA8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AFB0;
    }
L_0894AFB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AFBC;
    }
L_0894AFBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AFDC;
    }
L_0894AFDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(272));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_5 = (0u | 10u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x0894B004u);
    aot_gpr_6 = (0u | 75u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B004u) goto L_0894B004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B004:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894B00C;
    }
L_0894B00C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894B024;
      }
      goto L_0894B018;
    }
L_0894B018:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B024u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B024u) goto L_0894B024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B024:
    aot_gpr_31 = (0x0894B02Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08949440;
L_0894B02C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B048;
      }
      goto L_0894B03C;
    }
L_0894B03C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B048u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_089494F0;
L_0894B048:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B050;
    }
L_0894B050:
    aot_gpr_31 = (0x0894B058u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 419u, 0x0898D270u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B058u) goto L_0894B058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B060;
    }
L_0894B060:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x0894B088u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 274u, 0x08A1D7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B088u) goto L_0894B088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B088:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B090;
    }
L_0894B090:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B0A8;
    }
L_0894B0A8:
    aot_gpr_4 = (0u | 31u);
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    aot_gpr_4 = (0u | 30u);
      if (branch_taken) {
          goto L_0894B0BC;
      }
      goto L_0894B0B4;
    }
L_0894B0B4:
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_0894B0D4;
      }
      goto L_0894B0BC;
    }
L_0894B0BC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 59u);
    aot_gpr_31 = (0x0894B0CCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B0CCu) goto L_0894B0CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B0CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B0D4;
    }
L_0894B0D4:
    aot_gpr_4 = (0u | 32u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_0894B0F0;
      }
      goto L_0894B0E0;
    }
L_0894B0E0:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 60u);
    aot_gpr_31 = (0x0894B0F0u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B0F0u) goto L_0894B0F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B0F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 66 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894B9AC;
      }
      goto L_0894B0FC;
    }
L_0894B0FC:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0894B9AC;
      }
      goto L_0894B104;
    }
L_0894B104:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-9304)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894B11C:
    aot_gpr_6 = (15820u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2232)));
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_gpr_5 = (0u | 60u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[19] = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B154;
      }
      goto L_0894B13C;
    }
L_0894B13C:
    aot_gpr_31 = (0x0894B144u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B144u) goto L_0894B144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B144:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894B154;
      }
      goto L_0894B14C;
    }
L_0894B14C:
    aot_gpr_31 = (0x0894B154u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 610u, 0x089AE7A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B154u) goto L_0894B154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B154:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B15C;
    }
L_0894B15C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_gpr_6 = (0u | 30u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[19] = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B1BC;
      }
      goto L_0894B194;
    }
L_0894B194:
    aot_gpr_5 = (0u | 31u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894B1BC;
      }
      goto L_0894B1A0;
    }
L_0894B1A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B1D0;
      }
      goto L_0894B1A8;
    }
L_0894B1A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B1B4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 726u, 0x0894F970u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B1B4u) goto L_0894B1B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B1B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B1D0;
      }
      goto L_0894B1BC;
    }
L_0894B1BC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B1D0;
      }
      goto L_0894B1C4;
    }
L_0894B1C4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B1D0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 671u, 0x0894F578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B1D0u) goto L_0894B1D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B1D0:
    aot_gpr_31 = (0x0894B1D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B1D8u) goto L_0894B1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B1D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894B1F4;
      }
      goto L_0894B1E0;
    }
L_0894B1E0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B1F4;
      }
      goto L_0894B1E8;
    }
L_0894B1E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B1F4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 79u, 0x08950880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B1F4u) goto L_0894B1F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B1F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B1FC;
    }
L_0894B1FC:
    aot_gpr_31 = (0x0894B204u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B204u) goto L_0894B204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B204:
    aot_gpr_31 = (0x0894B20Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B20Cu) goto L_0894B20C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B20C:
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x0894B218u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B218u) goto L_0894B218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B218:
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B24C;
      }
      goto L_0894B234;
    }
L_0894B234:
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (0u | 6u);
    ctx.gpr[21] = (0u | 12u);
    goto L_0894B24C;
L_0894B24C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894B274;
      }
      goto L_0894B25C;
    }
L_0894B25C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    aot_gpr_5 = (0u | 4u);
      if (branch_taken) {
          goto L_0894B284;
      }
      goto L_0894B264;
    }
L_0894B264:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 2u);
      if (branch_taken) {
          goto L_0894B294;
      }
      goto L_0894B26C;
    }
L_0894B26C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894B2A8;
      }
      goto L_0894B274;
    }
L_0894B274:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0894B2B0;
      }
      goto L_0894B284;
    }
L_0894B284:
    aot_gpr_4 = (16416u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0894B2B0;
      }
      goto L_0894B294;
    }
L_0894B294:
    aot_gpr_4 = (16358u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0894B2B0;
      }
      goto L_0894B2A8;
    }
L_0894B2A8:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0894B2B0;
L_0894B2B0:
    aot_gpr_31 = (0x0894B2B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0894BEF4;
L_0894B2B8:
    aot_gpr_31 = (0x0894B2C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B2C0u) goto L_0894B2C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B2C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B2C8;
    }
L_0894B2C8:
    aot_gpr_31 = (0x0894B2D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B2D0u) goto L_0894B2D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B2D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B2DCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B2DCu) goto L_0894B2DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B2DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B2E4;
    }
L_0894B2E4:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x0894B2F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B2F0u) goto L_0894B2F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B2F0:
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_31 = (0x0894B30Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B30Cu) goto L_0894B30C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B30C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B354;
      }
      goto L_0894B344;
    }
L_0894B344:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
        goto L_0894B360;
    }
    goto L_0894B354;
L_0894B354:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0894B394;
      }
      goto L_0894B360;
    }
L_0894B360:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::sqrt(aot_fpr_12);
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_0894B394;
      }
      goto L_0894B390;
    }
L_0894B390:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0894B394;
L_0894B394:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B4D0;
      }
      goto L_0894B39C;
    }
L_0894B39C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894B4D0;
      }
      goto L_0894B3A8;
    }
L_0894B3A8:
    aot_gpr_31 = (0x0894B3B0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 489u, 0x0898D560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B3B0u) goto L_0894B3B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B3B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0894B4A0;
      }
      goto L_0894B3B8;
    }
L_0894B3B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_0894B3EC;
    }
    goto L_0894B3C4;
L_0894B3C4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0894B3E0;
      }
      goto L_0894B3D0;
    }
L_0894B3D0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0894B3E4;
      }
      goto L_0894B3DC;
    }
L_0894B3DC:
    aot_gpr_4 = (0u | 1u);
    goto L_0894B3E0;
L_0894B3E0:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0894B3E4;
L_0894B3E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0894B424;
      }
      goto L_0894B3EC;
    }
L_0894B3EC:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0894B400;
      }
      goto L_0894B3F4;
    }
L_0894B3F4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(68))))));
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0894B41C;
    }
    goto L_0894B400;
L_0894B400:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20))))));
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_0894B420;
    }
    goto L_0894B40C;
L_0894B40C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(70))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0894B420;
      }
      goto L_0894B418;
    }
L_0894B418:
    aot_gpr_4 = (0u | 1u);
    goto L_0894B41C;
L_0894B41C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0894B420;
L_0894B420:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0894B424;
L_0894B424:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894B4A0;
      }
      goto L_0894B42C;
    }
L_0894B42C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(22))))));
        goto L_0894B460;
    }
    goto L_0894B438;
L_0894B438:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0894B454;
      }
      goto L_0894B444;
    }
L_0894B444:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(54))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0894B458;
      }
      goto L_0894B450;
    }
L_0894B450:
    aot_gpr_4 = (0u | 1u);
    goto L_0894B454;
L_0894B454:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0894B458;
L_0894B458:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0894B498;
      }
      goto L_0894B460;
    }
L_0894B460:
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0894B474;
      }
      goto L_0894B468;
    }
L_0894B468:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(72))))));
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0894B490;
    }
    goto L_0894B474;
L_0894B474:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_0894B494;
    }
    goto L_0894B480;
L_0894B480:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0894B494;
      }
      goto L_0894B48C;
    }
L_0894B48C:
    aot_gpr_4 = (0u | 1u);
    goto L_0894B490;
L_0894B490:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0894B494;
L_0894B494:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0894B498;
L_0894B498:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B4D0;
      }
      goto L_0894B4A0;
    }
L_0894B4A0:
    aot_gpr_31 = (0x0894B4A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B4A8u) goto L_0894B4A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B4A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894B4C8;
      }
      goto L_0894B4B8;
    }
L_0894B4B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894B4D0;
      }
      goto L_0894B4C8;
    }
L_0894B4C8:
    aot_gpr_31 = (0x0894B4D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B4D0u) goto L_0894B4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B4D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B4DCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08949D80;
L_0894B4DC:
    aot_gpr_31 = (0x0894B4E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0894BEF4;
L_0894B4E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B4EC;
    }
L_0894B4EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B4F8u);
    aot_gpr_5 = (0u | 0u);
    goto L_08948114;
L_0894B4F8:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B510;
    }
L_0894B510:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 8u);
    ctx.gpr[20] = (0u | 50u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B534;
    }
L_0894B534:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 51u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B544;
    }
L_0894B544:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1396));
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0894B5F8;
      }
      goto L_0894B564;
    }
L_0894B564:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (aot_gpr_6 << 5u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 24u);
    if (aot_gpr_6 == ctx.gpr[7]) {
    aot_gpr_5 = (0u | 1u);
        goto L_0894B5F8;
    }
    goto L_0894B588;
L_0894B588:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (aot_gpr_6 << 5u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 25u);
    if (aot_gpr_6 == ctx.gpr[7]) {
    aot_gpr_5 = (0u | 1u);
        goto L_0894B5F8;
    }
    goto L_0894B5AC;
L_0894B5AC:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (aot_gpr_6 << 5u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 26u);
    if (aot_gpr_6 == ctx.gpr[7]) {
    aot_gpr_5 = (0u | 1u);
        goto L_0894B5F8;
    }
    goto L_0894B5D0;
L_0894B5D0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (aot_gpr_6 << 5u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (0u | 27u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0894B5FC;
      }
      goto L_0894B5F4;
    }
L_0894B5F4:
    aot_gpr_5 = (0u | 1u);
    goto L_0894B5F8;
L_0894B5F8:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_0894B5FC;
L_0894B5FC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B604;
    }
L_0894B604:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B638;
      }
      goto L_0894B614;
    }
L_0894B614:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B620u);
    aot_gpr_5 = (0u | 50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B620u) goto L_0894B620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B620:
    aot_gpr_31 = (0x0894B628u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 261u, 0x0894D1B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B628u) goto L_0894B628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B628:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0894B638;
L_0894B638:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B690;
      }
      goto L_0894B648;
    }
L_0894B648:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B690;
      }
      goto L_0894B658;
    }
L_0894B658:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3304)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_31 = (0x0894B668u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 507u, 0x0894E79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B668u) goto L_0894B668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B668:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(ctx.gpr[22] + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0894B690;
L_0894B690:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B6AC;
      }
      goto L_0894B69C;
    }
L_0894B69C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B6AC;
    }
L_0894B6AC:
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x0894B6BCu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 274u, 0x08A1D7C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B6BCu) goto L_0894B6BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B6BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894B6E0;
      }
      goto L_0894B6C4;
    }
L_0894B6C4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B6CC;
    }
L_0894B6CC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B6D8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 671u, 0x0894F578u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B6D8u) goto L_0894B6D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B6D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B6E0;
    }
L_0894B6E0:
    aot_gpr_31 = (0x0894B6E8u);
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 124u, 0x08999134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B6E8u) goto L_0894B6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B6E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894B70C;
      }
      goto L_0894B6F0;
    }
L_0894B6F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B6F8;
    }
L_0894B6F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B704u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08948B10;
L_0894B704:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B70C;
    }
L_0894B70C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894B78C;
      }
      goto L_0894B71C;
    }
L_0894B71C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B724;
    }
L_0894B724:
    aot_gpr_31 = (0x0894B72Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0894854C;
L_0894B72C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0894B764;
      }
      goto L_0894B734;
    }
L_0894B734:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0894B74Cu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B74Cu) goto L_0894B74C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B74C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B778;
      }
      goto L_0894B764;
    }
L_0894B764:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B770u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_089488F4;
L_0894B770:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B778;
    }
L_0894B778:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B784u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 608u, 0x0894F028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B784u) goto L_0894B784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B784:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B78C;
    }
L_0894B78C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B86C;
      }
      goto L_0894B79C;
    }
L_0894B79C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 22u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894B850;
      }
      goto L_0894B7AC;
    }
L_0894B7AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894B850;
      }
      goto L_0894B7BC;
    }
L_0894B7BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 51u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894B850;
      }
      goto L_0894B7CC;
    }
L_0894B7CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_0894B850;
      }
      goto L_0894B7D8;
    }
L_0894B7D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894B86C;
      }
      goto L_0894B7E8;
    }
L_0894B7E8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B86C;
      }
      goto L_0894B7F8;
    }
L_0894B7F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B86C;
      }
      goto L_0894B804;
    }
L_0894B804:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894B850;
      }
      goto L_0894B82C;
    }
L_0894B82C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894B86C;
      }
      goto L_0894B850;
    }
L_0894B850:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B858;
    }
L_0894B858:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B864u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 778u, 0x0894FDDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B864u) goto L_0894B864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B864:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B86C;
    }
L_0894B86C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B874;
    }
L_0894B874:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 51u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894B890;
      }
      goto L_0894B884;
    }
L_0894B884:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B890u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 608u, 0x0894F028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B890u) goto L_0894B890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B890:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_0894B8BC;
      }
      goto L_0894B89C;
    }
L_0894B89C:
    aot_gpr_31 = (0x0894B8A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B8A4u) goto L_0894B8A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B8A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0894B8D0;
      }
      goto L_0894B8AC;
    }
L_0894B8AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 36u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894B8D0;
      }
      goto L_0894B8BC;
    }
L_0894B8BC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B8D0;
      }
      goto L_0894B8C4;
    }
L_0894B8C4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B8D0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 79u, 0x08950880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B8D0u) goto L_0894B8D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B8D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B8D8;
    }
L_0894B8D8:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B8FC;
      }
      goto L_0894B8F0;
    }
L_0894B8F0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B8FCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 608u, 0x0894F028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B8FCu) goto L_0894B8FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B8FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B904;
    }
L_0894B904:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B90C;
    }
L_0894B90C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B918u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 608u, 0x0894F028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B918u) goto L_0894B918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B918:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B97C;
      }
      goto L_0894B928;
    }
L_0894B928:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894B938u);
    aot_gpr_6 = (0u | 136u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B938u) goto L_0894B938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B938:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B97C;
      }
      goto L_0894B944;
    }
L_0894B944:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894B97C;
      }
      goto L_0894B960;
    }
L_0894B960:
    ctx.gpr[8] = (16256u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0894B97Cu);
    ctx.gpr[7] = (0u | 140u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B97Cu) goto L_0894B97C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B97C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894B9A4;
      }
      goto L_0894B98C;
    }
L_0894B98C:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_0894B9C0;
      }
      goto L_0894B9A4;
    }
L_0894B9A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894B9AC;
    }
L_0894B9AC:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.gpr[19] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (0u | 12u);
    goto L_0894B9C0;
L_0894B9C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0894BA28;
      }
      goto L_0894B9C8;
    }
L_0894B9C8:
    aot_gpr_31 = (0x0894B9D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 627u, 0x08906E38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894B9D0u) goto L_0894B9D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894B9D0:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
        goto L_0894B9EC;
    }
    goto L_0894B9D8;
L_0894B9D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 50u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894BA28;
      }
      goto L_0894B9E8;
    }
L_0894B9E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    goto L_0894B9EC;
L_0894B9EC:
    aot_gpr_5 = (0u | 36u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894BA28;
      }
      goto L_0894B9F8;
    }
L_0894B9F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894BA04u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 469u, 0x0895238Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BA04u) goto L_0894BA04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BA04:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x0894BA28u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0144_entry, 144u, 382u, 0x08A45F20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BA28u) goto L_0894BA28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BA28:
    aot_gpr_31 = (0x0894BA30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 581u, 0x08952994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BA30u) goto L_0894BA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BA30:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0894BD2C;
      }
      goto L_0894BA38;
    }
L_0894BA38:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(112))))));
    aot_gpr_6 = (0u | 4u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_0894BD2C;
      }
      goto L_0894BA6C;
    }
L_0894BA6C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0894BD2C;
      }
      goto L_0894BA98;
    }
L_0894BA98:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1736), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(128)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_0894BAE8;
      }
      goto L_0894BAD8;
    }
L_0894BAD8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_14) || std::isnan(aot_fpr_12)) && aot_fpr_14 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894BAFC;
      }
      goto L_0894BAE8;
    }
L_0894BAE8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x0894BAF4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BAF4u) goto L_0894BAF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BAF4:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0894BAFC;
      }
      goto L_0894BAFC;
    }
L_0894BAFC:
    aot_gpr_31 = (0x0894BB04u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BB04u) goto L_0894BB04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BB04:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_13 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894BB54;
      }
      goto L_0894BB24;
    }
L_0894BB24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894BB54;
      }
      goto L_0894BB34;
    }
L_0894BB34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 61u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894BB54;
      }
      goto L_0894BB44;
    }
L_0894BB44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 63u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894BB64;
      }
      goto L_0894BB54;
    }
L_0894BB54:
    aot_gpr_31 = (0x0894BB5Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BB5Cu) goto L_0894BB5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BB5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894BD2C;
      }
      goto L_0894BB64;
    }
L_0894BB64:
    aot_gpr_4 = (16134u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 2706u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16568u << 16u);
      if (branch_taken) {
          goto L_0894BD24;
      }
      goto L_0894BB80;
    }
L_0894BB80:
    aot_gpr_4 = (aot_gpr_4 | 20105u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16423u << 16u);
      if (branch_taken) {
          goto L_0894BD24;
      }
      goto L_0894BB98;
    }
L_0894BB98:
    aot_gpr_4 = (aot_gpr_4 | 36151u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16968u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17530u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (20224u << 16u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BBC0;
    }
L_0894BBC0:
    aot_gpr_4 = (16490u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 37504u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BBDC;
    }
L_0894BBDC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x0894BBECu);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[30];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BBECu) goto L_0894BBEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BBEC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x0894BBFCu);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[30];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BBFCu) goto L_0894BBFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BBFC:
    aot_gpr_4 = (18804u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1720)));
    aot_gpr_4 = (aot_gpr_4 | 9200u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_14)) && aot_fpr_13 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0894BC24;
      }
      goto L_0894BC1C;
    }
L_0894BC1C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BC24;
    }
L_0894BC24:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1720)));
    aot_fpr_14 = ctx.fpr[26] - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) & 0x7FFFFFFFu);
    aot_fpr_13 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BC48;
    }
L_0894BC48:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0894BC50;
      }
      goto L_0894BC50;
    }
L_0894BC50:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x0894BC64u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 430u, 0x08909990u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BC64u) goto L_0894BC64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BC64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_0894BCA0;
    }
    goto L_0894BC80;
L_0894BC80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
      if (branch_taken) {
          goto L_0894BCC4;
      }
      goto L_0894BCA0;
    }
L_0894BCA0:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_20;
    aot_gpr_4 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
    goto L_0894BCC4;
L_0894BCC4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (16544u << 16u);
      if (branch_taken) {
          goto L_0894BCDC;
      }
      goto L_0894BCCC;
    }
L_0894BCCC:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_4 = (16544u << 16u);
    goto L_0894BCDC;
L_0894BCDC:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[24];
        goto L_0894BD00;
    }
    goto L_0894BCF4;
L_0894BCF4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0894BD10;
      }
      goto L_0894BD00;
    }
L_0894BD00:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_0894BD10;
L_0894BD10:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0894BD1Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BD1Cu) goto L_0894BD1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BD1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894BD2C;
      }
      goto L_0894BD24;
    }
L_0894BD24:
    aot_gpr_31 = (0x0894BD2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BD2Cu) goto L_0894BD2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BD2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    if (aot_gpr_4 != ctx.gpr[19]) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(320)));
        goto L_0894BD60;
    }
    goto L_0894BD38;
L_0894BD38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(320)));
        goto L_0894BD60;
    }
    goto L_0894BD48;
L_0894BD48:
    aot_gpr_31 = (0x0894BD50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BD50u) goto L_0894BD50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BD50:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894BD5Cu);
    aot_gpr_5 = (0u | 250u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BD5Cu) goto L_0894BD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BD5C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(320)));
    goto L_0894BD60;
L_0894BD60:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(324)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_12 = aot_fpr_13 + ctx.fpr[17];
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894BE04;
      }
      goto L_0894BDC4;
    }
L_0894BDC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3272)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894BDE0;
      }
      goto L_0894BDD0;
    }
L_0894BDD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3272), aot_gpr_4);
      if (branch_taken) {
          goto L_0894BE18;
      }
      goto L_0894BDE0;
    }
L_0894BDE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3272)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894BE18;
      }
      goto L_0894BDF4;
    }
L_0894BDF4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0894BE18;
      }
      goto L_0894BE04;
    }
L_0894BE04:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3272), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0894BE18;
L_0894BE18:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894BE50;
      }
      goto L_0894BE24;
    }
L_0894BE24:
    aot_gpr_31 = (0x0894BE2Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BE2Cu) goto L_0894BE2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BE2C:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[2];
      if (branch_taken) {
          goto L_0894BE50;
      }
      goto L_0894BE34;
    }
L_0894BE34:
    aot_gpr_31 = (0x0894BE3Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BE3Cu) goto L_0894BE3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BE3C:
    aot_gpr_31 = (0x0894BE44u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 489u, 0x0898D560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BE44u) goto L_0894BE44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BE44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0894BE50;
      }
      goto L_0894BE4C;
    }
L_0894BE4C:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963), static_cast<std::uint8_t>(0u));
    goto L_0894BE50;
L_0894BE50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_0894BE9C;
      }
      goto L_0894BE5C;
    }
L_0894BE5C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0894BE94;
      }
      goto L_0894BE84;
    }
L_0894BE84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0894BE9C;
      }
      goto L_0894BE94;
    }
L_0894BE94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3252), aot_gpr_4);
    goto L_0894BE9C;
L_0894BE9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894BEB4;
      }
      goto L_0894BEAC;
    }
L_0894BEAC:
    aot_gpr_31 = (0x0894BEB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 73u, 0x08AD06ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BEB4u) goto L_0894BEB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BEB4:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894BEF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words); }
    aot_gpr_31 = (0x0894BF30u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_08948744;
L_0894BF30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0894BF58;
      }
      goto L_0894BF38;
    }
L_0894BF38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (14336u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 >> 27u);
    if (static_cast<std::int32_t>(aot_gpr_5) > 0) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
        goto L_0894BF60;
    }
    goto L_0894BF50;
L_0894BF50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894BF90;
      }
      goto L_0894BF58;
    }
L_0894BF58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 220u, 0x0894CE08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0894BF60;
    }
L_0894BF60:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_6 = (51200u << 16u);
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 >> 27u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 27u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0894BF90;
L_0894BF90:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894BFA0u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BFA0u) goto L_0894BFA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BFA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894BFB4u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BFB4u) goto L_0894BFB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BFB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894BFC8u);
    aot_gpr_6 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BFC8u) goto L_0894BFC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BFC8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894BFDCu);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BFDCu) goto L_0894BFDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BFDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0894BFF0u);
    aot_gpr_6 = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894BFF0u) goto L_0894BFF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894BFF0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0082_entry, 82u, 3u, 0x0894C010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0894BFFC;
    }
L_0894BFFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x0894C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0081(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0081_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_81(Runtime &runtime) {
    runtime.register_generated_unit(81u, 0x08948000u, 16384u, &recomp_unit_0081, &recomp_unit_0081_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08948000u, &recomp_unit_0081, "recomp_unit_0081",
                                          kEntryMasks_recomp_unit_0081, 64u);
}
} // namespace psprecomp
