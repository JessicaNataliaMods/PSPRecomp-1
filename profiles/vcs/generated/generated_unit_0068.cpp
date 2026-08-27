#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0068[64] = {
    0x0000000000000001ull, 0x0000000000000000ull, 0x1000000000000000ull, 0x0084040044401441ull,
    0x1000821008100408ull, 0x144A002040400120ull, 0x0004000000001000ull, 0x0424021200000400ull,
    0x1080004010900848ull, 0x0248A9200612A204ull, 0x1225044480548811ull, 0x2804024244480122ull,
    0x310044C214602A40ull, 0x092100458000AA14ull, 0x0005111110001000ull, 0x8A905055111112A0ull,
    0x100C010180809888ull, 0x2902845001548A21ull, 0x0A00020420510142ull, 0x0204010140004084ull,
    0x0000042200000021ull, 0x00C4422200000214ull, 0x8102142AAA020000ull, 0x0001088000000840ull,
    0xC450888000008500ull, 0x285502AA02000000ull, 0x422000001220A2A9ull, 0x2220000021400000ull,
    0x0048828000003114ull, 0x0085000001088000ull, 0x000000C450888000ull, 0x1414090904400022ull,
    0x8010008000000000ull, 0x1002000000544400ull, 0x4010008000200808ull, 0x62C5449314A88904ull,
    0x898A92081040A005ull, 0x0410112528006448ull, 0x2020000544A55280ull, 0xA2A4420440A72124ull,
    0x500684442918815Aull, 0x42AA548852540220ull, 0x0000801209415415ull, 0x100D484444440440ull,
    0x0409400004409000ull, 0x00048A4880054945ull, 0x08808849206490A0ull, 0x110020540842A004ull,
    0xAA00404441440001ull, 0x3229296244888220ull, 0x21222A842A240000ull, 0x0A3222222444244Aull,
    0x44444424448988AAull, 0x0211454450544444ull, 0x1085890411104001ull, 0x001C889044410008ull,
    0x4522111200000000ull, 0x1120001000188124ull, 0x282451104440B000ull, 0x2042A10211201128ull,
    0x04A8152922552824ull, 0xAA020852AA280886ull, 0x4842010200501188ull, 0x8402850054409084ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0068[64] = {
    1u, 2u, 2u, 3u, 13u, 21u, 31u, 33u, 40u, 49u, 65u, 81u, 94u, 110u, 124u, 132u,
    151u, 163u, 180u, 191u, 199u, 204u, 214u, 227u, 232u, 243u, 255u, 268u, 274u, 284u, 290u, 298u,
    310u, 313u, 320u, 326u, 348u, 364u, 378u, 392u, 411u, 430u, 449u, 462u, 476u, 484u, 499u, 514u,
    526u, 538u, 557u, 571u, 589u, 608u, 625u, 638u, 650u, 659u, 669u, 683u, 697u, 717u, 736u, 748u,
};
void recomp_unit_0068_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,16,29,31,6 fprs=12,13,14,15 gpr_occ=4205 fpr_occ=914 gpr_total=5375 fpr_total=1220
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[16] = aot_gpr_16; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08914000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0068[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0068[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08914000;
    case 2u: goto L_089142F0;
    case 3u: goto L_08914300;
    case 4u: goto L_08914318;
    case 5u: goto L_08914328;
    case 6u: goto L_08914330;
    case 7u: goto L_08914358;
    case 8u: goto L_08914368;
    case 9u: goto L_08914378;
    case 10u: goto L_089143A8;
    case 11u: goto L_089143C8;
    case 12u: goto L_089143DC;
    case 13u: goto L_0891440C;
    case 14u: goto L_08914428;
    case 15u: goto L_08914450;
    case 16u: goto L_0891446C;
    case 17u: goto L_08914490;
    case 18u: goto L_089144A4;
    case 19u: goto L_089144BC;
    case 20u: goto L_089144F0;
    case 21u: goto L_08914514;
    case 22u: goto L_08914520;
    case 23u: goto L_08914558;
    case 24u: goto L_08914578;
    case 25u: goto L_08914594;
    case 26u: goto L_089145C4;
    case 27u: goto L_089145CC;
    case 28u: goto L_089145D8;
    case 29u: goto L_089145E8;
    case 30u: goto L_089145F0;
    case 31u: goto L_08914630;
    case 32u: goto L_089146C8;
    case 33u: goto L_08914728;
    case 34u: goto L_08914784;
    case 35u: goto L_08914790;
    case 36u: goto L_089147A4;
    case 37u: goto L_089147C8;
    case 38u: goto L_089147D4;
    case 39u: goto L_089147E8;
    case 40u: goto L_0891480C;
    case 41u: goto L_08914818;
    case 42u: goto L_0891482C;
    case 43u: goto L_08914850;
    case 44u: goto L_0891485C;
    case 45u: goto L_08914870;
    case 46u: goto L_08914898;
    case 47u: goto L_089148DC;
    case 48u: goto L_089148F0;
    case 49u: goto L_08914908;
    case 50u: goto L_08914924;
    case 51u: goto L_08914934;
    case 52u: goto L_0891493C;
    case 53u: goto L_08914944;
    case 54u: goto L_08914950;
    case 55u: goto L_08914964;
    case 56u: goto L_08914968;
    case 57u: goto L_08914994;
    case 58u: goto L_089149A0;
    case 59u: goto L_089149AC;
    case 60u: goto L_089149B4;
    case 61u: goto L_089149BC;
    case 62u: goto L_089149CC;
    case 63u: goto L_089149D8;
    case 64u: goto L_089149E4;
    case 65u: goto L_08914A00;
    case 66u: goto L_08914A10;
    case 67u: goto L_08914A2C;
    case 68u: goto L_08914A3C;
    case 69u: goto L_08914A48;
    case 70u: goto L_08914A50;
    case 71u: goto L_08914A58;
    case 72u: goto L_08914A7C;
    case 73u: goto L_08914A88;
    case 74u: goto L_08914A98;
    case 75u: goto L_08914AA8;
    case 76u: goto L_08914AC0;
    case 77u: goto L_08914AC8;
    case 78u: goto L_08914AD4;
    case 79u: goto L_08914AE4;
    case 80u: goto L_08914AF0;
    case 81u: goto L_08914B04;
    case 82u: goto L_08914B14;
    case 83u: goto L_08914B20;
    case 84u: goto L_08914B4C;
    case 85u: goto L_08914B58;
    case 86u: goto L_08914B68;
    case 87u: goto L_08914B78;
    case 88u: goto L_08914B84;
    case 89u: goto L_08914B98;
    case 90u: goto L_08914BA4;
    case 91u: goto L_08914BC8;
    case 92u: goto L_08914BEC;
    case 93u: goto L_08914BF4;
    case 94u: goto L_08914C18;
    case 95u: goto L_08914C24;
    case 96u: goto L_08914C2C;
    case 97u: goto L_08914C34;
    case 98u: goto L_08914C54;
    case 99u: goto L_08914C58;
    case 100u: goto L_08914C68;
    case 101u: goto L_08914C70;
    case 102u: goto L_08914C84;
    case 103u: goto L_08914C98;
    case 104u: goto L_08914C9C;
    case 105u: goto L_08914CA8;
    case 106u: goto L_08914CB8;
    case 107u: goto L_08914CE0;
    case 108u: goto L_08914CF0;
    case 109u: goto L_08914CF4;
    case 110u: goto L_08914D08;
    case 111u: goto L_08914D10;
    case 112u: goto L_08914D24;
    case 113u: goto L_08914D2C;
    case 114u: goto L_08914D34;
    case 115u: goto L_08914D3C;
    case 116u: goto L_08914D7C;
    case 117u: goto L_08914D80;
    case 118u: goto L_08914D88;
    case 119u: goto L_08914D98;
    case 120u: goto L_08914DC0;
    case 121u: goto L_08914DD4;
    case 122u: goto L_08914DE0;
    case 123u: goto L_08914DEC;
    case 124u: goto L_08914E30;
    case 125u: goto L_08914E70;
    case 126u: goto L_08914E80;
    case 127u: goto L_08914E90;
    case 128u: goto L_08914EA0;
    case 129u: goto L_08914EB0;
    case 130u: goto L_08914EC0;
    case 131u: goto L_08914EC8;
    case 132u: goto L_08914F14;
    case 133u: goto L_08914F1C;
    case 134u: goto L_08914F24;
    case 135u: goto L_08914F30;
    case 136u: goto L_08914F40;
    case 137u: goto L_08914F50;
    case 138u: goto L_08914F60;
    case 139u: goto L_08914F70;
    case 140u: goto L_08914F80;
    case 141u: goto L_08914F88;
    case 142u: goto L_08914F90;
    case 143u: goto L_08914F98;
    case 144u: goto L_08914FB0;
    case 145u: goto L_08914FB8;
    case 146u: goto L_08914FD0;
    case 147u: goto L_08914FDC;
    case 148u: goto L_08914FE4;
    case 149u: goto L_08914FEC;
    case 150u: goto L_08914FFC;
    case 151u: goto L_0891500C;
    case 152u: goto L_0891501C;
    case 153u: goto L_0891502C;
    case 154u: goto L_08915030;
    case 155u: goto L_0891503C;
    case 156u: goto L_0891505C;
    case 157u: goto L_0891507C;
    case 158u: goto L_08915080;
    case 159u: goto L_089150A0;
    case 160u: goto L_089150C8;
    case 161u: goto L_089150CC;
    case 162u: goto L_089150F0;
    case 163u: goto L_08915100;
    case 164u: goto L_08915114;
    case 165u: goto L_08915124;
    case 166u: goto L_0891512C;
    case 167u: goto L_0891513C;
    case 168u: goto L_08915148;
    case 169u: goto L_08915150;
    case 170u: goto L_08915158;
    case 171u: goto L_08915160;
    case 172u: goto L_08915190;
    case 173u: goto L_08915198;
    case 174u: goto L_089151A8;
    case 175u: goto L_089151BC;
    case 176u: goto L_089151C4;
    case 177u: goto L_089151E0;
    case 178u: goto L_089151EC;
    case 179u: goto L_089151F4;
    case 180u: goto L_08915204;
    case 181u: goto L_08915218;
    case 182u: goto L_08915220;
    case 183u: goto L_08915240;
    case 184u: goto L_08915250;
    case 185u: goto L_08915258;
    case 186u: goto L_08915274;
    case 187u: goto L_08915288;
    case 188u: goto L_089152A4;
    case 189u: goto L_089152E4;
    case 190u: goto L_089152EC;
    case 191u: goto L_08915308;
    case 192u: goto L_0891531C;
    case 193u: goto L_08915338;
    case 194u: goto L_08915378;
    case 195u: goto L_08915380;
    case 196u: goto L_089153A0;
    case 197u: goto L_089153C8;
    case 198u: goto L_089153E4;
    case 199u: goto L_08915400;
    case 200u: goto L_08915414;
    case 201u: goto L_08915484;
    case 202u: goto L_08915494;
    case 203u: goto L_089154A8;
    case 204u: goto L_08915508;
    case 205u: goto L_08915510;
    case 206u: goto L_08915524;
    case 207u: goto L_08915584;
    case 208u: goto L_08915594;
    case 209u: goto L_089155A4;
    case 210u: goto L_089155B8;
    case 211u: goto L_089155C8;
    case 212u: goto L_089155D8;
    case 213u: goto L_089155DC;
    case 214u: goto L_08915644;
    case 215u: goto L_08915664;
    case 216u: goto L_0891566C;
    case 217u: goto L_08915674;
    case 218u: goto L_0891567C;
    case 219u: goto L_08915684;
    case 220u: goto L_0891568C;
    case 221u: goto L_08915694;
    case 222u: goto L_089156A8;
    case 223u: goto L_089156B0;
    case 224u: goto L_089156C4;
    case 225u: goto L_089156E0;
    case 226u: goto L_089156FC;
    case 227u: goto L_08915718;
    case 228u: goto L_0891572C;
    case 229u: goto L_0891579C;
    case 230u: goto L_089157AC;
    case 231u: goto L_089157C0;
    case 232u: goto L_08915820;
    case 233u: goto L_08915828;
    case 234u: goto L_0891583C;
    case 235u: goto L_0891589C;
    case 236u: goto L_089158AC;
    case 237u: goto L_089158BC;
    case 238u: goto L_089158D0;
    case 239u: goto L_089158D8;
    case 240u: goto L_089158E8;
    case 241u: goto L_089158F8;
    case 242u: goto L_089158FC;
    case 243u: goto L_08915964;
    case 244u: goto L_08915984;
    case 245u: goto L_0891598C;
    case 246u: goto L_08915994;
    case 247u: goto L_0891599C;
    case 248u: goto L_089159A4;
    case 249u: goto L_089159C0;
    case 250u: goto L_089159C8;
    case 251u: goto L_089159D0;
    case 252u: goto L_089159D8;
    case 253u: goto L_089159EC;
    case 254u: goto L_089159F4;
    case 255u: goto L_08915A00;
    case 256u: goto L_08915A0C;
    case 257u: goto L_08915A14;
    case 258u: goto L_08915A1C;
    case 259u: goto L_08915A24;
    case 260u: goto L_08915A34;
    case 261u: goto L_08915A3C;
    case 262u: goto L_08915A54;
    case 263u: goto L_08915A64;
    case 264u: goto L_08915A70;
    case 265u: goto L_08915AD4;
    case 266u: goto L_08915AE4;
    case 267u: goto L_08915AF8;
    case 268u: goto L_08915B58;
    case 269u: goto L_08915B60;
    case 270u: goto L_08915B74;
    case 271u: goto L_08915BD4;
    case 272u: goto L_08915BE4;
    case 273u: goto L_08915BF4;
    case 274u: goto L_08915C08;
    case 275u: goto L_08915C10;
    case 276u: goto L_08915C20;
    case 277u: goto L_08915C30;
    case 278u: goto L_08915C34;
    case 279u: goto L_08915C9C;
    case 280u: goto L_08915CA4;
    case 281u: goto L_08915CBC;
    case 282u: goto L_08915CCC;
    case 283u: goto L_08915CD8;
    case 284u: goto L_08915D3C;
    case 285u: goto L_08915D4C;
    case 286u: goto L_08915D60;
    case 287u: goto L_08915DC0;
    case 288u: goto L_08915DC8;
    case 289u: goto L_08915DDC;
    case 290u: goto L_08915E3C;
    case 291u: goto L_08915E4C;
    case 292u: goto L_08915E5C;
    case 293u: goto L_08915E70;
    case 294u: goto L_08915E78;
    case 295u: goto L_08915E88;
    case 296u: goto L_08915E98;
    case 297u: goto L_08915E9C;
    case 298u: goto L_08915F04;
    case 299u: goto L_08915F14;
    case 300u: goto L_08915F58;
    case 301u: goto L_08915F68;
    case 302u: goto L_08915F80;
    case 303u: goto L_08915F8C;
    case 304u: goto L_08915FA0;
    case 305u: goto L_08915FAC;
    case 306u: goto L_08915FC8;
    case 307u: goto L_08915FD0;
    case 308u: goto L_08915FE8;
    case 309u: goto L_08915FF0;
    case 310u: goto L_0891609C;
    case 311u: goto L_089160D0;
    case 312u: goto L_089160FC;
    case 313u: goto L_08916128;
    case 314u: goto L_08916138;
    case 315u: goto L_08916148;
    case 316u: goto L_08916150;
    case 317u: goto L_08916158;
    case 318u: goto L_089161C4;
    case 319u: goto L_089161F0;
    case 320u: goto L_0891620C;
    case 321u: goto L_0891622C;
    case 322u: goto L_08916254;
    case 323u: goto L_0891629C;
    case 324u: goto L_089162D0;
    case 325u: goto L_089162F8;
    case 326u: goto L_08916308;
    case 327u: goto L_08916320;
    case 328u: goto L_0891632C;
    case 329u: goto L_0891633C;
    case 330u: goto L_0891634C;
    case 331u: goto L_08916354;
    case 332u: goto L_0891635C;
    case 333u: goto L_08916368;
    case 334u: goto L_08916370;
    case 335u: goto L_08916380;
    case 336u: goto L_08916384;
    case 337u: goto L_08916390;
    case 338u: goto L_0891639C;
    case 339u: goto L_089163A8;
    case 340u: goto L_089163B8;
    case 341u: goto L_089163C0;
    case 342u: goto L_089163C8;
    case 343u: goto L_089163D8;
    case 344u: goto L_089163DC;
    case 345u: goto L_089163E4;
    case 346u: goto L_089163F4;
    case 347u: goto L_089163F8;
    case 348u: goto L_08916400;
    case 349u: goto L_08916408;
    case 350u: goto L_08916434;
    case 351u: goto L_0891643C;
    case 352u: goto L_08916458;
    case 353u: goto L_08916470;
    case 354u: goto L_0891648C;
    case 355u: goto L_089164A4;
    case 356u: goto L_089164B0;
    case 357u: goto L_089164BC;
    case 358u: goto L_089164C4;
    case 359u: goto L_089164CC;
    case 360u: goto L_089164DC;
    case 361u: goto L_089164E0;
    case 362u: goto L_089164EC;
    case 363u: goto L_089164FC;
    case 364u: goto L_0891650C;
    case 365u: goto L_08916518;
    case 366u: goto L_08916528;
    case 367u: goto L_08916534;
    case 368u: goto L_08916538;
    case 369u: goto L_0891656C;
    case 370u: goto L_08916574;
    case 371u: goto L_08916580;
    case 372u: goto L_08916588;
    case 373u: goto L_08916594;
    case 374u: goto L_089165A0;
    case 375u: goto L_089165B0;
    case 376u: goto L_089165D0;
    case 377u: goto L_089165E8;
    case 378u: goto L_0891661C;
    case 379u: goto L_08916624;
    case 380u: goto L_08916630;
    case 381u: goto L_08916638;
    case 382u: goto L_08916640;
    case 383u: goto L_08916648;
    case 384u: goto L_08916654;
    case 385u: goto L_0891665C;
    case 386u: goto L_08916668;
    case 387u: goto L_08916678;
    case 388u: goto L_08916680;
    case 389u: goto L_08916688;
    case 390u: goto L_089166D4;
    case 391u: goto L_089166F4;
    case 392u: goto L_08916708;
    case 393u: goto L_08916714;
    case 394u: goto L_08916720;
    case 395u: goto L_08916734;
    case 396u: goto L_08916740;
    case 397u: goto L_08916744;
    case 398u: goto L_08916748;
    case 399u: goto L_08916754;
    case 400u: goto L_0891675C;
    case 401u: goto L_08916778;
    case 402u: goto L_08916788;
    case 403u: goto L_089167A4;
    case 404u: goto L_089167B8;
    case 405u: goto L_089167C8;
    case 406u: goto L_089167D4;
    case 407u: goto L_089167DC;
    case 408u: goto L_089167E4;
    case 409u: goto L_089167F4;
    case 410u: goto L_089167FC;
    case 411u: goto L_08916804;
    case 412u: goto L_0891680C;
    case 413u: goto L_08916810;
    case 414u: goto L_08916818;
    case 415u: goto L_08916820;
    case 416u: goto L_0891683C;
    case 417u: goto L_0891684C;
    case 418u: goto L_08916850;
    case 419u: goto L_08916860;
    case 420u: goto L_0891686C;
    case 421u: goto L_08916874;
    case 422u: goto L_08916888;
    case 423u: goto L_08916898;
    case 424u: goto L_089168A8;
    case 425u: goto L_089168BC;
    case 426u: goto L_089168C4;
    case 427u: goto L_089168C8;
    case 428u: goto L_089168F0;
    case 429u: goto L_089168F8;
    case 430u: goto L_08916914;
    case 431u: goto L_08916924;
    case 432u: goto L_08916948;
    case 433u: goto L_08916950;
    case 434u: goto L_08916958;
    case 435u: goto L_08916964;
    case 436u: goto L_08916970;
    case 437u: goto L_08916978;
    case 438u: goto L_0891698C;
    case 439u: goto L_0891699C;
    case 440u: goto L_089169A8;
    case 441u: goto L_089169B0;
    case 442u: goto L_089169B8;
    case 443u: goto L_089169C4;
    case 444u: goto L_089169CC;
    case 445u: goto L_089169D4;
    case 446u: goto L_089169DC;
    case 447u: goto L_089169E4;
    case 448u: goto L_089169F8;
    case 449u: goto L_08916A00;
    case 450u: goto L_08916A08;
    case 451u: goto L_08916A10;
    case 452u: goto L_08916A28;
    case 453u: goto L_08916A30;
    case 454u: goto L_08916A38;
    case 455u: goto L_08916A40;
    case 456u: goto L_08916A58;
    case 457u: goto L_08916A60;
    case 458u: goto L_08916A6C;
    case 459u: goto L_08916A84;
    case 460u: goto L_08916A90;
    case 461u: goto L_08916ABC;
    case 462u: goto L_08916B18;
    case 463u: goto L_08916B28;
    case 464u: goto L_08916B48;
    case 465u: goto L_08916B58;
    case 466u: goto L_08916B68;
    case 467u: goto L_08916B78;
    case 468u: goto L_08916B88;
    case 469u: goto L_08916B98;
    case 470u: goto L_08916BAC;
    case 471u: goto L_08916BB8;
    case 472u: goto L_08916BC0;
    case 473u: goto L_08916BC8;
    case 474u: goto L_08916BCC;
    case 475u: goto L_08916BF0;
    case 476u: goto L_08916C30;
    case 477u: goto L_08916C3C;
    case 478u: goto L_08916C58;
    case 479u: goto L_08916C68;
    case 480u: goto L_08916CB8;
    case 481u: goto L_08916CC0;
    case 482u: goto L_08916CCC;
    case 483u: goto L_08916CE8;
    case 484u: goto L_08916D00;
    case 485u: goto L_08916D08;
    case 486u: goto L_08916D18;
    case 487u: goto L_08916D20;
    case 488u: goto L_08916D2C;
    case 489u: goto L_08916D38;
    case 490u: goto L_08916D40;
    case 491u: goto L_08916D48;
    case 492u: goto L_08916D7C;
    case 493u: goto L_08916D8C;
    case 494u: goto L_08916D98;
    case 495u: goto L_08916DA4;
    case 496u: goto L_08916DAC;
    case 497u: goto L_08916DBC;
    case 498u: goto L_08916DC8;
    case 499u: goto L_08916E14;
    case 500u: goto L_08916E1C;
    case 501u: goto L_08916E30;
    case 502u: goto L_08916E3C;
    case 503u: goto L_08916E48;
    case 504u: goto L_08916E54;
    case 505u: goto L_08916E58;
    case 506u: goto L_08916E74;
    case 507u: goto L_08916E80;
    case 508u: goto L_08916E8C;
    case 509u: goto L_08916E98;
    case 510u: goto L_08916EAC;
    case 511u: goto L_08916EBC;
    case 512u: goto L_08916EDC;
    case 513u: goto L_08916EEC;
    case 514u: goto L_08916F08;
    case 515u: goto L_08916F34;
    case 516u: goto L_08916F3C;
    case 517u: goto L_08916F44;
    case 518u: goto L_08916F58;
    case 519u: goto L_08916F6C;
    case 520u: goto L_08916F88;
    case 521u: goto L_08916F90;
    case 522u: goto L_08916F98;
    case 523u: goto L_08916FB4;
    case 524u: goto L_08916FE0;
    case 525u: goto L_08916FF0;
    case 526u: goto L_08917000;
    case 527u: goto L_08917048;
    case 528u: goto L_08917058;
    case 529u: goto L_08917060;
    case 530u: goto L_08917078;
    case 531u: goto L_08917088;
    case 532u: goto L_08917098;
    case 533u: goto L_089170B8;
    case 534u: goto L_089170E4;
    case 535u: goto L_089170EC;
    case 536u: goto L_089170F4;
    case 537u: goto L_089170FC;
    case 538u: goto L_08917114;
    case 539u: goto L_08917124;
    case 540u: goto L_0891713C;
    case 541u: goto L_0891714C;
    case 542u: goto L_0891715C;
    case 543u: goto L_08917168;
    case 544u: goto L_08917178;
    case 545u: goto L_08917184;
    case 546u: goto L_08917194;
    case 547u: goto L_08917198;
    case 548u: goto L_089171A0;
    case 549u: goto L_089171AC;
    case 550u: goto L_089171B4;
    case 551u: goto L_089171C0;
    case 552u: goto L_089171CC;
    case 553u: goto L_089171D4;
    case 554u: goto L_089171E4;
    case 555u: goto L_089171F0;
    case 556u: goto L_089171F4;
    case 557u: goto L_08917248;
    case 558u: goto L_08917254;
    case 559u: goto L_08917264;
    case 560u: goto L_0891726C;
    case 561u: goto L_08917274;
    case 562u: goto L_08917288;
    case 563u: goto L_0891729C;
    case 564u: goto L_089172A4;
    case 565u: goto L_089172AC;
    case 566u: goto L_089172B4;
    case 567u: goto L_089172C4;
    case 568u: goto L_089172D4;
    case 569u: goto L_089172E0;
    case 570u: goto L_089172F4;
    case 571u: goto L_08917304;
    case 572u: goto L_0891730C;
    case 573u: goto L_08917318;
    case 574u: goto L_08917328;
    case 575u: goto L_08917334;
    case 576u: goto L_08917348;
    case 577u: goto L_08917358;
    case 578u: goto L_08917368;
    case 579u: goto L_08917374;
    case 580u: goto L_08917384;
    case 581u: goto L_08917394;
    case 582u: goto L_089173A4;
    case 583u: goto L_089173B4;
    case 584u: goto L_089173C4;
    case 585u: goto L_089173D0;
    case 586u: goto L_089173D4;
    case 587u: goto L_089173E4;
    case 588u: goto L_089173EC;
    case 589u: goto L_08917404;
    case 590u: goto L_0891740C;
    case 591u: goto L_08917414;
    case 592u: goto L_0891741C;
    case 593u: goto L_0891742C;
    case 594u: goto L_0891743C;
    case 595u: goto L_08917440;
    case 596u: goto L_0891744C;
    case 597u: goto L_0891745C;
    case 598u: goto L_08917468;
    case 599u: goto L_08917478;
    case 600u: goto L_08917488;
    case 601u: goto L_08917494;
    case 602u: goto L_089174A8;
    case 603u: goto L_089174B8;
    case 604u: goto L_089174C8;
    case 605u: goto L_089174D8;
    case 606u: goto L_089174E8;
    case 607u: goto L_089174F8;
    case 608u: goto L_08917508;
    case 609u: goto L_08917518;
    case 610u: goto L_08917528;
    case 611u: goto L_08917538;
    case 612u: goto L_08917548;
    case 613u: goto L_08917550;
    case 614u: goto L_08917558;
    case 615u: goto L_08917570;
    case 616u: goto L_08917578;
    case 617u: goto L_08917588;
    case 618u: goto L_08917598;
    case 619u: goto L_089175A0;
    case 620u: goto L_089175A8;
    case 621u: goto L_089175B8;
    case 622u: goto L_089175C0;
    case 623u: goto L_089175D0;
    case 624u: goto L_089175E4;
    case 625u: goto L_08917600;
    case 626u: goto L_08917638;
    case 627u: goto L_08917650;
    case 628u: goto L_08917660;
    case 629u: goto L_08917670;
    case 630u: goto L_08917688;
    case 631u: goto L_089176A0;
    case 632u: goto L_089176AC;
    case 633u: goto L_089176BC;
    case 634u: goto L_089176C0;
    case 635u: goto L_089176C8;
    case 636u: goto L_089176DC;
    case 637u: goto L_089176F0;
    case 638u: goto L_0891770C;
    case 639u: goto L_08917740;
    case 640u: goto L_08917758;
    case 641u: goto L_08917768;
    case 642u: goto L_08917778;
    case 643u: goto L_08917790;
    case 644u: goto L_0891779C;
    case 645u: goto L_089177AC;
    case 646u: goto L_089177BC;
    case 647u: goto L_089177C8;
    case 648u: goto L_089177CC;
    case 649u: goto L_089177D0;
    case 650u: goto L_08917884;
    case 651u: goto L_08917890;
    case 652u: goto L_089178A0;
    case 653u: goto L_089178B0;
    case 654u: goto L_089178C4;
    case 655u: goto L_089178D4;
    case 656u: goto L_089178E0;
    case 657u: goto L_089178E8;
    case 658u: goto L_089178F8;
    case 659u: goto L_08917908;
    case 660u: goto L_08917914;
    case 661u: goto L_08917920;
    case 662u: goto L_0891793C;
    case 663u: goto L_0891794C;
    case 664u: goto L_08917950;
    case 665u: goto L_08917990;
    case 666u: goto L_089179D4;
    case 667u: goto L_089179E0;
    case 668u: goto L_089179F0;
    case 669u: goto L_08917A30;
    case 670u: goto L_08917A34;
    case 671u: goto L_08917A3C;
    case 672u: goto L_08917A58;
    case 673u: goto L_08917A68;
    case 674u: goto L_08917A78;
    case 675u: goto L_08917A90;
    case 676u: goto L_08917AA0;
    case 677u: goto L_08917AB0;
    case 678u: goto L_08917AB8;
    case 679u: goto L_08917AC8;
    case 680u: goto L_08917AD4;
    case 681u: goto L_08917AEC;
    case 682u: goto L_08917AF4;
    case 683u: goto L_08917B0C;
    case 684u: goto L_08917B14;
    case 685u: goto L_08917B20;
    case 686u: goto L_08917B30;
    case 687u: goto L_08917B54;
    case 688u: goto L_08917B60;
    case 689u: goto L_08917B70;
    case 690u: goto L_08917B84;
    case 691u: goto L_08917BA0;
    case 692u: goto L_08917BB4;
    case 693u: goto L_08917BBC;
    case 694u: goto L_08917BC4;
    case 695u: goto L_08917BD8;
    case 696u: goto L_08917BF4;
    case 697u: goto L_08917C08;
    case 698u: goto L_08917C14;
    case 699u: goto L_08917C2C;
    case 700u: goto L_08917C34;
    case 701u: goto L_08917C40;
    case 702u: goto L_08917C48;
    case 703u: goto L_08917C50;
    case 704u: goto L_08917C58;
    case 705u: goto L_08917C64;
    case 706u: goto L_08917C74;
    case 707u: goto L_08917C80;
    case 708u: goto L_08917C8C;
    case 709u: goto L_08917C94;
    case 710u: goto L_08917CA0;
    case 711u: goto L_08917CA8;
    case 712u: goto L_08917CB0;
    case 713u: goto L_08917CCC;
    case 714u: goto L_08917CD4;
    case 715u: goto L_08917CDC;
    case 716u: goto L_08917CE8;
    case 717u: goto L_08917D04;
    case 718u: goto L_08917D08;
    case 719u: goto L_08917D1C;
    case 720u: goto L_08917D2C;
    case 721u: goto L_08917D4C;
    case 722u: goto L_08917D54;
    case 723u: goto L_08917D64;
    case 724u: goto L_08917D6C;
    case 725u: goto L_08917D74;
    case 726u: goto L_08917D7C;
    case 727u: goto L_08917D84;
    case 728u: goto L_08917D90;
    case 729u: goto L_08917D98;
    case 730u: goto L_08917DAC;
    case 731u: goto L_08917DC4;
    case 732u: goto L_08917DE4;
    case 733u: goto L_08917DEC;
    case 734u: goto L_08917DF4;
    case 735u: goto L_08917DFC;
    case 736u: goto L_08917E0C;
    case 737u: goto L_08917E1C;
    case 738u: goto L_08917E20;
    case 739u: goto L_08917E30;
    case 740u: goto L_08917E50;
    case 741u: goto L_08917E58;
    case 742u: goto L_08917E84;
    case 743u: goto L_08917EA0;
    case 744u: goto L_08917EC4;
    case 745u: goto L_08917ED8;
    case 746u: goto L_08917EEC;
    case 747u: goto L_08917EF8;
    case 748u: goto L_08917F08;
    case 749u: goto L_08917F1C;
    case 750u: goto L_08917F30;
    case 751u: goto L_08917F3C;
    case 752u: goto L_08917F58;
    case 753u: goto L_08917F68;
    case 754u: goto L_08917F70;
    case 755u: goto L_08917F78;
    case 756u: goto L_08917FA0;
    case 757u: goto L_08917FA8;
    case 758u: goto L_08917FBC;
    case 759u: goto L_08917FC4;
    case 760u: goto L_08917FE8;
    case 761u: goto L_08917FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08914000:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(476), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[24]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[25]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[15]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[13]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[7] = (65528u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[14] = (256u << 16u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[14]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (65024u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[14] = (ctx.gpr[14] & aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[14]);
    ctx.gpr[14] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[9] = (ctx.gpr[14] & ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[8] = (ctx.gpr[9] & ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    ctx.gpr[9] = (64u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (ctx.gpr[8] & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_5);
    aot_gpr_5 = (0u | 65535u);
    aot_mem.aot_direct_store16(ctx.gpr[22] + static_cast<std::uint32_t>(478), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[23]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_31);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[3]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[12]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-2049));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[24]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[25]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[15]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[13]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[30]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(476), aot_gpr_4);
    aot_gpr_4 = (0u | 100u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(474), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[24]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (61696u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(476), aot_gpr_4);
    aot_gpr_31 = (0x089142F0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089142F0u) goto L_089142F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089142F0:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08914318;
      }
      goto L_08914300;
    }
L_08914300:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65024u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_08914328;
      }
      goto L_08914318;
    }
L_08914318:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (512u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08914328;
L_08914328:
    aot_gpr_31 = (0x08914330u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914330u) goto L_08914330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914330:
    aot_fpr_12 = ctx.fpr[24] - ctx.fpr[20];
    aot_gpr_4 = (16243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08914368;
      }
      goto L_08914358;
    }
L_08914358:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_4);
      if (branch_taken) {
          goto L_08914378;
      }
      goto L_08914368;
    }
L_08914368:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), aot_gpr_4);
    goto L_08914378;
L_08914378:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (49152u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(476), aot_gpr_4);
    aot_gpr_16 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_31 = (0x089143A8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 734u, 0x0890F2C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089143A8u) goto L_089143A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089143A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(476), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089143C8u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 497u, 0x08A05F1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089143C8u) goto L_089143C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089143C8:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089143DCu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 501u, 0x08A05F5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089143DCu) goto L_089143DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089143DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(684), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x0891440Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 49u, 0x08910338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891440Cu) goto L_0891440C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891440C:
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(692), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(688), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1948), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (0u | 0u);
    goto L_08914428;
L_08914428:
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (ctx.gpr[22] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1784), 0u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1824), 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08914428;
      }
      goto L_08914450;
    }
L_08914450:
    aot_mem.aot_direct_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(0u));
    ctx.gpr[17] = (0u | 48u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1929), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1676), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1680), ctx.gpr[17]);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[22] + static_cast<std::uint32_t>(1396));
    goto L_0891446C;
L_0891446C:
    { const std::uint32_t aot_run_words[5]{0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0891446C;
      }
      goto L_08914490;
    }
L_08914490:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089144A4u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089144A4u) goto L_089144A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089144A4:
    aot_gpr_4 = (17046u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089144BC;
    }
    goto L_089144BC;
L_089144BC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_16 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(aot_gpr_16));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1864), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2120), 0u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1892), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1922), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1896), ctx.gpr[17]);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x089144F0u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089144F0u) goto L_089144F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089144F0:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_5 = (0u | 25u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (0u | 23u);
    aot_gpr_5 = (ctx.hi);
    aot_mem.aot_direct_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(1918)));
    if (aot_gpr_5 != aot_gpr_4) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
        goto L_08914520;
    }
    goto L_08914514;
L_08914514:
    aot_gpr_4 = (0u | 400u);
    aot_mem.aot_direct_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    goto L_08914520;
L_08914520:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1935), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1260), 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, aot_gpr_16};
      aot_mem.aot_direct_store32_block(ctx.gpr[22] + static_cast<std::uint32_t>(1336), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1264), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1268), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(772), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1952), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1956), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1360)));
    aot_gpr_31 = (0x08914558u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0113_entry, 113u, 238u, 0x089C8D68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914558u) goto L_08914558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914558:
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(2088), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1724), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2200), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(2204), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(420), 0u);
    aot_gpr_31 = (0x08914578u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 260u, 0x088E29B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914578u) goto L_08914578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08914594u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914594u) goto L_08914594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914594:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20])};
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20])};
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x089145C4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089145C4u) goto L_089145C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089145C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089145F0;
      }
      goto L_089145CC;
    }
L_089145CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
      if (branch_taken) {
          goto L_089145F0;
      }
      goto L_089145D8;
    }
L_089145D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089145F0;
      }
      goto L_089145E8;
    }
L_089145E8:
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2208), aot_gpr_4);
    goto L_089145F0;
L_089145F0:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
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
L_08914630:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-816));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (16800u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (aot_gpr_5 >> 22u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(792), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(772), aot_gpr_16);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(708), ctx.gpr[21]);
    aot_gpr_5 = (aot_gpr_5 & 15u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(776), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(796), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(740), aot_gpr_16);
      if (branch_taken) {
          goto L_08914D08;
      }
      goto L_089146C8;
    }
L_089146C8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(672));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(48);
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
    aot_gpr_31 = (0x08914728u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914728u) goto L_08914728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914728:
    ctx.gpr[21] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_fpr_13 = aot_fpr_12 - ctx.fpr[22];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_fpr_15 = aot_fpr_14 - ctx.fpr[22];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[22];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = aot_fpr_14 + ctx.fpr[22];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (0u | 49u);
    aot_gpr_4 = (17056u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 / ctx.fpr[22];
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_gpr_6 = (16840u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08914784;
    }
    goto L_08914784;
L_08914784:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08914790;
    }
    goto L_08914790;
L_08914790:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (aot_gpr_4 | 0u);
        goto L_089147A4;
    }
    goto L_089147A4;
L_089147A4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[22];
    aot_gpr_4 = (0u | 49u);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_089147C8;
    }
    goto L_089147C8;
L_089147C8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_089147D4;
    }
    goto L_089147D4;
L_089147D4:
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_089147E8;
    }
    goto L_089147E8;
L_089147E8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[22];
    ctx.gpr[7] = (0u | 49u);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[24];
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_0891480C;
    }
    goto L_0891480C;
L_0891480C:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_08914818;
    }
    goto L_08914818;
L_08914818:
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 50 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(720), ctx.gpr[7]);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(720), aot_gpr_5);
        goto L_0891482C;
    }
    goto L_0891482C;
L_0891482C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[22];
    ctx.gpr[7] = (0u | 49u);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08914850;
    }
    goto L_08914850;
L_08914850:
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_0891485C;
    }
    goto L_0891485C;
L_0891485C:
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 50 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), ctx.gpr[7]);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), aot_gpr_5);
        goto L_08914870;
    }
    goto L_08914870;
L_08914870:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(736)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(724), aot_gpr_4);
      if (branch_taken) {
          goto L_08914BF4;
      }
      goto L_08914898;
    }
L_08914898:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(732), aot_gpr_6);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(704), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 << 4u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(665));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(666));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(667));
    ctx.gpr[20] = (0u | 58u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(728), aot_gpr_4);
    goto L_089148DC;
L_089148DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(732)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(720)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(716), aot_gpr_4);
      if (branch_taken) {
          goto L_08914BC8;
      }
      goto L_089148F0;
    }
L_089148F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(728)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(712), aot_gpr_4);
    goto L_08914908;
L_08914908:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(712)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(36));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089149D8;
      }
      goto L_08914924;
    }
L_08914924:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(708)));
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
      if (branch_taken) {
          goto L_089149CC;
      }
      goto L_08914934;
    }
L_08914934:
    aot_gpr_31 = (0x0891493Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891493Cu) goto L_0891493C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891493C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08914968;
      }
      goto L_08914944;
    }
L_08914944:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089149CC;
      }
      goto L_08914950;
    }
L_08914950:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089149CC;
      }
      goto L_08914964;
    }
L_08914964:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    goto L_08914968;
L_08914968:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[22];
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089149CC;
      }
      goto L_08914994;
    }
L_08914994:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_089149BC;
      }
      goto L_089149A0;
    }
L_089149A0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089149B4;
      }
      goto L_089149AC;
    }
L_089149AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089149BC;
      }
      goto L_089149B4;
    }
L_089149B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089149CC;
      }
      goto L_089149BC;
    }
L_089149BC:
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(96), aot_gpr_16);
    goto L_089149CC;
L_089149CC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08914924;
      }
      goto L_089149D8;
    }
L_089149D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08914BA4;
      }
      goto L_089149E4;
    }
L_089149E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(712)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08914BA4;
      }
      goto L_08914A00;
    }
L_08914A00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08914A48;
      }
      goto L_08914A10;
    }
L_08914A10:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(748), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(744), ctx.gpr[22]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08914A2Cu);
    ctx.gpr[23] = (aot_gpr_16 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 419u, 0x089D273Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914A2Cu) goto L_08914A2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914A2C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08914A3Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914A3Cu) goto L_08914A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914A3C:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(744)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(748)));
      if (branch_taken) {
          goto L_08914A50;
      }
      goto L_08914A48;
    }
L_08914A48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08914A50;
      }
      goto L_08914A50;
    }
L_08914A50:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08914AC0;
      }
      goto L_08914A58;
    }
L_08914A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(704)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08914AC0;
      }
      goto L_08914A7C;
    }
L_08914A7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
        goto L_08914AA8;
    }
    goto L_08914A88;
L_08914A88:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(664));
    aot_gpr_31 = (0x08914A98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914A98u) goto L_08914A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914A98:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(664)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    goto L_08914AA8;
L_08914AA8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 ^ 65535u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08914AC8;
      }
      goto L_08914AC0;
    }
L_08914AC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08914B98;
      }
      goto L_08914AC8;
    }
L_08914AC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08914AF0;
      }
      goto L_08914AD4;
    }
L_08914AD4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08914AE4u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914AE4u) goto L_08914AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914AE4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(665)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08914AF0;
L_08914AF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[22];
      if (branch_taken) {
          goto L_08914B20;
      }
      goto L_08914B04;
    }
L_08914B04:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08914B14u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914B14u) goto L_08914B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914B14:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(666)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08914B20;
L_08914B20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08914B98;
      }
      goto L_08914B4C;
    }
L_08914B4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
        goto L_08914B78;
    }
    goto L_08914B58;
L_08914B58:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08914B68u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914B68u) goto L_08914B68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914B68:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(667)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    goto L_08914B78;
L_08914B78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_08914B98;
      }
      goto L_08914B84;
    }
L_08914B84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(380), aot_gpr_4);
    goto L_08914B98;
L_08914B98:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08914A00;
      }
      goto L_08914BA4;
    }
L_08914BA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(716)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(712)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(720)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(56));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(716), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(712), aot_gpr_5);
      if (branch_taken) {
          goto L_08914908;
      }
      goto L_08914BC8;
    }
L_08914BC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(724)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(728)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(736)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(50));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(724), aot_gpr_4);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(728), aot_gpr_5);
      if (branch_taken) {
          goto L_089148DC;
      }
      goto L_08914BEC;
    }
L_08914BEC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08914BF4;
L_08914BF4:
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(708)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08914C18u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 590u, 0x08906AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914C18u) goto L_08914C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914C18:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1914)));
    aot_gpr_5 = (0u | 10u);
    goto L_08914C24;
L_08914C24:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08914C54;
      }
      goto L_08914C2C;
    }
L_08914C2C:
    if (aot_gpr_6 == 0u) {
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(aot_gpr_4));
        goto L_08914C58;
    }
    goto L_08914C34;
L_08914C34:
    aot_gpr_6 = (aot_gpr_4 << 2u);
    ctx.gpr[7] = (aot_gpr_29 + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (ctx.gpr[17] + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(1784), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 65535u);
      if (branch_taken) {
          goto L_08914C24;
      }
      goto L_08914C54;
    }
L_08914C54:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08914C58;
L_08914C58:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1914)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (0u | 10u);
      if (branch_taken) {
          goto L_08914C84;
      }
      goto L_08914C68;
    }
L_08914C68:
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    goto L_08914C70;
L_08914C70:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1784), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08914C70;
      }
      goto L_08914C84;
    }
L_08914C84:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(380));
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08914C98u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 590u, 0x08906AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914C98u) goto L_08914C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914C98:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(0u));
    goto L_08914C9C;
L_08914C9C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
      if (branch_taken) {
          goto L_08914CE0;
      }
      goto L_08914CA8;
    }
L_08914CA8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08914CE0;
      }
      goto L_08914CB8;
    }
L_08914CB8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(380)));
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(352)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1824), aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08914C9C;
      }
      goto L_08914CE0;
    }
L_08914CE0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 << 2u);
      if (branch_taken) {
          goto L_08914D08;
      }
      goto L_08914CF0;
    }
L_08914CF0:
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    goto L_08914CF4;
L_08914CF4:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1824), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08914CF4;
      }
      goto L_08914D08;
    }
L_08914D08:
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(708)));
    goto L_08914D10;
L_08914D10:
    ctx.gpr[18] = (aot_gpr_16 << 2u);
    ctx.gpr[18] = (ctx.gpr[19] + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08914D80;
      }
      goto L_08914D24;
    }
L_08914D24:
    aot_gpr_31 = (0x08914D2Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1784)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 561u, 0x08906858u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914D2Cu) goto L_08914D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914D2C:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(740)));
        goto L_08914D3C;
    }
    goto L_08914D34;
L_08914D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08914D80;
      }
      goto L_08914D3C;
    }
L_08914D3C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1784)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_15;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08914D80;
      }
      goto L_08914D7C;
    }
L_08914D7C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08914D80;
L_08914D80:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08914DD4;
      }
      goto L_08914D88;
    }
L_08914D88:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08914DC0;
      }
      goto L_08914D98;
    }
L_08914D98:
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (ctx.gpr[19] + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1788)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1784), aot_gpr_6);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08914D98;
      }
      goto L_08914DC0;
    }
L_08914DC0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1820), 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08914DE0;
      }
      goto L_08914DD4;
    }
L_08914DD4:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_4 << 16u);
    aot_gpr_16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_16) >> 16u));
    goto L_08914DE0;
L_08914DE0:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08914D10;
      }
      goto L_08914DEC;
    }
L_08914DEC:
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(752), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      aot_gpr_16 = aot_run_words[5];
      ctx.gpr[17] = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      ctx.gpr[20] = aot_run_words[9];
      ctx.gpr[21] = aot_run_words[10];
      ctx.gpr[22] = aot_run_words[11];
      ctx.gpr[23] = aot_run_words[12];
      ctx.gpr[30] = aot_run_words[13];
      aot_gpr_31 = aot_run_words[14];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(816));
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
L_08914E30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 56u);
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(720), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08914F1C;
      }
      goto L_08914E70;
    }
L_08914E70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 61u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08914F1C;
      }
      goto L_08914E80;
    }
L_08914E80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 63u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08914F1C;
      }
      goto L_08914E90;
    }
L_08914E90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08914F1C;
      }
      goto L_08914EA0;
    }
L_08914EA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08914F1C;
      }
      goto L_08914EB0;
    }
L_08914EB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 48u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08914F1C;
      }
      goto L_08914EC0;
    }
L_08914EC0:
    aot_gpr_31 = (0x08914EC8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08914EC8u) goto L_08914EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08914EC8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7588)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1364)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(156)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_6 ^ aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 & 12288u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08914F24;
      }
      goto L_08914F14;
    }
L_08914F14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08914F60;
      }
      goto L_08914F1C;
    }
L_08914F1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891629C;
      }
      goto L_08914F24;
    }
L_08914F24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08914F60;
      }
      goto L_08914F30;
    }
L_08914F30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(300) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08914F60;
      }
      goto L_08914F40;
    }
L_08914F40:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1768), aot_gpr_5);
      if (branch_taken) {
          goto L_08914F60;
      }
      goto L_08914F50;
    }
L_08914F50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-12289));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_5);
    goto L_08914F60;
L_08914F60:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08914F88;
      }
      goto L_08914F70;
    }
L_08914F70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    aot_gpr_6 = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08914F90;
      }
      goto L_08914F80;
    }
L_08914F80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08914FE4;
      }
      goto L_08914F88;
    }
L_08914F88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891629C;
      }
      goto L_08914F90;
    }
L_08914F90:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891503C;
      }
      goto L_08914F98;
    }
L_08914F98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 256u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08914FB8;
      }
      goto L_08914FB0;
    }
L_08914FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08914FD0;
      }
      goto L_08914FB8;
    }
L_08914FB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 1024u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08914FD0;
      }
      goto L_08914FD0;
    }
L_08914FD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08914F98;
      }
      goto L_08914FDC;
    }
L_08914FDC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891503C;
      }
      goto L_08914FE4;
    }
L_08914FE4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891503C;
      }
      goto L_08914FEC;
    }
L_08914FEC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_0891502C;
      }
      goto L_08914FFC;
    }
L_08914FFC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_0891502C;
      }
      goto L_0891500C;
    }
L_0891500C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (0u | 4u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_0891502C;
      }
      goto L_0891501C;
    }
L_0891501C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08915030;
      }
      goto L_0891502C;
    }
L_0891502C:
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    goto L_08915030;
L_08915030:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08914FEC;
      }
      goto L_0891503C;
    }
L_0891503C:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_089159EC;
      }
      goto L_0891505C;
    }
L_0891505C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_15 = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2284)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_15)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
        goto L_08915080;
    }
    goto L_0891507C;
L_0891507C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    goto L_08915080;
L_08915080:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089150C8;
      }
      goto L_089150A0;
    }
L_089150A0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 1u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
        goto L_089150CC;
    }
    goto L_089150C8;
L_089150C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    goto L_089150CC;
L_089150CC:
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (15752u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 34953u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[20] = ctx.fpr[20] + aot_fpr_15;
      if (branch_taken) {
          goto L_08915380;
      }
      goto L_089150F0;
    }
L_089150F0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915114;
      }
      goto L_08915100;
    }
L_08915100:
    aot_gpr_4 = (16136u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 34953u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08915124;
      }
      goto L_08915114;
    }
L_08915114:
    aot_gpr_4 = (16042u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 43691u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    goto L_08915124;
L_08915124:
    aot_gpr_31 = (0x0891512Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(311)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891512Cu) goto L_0891512C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891512C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08915150;
      }
      goto L_0891513C;
    }
L_0891513C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08915250;
      }
      goto L_08915148;
    }
L_08915148:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08915190;
      }
      goto L_08915150;
    }
L_08915150:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_089151EC;
      }
      goto L_08915158;
    }
L_08915158:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16025u << 16u);
      if (branch_taken) {
          goto L_08915250;
      }
      goto L_08915160;
    }
L_08915160:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(792)));
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(796)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(796), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08915258;
      }
      goto L_08915190;
    }
L_08915190:
    aot_gpr_31 = (0x08915198u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915198u) goto L_08915198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915198:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 127u);
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(792)));
        goto L_089151C4;
    }
    goto L_089151A8;
L_089151A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 30u);
    aot_gpr_31 = (0x089151BCu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089151BCu) goto L_089151BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089151BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089151E0;
      }
      goto L_089151C4;
    }
L_089151C4:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(796)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(796), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_089151E0;
L_089151E0:
    aot_gpr_4 = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08915258;
      }
      goto L_089151EC;
    }
L_089151EC:
    aot_gpr_31 = (0x089151F4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089151F4u) goto L_089151F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089151F4:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 63u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08915220;
      }
      goto L_08915204;
    }
L_08915204:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 30u);
    aot_gpr_31 = (0x08915218u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915218u) goto L_08915218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915218:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08915240;
      }
      goto L_08915220;
    }
L_08915220:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(792)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(796)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(796), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08915240;
L_08915240:
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08915258;
      }
      goto L_08915250;
    }
L_08915250:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_08915258;
L_08915258:
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089152EC;
      }
      goto L_08915274;
    }
L_08915274:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089152EC;
      }
      goto L_08915288;
    }
L_08915288:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17150u << 16u);
      if (branch_taken) {
          goto L_089152EC;
      }
      goto L_089152A4;
    }
L_089152A4:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (16256u << 16u);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_6 = (0u | 190u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_31 = (0x089152E4u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089152E4u) goto L_089152E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089152E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08915378;
      }
      goto L_089152EC;
    }
L_089152EC:
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08915378;
      }
      goto L_08915308;
    }
L_08915308:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08915378;
      }
      goto L_0891531C;
    }
L_0891531C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (17150u << 16u);
      if (branch_taken) {
          goto L_08915378;
      }
      goto L_08915338;
    }
L_08915338:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (16256u << 16u);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_6 = (0u | 190u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_31 = (0x08915378u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915378u) goto L_08915378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915378:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089159EC;
      }
      goto L_08915380;
    }
L_08915380:
    aot_gpr_4 = (15752u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 | 34953u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089156B0;
      }
      goto L_089153A0;
    }
L_089153A0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (15752u << 16u);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_gpr_4 = (aot_gpr_4 | 34953u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089156B0;
      }
      goto L_089153C8;
    }
L_089153C8:
    aot_gpr_4 = (15605u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08915400;
      }
      goto L_089153E4;
    }
L_089153E4:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08915400u);
    aot_gpr_6 = (0u | 33u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915400u) goto L_08915400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915400:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08915414u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 217u, 0x08904FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915414u) goto L_08915414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915414:
    ctx.gpr[17] = (0u | 1u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    aot_gpr_6 = (15820u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (15948u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08915484u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915484u) goto L_08915484;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089155B8;
      }
      goto L_08915494;
    }
L_08915494:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u | 4096u);
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915510;
      }
      goto L_089154A8;
    }
L_089154A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5024)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (15907u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    ctx.gpr[7] = (0u | 255u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08915508u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915508u) goto L_08915508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915508:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08915584;
      }
      goto L_08915510;
    }
L_08915510:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u | 8192u);
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915584;
      }
      goto L_08915524;
    }
L_08915524:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5024)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (15907u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    ctx.gpr[7] = (0u | 255u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08915584u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915584u) goto L_08915584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089155A4;
      }
      goto L_08915594;
    }
L_08915594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1768), aot_gpr_4);
      if (branch_taken) {
          goto L_089155B8;
      }
      goto L_089155A4;
    }
L_089155A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-12289));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1768), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_4);
    goto L_089155B8;
L_089155B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(311)));
    aot_gpr_5 = (0u | 18u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
        goto L_089155DC;
    }
    goto L_089155C8;
L_089155C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(311)));
    aot_gpr_5 = (0u | 33u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915644;
      }
      goto L_089155D8;
    }
L_089155D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
    goto L_089155DC;
L_089155DC:
    aot_gpr_4 = (48773u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (15820u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.gpr[8] = (0u | 250u);
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08915644u);
    ctx.gpr[7] = (0u | 50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915644u) goto L_08915644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915644:
    aot_gpr_4 = (15820u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08915684;
      }
      goto L_08915664;
    }
L_08915664:
    aot_gpr_31 = (0x0891566Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891566Cu) goto L_0891566C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891566C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08915684;
      }
      goto L_08915674;
    }
L_08915674:
    aot_gpr_31 = (0x0891567Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891567Cu) goto L_0891567C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891567C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089156A8;
      }
      goto L_08915684;
    }
L_08915684:
    aot_gpr_31 = (0x0891568Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891568Cu) goto L_0891568C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891568C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089156A8;
      }
      goto L_08915694;
    }
L_08915694:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089156A8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 207u, 0x08904E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089156A8u) goto L_089156A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089156A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089159EC;
      }
      goto L_089156B0;
    }
L_089156B0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089159EC;
      }
      goto L_089156C4;
    }
L_089156C4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089159EC;
      }
      goto L_089156E0;
    }
L_089156E0:
    aot_gpr_4 = (15605u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08915718;
      }
      goto L_089156FC;
    }
L_089156FC:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08915718u);
    aot_gpr_6 = (0u | 34u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915718u) goto L_08915718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915718:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0891572Cu);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 217u, 0x08904FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891572Cu) goto L_0891572C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891572C:
    ctx.gpr[18] = (0u | 1u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(264)));
    aot_gpr_6 = (15820u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (15948u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0891579Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891579Cu) goto L_0891579C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891579C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089158D0;
      }
      goto L_089157AC;
    }
L_089157AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u | 4096u);
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915828;
      }
      goto L_089157C0;
    }
L_089157C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5024)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    aot_gpr_4 = (15861u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(288)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(292)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    ctx.gpr[7] = (0u | 255u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08915820u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915820u) goto L_08915820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915820:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0891589C;
      }
      goto L_08915828;
    }
L_08915828:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u | 8192u);
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891589C;
      }
      goto L_0891583C;
    }
L_0891583C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5024)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    aot_gpr_4 = (15861u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(288)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(292)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    ctx.gpr[7] = (0u | 255u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0891589Cu);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891589Cu) goto L_0891589C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891589C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089158BC;
      }
      goto L_089158AC;
    }
L_089158AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1768), aot_gpr_4);
      if (branch_taken) {
          goto L_089158D0;
      }
      goto L_089158BC;
    }
L_089158BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-12289));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1768), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_4);
    goto L_089158D0;
L_089158D0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08915964;
      }
      goto L_089158D8;
    }
L_089158D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(311)));
    aot_gpr_5 = (0u | 18u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
        goto L_089158FC;
    }
    goto L_089158E8;
L_089158E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(311)));
    aot_gpr_5 = (0u | 33u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915964;
      }
      goto L_089158F8;
    }
L_089158F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
    goto L_089158FC;
L_089158FC:
    aot_gpr_4 = (48773u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (15887u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(288)));
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(292)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.gpr[8] = (0u | 250u);
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08915964u);
    ctx.gpr[7] = (0u | 50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915964u) goto L_08915964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915964:
    aot_gpr_4 = (15820u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089159C8;
      }
      goto L_08915984;
    }
L_08915984:
    aot_gpr_31 = (0x0891598Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891598Cu) goto L_0891598C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891598C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089159C8;
      }
      goto L_08915994;
    }
L_08915994:
    aot_gpr_31 = (0x0891599Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891599Cu) goto L_0891599C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891599C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089159C8;
      }
      goto L_089159A4;
    }
L_089159A4:
    ctx.gpr[7] = (15897u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089159C0u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 198u, 0x08904CFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089159C0u) goto L_089159C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089159C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089159EC;
      }
      goto L_089159C8;
    }
L_089159C8:
    aot_gpr_31 = (0x089159D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089159D0u) goto L_089159D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089159D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089159EC;
      }
      goto L_089159D8;
    }
L_089159D8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089159ECu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 207u, 0x08904E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089159ECu) goto L_089159EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089159EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08915A00;
      }
      goto L_089159F4;
    }
L_089159F4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2284), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08915A0C;
      }
      goto L_08915A00;
    }
L_08915A00:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2284), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08915A0C;
L_08915A0C:
    aot_gpr_31 = (0x08915A14u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915A14u) goto L_08915A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915A14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08915F04;
      }
      goto L_08915A1C;
    }
L_08915A1C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08915F04;
      }
      goto L_08915A24;
    }
L_08915A24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08915F04;
      }
      goto L_08915A34;
    }
L_08915A34:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08915A54;
      }
      goto L_08915A3C;
    }
L_08915A3C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08915A70;
      }
      goto L_08915A54;
    }
L_08915A54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08915A64u);
    aot_gpr_6 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 217u, 0x08904FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915A64u) goto L_08915A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915A64:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08915A70;
L_08915A70:
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(328)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    aot_gpr_6 = (15948u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08915AD4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915AD4u) goto L_08915AD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915AD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08915C08;
      }
      goto L_08915AE4;
    }
L_08915AE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u | 4096u);
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915B60;
      }
      goto L_08915AF8;
    }
L_08915AF8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5024)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(336)));
    aot_gpr_4 = (15907u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(340)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(356)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    ctx.gpr[7] = (0u | 255u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08915B58u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915B58u) goto L_08915B58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915B58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08915BD4;
      }
      goto L_08915B60;
    }
L_08915B60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u | 8192u);
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915BD4;
      }
      goto L_08915B74;
    }
L_08915B74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5024)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(336)));
    aot_gpr_4 = (15907u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(340)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(356)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    ctx.gpr[7] = (0u | 255u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08915BD4u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915BD4u) goto L_08915BD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915BD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08915BF4;
      }
      goto L_08915BE4;
    }
L_08915BE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1768), aot_gpr_4);
      if (branch_taken) {
          goto L_08915C08;
      }
      goto L_08915BF4;
    }
L_08915BF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-12289));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1768), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_4);
    goto L_08915C08;
L_08915C08:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08915C9C;
      }
      goto L_08915C10;
    }
L_08915C10:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(311)));
    aot_gpr_5 = (0u | 18u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
        goto L_08915C34;
    }
    goto L_08915C20;
L_08915C20:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(311)));
    aot_gpr_5 = (0u | 33u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915C9C;
      }
      goto L_08915C30;
    }
L_08915C30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
    goto L_08915C34;
L_08915C34:
    aot_gpr_4 = (48773u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(336)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(340)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (15887u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(352)));
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(356)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.gpr[8] = (0u | 250u);
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08915C9Cu);
    ctx.gpr[7] = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915C9Cu) goto L_08915C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915C9C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08915CBC;
      }
      goto L_08915CA4;
    }
L_08915CA4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08915CD8;
      }
      goto L_08915CBC;
    }
L_08915CBC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08915CCCu);
    aot_gpr_6 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 217u, 0x08904FF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915CCCu) goto L_08915CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915CCC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08915CD8;
L_08915CD8:
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(392)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    aot_gpr_6 = (15948u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08915D3Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915D3Cu) goto L_08915D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915D3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08915E70;
      }
      goto L_08915D4C;
    }
L_08915D4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u | 4096u);
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915DC8;
      }
      goto L_08915D60;
    }
L_08915D60:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5024)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(400)));
    aot_gpr_4 = (15861u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(404)));
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(416)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(420)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    ctx.gpr[7] = (0u | 255u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08915DC0u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915DC0u) goto L_08915DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915DC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08915E3C;
      }
      goto L_08915DC8;
    }
L_08915DC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u | 8192u);
    aot_gpr_4 = (aot_gpr_4 & 12288u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915E3C;
      }
      goto L_08915DDC;
    }
L_08915DDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5024)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(400)));
    aot_gpr_4 = (15861u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(404)));
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(416)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(420)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    ctx.gpr[7] = (0u | 255u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08915E3Cu);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915E3Cu) goto L_08915E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915E3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08915E5C;
      }
      goto L_08915E4C;
    }
L_08915E4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1768)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1768), aot_gpr_4);
      if (branch_taken) {
          goto L_08915E70;
      }
      goto L_08915E5C;
    }
L_08915E5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-12289));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1768), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_4);
    goto L_08915E70;
L_08915E70:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08915F04;
      }
      goto L_08915E78;
    }
L_08915E78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(311)));
    aot_gpr_5 = (0u | 18u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
        goto L_08915E9C;
    }
    goto L_08915E88;
L_08915E88:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(311)));
    aot_gpr_5 = (0u | 33u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08915F04;
      }
      goto L_08915E98;
    }
L_08915E98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
    goto L_08915E9C;
L_08915E9C:
    aot_gpr_4 = (48773u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(400)));
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(404)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (15887u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(416)));
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(420)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.gpr[8] = (0u | 250u);
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08915F04u);
    ctx.gpr[7] = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915F04u) goto L_08915F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915F04:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(311)));
    aot_gpr_5 = (0u | 19u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891629C;
      }
      goto L_08915F14;
    }
L_08915F14:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(320)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(324)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_gpr_4 = (0u | 255u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(432), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(433), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(434), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (14955u << 16u);
    ctx.fpr[20] = ctx.fpr[20] + aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 60922u);
    aot_gpr_5 = (0u | 196u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(435), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08916128;
      }
      goto L_08915F58;
    }
L_08915F58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15498u << 16u);
      if (branch_taken) {
          goto L_08916128;
      }
      goto L_08915F68;
    }
L_08915F68:
    aot_gpr_4 = (aot_gpr_4 | 29150u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08916128;
      }
      goto L_08915F80;
    }
L_08915F80:
    aot_fpr_12 = std::sqrt(ctx.fpr[20]);
    aot_gpr_31 = (0x08915F8Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915F8Cu) goto L_08915F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915F8C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20140)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20144)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08915FA0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915FA0u) goto L_08915FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915FA0:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08915FACu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08915FACu) goto L_08915FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08915FAC:
    aot_gpr_4 = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08915FD0;
      }
      goto L_08915FC8;
    }
L_08915FC8:
    aot_gpr_4 = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    goto L_08915FD0;
L_08915FD0:
    aot_gpr_4 = (16192u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08915FF0;
      }
      goto L_08915FE8;
    }
L_08915FE8:
    aot_gpr_4 = (16192u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    goto L_08915FF0;
L_08915FF0:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
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
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(448));
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
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(504)));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (48960u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15605u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_gpr_31 = (0x0891609Cu);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891609Cu) goto L_0891609C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891609C:
    aot_fpr_12 = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(480));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089160D0u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089160D0u) goto L_089160D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089160D0:
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x089160FCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089160FCu) goto L_089160FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089160FC:
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(432));
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08916128u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916128u) goto L_08916128;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916128:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 43u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08916148;
      }
      goto L_08916138;
    }
L_08916138:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 44u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08916150;
      }
      goto L_08916148;
    }
L_08916148:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08916150;
L_08916150:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891629C;
      }
      goto L_08916158;
    }
L_08916158:
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
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(552)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15769u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(560));
    aot_gpr_4 = (15267u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x089161C4u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089161C4u) goto L_089161C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089161C4:
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x089161F0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089161F0u) goto L_089161F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089161F0:
    aot_gpr_4 = (48460u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_gpr_31 = (0x0891620Cu);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891620Cu) goto L_0891620C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891620C:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(560)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0891622Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891622Cu) goto L_0891622C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891622C:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(564)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15564u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_gpr_31 = (0x08916254u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916254u) goto L_08916254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916254:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(568)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(432));
    aot_gpr_4 = (0u | 66u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x0891629Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891629Cu) goto L_0891629C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891629C:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(720), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(768));
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
L_089162D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1732)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08916354;
      }
      goto L_089162F8;
    }
L_089162F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08916320;
      }
      goto L_08916308;
    }
L_08916308:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (aot_gpr_5 & 256u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08916354;
      }
      goto L_08916320;
    }
L_08916320:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0891633C;
      }
      goto L_0891632C;
    }
L_0891632C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(304))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_0891633C;
L_0891633C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08916354;
      }
      goto L_0891634C;
    }
L_0891634C:
    aot_gpr_31 = (0x08916354u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916354u) goto L_08916354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916354:
    aot_gpr_31 = (0x0891635Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891635Cu) goto L_0891635C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891635C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_gpr_4 & 1u);
      if (branch_taken) {
          goto L_089164C4;
      }
      goto L_08916368;
    }
L_08916368:
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
        goto L_08916384;
    }
    goto L_08916370;
L_08916370:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (aot_gpr_5 & 1024u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089164C4;
      }
      goto L_08916380;
    }
L_08916380:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    goto L_08916384;
L_08916384:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089164C4;
      }
      goto L_08916390;
    }
L_08916390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x0891639Cu);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891639Cu) goto L_0891639C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891639C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089163C8;
      }
      goto L_089163A8;
    }
L_089163A8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    aot_gpr_5 = (0u | 143u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 144u);
      if (branch_taken) {
          goto L_089163C0;
      }
      goto L_089163B8;
    }
L_089163B8:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089163C8;
      }
      goto L_089163C0;
    }
L_089163C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089163DC;
      }
      goto L_089163C8;
    }
L_089163C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089163D8u);
    aot_gpr_6 = (0u | 143u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089163D8u) goto L_089163D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089163D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089163DC;
L_089163DC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_089163F8;
      }
      goto L_089163E4;
    }
L_089163E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089163F4u);
    aot_gpr_6 = (0u | 144u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089163F4u) goto L_089163F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089163F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089163F8;
L_089163F8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08916434;
      }
      goto L_08916400;
    }
L_08916400:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08916434;
      }
      goto L_08916408;
    }
L_08916408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (16204u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089164BC;
      }
      goto L_08916434;
    }
L_08916434:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (16025u << 16u);
      if (branch_taken) {
          goto L_089164BC;
      }
      goto L_0891643C;
    }
L_0891643C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089164BC;
      }
      goto L_08916458;
    }
L_08916458:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16170u << 16u);
      if (branch_taken) {
          goto L_089164BC;
      }
      goto L_08916470;
    }
L_08916470:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 | 49283u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089164BC;
      }
      goto L_0891648C;
    }
L_0891648C:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089164BC;
      }
      goto L_089164A4;
    }
L_089164A4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089164B0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089164B0u) goto L_089164B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089164B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_089164BC;
L_089164BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089165D0;
      }
      goto L_089164C4;
    }
L_089164C4:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
        goto L_089164E0;
    }
    goto L_089164CC;
L_089164CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089165D0;
      }
      goto L_089164DC;
    }
L_089164DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    goto L_089164E0;
L_089164E0:
    aot_gpr_5 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 2u);
      if (branch_taken) {
          goto L_089165D0;
      }
      goto L_089164EC;
    }
L_089164EC:
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089165D0;
      }
      goto L_089164FC;
    }
L_089164FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891650Cu);
    aot_gpr_6 = (0u | 143u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891650Cu) goto L_0891650C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891650C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08916538;
      }
      goto L_08916518;
    }
L_08916518:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916528u);
    aot_gpr_6 = (0u | 144u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916528u) goto L_08916528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916528:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08916588;
      }
      goto L_08916534;
    }
L_08916534:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_08916538;
L_08916538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891656Cu);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891656Cu) goto L_0891656C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891656C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089165D0;
      }
      goto L_08916574;
    }
L_08916574:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916580u);
    aot_gpr_5 = (0u | 105u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916580u) goto L_08916580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916580:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089165D0;
      }
      goto L_08916588;
    }
L_08916588:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08916594u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916594u) goto L_08916594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916594:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089165D0;
      }
      goto L_089165A0;
    }
L_089165A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089165D0;
      }
      goto L_089165B0;
    }
L_089165B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    goto L_089165D0;
L_089165D0:
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
L_089165E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    aot_gpr_31 = (0x0891661Cu);
    ctx.gpr[17] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891661Cu) goto L_0891661C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891661C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08916638;
      }
      goto L_08916624;
    }
L_08916624:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
        goto L_08916648;
    }
    goto L_08916630;
L_08916630:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08916668;
      }
      goto L_08916638;
    }
L_08916638:
    aot_gpr_31 = (0x08916640u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916640u) goto L_08916640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916640:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08916A90;
      }
      goto L_08916648;
    }
L_08916648:
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0891665C;
      }
      goto L_08916654;
    }
L_08916654:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08916668;
      }
      goto L_0891665C;
    }
L_0891665C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916668u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916668u) goto L_08916668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916668:
    aot_gpr_5 = (16256u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916678u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 148u, 0x08910890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916678u) goto L_08916678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916678:
    aot_gpr_31 = (0x08916680u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08916ABC;
L_08916680:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08916A90;
      }
      goto L_08916688;
    }
L_08916688:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (0u | 100u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    ctx.gpr[18] = (0u | 4u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (0u | 39u);
    aot_gpr_4 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_6 == 0u) {
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-4));
        goto L_089166D4;
    }
    goto L_089166D4;
L_089166D4:
    aot_gpr_6 = (0u | 9u);
    ctx.gpr[18] = (aot_gpr_5 + ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 91 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08916714;
      }
      goto L_089166F4;
    }
L_089166F4:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
      if (branch_taken) {
          goto L_08916748;
      }
      goto L_08916708;
    }
L_08916708:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08916748;
      }
      goto L_08916714;
    }
L_08916714:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 81 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08916748;
      }
      goto L_08916720;
    }
L_08916720:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_gpr_4 = (0u - aot_gpr_5);
      if (branch_taken) {
          goto L_08916740;
      }
      goto L_08916734;
    }
L_08916734:
    aot_gpr_5 = (aot_gpr_4 & 7u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u - aot_gpr_5);
      if (branch_taken) {
          goto L_08916744;
      }
      goto L_08916740;
    }
L_08916740:
    aot_gpr_5 = (aot_gpr_5 & 7u);
    goto L_08916744;
L_08916744:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08916748;
L_08916748:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916754u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 103u, 0x08910664u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916754u) goto L_08916754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916754:
    aot_gpr_31 = (0x0891675Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 99u, 0x08910640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891675Cu) goto L_0891675C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891675C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08916788;
      }
      goto L_08916778;
    }
L_08916778:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08916788;
L_08916788:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_6 ^ 39u);
    ctx.gpr[7] = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_31 = (0x089167A4u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 118u, 0x089106ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089167A4u) goto L_089167A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089167A4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_089167C8;
      }
      goto L_089167B8;
    }
L_089167B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089167C8;
L_089167C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_0891680C;
      }
      goto L_089167D4;
    }
L_089167D4:
    aot_gpr_31 = (0x089167DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089167DCu) goto L_089167DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089167DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0891680C;
      }
      goto L_089167E4;
    }
L_089167E4:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089167F4u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 880u, 0x0890FED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089167F4u) goto L_089167F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089167F4:
    aot_gpr_31 = (0x089167FCu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0113_entry, 113u, 174u, 0x089C89A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089167FCu) goto L_089167FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089167FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0891680C;
      }
      goto L_08916804;
    }
L_08916804:
    aot_gpr_31 = (0x0891680Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891680Cu) goto L_0891680C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891680C:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    goto L_08916810;
L_08916810:
    aot_gpr_31 = (0x08916818u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916818u) goto L_08916818;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916818:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089169E4;
      }
      goto L_08916820;
    }
L_08916820:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_0891684C;
      }
      goto L_0891683C;
    }
L_0891683C:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_08916850;
      }
      goto L_0891684C;
    }
L_0891684C:
    aot_gpr_4 = (aot_gpr_4 & 7u);
    goto L_08916850;
L_08916850:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089168F8;
      }
      goto L_08916860;
    }
L_08916860:
    ctx.gpr[21] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0891686Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 899u, 0x0890B900u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891686Cu) goto L_0891686C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891686C:
    aot_gpr_31 = (0x08916874u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916874u) goto L_08916874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916874:
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (2232u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08916888u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-13152));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916888u) goto L_08916888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916888:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08916898u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916898u) goto L_08916898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916898:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x089168A8u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61B60, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089168A8u) goto L_089168A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089168A8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089168C4;
      }
      goto L_089168BC;
    }
L_089168BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20136));
      if (branch_taken) {
          goto L_089168C8;
      }
      goto L_089168C4;
    }
L_089168C4:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-20124));
    goto L_089168C8;
L_089168C8:
    ctx.gpr[2] = (aot_gpr_6 | 0u);
    ctx.gpr[10] = (aot_gpr_4 | 0u);
    ctx.gpr[11] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089168F0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 348u, 0x0890593Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089168F0u) goto L_089168F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089168F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08916A90;
      }
      goto L_089168F8;
    }
L_089168F8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08916924;
      }
      goto L_08916914;
    }
L_08916914:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08916924;
L_08916924:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(56)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 39u);
    ctx.gpr[7] = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_31 = (0x08916948u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 118u, 0x089106ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916948u) goto L_08916948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916948:
    aot_gpr_31 = (0x08916950u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916950u) goto L_08916950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08916978;
      }
      goto L_08916958;
    }
L_08916958:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_08916978;
      }
      goto L_08916964;
    }
L_08916964:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916970u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 106u, 0x08910680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916970u) goto L_08916970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916970:
    aot_gpr_31 = (0x08916978u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916978u) goto L_08916978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916978:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0891699C;
      }
      goto L_0891698C;
    }
L_0891698C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_0891699C;
L_0891699C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_089169DC;
      }
      goto L_089169A8;
    }
L_089169A8:
    aot_gpr_31 = (0x089169B0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089169B0u) goto L_089169B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089169B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089169DC;
      }
      goto L_089169B8;
    }
L_089169B8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089169C4u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 880u, 0x0890FED0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089169C4u) goto L_089169C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089169C4:
    aot_gpr_31 = (0x089169CCu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0113_entry, 113u, 174u, 0x089C89A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089169CCu) goto L_089169CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089169CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089169DC;
      }
      goto L_089169D4;
    }
L_089169D4:
    aot_gpr_31 = (0x089169DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089169DCu) goto L_089169DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089169DC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08916810;
      }
      goto L_089169E4;
    }
L_089169E4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x089169F8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 109u, 0x0891069Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089169F8u) goto L_089169F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089169F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08916A60;
      }
      goto L_08916A00;
    }
L_08916A00:
    aot_gpr_31 = (0x08916A08u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 864u, 0x0890FDC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916A08u) goto L_08916A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916A08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08916A30;
      }
      goto L_08916A10;
    }
L_08916A10:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08916A28u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916A28u) goto L_08916A28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916A28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08916A90;
      }
      goto L_08916A30;
    }
L_08916A30:
    aot_gpr_31 = (0x08916A38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 853u, 0x0890FD50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916A38u) goto L_08916A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916A38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08916A90;
      }
      goto L_08916A40;
    }
L_08916A40:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08916A58u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916A58u) goto L_08916A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916A58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08916A90;
      }
      goto L_08916A60;
    }
L_08916A60:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916A6Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 849u, 0x0890FD1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916A6Cu) goto L_08916A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916A6C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08916A84u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916A84u) goto L_08916A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916A84:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916A90u);
    aot_gpr_5 = (0u | 151u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916A90u) goto L_08916A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916A90:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
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
L_08916ABC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1136));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1080), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(472), aot_gpr_4);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2060)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_31 = (0x08916B18u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 145u, 0x08910870u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916B18u) goto L_08916B18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916B18:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916B28u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916B28u) goto L_08916B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916B28:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 18u);
    ctx.gpr[23] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916B48;
    }
L_08916B48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 53u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916B58;
    }
L_08916B58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 52u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916B68;
    }
L_08916B68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 25u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916B78;
    }
L_08916B78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916B88;
    }
L_08916B88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 31u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916B98;
    }
L_08916B98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (128u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916BAC;
    }
L_08916BAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
        goto L_08916BCC;
    }
    goto L_08916BB8;
L_08916BB8:
    aot_gpr_31 = (0x08916BC0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916BC0u) goto L_08916BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916BC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916BC8;
    }
L_08916BC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    goto L_08916BCC;
L_08916BCC:
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(316));
    aot_gpr_4 = (aot_gpr_4 & 31u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916BF0;
    }
L_08916BF0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x08916C30u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916C30u) goto L_08916C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916C30:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916C3C;
    }
L_08916C3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08916CB8;
      }
      goto L_08916C58;
    }
L_08916C58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08916CB8;
      }
      goto L_08916C68;
    }
L_08916C68:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (16140u << 16u);
    ctx.fpr[20] = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08916CC0;
      }
      goto L_08916CB8;
    }
L_08916CB8:
    aot_gpr_4 = (16416u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    goto L_08916CC0;
L_08916CC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916CCCu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916CCCu) goto L_08916CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916CCC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08916CE8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916CE8u) goto L_08916CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916CE8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_gpr_31 = (0x08916D00u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916D00u) goto L_08916D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916D00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08916D20;
      }
      goto L_08916D08;
    }
L_08916D08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08916D20;
      }
      goto L_08916D18;
    }
L_08916D18:
    aot_gpr_31 = (0x08916D20u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 777u, 0x0890B078u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916D20u) goto L_08916D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916D20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08916D38;
      }
      goto L_08916D2C;
    }
L_08916D2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08916D8C;
      }
      goto L_08916D38;
    }
L_08916D38:
    aot_gpr_31 = (0x08916D40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 779u, 0x08913274u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916D40u) goto L_08916D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916D40:
    aot_gpr_31 = (0x08916D48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 564u, 0x0890E5ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916D48u) goto L_08916D48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916D48:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1068), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-30256));
    aot_gpr_6 = (16384u << 16u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1072), aot_gpr_5);
      if (branch_taken) {
          goto L_08916DAC;
      }
      goto L_08916D7C;
    }
L_08916D7C:
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
      if (branch_taken) {
          goto L_08916DC8;
      }
      goto L_08916D8C;
    }
L_08916D8C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr_31 = (0x08916D98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916D98u) goto L_08916D98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916D98:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916DA4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916DA4u) goto L_08916DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08917950;
      }
      goto L_08916DAC;
    }
L_08916DAC:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916DBCu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916DBCu) goto L_08916DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916DBC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    goto L_08916DC8;
L_08916DC8:
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), 0u);
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_gpr_31 = (0x08916E14u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_5));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 864u, 0x08AE30FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916E14u) goto L_08916E14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916E14:
    aot_gpr_31 = (0x08916E1Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916E1Cu) goto L_08916E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916E1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    ctx.gpr[21] = (aot_gpr_4 ^ 1u);
    ctx.gpr[21] = (0u < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08917060;
      }
      goto L_08916E30;
    }
L_08916E30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(304));
      if (branch_taken) {
          goto L_08916E98;
      }
      goto L_08916E3C;
    }
L_08916E3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1076), ctx.gpr[17]);
        goto L_08916E58;
    }
    goto L_08916E48;
L_08916E48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    aot_gpr_31 = (0x08916E54u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(212));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916E54u) goto L_08916E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916E54:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1076), ctx.gpr[17]);
    goto L_08916E58;
L_08916E58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08916E74u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916E74u) goto L_08916E74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916E74:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_gpr_16);
    aot_gpr_31 = (0x08916E80u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 1004u, 0x08AE3D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916E80u) goto L_08916E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916E80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1076)));
      if (branch_taken) {
          goto L_08916E98;
      }
      goto L_08916E8C;
    }
L_08916E8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    aot_gpr_31 = (0x08916E98u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(212));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916E98u) goto L_08916E98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916E98:
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08916EACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916EACu) goto L_08916EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916EAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    if (aot_gpr_5 == aot_gpr_4) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
        goto L_08916EDC;
    }
    goto L_08916EBC;
L_08916EBC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    goto L_08916EDC;
L_08916EDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[18];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08916F08;
      }
      goto L_08916EEC;
    }
L_08916EEC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08916F08;
L_08916F08:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(180))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (4096u << 16u);
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08916F88;
      }
      goto L_08916F34;
    }
L_08916F34:
    aot_gpr_31 = (0x08916F3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 648u, 0x08912938u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916F3Cu) goto L_08916F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916F3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08916F88;
      }
      goto L_08916F44;
    }
L_08916F44:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08916F58u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 254u, 0x0887CF50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916F58u) goto L_08916F58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916F58:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08916F6Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 259u, 0x0887CFA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916F6Cu) goto L_08916F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916F6C:
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(948));
    aot_gpr_31 = (0x08916F88u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916F88u) goto L_08916F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916F88:
    aot_gpr_31 = (0x08916F90u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 663u, 0x089129F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916F90u) goto L_08916F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08917060;
      }
      goto L_08916F98;
    }
L_08916F98:
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16240u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 35232u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08916FB4u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 601u, 0x08A2FBECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916FB4u) goto L_08916FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08917060;
      }
      goto L_08916FE0;
    }
L_08916FE0:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08916FF0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 885u, 0x08AE3404u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08916FF0u) goto L_08916FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08916FF0:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(848));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08917000u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 885u, 0x08AE3404u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917000u) goto L_08917000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917000:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(864));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(832));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(768));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x08917048u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 35u, 0x08A30364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917048u) goto L_08917048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917048:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(804))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08917060;
      }
      goto L_08917058;
    }
L_08917058:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    goto L_08917060;
L_08917060:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    ctx.gpr[18] = (0u | 15u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_089170E4;
      }
      goto L_08917078;
    }
L_08917078:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089170E4;
      }
      goto L_08917088;
    }
L_08917088:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(472)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089170E4;
      }
      goto L_08917098;
    }
L_08917098:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1076), ctx.gpr[20]);
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(2212));
    ctx.gpr[8] = (aot_gpr_16 + static_cast<std::uint32_t>(2220));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(880));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x089170B8u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 656u, 0x0889EE44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089170B8u) goto L_089170B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089170B8:
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(880)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(884)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1076)));
    goto L_089170E4;
L_089170E4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_089171F4;
      }
      goto L_089170EC;
    }
L_089170EC:
    aot_gpr_31 = (0x089170F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 639u, 0x089128ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089170F4u) goto L_089170F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089170F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089171F4;
      }
      goto L_089170FC;
    }
L_089170FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891714C;
      }
      goto L_08917114;
    }
L_08917114:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0891714C;
      }
      goto L_08917124;
    }
L_08917124:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_31 = (0x0891713Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 829u, 0x0890B488u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891713Cu) goto L_0891713C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891713C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-16385));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_0891714C;
L_0891714C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x0891715Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891715Cu) goto L_0891715C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891715C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 3u);
        goto L_08917178;
    }
    goto L_08917168;
L_08917168:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_08917178;
      }
      goto L_08917178;
    }
L_08917178:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1068)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08917198;
      }
      goto L_08917184;
    }
L_08917184:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (aot_gpr_5 & 3u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08917198;
      }
      goto L_08917194;
    }
L_08917194:
    ctx.gpr[17] = (0u | 1u);
    goto L_08917198;
L_08917198:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089171F0;
      }
      goto L_089171A0;
    }
L_089171A0:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x089171ACu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 49u, 0x088DC4A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089171ACu) goto L_089171AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089171AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089171E4;
      }
      goto L_089171B4;
    }
L_089171B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089171D4;
      }
      goto L_089171C0;
    }
L_089171C0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089171CCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089171CCu) goto L_089171CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089171CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089171F0;
      }
      goto L_089171D4;
    }
L_089171D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_089171F0;
      }
      goto L_089171E4;
    }
L_089171E4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089171F0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 778u, 0x0890F644u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089171F0u) goto L_089171F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089171F0:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    goto L_089171F4;
L_089171F4:
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1056));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[22] = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    ctx.gpr[22] = (aot_gpr_4 & 16384u);
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1072)));
      if (branch_taken) {
          goto L_089172B4;
      }
      goto L_08917248;
    }
L_08917248:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_089172B4;
      }
      goto L_08917254;
    }
L_08917254:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089172B4;
      }
      goto L_08917264;
    }
L_08917264:
    aot_gpr_31 = (0x0891726Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891726Cu) goto L_0891726C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891726C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089172B4;
      }
      goto L_08917274;
    }
L_08917274:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    aot_gpr_5 = (0u | 18u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089172AC;
      }
      goto L_08917288;
    }
L_08917288:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    aot_gpr_5 = (0u | 17u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089172AC;
      }
      goto L_0891729C;
    }
L_0891729C:
    aot_gpr_31 = (0x089172A4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089172A4u) goto L_089172A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089172A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089172B4;
      }
      goto L_089172AC;
    }
L_089172AC:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[22] = (0u | 0u);
    goto L_089172B4;
L_089172B4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089172D4;
      }
      goto L_089172C4;
    }
L_089172C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891730C;
      }
      goto L_089172D4;
    }
L_089172D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08917304;
      }
      goto L_089172E0;
    }
L_089172E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089173D4;
      }
      goto L_089172F4;
    }
L_089172F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_089173D4;
      }
      goto L_08917304;
    }
L_08917304:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089173D4;
      }
      goto L_0891730C;
    }
L_0891730C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08917358;
      }
      goto L_08917318;
    }
L_08917318:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08917334;
      }
      goto L_08917328;
    }
L_08917328:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_089173D4;
      }
      goto L_08917334;
    }
L_08917334:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089173D4;
      }
      goto L_08917348;
    }
L_08917348:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_089173D4;
      }
      goto L_08917358;
    }
L_08917358:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 49u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08917374;
      }
      goto L_08917368;
    }
L_08917368:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_089173D4;
      }
      goto L_08917374;
    }
L_08917374:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089173C4;
      }
      goto L_08917384;
    }
L_08917384:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089173C4;
      }
      goto L_08917394;
    }
L_08917394:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 25u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089173C4;
      }
      goto L_089173A4;
    }
L_089173A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 22u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089173C4;
      }
      goto L_089173B4;
    }
L_089173B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089173D0;
      }
      goto L_089173C4;
    }
L_089173C4:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_089173D4;
      }
      goto L_089173D0;
    }
L_089173D0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    goto L_089173D4;
L_089173D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08917440;
      }
      goto L_089173E4;
    }
L_089173E4:
    aot_gpr_31 = (0x089173ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089173ECu) goto L_089173EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089173EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08917440;
      }
      goto L_08917404;
    }
L_08917404:
    aot_gpr_31 = (0x0891740Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891740Cu) goto L_0891740C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891740C:
    aot_gpr_31 = (0x08917414u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917414u) goto L_08917414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917414:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08917440;
      }
      goto L_0891741C;
    }
L_0891741C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0891743C;
      }
      goto L_0891742C;
    }
L_0891742C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + aot_fpr_12;
      if (branch_taken) {
          goto L_08917440;
      }
      goto L_0891743C;
    }
L_0891743C:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[24];
    goto L_08917440;
L_08917440:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1068)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089175A0;
      }
      goto L_0891744C;
    }
L_0891744C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089175A0;
      }
      goto L_0891745C;
    }
L_0891745C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[18];
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08917488;
      }
      goto L_08917468;
    }
L_08917468:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_08917488;
      }
      goto L_08917478;
    }
L_08917478:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2192)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_089174A8;
      }
      goto L_08917488;
    }
L_08917488:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_089174A8;
      }
      goto L_08917494;
    }
L_08917494:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2064), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2068), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089174A8;
L_089174A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917548;
      }
      goto L_089174B8;
    }
L_089174B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 25u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917548;
      }
      goto L_089174C8;
    }
L_089174C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 49u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917548;
      }
      goto L_089174D8;
    }
L_089174D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 23u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917548;
      }
      goto L_089174E8;
    }
L_089174E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 39u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917548;
      }
      goto L_089174F8;
    }
L_089174F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 40u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917548;
      }
      goto L_08917508;
    }
L_08917508:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 43u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917548;
      }
      goto L_08917518;
    }
L_08917518:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 44u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917548;
      }
      goto L_08917528;
    }
L_08917528:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917548;
      }
      goto L_08917538;
    }
L_08917538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 53u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08917588;
      }
      goto L_08917548;
    }
L_08917548:
    aot_gpr_31 = (0x08917550u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917550u) goto L_08917550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917550:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08917570;
      }
      goto L_08917558;
    }
L_08917558:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_08917578;
      }
      goto L_08917570;
    }
L_08917570:
    aot_gpr_31 = (0x08917578u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917578u) goto L_08917578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08917588;
L_08917588:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08917598u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 875u, 0x08AE3358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917598u) goto L_08917598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08917950;
      }
      goto L_089175A0;
    }
L_089175A0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089175C0;
      }
      goto L_089175A8;
    }
L_089175A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089175C0;
      }
      goto L_089175B8;
    }
L_089175B8:
    aot_gpr_4 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    goto L_089175C0;
L_089175C0:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x089175D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 156u, 0x08910944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089175D0u) goto L_089175D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089175D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089176C8;
      }
      goto L_089175E4;
    }
L_089175E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x08917600u);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917600u) goto L_08917600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917600:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (16457u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08917638;
    }
    goto L_08917638;
L_08917638:
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08917660;
      }
      goto L_08917650;
    }
L_08917650:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    goto L_08917660;
L_08917660:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089176C0;
      }
      goto L_08917670;
    }
L_08917670:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16406u << 16u);
      if (branch_taken) {
          goto L_089176A0;
      }
      goto L_08917688;
    }
L_08917688:
    aot_gpr_4 = (aot_gpr_4 | 52196u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089176AC;
      }
      goto L_089176A0;
    }
L_089176A0:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_089176C0;
      }
      goto L_089176AC;
    }
L_089176AC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089176C0;
      }
      goto L_089176BC;
    }
L_089176BC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    goto L_089176C0;
L_089176C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08917890;
      }
      goto L_089176C8;
    }
L_089176C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2064)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08917890;
      }
      goto L_089176DC;
    }
L_089176DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2068)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08917890;
      }
      goto L_089176F0;
    }
L_089176F0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2064)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2068)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x0891770Cu);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891770Cu) goto L_0891770C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891770C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (16457u << 16u);
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16329u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[20])) ? 0x00800000u : 0u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) ^ 0x80000000u);
        goto L_08917740;
    }
    goto L_08917740;
L_08917740:
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08917768;
      }
      goto L_08917758;
    }
L_08917758:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    goto L_08917768;
L_08917768:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_089177D0;
    }
    goto L_08917778;
L_08917778:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0891779C;
      }
      goto L_08917790;
    }
L_08917790:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_089177CC;
      }
      goto L_0891779C;
    }
L_0891779C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_089177D0;
    }
    goto L_089177AC;
L_089177AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089177C8;
      }
      goto L_089177BC;
    }
L_089177BC:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
      if (branch_taken) {
          goto L_089177CC;
      }
      goto L_089177C8;
    }
L_089177C8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    goto L_089177CC;
L_089177CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_089177D0;
L_089177D0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(936), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(940), aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(936)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(940)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2064)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(920), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(924), aot_gpr_5);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(920)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(924)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2068)));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = ctx.fpr[18] - ctx.fpr[19];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1028), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(928), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(928)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(932), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(932)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(912), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(912)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(916), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1040), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(916)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1044), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(908), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_fpr_14 = ctx.fpr[16] + aot_fpr_14;
    aot_fpr_12 = std::sqrt(aot_fpr_14);
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08917890;
      }
      goto L_08917884;
    }
L_08917884:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2072), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2064), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2068), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08917890;
L_08917890:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089178B0;
      }
      goto L_089178A0;
    }
L_089178A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089178E8;
      }
      goto L_089178B0;
    }
L_089178B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089178D4;
      }
      goto L_089178C4;
    }
L_089178C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08917920;
      }
      goto L_089178D4;
    }
L_089178D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_31 = (0x089178E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089178E0u) goto L_089178E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089178E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08917920;
      }
      goto L_089178E8;
    }
L_089178E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917920;
      }
      goto L_089178F8;
    }
L_089178F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917920;
      }
      goto L_08917908;
    }
L_08917908:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08917920;
      }
      goto L_08917914;
    }
L_08917914:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_31 = (0x08917920u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917920u) goto L_08917920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917920:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(248));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0891793Cu);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891793Cu) goto L_0891793C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891793C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x0891794Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 875u, 0x08AE3358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0891794Cu) goto L_0891794C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0891794C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08917950;
L_08917950:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1080), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1136));
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
L_08917990:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1368)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08917B20;
      }
      goto L_089179D4;
    }
L_089179D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1368)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08917B20;
      }
      goto L_089179E0;
    }
L_089179E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 9u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08917A34;
      }
      goto L_089179F0;
    }
L_089179F0:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8864)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8868)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = aot_fpr_14 - aot_fpr_15;
    aot_gpr_5 = (17505u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08917A34;
      }
      goto L_08917A30;
    }
L_08917A30:
    aot_gpr_4 = (0u | 0u);
    goto L_08917A34;
L_08917A34:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08917B14;
      }
      goto L_08917A3C;
    }
L_08917A3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_31 = (0x08917A58u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 827u, 0x0890B448u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917A58u) goto L_08917A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917A78;
      }
      goto L_08917A68;
    }
L_08917A68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08917A90;
      }
      goto L_08917A78;
    }
L_08917A78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_31 = (0x08917A90u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917A90u) goto L_08917A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917A90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917AB0;
      }
      goto L_08917AA0;
    }
L_08917AA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08917B0C;
      }
      goto L_08917AB0;
    }
L_08917AB0:
    aot_gpr_31 = (0x08917AB8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917AB8u) goto L_08917AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917AB8:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08917B0C;
      }
      goto L_08917AC8;
    }
L_08917AC8:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08917AF4;
      }
      goto L_08917AD4;
    }
L_08917AD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 20u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08917AECu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917AECu) goto L_08917AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917AEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08917B0C;
      }
      goto L_08917AF4;
    }
L_08917AF4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08917B0Cu);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917B0Cu) goto L_08917B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917B0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 30u, 0x0891823Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08917B14;
    }
L_08917B14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5000));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1368), aot_gpr_4);
    goto L_08917B20;
L_08917B20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08917B70;
      }
      goto L_08917B30;
    }
L_08917B30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08917B70;
      }
      goto L_08917B54;
    }
L_08917B54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08917B60u);
    aot_gpr_5 = (0u | 119u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917B60u) goto L_08917B60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917B60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(468), aot_gpr_4);
    goto L_08917B70;
L_08917B70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08917DFC;
      }
      goto L_08917B84;
    }
L_08917B84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 9u);
      if (branch_taken) {
          goto L_08917CCC;
      }
      goto L_08917BA0;
    }
L_08917BA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1380)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08917CCC;
      }
      goto L_08917BB4;
    }
L_08917BB4:
    aot_gpr_31 = (0x08917BBCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917BBCu) goto L_08917BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917BBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08917C48;
      }
      goto L_08917BC4;
    }
L_08917BC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1740)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08917C48;
      }
      goto L_08917BD8;
    }
L_08917BD8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8864)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8868)));
    aot_gpr_31 = (0x08917BF4u);
    aot_fpr_13 = aot_fpr_14 - aot_fpr_15;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917BF4u) goto L_08917BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917BF4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    ctx.gpr[17] = (ctx.gpr[2] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08917C14;
      }
      goto L_08917C08;
    }
L_08917C08:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08917C14;
L_08917C14:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1930))))));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08917C48;
      }
      goto L_08917C2C;
    }
L_08917C2C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08917C48;
      }
      goto L_08917C34;
    }
L_08917C34:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08917C40u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 99u, 0x08910640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917C40u) goto L_08917C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917C40:
    aot_gpr_31 = (0x08917C48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917C48u) goto L_08917C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917C48:
    aot_gpr_31 = (0x08917C50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917C50u) goto L_08917C50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917C50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08917CCC;
      }
      goto L_08917C58;
    }
L_08917C58:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08917C64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 148u, 0x08910890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917C64u) goto L_08917C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917C64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08917C80;
      }
      goto L_08917C74;
    }
L_08917C74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08917C80;
L_08917C80:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    aot_gpr_31 = (0x08917C8Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08916ABC;
L_08917C8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08917CB0;
      }
      goto L_08917C94;
    }
L_08917C94:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08917CA0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 103u, 0x08910664u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917CA0u) goto L_08917CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917CA0:
    aot_gpr_31 = (0x08917CA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 99u, 0x08910640u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917CA8u) goto L_08917CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917CA8:
    aot_gpr_31 = (0x08917CB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890FF64, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917CB0u) goto L_08917CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917CB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-16385));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08917CCCu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917CCCu) goto L_08917CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917CCC:
    aot_gpr_31 = (0x08917CD4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917CD4u) goto L_08917CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917CD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08917DF4;
      }
      goto L_08917CDC;
    }
L_08917CDC:
    aot_gpr_4 = (0u | 9u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08917D08;
      }
      goto L_08917CE8;
    }
L_08917CE8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8864)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8868)));
    aot_gpr_31 = (0x08917D04u);
    aot_fpr_13 = aot_fpr_14 - aot_fpr_15;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917D04u) goto L_08917D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917D04:
    ctx.gpr[17] = (ctx.gpr[2] & 255u);
    goto L_08917D08;
L_08917D08:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08917D2C;
      }
      goto L_08917D1C;
    }
L_08917D1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08917D2C;
L_08917D2C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 39u);
    ctx.gpr[7] = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08917D4Cu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 118u, 0x089106ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917D4Cu) goto L_08917D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917D4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08917D6C;
      }
      goto L_08917D54;
    }
L_08917D54:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08917D7C;
      }
      goto L_08917D64;
    }
L_08917D64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08917D84;
      }
      goto L_08917D6C;
    }
L_08917D6C:
    aot_gpr_31 = (0x08917D74u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917D74u) goto L_08917D74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917D74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 30u, 0x0891823Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08917D7C;
    }
L_08917D7C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_08917D84;
L_08917D84:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08917D90u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 109u, 0x0891069Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917D90u) goto L_08917D90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917D90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08917DC4;
      }
      goto L_08917D98;
    }
L_08917D98:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_4 = (ctx.gpr[17] - aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08917DC4;
      }
      goto L_08917DAC;
    }
L_08917DAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1740), aot_gpr_4);
      if (branch_taken) {
          goto L_08917DF4;
      }
      goto L_08917DC4;
    }
L_08917DC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (49152u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08917DE4u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917DE4u) goto L_08917DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917DE4:
    aot_gpr_31 = (0x08917DECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08917990;
L_08917DEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 30u, 0x0891823Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08917DF4;
    }
L_08917DF4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 30u, 0x0891823Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08917DFC;
    }
L_08917DFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 9u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
        goto L_08917E20;
    }
    goto L_08917E0C;
L_08917E0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 32u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08917ED8;
      }
      goto L_08917E1C;
    }
L_08917E1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    goto L_08917E20;
L_08917E20:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08917ED8;
      }
      goto L_08917E30;
    }
L_08917E30:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8864)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8868)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x08917E50u);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917E50u) goto L_08917E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917E50:
    aot_gpr_31 = (0x08917E58u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917E58u) goto L_08917E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917E58:
    aot_gpr_4 = (16457u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16457u << 16u);
      if (branch_taken) {
          goto L_08917EA0;
      }
      goto L_08917E84;
    }
L_08917E84:
    aot_gpr_4 = (16585u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08917ED8;
      }
      goto L_08917EA0;
    }
L_08917EA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2256)));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08917ED8;
      }
      goto L_08917EC4;
    }
L_08917EC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2260)));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08917ED8;
L_08917ED8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1380)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 30u, 0x0891823Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08917EEC;
    }
L_08917EEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 30u, 0x0891823Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08917EF8;
    }
L_08917EF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1380)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_31 = (0x08917F08u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 351u, 0x08B553F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917F08u) goto L_08917F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917F08:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20140)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20144)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08917F1Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B61FD0, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_16, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917F1Cu) goto L_08917F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917F1C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20108)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20112)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08917F30u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917F30u) goto L_08917F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917F30:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08917F3Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B627F0, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917F3Cu) goto L_08917F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917F3C:
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08917F78;
      }
      goto L_08917F58;
    }
L_08917F58:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(288)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(292)));
    aot_gpr_31 = (0x08917F68u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917F68u) goto L_08917F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917F68:
    aot_gpr_31 = (0x08917F70u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917F70u) goto L_08917F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917F70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 25u, 0x089181B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08917F78;
    }
L_08917F78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1376)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x08917FA0u);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917FA0u) goto L_08917FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917FA0:
    aot_gpr_31 = (0x08917FA8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917FA8u) goto L_08917FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917FA8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(288)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(292)));
    aot_gpr_31 = (0x08917FBCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917FBCu) goto L_08917FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917FBC:
    aot_gpr_31 = (0x08917FC4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08917FC4u) goto L_08917FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08917FC4:
    aot_gpr_4 = (16457u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16457u << 16u);
      if (branch_taken) {
          goto L_08917FFC;
      }
      goto L_08917FE8;
    }
L_08917FE8:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - aot_fpr_12;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 3u, 0x08918028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08917FFC;
    }
L_08917FFC:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.pc = 0x08918000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0068(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0068_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_68(Runtime &runtime) {
    runtime.register_generated_unit(68u, 0x08914000u, 16384u, &recomp_unit_0068, &recomp_unit_0068_entry);
    runtime.register_function(0x08914000u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914300u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914318u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914328u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914330u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914358u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914368u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914378u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089143DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891440Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914428u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914450u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891446Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914490u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914514u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914520u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914558u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914578u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914594u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914630u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914728u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914784u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914790u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891480Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914818u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891482Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914850u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891485Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914870u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914898u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914908u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914924u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914934u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891493Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914944u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914950u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914964u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914968u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914994u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891500Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891501Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891502Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915030u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891503Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891505Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891507Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915080u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915100u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915114u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915124u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891512Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891513Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915148u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915150u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915158u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915160u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915190u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915198u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915204u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915218u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915220u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915240u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915250u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915258u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915274u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915288u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915308u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891531Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915338u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915378u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915380u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915400u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915414u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915484u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915494u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915508u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915510u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915524u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915584u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915594u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915644u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915664u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891566Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915674u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891567Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915684u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891568Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915694u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915718u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891572Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891579Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915820u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915828u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891583Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891589Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089158FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915964u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915984u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891598Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915994u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891599Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089159F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891609Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916128u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916138u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916148u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916150u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916158u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891620Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891622Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916254u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891629Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916308u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916320u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891632Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891633Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891634Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916354u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891635Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916368u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916370u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916380u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916384u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916390u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891639Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916400u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916408u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916434u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891643Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916458u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916470u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891648Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891650Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916518u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916528u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916534u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916538u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891656Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916574u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916580u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916588u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916594u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891661Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916624u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916630u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916638u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916640u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916648u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916654u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891665Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916668u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916678u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916680u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916688u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916708u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916714u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916720u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916734u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916740u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916744u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916748u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916754u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891675Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916778u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916788u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916804u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891680Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916810u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916818u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916820u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891683Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891684Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916850u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916860u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891686Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916874u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916888u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916898u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916914u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916924u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916948u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916950u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916958u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916964u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916970u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916978u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891698Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891699Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916ABCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916EACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916EBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916EDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916EECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917000u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917048u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917058u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917060u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917078u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917088u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917098u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917114u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917124u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891713Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891714Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891715Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917168u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917178u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917184u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917194u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917198u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917248u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917254u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917264u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891726Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917274u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917288u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891729Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917304u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891730Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917318u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917328u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917334u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917348u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917358u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917368u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917374u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917384u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917394u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917404u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891740Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917414u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891741Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891742Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891743Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917440u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891744Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891745Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917468u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917478u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917488u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917494u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917508u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917518u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917528u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917538u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917548u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917550u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917558u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917570u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917578u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917588u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917598u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917600u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917638u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917650u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917660u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917670u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917688u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891770Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917740u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917758u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917768u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917778u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917790u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891779Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917884u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917890u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917908u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917914u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917920u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891793Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891794Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917950u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917990u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917ED8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917EF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FFCu, &recomp_unit_0068, "recomp_unit_0068");
}
} // namespace psprecomp
