#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0024[64] = {
    0xAA00020A12411105ull, 0x1440411080929412ull, 0x0000000000050001ull, 0x0409002808008C00ull,
    0x0000000000000081ull, 0x04A1040280030000ull, 0x5000A80448000550ull, 0x5112009481008800ull,
    0x05010C8200000090ull, 0x4200020900120002ull, 0x8400109414000020ull, 0x40A940AA840A940Aull,
    0x0295285545528541ull, 0x2400A11088109408ull, 0x954AA54001500000ull, 0x042ADA96A5A5284Cull,
    0x5495202210480800ull, 0x54A58425291294AAull, 0x0A5924AAA4800100ull, 0x924A55115554AAA2ull,
    0x8AA88AAA20554451ull, 0xA22AA208AC9252A8ull, 0x9554A4800080214Aull, 0x1254A20892A51044ull,
    0x00844080210A9441ull, 0x40A140A050514004ull, 0x88A40000020D2541ull, 0x48408AA505209514ull,
    0x1502040810208921ull, 0x1402D5A905682082ull, 0x5205052102058084ull, 0x1228592000040001ull,
    0x04081322412A4129ull, 0x8B40810205408102ull, 0x02B01082805AB520ull, 0x5920000800A90028ull,
    0x4081320241291228ull, 0xB408102054081020ull, 0x580841402D5A9548ull, 0x9000040054801401ull,
    0x409901209489142Cull, 0x0408102A04081020ull, 0x0420A016AD4AA45Aull, 0x0002002A400A00ACull,
    0x0A41155AA9088524ull, 0x6082085041041042ull, 0x5480A040B0108280ull, 0x4208810885200100ull,
    0x8060820850410410ull, 0x0101520A10B01082ull, 0x48904A4452520000ull, 0x2A28950082A952AAull,
    0x4B42108542108421ull, 0xAC0420A016AD4152ull, 0x2900008000480A00ull, 0x8950082A95484429ull,
    0x4210A108421082A2ull, 0x480A00AC0420A018ull, 0x44A8040885200100ull, 0x0842142108421051ull,
    0x0901401580841403ull, 0x4100404290000008ull, 0x2A9482A021001001ull, 0x10842A1084210955ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0024[64] = {
    1u, 16u, 31u, 34u, 43u, 45u, 54u, 66u, 78u, 87u, 95u, 104u, 123u, 145u, 158u, 173u,
    199u, 213u, 237u, 254u, 280u, 303u, 326u, 343u, 362u, 375u, 389u, 403u, 422u, 435u, 455u, 470u,
    481u, 498u, 512u, 530u, 542u, 558u, 571u, 592u, 602u, 620u, 630u, 652u, 663u, 684u, 697u, 711u,
    722u, 734u, 748u, 763u, 785u, 802u, 823u, 831u, 851u, 866u, 880u, 892u, 906u, 920u, 928u, 942u,
};
void recomp_unit_0024_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,31,16 fprs=12,13,14,20 gpr_occ=2971 fpr_occ=628 gpr_total=4508 fpr_total=1108
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08864000u;
        entry_id = 0u;
        if (entry_delta < 16372u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0024[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0024[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08864000;
    case 2u: goto L_08864008;
    case 3u: goto L_08864020;
    case 4u: goto L_08864030;
    case 5u: goto L_08864040;
    case 6u: goto L_08864058;
    case 7u: goto L_08864064;
    case 8u: goto L_08864070;
    case 9u: goto L_08864084;
    case 10u: goto L_0886408C;
    case 11u: goto L_088640A4;
    case 12u: goto L_088640E4;
    case 13u: goto L_088640EC;
    case 14u: goto L_088640F4;
    case 15u: goto L_088640FC;
    case 16u: goto L_08864104;
    case 17u: goto L_08864110;
    case 18u: goto L_08864128;
    case 19u: goto L_08864130;
    case 20u: goto L_0886413C;
    case 21u: goto L_08864144;
    case 22u: goto L_08864150;
    case 23u: goto L_0886415C;
    case 24u: goto L_0886417C;
    case 25u: goto L_08864190;
    case 26u: goto L_088641A0;
    case 27u: goto L_088641B8;
    case 28u: goto L_088641D8;
    case 29u: goto L_088641E8;
    case 30u: goto L_088641F0;
    case 31u: goto L_08864200;
    case 32u: goto L_08864240;
    case 33u: goto L_08864248;
    case 34u: goto L_08864328;
    case 35u: goto L_0886432C;
    case 36u: goto L_0886433C;
    case 37u: goto L_0886436C;
    case 38u: goto L_0886438C;
    case 39u: goto L_08864394;
    case 40u: goto L_088643C0;
    case 41u: goto L_088643CC;
    case 42u: goto L_088643E8;
    case 43u: goto L_08864400;
    case 44u: goto L_0886441C;
    case 45u: goto L_08864540;
    case 46u: goto L_08864544;
    case 47u: goto L_0886457C;
    case 48u: goto L_08864584;
    case 49u: goto L_088645A8;
    case 50u: goto L_088645C0;
    case 51u: goto L_088645D4;
    case 52u: goto L_088645DC;
    case 53u: goto L_088645E8;
    case 54u: goto L_08864610;
    case 55u: goto L_08864618;
    case 56u: goto L_08864620;
    case 57u: goto L_08864628;
    case 58u: goto L_0886466C;
    case 59u: goto L_08864678;
    case 60u: goto L_08864688;
    case 61u: goto L_088646AC;
    case 62u: goto L_088646B4;
    case 63u: goto L_088646BC;
    case 64u: goto L_088646F0;
    case 65u: goto L_088646F8;
    case 66u: goto L_0886472C;
    case 67u: goto L_0886473C;
    case 68u: goto L_08864760;
    case 69u: goto L_0886477C;
    case 70u: goto L_08864788;
    case 71u: goto L_08864790;
    case 72u: goto L_0886479C;
    case 73u: goto L_088647C4;
    case 74u: goto L_088647D0;
    case 75u: goto L_088647E0;
    case 76u: goto L_088647F0;
    case 77u: goto L_088647F8;
    case 78u: goto L_08864810;
    case 79u: goto L_0886481C;
    case 80u: goto L_08864884;
    case 81u: goto L_0886489C;
    case 82u: goto L_088648A8;
    case 83u: goto L_088648AC;
    case 84u: goto L_088648C0;
    case 85u: goto L_088648E0;
    case 86u: goto L_088648E8;
    case 87u: goto L_08864904;
    case 88u: goto L_08864944;
    case 89u: goto L_08864950;
    case 90u: goto L_08864980;
    case 91u: goto L_0886498C;
    case 92u: goto L_088649A4;
    case 93u: goto L_088649E4;
    case 94u: goto L_088649F8;
    case 95u: goto L_08864A14;
    case 96u: goto L_08864A68;
    case 97u: goto L_08864A70;
    case 98u: goto L_08864A88;
    case 99u: goto L_08864A90;
    case 100u: goto L_08864A9C;
    case 101u: goto L_08864AB0;
    case 102u: goto L_08864AE8;
    case 103u: goto L_08864AFC;
    case 104u: goto L_08864B04;
    case 105u: goto L_08864B0C;
    case 106u: goto L_08864B28;
    case 107u: goto L_08864B30;
    case 108u: goto L_08864B3C;
    case 109u: goto L_08864B44;
    case 110u: goto L_08864B4C;
    case 111u: goto L_08864B68;
    case 112u: goto L_08864B7C;
    case 113u: goto L_08864B84;
    case 114u: goto L_08864B8C;
    case 115u: goto L_08864B94;
    case 116u: goto L_08864B9C;
    case 117u: goto L_08864BB8;
    case 118u: goto L_08864BC0;
    case 119u: goto L_08864BCC;
    case 120u: goto L_08864BD4;
    case 121u: goto L_08864BDC;
    case 122u: goto L_08864BF8;
    case 123u: goto L_08864C00;
    case 124u: goto L_08864C18;
    case 125u: goto L_08864C20;
    case 126u: goto L_08864C28;
    case 127u: goto L_08864C3C;
    case 128u: goto L_08864C44;
    case 129u: goto L_08864C50;
    case 130u: goto L_08864C58;
    case 131u: goto L_08864C60;
    case 132u: goto L_08864C68;
    case 133u: goto L_08864C78;
    case 134u: goto L_08864C80;
    case 135u: goto L_08864C88;
    case 136u: goto L_08864C90;
    case 137u: goto L_08864C98;
    case 138u: goto L_08864CAC;
    case 139u: goto L_08864CB4;
    case 140u: goto L_08864CC0;
    case 141u: goto L_08864CC8;
    case 142u: goto L_08864CD0;
    case 143u: goto L_08864CDC;
    case 144u: goto L_08864CE4;
    case 145u: goto L_08864D0C;
    case 146u: goto L_08864D28;
    case 147u: goto L_08864D30;
    case 148u: goto L_08864D3C;
    case 149u: goto L_08864D50;
    case 150u: goto L_08864D6C;
    case 151u: goto L_08864D7C;
    case 152u: goto L_08864D90;
    case 153u: goto L_08864DA0;
    case 154u: goto L_08864DB4;
    case 155u: goto L_08864DBC;
    case 156u: goto L_08864DE8;
    case 157u: goto L_08864DF4;
    case 158u: goto L_08864E50;
    case 159u: goto L_08864E58;
    case 160u: goto L_08864E60;
    case 161u: goto L_08864E98;
    case 162u: goto L_08864EA0;
    case 163u: goto L_08864EA8;
    case 164u: goto L_08864EB4;
    case 165u: goto L_08864EBC;
    case 166u: goto L_08864EC4;
    case 167u: goto L_08864ECC;
    case 168u: goto L_08864ED8;
    case 169u: goto L_08864EE0;
    case 170u: goto L_08864EE8;
    case 171u: goto L_08864EF0;
    case 172u: goto L_08864EFC;
    case 173u: goto L_08864F08;
    case 174u: goto L_08864F0C;
    case 175u: goto L_08864F18;
    case 176u: goto L_08864F2C;
    case 177u: goto L_08864F34;
    case 178u: goto L_08864F40;
    case 179u: goto L_08864F48;
    case 180u: goto L_08864F54;
    case 181u: goto L_08864F5C;
    case 182u: goto L_08864F60;
    case 183u: goto L_08864F68;
    case 184u: goto L_08864F74;
    case 185u: goto L_08864F7C;
    case 186u: goto L_08864F84;
    case 187u: goto L_08864F88;
    case 188u: goto L_08864F90;
    case 189u: goto L_08864F9C;
    case 190u: goto L_08864FA4;
    case 191u: goto L_08864FAC;
    case 192u: goto L_08864FB0;
    case 193u: goto L_08864FB8;
    case 194u: goto L_08864FBC;
    case 195u: goto L_08864FC4;
    case 196u: goto L_08864FCC;
    case 197u: goto L_08864FD4;
    case 198u: goto L_08864FE8;
    case 199u: goto L_0886502C;
    case 200u: goto L_0886504C;
    case 201u: goto L_08865058;
    case 202u: goto L_08865070;
    case 203u: goto L_08865084;
    case 204u: goto L_08865094;
    case 205u: goto L_088650B4;
    case 206u: goto L_088650C0;
    case 207u: goto L_088650C8;
    case 208u: goto L_088650D0;
    case 209u: goto L_088650DC;
    case 210u: goto L_088650E8;
    case 211u: goto L_088650F0;
    case 212u: goto L_088650F8;
    case 213u: goto L_08865104;
    case 214u: goto L_0886510C;
    case 215u: goto L_08865114;
    case 216u: goto L_0886511C;
    case 217u: goto L_08865128;
    case 218u: goto L_08865130;
    case 219u: goto L_0886513C;
    case 220u: goto L_08865144;
    case 221u: goto L_08865150;
    case 222u: goto L_08865160;
    case 223u: goto L_0886516C;
    case 224u: goto L_08865174;
    case 225u: goto L_08865180;
    case 226u: goto L_08865188;
    case 227u: goto L_08865194;
    case 228u: goto L_088651A8;
    case 229u: goto L_088651BC;
    case 230u: goto L_088651C0;
    case 231u: goto L_088651C8;
    case 232u: goto L_088651D4;
    case 233u: goto L_088651DC;
    case 234u: goto L_088651E8;
    case 235u: goto L_088651F0;
    case 236u: goto L_088651F8;
    case 237u: goto L_08865220;
    case 238u: goto L_0886525C;
    case 239u: goto L_08865268;
    case 240u: goto L_08865274;
    case 241u: goto L_0886527C;
    case 242u: goto L_08865284;
    case 243u: goto L_0886528C;
    case 244u: goto L_08865294;
    case 245u: goto L_0886529C;
    case 246u: goto L_088652A8;
    case 247u: goto L_088652B4;
    case 248u: goto L_088652C0;
    case 249u: goto L_088652CC;
    case 250u: goto L_088652D0;
    case 251u: goto L_088652D8;
    case 252u: goto L_088652E4;
    case 253u: goto L_088652EC;
    case 254u: goto L_08865304;
    case 255u: goto L_08865314;
    case 256u: goto L_0886531C;
    case 257u: goto L_08865324;
    case 258u: goto L_0886532C;
    case 259u: goto L_08865334;
    case 260u: goto L_0886533C;
    case 261u: goto L_08865348;
    case 262u: goto L_08865350;
    case 263u: goto L_08865358;
    case 264u: goto L_08865360;
    case 265u: goto L_08865368;
    case 266u: goto L_08865370;
    case 267u: goto L_08865378;
    case 268u: goto L_08865380;
    case 269u: goto L_08865390;
    case 270u: goto L_088653A0;
    case 271u: goto L_088653A8;
    case 272u: goto L_088653B0;
    case 273u: goto L_088653B8;
    case 274u: goto L_088653C4;
    case 275u: goto L_088653CC;
    case 276u: goto L_088653D8;
    case 277u: goto L_088653E4;
    case 278u: goto L_088653F0;
    case 279u: goto L_088653FC;
    case 280u: goto L_08865400;
    case 281u: goto L_08865410;
    case 282u: goto L_08865418;
    case 283u: goto L_08865428;
    case 284u: goto L_08865438;
    case 285u: goto L_08865440;
    case 286u: goto L_08865448;
    case 287u: goto L_08865450;
    case 288u: goto L_08865458;
    case 289u: goto L_08865474;
    case 290u: goto L_08865484;
    case 291u: goto L_0886548C;
    case 292u: goto L_08865494;
    case 293u: goto L_0886549C;
    case 294u: goto L_088654A4;
    case 295u: goto L_088654AC;
    case 296u: goto L_088654BC;
    case 297u: goto L_088654CC;
    case 298u: goto L_088654D4;
    case 299u: goto L_088654DC;
    case 300u: goto L_088654E4;
    case 301u: goto L_088654EC;
    case 302u: goto L_088654FC;
    case 303u: goto L_0886550C;
    case 304u: goto L_08865514;
    case 305u: goto L_0886551C;
    case 306u: goto L_08865524;
    case 307u: goto L_08865530;
    case 308u: goto L_08865538;
    case 309u: goto L_08865544;
    case 310u: goto L_08865550;
    case 311u: goto L_0886555C;
    case 312u: goto L_08865568;
    case 313u: goto L_0886556C;
    case 314u: goto L_08865574;
    case 315u: goto L_0886557C;
    case 316u: goto L_0886558C;
    case 317u: goto L_088655A4;
    case 318u: goto L_088655B4;
    case 319u: goto L_088655BC;
    case 320u: goto L_088655C4;
    case 321u: goto L_088655CC;
    case 322u: goto L_088655D4;
    case 323u: goto L_088655E4;
    case 324u: goto L_088655F4;
    case 325u: goto L_088655FC;
    case 326u: goto L_08865604;
    case 327u: goto L_0886560C;
    case 328u: goto L_08865618;
    case 329u: goto L_08865620;
    case 330u: goto L_08865634;
    case 331u: goto L_0886565C;
    case 332u: goto L_0886569C;
    case 333u: goto L_088656A8;
    case 334u: goto L_088656B4;
    case 335u: goto L_088656BC;
    case 336u: goto L_088656C8;
    case 337u: goto L_088656D0;
    case 338u: goto L_088656D8;
    case 339u: goto L_088656E0;
    case 340u: goto L_088656E8;
    case 341u: goto L_088656F0;
    case 342u: goto L_088656FC;
    case 343u: goto L_08865708;
    case 344u: goto L_08865718;
    case 345u: goto L_08865730;
    case 346u: goto L_08865740;
    case 347u: goto L_08865748;
    case 348u: goto L_08865754;
    case 349u: goto L_0886575C;
    case 350u: goto L_08865764;
    case 351u: goto L_08865770;
    case 352u: goto L_0886577C;
    case 353u: goto L_0886578C;
    case 354u: goto L_088657A4;
    case 355u: goto L_088657B4;
    case 356u: goto L_088657BC;
    case 357u: goto L_088657C8;
    case 358u: goto L_088657D0;
    case 359u: goto L_088657D8;
    case 360u: goto L_088657E4;
    case 361u: goto L_088657F0;
    case 362u: goto L_08865800;
    case 363u: goto L_08865818;
    case 364u: goto L_08865828;
    case 365u: goto L_08865830;
    case 366u: goto L_0886583C;
    case 367u: goto L_08865844;
    case 368u: goto L_0886584C;
    case 369u: goto L_08865860;
    case 370u: goto L_08865874;
    case 371u: goto L_0886589C;
    case 372u: goto L_088658B8;
    case 373u: goto L_088658C8;
    case 374u: goto L_088658DC;
    case 375u: goto L_08865908;
    case 376u: goto L_08865938;
    case 377u: goto L_08865940;
    case 378u: goto L_08865950;
    case 379u: goto L_08865958;
    case 380u: goto L_08865970;
    case 381u: goto L_08865978;
    case 382u: goto L_08865994;
    case 383u: goto L_0886599C;
    case 384u: goto L_088659B8;
    case 385u: goto L_088659C0;
    case 386u: goto L_088659D4;
    case 387u: goto L_088659DC;
    case 388u: goto L_088659F8;
    case 389u: goto L_08865A00;
    case 390u: goto L_08865A18;
    case 391u: goto L_08865A20;
    case 392u: goto L_08865A28;
    case 393u: goto L_08865A34;
    case 394u: goto L_08865A40;
    case 395u: goto L_08865A48;
    case 396u: goto L_08865A4C;
    case 397u: goto L_08865A64;
    case 398u: goto L_08865AC8;
    case 399u: goto L_08865AD4;
    case 400u: goto L_08865ADC;
    case 401u: goto L_08865AEC;
    case 402u: goto L_08865AFC;
    case 403u: goto L_08865B08;
    case 404u: goto L_08865B10;
    case 405u: goto L_08865B20;
    case 406u: goto L_08865B28;
    case 407u: goto L_08865B30;
    case 408u: goto L_08865B3C;
    case 409u: goto L_08865B54;
    case 410u: goto L_08865B60;
    case 411u: goto L_08865B68;
    case 412u: goto L_08865B80;
    case 413u: goto L_08865B88;
    case 414u: goto L_08865B94;
    case 415u: goto L_08865B9C;
    case 416u: goto L_08865BA4;
    case 417u: goto L_08865BAC;
    case 418u: goto L_08865BBC;
    case 419u: goto L_08865BD8;
    case 420u: goto L_08865BEC;
    case 421u: goto L_08865BF8;
    case 422u: goto L_08865C00;
    case 423u: goto L_08865C14;
    case 424u: goto L_08865C20;
    case 425u: goto L_08865C2C;
    case 426u: goto L_08865C3C;
    case 427u: goto L_08865C54;
    case 428u: goto L_08865C70;
    case 429u: goto L_08865C8C;
    case 430u: goto L_08865CA8;
    case 431u: goto L_08865CC4;
    case 432u: goto L_08865CE0;
    case 433u: goto L_08865CE8;
    case 434u: goto L_08865CF0;
    case 435u: goto L_08865D04;
    case 436u: goto L_08865D1C;
    case 437u: goto L_08865D34;
    case 438u: goto L_08865D4C;
    case 439u: goto L_08865D54;
    case 440u: goto L_08865D58;
    case 441u: goto L_08865D60;
    case 442u: goto L_08865D68;
    case 443u: goto L_08865D80;
    case 444u: goto L_08865D8C;
    case 445u: goto L_08865D94;
    case 446u: goto L_08865D9C;
    case 447u: goto L_08865DA0;
    case 448u: goto L_08865DA8;
    case 449u: goto L_08865DB0;
    case 450u: goto L_08865DB8;
    case 451u: goto L_08865DBC;
    case 452u: goto L_08865DC4;
    case 453u: goto L_08865DE8;
    case 454u: goto L_08865DF0;
    case 455u: goto L_08865E08;
    case 456u: goto L_08865E1C;
    case 457u: goto L_08865E3C;
    case 458u: goto L_08865E40;
    case 459u: goto L_08865E48;
    case 460u: goto L_08865E64;
    case 461u: goto L_08865E80;
    case 462u: goto L_08865E94;
    case 463u: goto L_08865EA0;
    case 464u: goto L_08865EA8;
    case 465u: goto L_08865EC0;
    case 466u: goto L_08865EC8;
    case 467u: goto L_08865EE4;
    case 468u: goto L_08865EF0;
    case 469u: goto L_08865EF8;
    case 470u: goto L_08865F00;
    case 471u: goto L_08865F48;
    case 472u: goto L_08865F94;
    case 473u: goto L_08865FA0;
    case 474u: goto L_08865FAC;
    case 475u: goto L_08865FB0;
    case 476u: goto L_08865FB8;
    case 477u: goto L_08865FCC;
    case 478u: goto L_08865FD4;
    case 479u: goto L_08865FE4;
    case 480u: goto L_08865FF0;
    case 481u: goto L_08866000;
    case 482u: goto L_0886600C;
    case 483u: goto L_08866014;
    case 484u: goto L_08866020;
    case 485u: goto L_08866038;
    case 486u: goto L_08866044;
    case 487u: goto L_0886604C;
    case 488u: goto L_08866054;
    case 489u: goto L_08866060;
    case 490u: goto L_08866078;
    case 491u: goto L_08866084;
    case 492u: goto L_08866094;
    case 493u: goto L_088660A0;
    case 494u: goto L_088660A4;
    case 495u: goto L_088660B0;
    case 496u: goto L_088660CC;
    case 497u: goto L_088660E8;
    case 498u: goto L_08866104;
    case 499u: goto L_08866120;
    case 500u: goto L_0886613C;
    case 501u: goto L_08866158;
    case 502u: goto L_08866160;
    case 503u: goto L_08866168;
    case 504u: goto L_08866184;
    case 505u: goto L_088661A0;
    case 506u: goto L_088661BC;
    case 507u: goto L_088661D8;
    case 508u: goto L_088661E0;
    case 509u: goto L_088661E4;
    case 510u: goto L_088661EC;
    case 511u: goto L_088661FC;
    case 512u: goto L_08866214;
    case 513u: goto L_08866220;
    case 514u: goto L_08866228;
    case 515u: goto L_08866230;
    case 516u: goto L_08866234;
    case 517u: goto L_0886623C;
    case 518u: goto L_08866244;
    case 519u: goto L_0886624C;
    case 520u: goto L_08866250;
    case 521u: goto L_08866258;
    case 522u: goto L_0886627C;
    case 523u: goto L_08866284;
    case 524u: goto L_0886629C;
    case 525u: goto L_088662B0;
    case 526u: goto L_088662D0;
    case 527u: goto L_088662D4;
    case 528u: goto L_088662DC;
    case 529u: goto L_088662E4;
    case 530u: goto L_0886630C;
    case 531u: goto L_08866314;
    case 532u: goto L_08866340;
    case 533u: goto L_0886634C;
    case 534u: goto L_08866354;
    case 535u: goto L_0886635C;
    case 536u: goto L_0886638C;
    case 537u: goto L_088663D4;
    case 538u: goto L_088663E0;
    case 539u: goto L_088663EC;
    case 540u: goto L_088663F0;
    case 541u: goto L_088663F8;
    case 542u: goto L_0886640C;
    case 543u: goto L_08866414;
    case 544u: goto L_08866424;
    case 545u: goto L_08866430;
    case 546u: goto L_08866440;
    case 547u: goto L_0886644C;
    case 548u: goto L_08866454;
    case 549u: goto L_08866460;
    case 550u: goto L_08866478;
    case 551u: goto L_08866484;
    case 552u: goto L_088664A4;
    case 553u: goto L_088664B0;
    case 554u: goto L_088664B4;
    case 555u: goto L_088664C0;
    case 556u: goto L_088664DC;
    case 557u: goto L_088664F8;
    case 558u: goto L_08866514;
    case 559u: goto L_08866530;
    case 560u: goto L_0886654C;
    case 561u: goto L_08866568;
    case 562u: goto L_08866570;
    case 563u: goto L_08866578;
    case 564u: goto L_08866594;
    case 565u: goto L_088665B0;
    case 566u: goto L_088665CC;
    case 567u: goto L_088665E8;
    case 568u: goto L_088665F0;
    case 569u: goto L_088665F4;
    case 570u: goto L_088665FC;
    case 571u: goto L_0886660C;
    case 572u: goto L_08866618;
    case 573u: goto L_08866620;
    case 574u: goto L_08866628;
    case 575u: goto L_08866630;
    case 576u: goto L_0886663C;
    case 577u: goto L_08866644;
    case 578u: goto L_0886664C;
    case 579u: goto L_08866650;
    case 580u: goto L_08866658;
    case 581u: goto L_08866660;
    case 582u: goto L_08866668;
    case 583u: goto L_0886666C;
    case 584u: goto L_08866674;
    case 585u: goto L_08866698;
    case 586u: goto L_088666A0;
    case 587u: goto L_088666B8;
    case 588u: goto L_088666CC;
    case 589u: goto L_088666EC;
    case 590u: goto L_088666F0;
    case 591u: goto L_088666F8;
    case 592u: goto L_08866700;
    case 593u: goto L_08866728;
    case 594u: goto L_08866730;
    case 595u: goto L_0886675C;
    case 596u: goto L_08866768;
    case 597u: goto L_08866770;
    case 598u: goto L_08866778;
    case 599u: goto L_088667A8;
    case 600u: goto L_088667F0;
    case 601u: goto L_088667FC;
    case 602u: goto L_08866808;
    case 603u: goto L_0886680C;
    case 604u: goto L_08866814;
    case 605u: goto L_08866828;
    case 606u: goto L_08866830;
    case 607u: goto L_08866840;
    case 608u: goto L_0886684C;
    case 609u: goto L_0886685C;
    case 610u: goto L_08866868;
    case 611u: goto L_08866870;
    case 612u: goto L_0886687C;
    case 613u: goto L_08866894;
    case 614u: goto L_088668A0;
    case 615u: goto L_088668C0;
    case 616u: goto L_088668CC;
    case 617u: goto L_088668D0;
    case 618u: goto L_088668DC;
    case 619u: goto L_088668F8;
    case 620u: goto L_08866914;
    case 621u: goto L_08866930;
    case 622u: goto L_0886694C;
    case 623u: goto L_08866968;
    case 624u: goto L_08866984;
    case 625u: goto L_0886698C;
    case 626u: goto L_08866994;
    case 627u: goto L_088669B0;
    case 628u: goto L_088669CC;
    case 629u: goto L_088669E8;
    case 630u: goto L_08866A04;
    case 631u: goto L_08866A0C;
    case 632u: goto L_08866A10;
    case 633u: goto L_08866A18;
    case 634u: goto L_08866A28;
    case 635u: goto L_08866A34;
    case 636u: goto L_08866A3C;
    case 637u: goto L_08866A44;
    case 638u: goto L_08866A4C;
    case 639u: goto L_08866A58;
    case 640u: goto L_08866A60;
    case 641u: goto L_08866A68;
    case 642u: goto L_08866A6C;
    case 643u: goto L_08866A74;
    case 644u: goto L_08866A7C;
    case 645u: goto L_08866A84;
    case 646u: goto L_08866A88;
    case 647u: goto L_08866A90;
    case 648u: goto L_08866AB4;
    case 649u: goto L_08866ABC;
    case 650u: goto L_08866AD4;
    case 651u: goto L_08866AE8;
    case 652u: goto L_08866B08;
    case 653u: goto L_08866B0C;
    case 654u: goto L_08866B14;
    case 655u: goto L_08866B1C;
    case 656u: goto L_08866B44;
    case 657u: goto L_08866B4C;
    case 658u: goto L_08866B78;
    case 659u: goto L_08866B84;
    case 660u: goto L_08866B8C;
    case 661u: goto L_08866B94;
    case 662u: goto L_08866BC4;
    case 663u: goto L_08866C08;
    case 664u: goto L_08866C14;
    case 665u: goto L_08866C20;
    case 666u: goto L_08866C28;
    case 667u: goto L_08866C3C;
    case 668u: goto L_08866C4C;
    case 669u: goto L_08866C60;
    case 670u: goto L_08866C6C;
    case 671u: goto L_08866C74;
    case 672u: goto L_08866C7C;
    case 673u: goto L_08866C84;
    case 674u: goto L_08866C8C;
    case 675u: goto L_08866C90;
    case 676u: goto L_08866C98;
    case 677u: goto L_08866CA0;
    case 678u: goto L_08866CA8;
    case 679u: goto L_08866CB0;
    case 680u: goto L_08866CC0;
    case 681u: goto L_08866CD8;
    case 682u: goto L_08866CE4;
    case 683u: goto L_08866CEC;
    case 684u: goto L_08866D04;
    case 685u: goto L_08866D18;
    case 686u: goto L_08866D30;
    case 687u: goto L_08866D48;
    case 688u: goto L_08866D60;
    case 689u: goto L_08866D78;
    case 690u: goto L_08866D90;
    case 691u: goto L_08866D98;
    case 692u: goto L_08866DAC;
    case 693u: goto L_08866DC4;
    case 694u: goto L_08866DDC;
    case 695u: goto L_08866DF4;
    case 696u: goto L_08866DF8;
    case 697u: goto L_08866E1C;
    case 698u: goto L_08866E24;
    case 699u: goto L_08866E3C;
    case 700u: goto L_08866E50;
    case 701u: goto L_08866E70;
    case 702u: goto L_08866E74;
    case 703u: goto L_08866E7C;
    case 704u: goto L_08866E98;
    case 705u: goto L_08866EB4;
    case 706u: goto L_08866EBC;
    case 707u: goto L_08866EDC;
    case 708u: goto L_08866EE8;
    case 709u: goto L_08866EF0;
    case 710u: goto L_08866EF8;
    case 711u: goto L_08866F20;
    case 712u: goto L_08866F54;
    case 713u: goto L_08866F60;
    case 714u: goto L_08866F68;
    case 715u: goto L_08866F7C;
    case 716u: goto L_08866F8C;
    case 717u: goto L_08866FA0;
    case 718u: goto L_08866FBC;
    case 719u: goto L_08866FCC;
    case 720u: goto L_08866FE4;
    case 721u: goto L_08866FF8;
    case 722u: goto L_08867010;
    case 723u: goto L_08867028;
    case 724u: goto L_08867040;
    case 725u: goto L_08867058;
    case 726u: goto L_08867070;
    case 727u: goto L_08867078;
    case 728u: goto L_0886708C;
    case 729u: goto L_088670A4;
    case 730u: goto L_088670BC;
    case 731u: goto L_088670D4;
    case 732u: goto L_088670D8;
    case 733u: goto L_088670FC;
    case 734u: goto L_08867104;
    case 735u: goto L_0886711C;
    case 736u: goto L_08867130;
    case 737u: goto L_08867150;
    case 738u: goto L_08867154;
    case 739u: goto L_0886715C;
    case 740u: goto L_08867170;
    case 741u: goto L_08867184;
    case 742u: goto L_0886718C;
    case 743u: goto L_088671A4;
    case 744u: goto L_088671B0;
    case 745u: goto L_088671B8;
    case 746u: goto L_088671C0;
    case 747u: goto L_088671E0;
    case 748u: goto L_08867244;
    case 749u: goto L_08867250;
    case 750u: goto L_08867258;
    case 751u: goto L_08867264;
    case 752u: goto L_08867270;
    case 753u: goto L_08867278;
    case 754u: goto L_08867288;
    case 755u: goto L_08867298;
    case 756u: goto L_088672A4;
    case 757u: goto L_088672AC;
    case 758u: goto L_088672B8;
    case 759u: goto L_088672D0;
    case 760u: goto L_088672DC;
    case 761u: goto L_088672EC;
    case 762u: goto L_088672F8;
    case 763u: goto L_08867304;
    case 764u: goto L_0886730C;
    case 765u: goto L_08867314;
    case 766u: goto L_0886731C;
    case 767u: goto L_08867324;
    case 768u: goto L_08867330;
    case 769u: goto L_08867338;
    case 770u: goto L_08867340;
    case 771u: goto L_0886734C;
    case 772u: goto L_08867354;
    case 773u: goto L_0886735C;
    case 774u: goto L_08867364;
    case 775u: goto L_0886737C;
    case 776u: goto L_088673A0;
    case 777u: goto L_088673A8;
    case 778u: goto L_088673B0;
    case 779u: goto L_088673BC;
    case 780u: goto L_088673CC;
    case 781u: goto L_088673D4;
    case 782u: goto L_088673E4;
    case 783u: goto L_088673EC;
    case 784u: goto L_088673F4;
    case 785u: goto L_08867400;
    case 786u: goto L_08867414;
    case 787u: goto L_08867428;
    case 788u: goto L_0886743C;
    case 789u: goto L_08867450;
    case 790u: goto L_08867464;
    case 791u: goto L_08867478;
    case 792u: goto L_08867480;
    case 793u: goto L_08867488;
    case 794u: goto L_0886749C;
    case 795u: goto L_088674B0;
    case 796u: goto L_088674C4;
    case 797u: goto L_088674D8;
    case 798u: goto L_088674E0;
    case 799u: goto L_088674E4;
    case 800u: goto L_088674EC;
    case 801u: goto L_088674F8;
    case 802u: goto L_08867504;
    case 803u: goto L_08867510;
    case 804u: goto L_08867518;
    case 805u: goto L_08867520;
    case 806u: goto L_08867538;
    case 807u: goto L_08867540;
    case 808u: goto L_08867548;
    case 809u: goto L_0886754C;
    case 810u: goto L_08867554;
    case 811u: goto L_0886755C;
    case 812u: goto L_08867564;
    case 813u: goto L_08867568;
    case 814u: goto L_08867570;
    case 815u: goto L_08867594;
    case 816u: goto L_0886759C;
    case 817u: goto L_088675B4;
    case 818u: goto L_088675C8;
    case 819u: goto L_088675E8;
    case 820u: goto L_088675EC;
    case 821u: goto L_088675F4;
    case 822u: goto L_088675FC;
    case 823u: goto L_08867624;
    case 824u: goto L_0886762C;
    case 825u: goto L_0886764C;
    case 826u: goto L_08867658;
    case 827u: goto L_0886769C;
    case 828u: goto L_088676E0;
    case 829u: goto L_088676EC;
    case 830u: goto L_088676F4;
    case 831u: goto L_08867700;
    case 832u: goto L_0886770C;
    case 833u: goto L_08867714;
    case 834u: goto L_08867728;
    case 835u: goto L_08867738;
    case 836u: goto L_0886774C;
    case 837u: goto L_08867758;
    case 838u: goto L_08867760;
    case 839u: goto L_08867768;
    case 840u: goto L_08867770;
    case 841u: goto L_0886777C;
    case 842u: goto L_08867784;
    case 843u: goto L_0886778C;
    case 844u: goto L_08867794;
    case 845u: goto L_088677AC;
    case 846u: goto L_088677D0;
    case 847u: goto L_088677D8;
    case 848u: goto L_088677E0;
    case 849u: goto L_088677EC;
    case 850u: goto L_088677FC;
    case 851u: goto L_08867804;
    case 852u: goto L_08867814;
    case 853u: goto L_0886781C;
    case 854u: goto L_08867824;
    case 855u: goto L_0886783C;
    case 856u: goto L_08867850;
    case 857u: goto L_08867864;
    case 858u: goto L_08867878;
    case 859u: goto L_0886788C;
    case 860u: goto L_088678A0;
    case 861u: goto L_088678B4;
    case 862u: goto L_088678BC;
    case 863u: goto L_088678D0;
    case 864u: goto L_088678E4;
    case 865u: goto L_088678F8;
    case 866u: goto L_0886790C;
    case 867u: goto L_08867910;
    case 868u: goto L_08867934;
    case 869u: goto L_0886793C;
    case 870u: goto L_08867954;
    case 871u: goto L_08867968;
    case 872u: goto L_08867988;
    case 873u: goto L_0886798C;
    case 874u: goto L_08867994;
    case 875u: goto L_0886799C;
    case 876u: goto L_088679C4;
    case 877u: goto L_088679CC;
    case 878u: goto L_088679EC;
    case 879u: goto L_088679F8;
    case 880u: goto L_08867A20;
    case 881u: goto L_08867A54;
    case 882u: goto L_08867A60;
    case 883u: goto L_08867A68;
    case 884u: goto L_08867A7C;
    case 885u: goto L_08867A8C;
    case 886u: goto L_08867AA8;
    case 887u: goto L_08867ACC;
    case 888u: goto L_08867AD4;
    case 889u: goto L_08867ADC;
    case 890u: goto L_08867AE8;
    case 891u: goto L_08867AF8;
    case 892u: goto L_08867B00;
    case 893u: goto L_08867B10;
    case 894u: goto L_08867B18;
    case 895u: goto L_08867B30;
    case 896u: goto L_08867B44;
    case 897u: goto L_08867B58;
    case 898u: goto L_08867B6C;
    case 899u: goto L_08867B80;
    case 900u: goto L_08867B94;
    case 901u: goto L_08867BA8;
    case 902u: goto L_08867BB0;
    case 903u: goto L_08867BC4;
    case 904u: goto L_08867BD8;
    case 905u: goto L_08867BEC;
    case 906u: goto L_08867C00;
    case 907u: goto L_08867C04;
    case 908u: goto L_08867C28;
    case 909u: goto L_08867C30;
    case 910u: goto L_08867C48;
    case 911u: goto L_08867C5C;
    case 912u: goto L_08867C7C;
    case 913u: goto L_08867C80;
    case 914u: goto L_08867C88;
    case 915u: goto L_08867C90;
    case 916u: goto L_08867CB8;
    case 917u: goto L_08867CC0;
    case 918u: goto L_08867CE0;
    case 919u: goto L_08867CEC;
    case 920u: goto L_08867D0C;
    case 921u: goto L_08867D70;
    case 922u: goto L_08867D7C;
    case 923u: goto L_08867D84;
    case 924u: goto L_08867D98;
    case 925u: goto L_08867DB8;
    case 926u: goto L_08867DE0;
    case 927u: goto L_08867DF8;
    case 928u: goto L_08867E00;
    case 929u: goto L_08867E30;
    case 930u: goto L_08867E60;
    case 931u: goto L_08867E74;
    case 932u: goto L_08867E94;
    case 933u: goto L_08867E9C;
    case 934u: goto L_08867EA4;
    case 935u: goto L_08867EBC;
    case 936u: goto L_08867EC8;
    case 937u: goto L_08867ED0;
    case 938u: goto L_08867EDC;
    case 939u: goto L_08867EE4;
    case 940u: goto L_08867EEC;
    case 941u: goto L_08867EF4;
    case 942u: goto L_08867F00;
    case 943u: goto L_08867F08;
    case 944u: goto L_08867F10;
    case 945u: goto L_08867F18;
    case 946u: goto L_08867F20;
    case 947u: goto L_08867F2C;
    case 948u: goto L_08867F40;
    case 949u: goto L_08867F54;
    case 950u: goto L_08867F68;
    case 951u: goto L_08867F7C;
    case 952u: goto L_08867F90;
    case 953u: goto L_08867FA4;
    case 954u: goto L_08867FAC;
    case 955u: goto L_08867FB4;
    case 956u: goto L_08867FC8;
    case 957u: goto L_08867FDC;
    case 958u: goto L_08867FF0;
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
L_08864000:
    aot_gpr_31 = (0x08864008u);
    aot_gpr_5 = (0u | 38u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864008u) goto L_08864008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864008:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (65535u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_08864040;
      }
      goto L_08864020;
    }
L_08864020:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08864030u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864030u) goto L_08864030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864030:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    goto L_08864040;
L_08864040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08864064;
      }
      goto L_08864058;
    }
L_08864058:
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08864070;
      }
      goto L_08864064;
    }
L_08864064:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2244)));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_08864070;
L_08864070:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (128u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0886408C;
      }
      goto L_08864084;
    }
L_08864084:
    aot_gpr_31 = (0x0886408Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886408Cu) goto L_0886408C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886408C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x088640A4u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088640A4u) goto L_088640A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088640A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (65532u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (4u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-257));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_31 = (0x088640E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088640E4u) goto L_088640E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088640E4:
    aot_gpr_31 = (0x088640ECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088640ECu) goto L_088640EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088640EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0886413C;
      }
      goto L_088640F4;
    }
L_088640F4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_0886413C;
      }
      goto L_088640FC;
    }
L_088640FC:
    aot_gpr_31 = (0x08864104u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864104u) goto L_08864104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864104:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 7u);
        goto L_08864128;
    }
    goto L_08864110;
L_08864110:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_08864130;
      }
      goto L_08864128;
    }
L_08864128:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    goto L_08864130;
L_08864130:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0886413Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886413Cu) goto L_0886413C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886413C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0886415C;
      }
      goto L_08864144;
    }
L_08864144:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08864150u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864150u) goto L_08864150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864150:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0886415Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886415Cu) goto L_0886415C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886415C:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886417C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088641D8;
      }
      goto L_08864190;
    }
L_08864190:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088641D8;
      }
      goto L_088641A0;
    }
L_088641A0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x088641B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 369u, 0x08B41658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088641B8u) goto L_088641B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088641B8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5444)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5444), aot_gpr_4);
    goto L_088641D8;
L_088641D8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088641E8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08864240;
      }
      goto L_088641F0;
    }
L_088641F0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(476)));
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_08864240;
      }
      goto L_08864200;
    }
L_08864200:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_6 = (305u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11520));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(464), aot_gpr_5);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-30396)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-30396), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08864240;
L_08864240:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864248:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_4 = ((aot_gpr_4 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    aot_gpr_4 = (0u | 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_4 = (0u | 7u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_4 = ((aot_gpr_4 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7964), ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29144), aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] + ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = ((aot_gpr_6 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7984), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_5 = ((aot_gpr_5 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7984)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2239u << 16u);
      if (branch_taken) {
          goto L_0886438C;
      }
      goto L_08864328;
    }
L_08864328:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23008));
    goto L_0886432C;
L_0886432C:
    aot_gpr_5 = (ctx.gpr[7] << 5u);
    ctx.gpr[9] = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[9]);
    goto L_0886433C;
L_0886433C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[10] = (ctx.gpr[10] + aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_6) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_0886433C;
      }
      goto L_0886436C;
    }
L_0886436C:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7984)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0886432C;
      }
      goto L_0886438C;
    }
L_0886438C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864394:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7984)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (2239u << 16u);
      if (branch_taken) {
          goto L_08864400;
      }
      goto L_088643C0;
    }
L_088643C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(23008));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    goto L_088643CC;
L_088643CC:
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_5 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_gpr_31 = (0x088643E8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088643E8u) goto L_088643E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088643E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7984)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088643CC;
      }
      goto L_08864400;
    }
L_08864400:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886441C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_4 = ((aot_gpr_4 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    aot_gpr_4 = (0u | 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6));
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_4 = ((aot_gpr_4 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6));
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_4 = ((aot_gpr_4 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = ((aot_gpr_6 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8012), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = ((aot_gpr_6 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8014), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8016), ctx.gpr[7]);
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = ((aot_gpr_6 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8020), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    aot_gpr_4 = ((aot_gpr_4 & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8022), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8020))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2240u << 16u);
      if (branch_taken) {
          goto L_0886457C;
      }
      goto L_08864540;
    }
L_08864540:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28496));
    goto L_08864544;
L_08864544:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_gpr_6 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8020))))));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
      if (branch_taken) {
          goto L_08864544;
      }
      goto L_0886457C;
    }
L_0886457C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864584:
    aot_gpr_6 = (2239u << 16u);
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(31552));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[2] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (0u | 65534u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088645C0;
      }
      goto L_088645A8;
    }
L_088645A8:
    aot_gpr_6 = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_gpr_5 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 | ctx.gpr[2]);
      if (branch_taken) {
          goto L_088645D4;
      }
      goto L_088645C0;
    }
L_088645C0:
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_gpr_5 << 16u);
    ctx.gpr[2] = (aot_gpr_4 | ctx.gpr[2]);
    goto L_088645D4;
L_088645D4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088645DC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[2];
    aot_gpr_5 = (aot_gpr_4 & 65535u);
      if (branch_taken) {
          goto L_08864618;
      }
      goto L_088645E8;
    }
L_088645E8:
    aot_gpr_6 = (65535u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    ctx.gpr[7] = (2239u << 16u);
    aot_gpr_6 = (aot_gpr_5 << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(31552));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 >> 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_08864620;
      }
      goto L_08864610;
    }
L_08864610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08864620;
      }
      goto L_08864618;
    }
L_08864618:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08864620;
      }
      goto L_08864620;
    }
L_08864620:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864628:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (15820u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.gpr[18] = (2239u << 16u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 6u);
    aot_gpr_16 = (0u | 7u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(31552));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    goto L_0886466C;
L_0886466C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0886472C;
      }
      goto L_08864678;
    }
L_08864678:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[17];
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088646B4;
      }
      goto L_08864688;
    }
L_08864688:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29168)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29167)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29166)));
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 228u);
    ctx.gpr[11] = (0u | 2048u);
    aot_gpr_31 = (0x088646ACu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 572u, 0x088ABA2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088646ACu) goto L_088646AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088646AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886472C;
      }
      goto L_088646B4;
    }
L_088646B4:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_16;
      if (branch_taken) {
          goto L_088646F8;
      }
      goto L_088646BC;
    }
L_088646BC:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29164)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29163)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29162)));
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 228u);
    ctx.gpr[11] = (0u | 1024u);
    aot_gpr_31 = (0x088646F0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088646F0u) goto L_088646F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088646F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886472C;
      }
      goto L_088646F8;
    }
L_088646F8:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29160)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29159)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29158)));
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 228u);
    ctx.gpr[11] = (0u | 2048u);
    aot_gpr_31 = (0x0886472Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886472Cu) goto L_0886472C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886472C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0886466C;
      }
      goto L_0886473C;
    }
L_0886473C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864760:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (aot_gpr_6 & 255u);
    aot_gpr_5 = (2239u << 16u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31552));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    goto L_0886477C;
L_0886477C:
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (aot_gpr_6 < static_cast<std::uint32_t>(16) ? 1u : 0u);
      if (branch_taken) {
          goto L_0886479C;
      }
      goto L_08864788;
    }
L_08864788:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_0886479C;
      }
      goto L_08864790;
    }
L_08864790:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0886477C;
      }
      goto L_0886479C;
    }
L_0886479C:
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), aot_gpr_4);
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
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_gpr_31 = (0x088647C4u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    goto L_08864584;
L_088647C4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088647D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x088647E0u);
    goto L_088645DC;
L_088647E0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088647F8;
      }
      goto L_088647F0;
    }
L_088647F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08864810;
      }
      goto L_088647F8;
    }
L_088647F8:
    aot_gpr_5 = (2239u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31552));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), 0u);
    goto L_08864810;
L_08864810:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886481C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-288));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49864u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(276), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(280), ctx.gpr[21]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[24]) || std::isnan(aot_fpr_12)) && ctx.fpr[24] == aot_fpr_12)) ? 0x00800000u : 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(268), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(272), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(284), aot_gpr_31);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_0886489C;
      }
      goto L_08864884;
    }
L_08864884:
    aot_gpr_4 = (50042u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088648AC;
      }
      goto L_0886489C;
    }
L_0886489C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088648A8u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088648A8u) goto L_088648A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088648A8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088648AC;
L_088648AC:
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) >= 0;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
      if (branch_taken) {
          goto L_088648E0;
      }
      goto L_088648C0;
    }
L_088648C0:
    aot_gpr_4 = (0u - aot_gpr_16);
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (2239u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23008));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    goto L_088648E0;
L_088648E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    aot_gpr_4 = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08864904;
      }
      goto L_088648E8;
    }
L_088648E8:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (2239u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23008));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    goto L_08864904;
L_08864904:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08864944u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 327u, 0x08899BB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864944u) goto L_08864944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864944:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08864980;
      }
      goto L_08864950;
    }
L_08864950:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25488)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 16u);
    aot_gpr_31 = (0x08864980u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864980u) goto L_08864980;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864980:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088649E4;
      }
      goto L_0886498C;
    }
L_0886498C:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_31 = (0x088649A4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088649A4u) goto L_088649A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088649A4:
    aot_gpr_4 = (ctx.gpr[2] << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25488)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 16u);
    aot_gpr_31 = (0x088649E4u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088649E4u) goto L_088649E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088649E4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08864A88;
      }
      goto L_088649F8;
    }
L_088649F8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08864A14;
L_08864A14:
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[28] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08864A70;
      }
      goto L_08864A68;
    }
L_08864A68:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08864A70;
L_08864A70:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08864A14;
      }
      goto L_08864A88;
    }
L_08864A88:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08864AB0;
      }
      goto L_08864A90;
    }
L_08864A90:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08864A9Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 164u, 0x08A3CC2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864A9Cu) goto L_08864A9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864A9C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08864AB0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08864AE8;
L_08864AB0:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(240), aot_run_words);
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
      ctx.gpr[21] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864AE8:
    ctx.gpr[7] = (2240u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-29664));
    goto L_08864AFC;
L_08864AFC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08864B44;
      }
      goto L_08864B04;
    }
L_08864B04:
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_08864B44;
      }
      goto L_08864B0C;
    }
L_08864B0C:
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != aot_gpr_4;
      if (branch_taken) {
          goto L_08864B30;
      }
      goto L_08864B28;
    }
L_08864B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08864B3C;
      }
      goto L_08864B30;
    }
L_08864B30:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 80 ? 1u : 0u);
    goto L_08864B3C;
L_08864B3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08864AFC;
      }
      goto L_08864B44;
    }
L_08864B44:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08864B84;
      }
      goto L_08864B4C;
    }
L_08864B4C:
    aot_gpr_4 = (ctx.gpr[8] + ctx.gpr[8]);
    aot_gpr_4 = (ctx.gpr[8] + aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_4 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
      if (branch_taken) {
          goto L_08864B7C;
      }
      goto L_08864B68;
    }
L_08864B68:
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08864BF8;
      }
      goto L_08864B7C;
    }
L_08864B7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), aot_gpr_6);
      if (branch_taken) {
          goto L_08864BF8;
      }
      goto L_08864B84;
    }
L_08864B84:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08864B8C;
L_08864B8C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08864BD4;
      }
      goto L_08864B94;
    }
L_08864B94:
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_08864BD4;
      }
      goto L_08864B9C;
    }
L_08864B9C:
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
      if (branch_taken) {
          goto L_08864BC0;
      }
      goto L_08864BB8;
    }
L_08864BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08864BCC;
      }
      goto L_08864BC0;
    }
L_08864BC0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 80 ? 1u : 0u);
    goto L_08864BCC;
L_08864BCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08864B8C;
      }
      goto L_08864BD4;
    }
L_08864BD4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08864BF8;
      }
      goto L_08864BDC;
    }
L_08864BDC:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_6, aot_gpr_5};
      aot_mem.aot_direct_store32_block(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_run_words); }
    goto L_08864BF8;
L_08864BF8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864C00:
    ctx.gpr[9] = (aot_gpr_5 & 255u);
    aot_gpr_5 = (2240u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28704));
    goto L_08864C18;
L_08864C18:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08864C58;
      }
      goto L_08864C20;
    }
L_08864C20:
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08864C58;
      }
      goto L_08864C28;
    }
L_08864C28:
    ctx.gpr[10] = (ctx.gpr[8] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + aot_gpr_5);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != aot_gpr_4;
      if (branch_taken) {
          goto L_08864C44;
      }
      goto L_08864C3C;
    }
L_08864C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08864C50;
      }
      goto L_08864C44;
    }
L_08864C44:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 52 ? 1u : 0u);
    goto L_08864C50;
L_08864C50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08864C18;
      }
      goto L_08864C58;
    }
L_08864C58:
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08864C78;
      }
      goto L_08864C60;
    }
L_08864C60:
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08864CDC;
      }
      goto L_08864C68;
    }
L_08864C68:
    aot_gpr_4 = (ctx.gpr[8] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08864CDC;
      }
      goto L_08864C78;
    }
L_08864C78:
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08864CDC;
      }
      goto L_08864C80;
    }
L_08864C80:
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    goto L_08864C88;
L_08864C88:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08864CC8;
      }
      goto L_08864C90;
    }
L_08864C90:
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08864CC8;
      }
      goto L_08864C98;
    }
L_08864C98:
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + aot_gpr_5);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          goto L_08864CB4;
      }
      goto L_08864CAC;
    }
L_08864CAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08864CC0;
      }
      goto L_08864CB4;
    }
L_08864CB4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 52 ? 1u : 0u);
    goto L_08864CC0;
L_08864CC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08864C88;
      }
      goto L_08864CC8;
    }
L_08864CC8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08864CDC;
      }
      goto L_08864CD0;
    }
L_08864CD0:
    aot_gpr_6 = (ctx.gpr[8] << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08864CDC;
L_08864CDC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864CE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2240u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_16 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-29664));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    goto L_08864D0C;
L_08864D0C:
    aot_gpr_4 = (ctx.gpr[19] + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_4 << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08864D3C;
      }
      goto L_08864D28;
    }
L_08864D28:
    aot_gpr_31 = (0x08864D30u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 164u, 0x08A3CC2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864D30u) goto L_08864D30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864D30:
    { const std::uint32_t aot_run_words[3]{0u, aot_gpr_16, aot_gpr_16};
      aot_mem.aot_direct_store32_block(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_run_words); }
    goto L_08864D3C;
L_08864D3C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 80 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08864D0C;
      }
      goto L_08864D50;
    }
L_08864D50:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864D6C:
    ctx.gpr[7] = (2240u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28704));
    aot_gpr_4 = (8u << 16u);
    goto L_08864D7C;
L_08864D7C:
    aot_gpr_6 = (ctx.gpr[8] << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08864DA0;
      }
      goto L_08864D90;
    }
L_08864D90:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (ctx.gpr[9] | aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(72), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    goto L_08864DA0;
L_08864DA0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < 52 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08864D7C;
      }
      goto L_08864DB4;
    }
L_08864DB4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864DBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2240u << 16u);
    ctx.gpr[7] = (2223u << 16u);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_6 = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29728));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08864DE8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17104));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864DE8u) goto L_08864DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864DE8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08864DF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8040), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8044), 0u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13364), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11836), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5432), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x08864E50u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832), ctx.gpr[18]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864E50u) goto L_08864E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864E50:
    aot_gpr_31 = (0x08864E58u);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2308), std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 645u, 0x08B2331Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864E58u) goto L_08864E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864E58:
    aot_gpr_31 = (0x08864E60u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 144u, 0x08AB4B00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864E60u) goto L_08864E60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864E60:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08864EA0;
      }
      goto L_08864E98;
    }
L_08864E98:
    aot_gpr_31 = (0x08864EA0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864EA0u) goto L_08864EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864EA0:
    aot_gpr_31 = (0x08864EA8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 203u, 0x08A1D1F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864EA8u) goto L_08864EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864EA8:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08864EC4;
      }
      goto L_08864EB4;
    }
L_08864EB4:
    aot_gpr_31 = (0x08864EBCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864EBCu) goto L_08864EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864EBC:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    goto L_08864EC4;
L_08864EC4:
    aot_gpr_31 = (0x08864ECCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 643u, 0x089BB010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864ECCu) goto L_08864ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864ECC:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08864EE8;
      }
      goto L_08864ED8;
    }
L_08864ED8:
    aot_gpr_31 = (0x08864EE0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864EE0u) goto L_08864EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864EE0:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    goto L_08864EE8;
L_08864EE8:
    aot_gpr_31 = (0x08864EF0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 640u, 0x089BAFF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864EF0u) goto L_08864EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864EF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08864F08;
      }
      goto L_08864EFC;
    }
L_08864EFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_gpr_31 = (0x08864F08u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 350u, 0x088DE1D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864F08u) goto L_08864F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864F08:
    ctx.gpr[21] = (0u | 0u);
    goto L_08864F0C;
L_08864F0C:
    aot_gpr_5 = (ctx.gpr[21] & 255u);
    aot_gpr_31 = (0x08864F18u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 622u, 0x08A06744u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864F18u) goto L_08864F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864F18:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08864F0C;
      }
      goto L_08864F2C;
    }
L_08864F2C:
    aot_gpr_31 = (0x08864F34u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 475u, 0x08AFB4F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864F34u) goto L_08864F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864F34:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08864F48;
      }
      goto L_08864F40;
    }
L_08864F40:
    aot_gpr_31 = (0x08864F48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 538u, 0x08AD31E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864F48u) goto L_08864F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864F48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08864F60;
      }
      goto L_08864F54;
    }
L_08864F54:
    aot_gpr_31 = (0x08864F5Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864F5Cu) goto L_08864F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864F5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08864F60;
L_08864F60:
    aot_gpr_31 = (0x08864F68u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 555u, 0x089BAA70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864F68u) goto L_08864F68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864F68:
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08864FBC;
      }
      goto L_08864F74;
    }
L_08864F74:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08864F88;
      }
      goto L_08864F7C;
    }
L_08864F7C:
    aot_gpr_31 = (0x08864F84u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864F84u) goto L_08864F84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864F84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08864F88;
L_08864F88:
    aot_gpr_31 = (0x08864F90u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 555u, 0x089BAA70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864F90u) goto L_08864F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864F90:
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08864FBC;
      }
      goto L_08864F9C;
    }
L_08864F9C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08864FB0;
      }
      goto L_08864FA4;
    }
L_08864FA4:
    aot_gpr_31 = (0x08864FACu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864FACu) goto L_08864FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864FAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08864FB0;
L_08864FB0:
    aot_gpr_31 = (0x08864FB8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 669u, 0x089BB19Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864FB8u) goto L_08864FB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864FB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08864FBC;
L_08864FBC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08864FD4;
      }
      goto L_08864FC4;
    }
L_08864FC4:
    aot_gpr_31 = (0x08864FCCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864FCCu) goto L_08864FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864FCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[21] = (0u | 1u);
    goto L_08864FD4;
L_08864FD4:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08864FE8u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08864FE8u) goto L_08864FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08864FE8:
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-25888));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2988), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2318))))));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2318), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2318))))));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[7] & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2318), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_31 = (0x0886502Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886502Cu) goto L_0886502C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886502C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x0886504Cu);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3259), static_cast<std::uint8_t>(0u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886504Cu) goto L_0886504C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886504C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08865058u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 953u, 0x0898BB34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865058u) goto L_08865058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865058:
    aot_gpr_4 = (16262u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_gpr_31 = (0x08865070u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865070u) goto L_08865070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865070:
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (16128u << 16u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08865084u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865084u) goto L_08865084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865084:
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08865094u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 635u, 0x08A06824u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865094u) goto L_08865094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865094:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1786), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1787), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8002), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7996), ctx.gpr[18]);
    aot_gpr_4 = (2239u << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7992), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_gpr_31 = (0x088650B4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22192));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 293u, 0x08861DF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088650B4u) goto L_088650B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088650B4:
    aot_gpr_4 = (2239u << 16u);
    aot_gpr_31 = (0x088650C0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22240));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 329u, 0x08862038u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088650C0u) goto L_088650C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088650C0:
    aot_gpr_31 = (0x088650C8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0031_entry, 31u, 66u, 0x088807A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088650C8u) goto L_088650C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088650C8:
    ctx.gpr[19] = (aot_gpr_16 | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_088650D0;
L_088650D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088651A8;
      }
      goto L_088650DC;
    }
L_088650DC:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088650F8;
      }
      goto L_088650E8;
    }
L_088650E8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08865194;
      }
      goto L_088650F0;
    }
L_088650F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865114;
      }
      goto L_088650F8;
    }
L_088650F8:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886513C;
      }
      goto L_08865104;
    }
L_08865104:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_0886516C;
      }
      goto L_0886510C;
    }
L_0886510C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865194;
      }
      goto L_08865114;
    }
L_08865114:
    aot_gpr_31 = (0x0886511Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886511Cu) goto L_0886511C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886511C:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08865130;
      }
      goto L_08865128;
    }
L_08865128:
    aot_gpr_31 = (0x08865130u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_0886417C;
L_08865130:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08865194;
      }
      goto L_0886513C;
    }
L_0886513C:
    aot_gpr_31 = (0x08865144u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865144u) goto L_08865144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865144:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08865160;
      }
      goto L_08865150;
    }
L_08865150:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08865160u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 786u, 0x08863EF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865160u) goto L_08865160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865160:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08865194;
      }
      goto L_0886516C;
    }
L_0886516C:
    aot_gpr_31 = (0x08865174u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865174u) goto L_08865174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865174:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08865188;
      }
      goto L_08865180;
    }
L_08865180:
    aot_gpr_31 = (0x08865188u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_088641E8;
L_08865188:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08865194;
      }
      goto L_08865194;
    }
L_08865194:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088651A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0886565C;
L_088651A8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088650D0;
      }
      goto L_088651BC;
    }
L_088651BC:
    aot_gpr_16 = (0u | 1u);
    goto L_088651C0;
L_088651C0:
    aot_gpr_31 = (0x088651C8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 606u, 0x08AD368Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088651C8u) goto L_088651C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088651C8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088651F8;
      }
      goto L_088651D4;
    }
L_088651D4:
    aot_gpr_31 = (0x088651DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088651DCu) goto L_088651DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088651DC:
    aot_gpr_4 = (ctx.gpr[2] & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088651F0;
      }
      goto L_088651E8;
    }
L_088651E8:
    aot_gpr_31 = (0x088651F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 625u, 0x08AD37C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088651F0u) goto L_088651F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088651F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088651C0;
      }
      goto L_088651F8;
    }
L_088651F8:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08865220:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[22] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    goto L_0886525C;
L_0886525C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_08865268;
    }
L_08865268:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08865284;
      }
      goto L_08865274;
    }
L_08865274:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_0886527C;
    }
L_0886527C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886529C;
      }
      goto L_08865284;
    }
L_08865284:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088653CC;
      }
      goto L_0886528C;
    }
L_0886528C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08865538;
      }
      goto L_08865294;
    }
L_08865294:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_0886529C;
    }
L_0886529C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_31 = (0x088652A8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088652A8u) goto L_088652A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088652A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_088652B4;
    }
L_088652B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_31 = (0x088652C0u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088652C0u) goto L_088652C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088652C0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088652D0;
      }
      goto L_088652CC;
    }
L_088652CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_088652D0;
L_088652D0:
    aot_gpr_31 = (0x088652D8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 325u, 0x088099A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088652D8u) goto L_088652D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088652D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_5 = (aot_gpr_4 & 2048u);
      if (branch_taken) {
          goto L_08865334;
      }
      goto L_088652E4;
    }
L_088652E4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_088652EC;
    }
L_088652EC:
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08865314;
      }
      goto L_08865304;
    }
L_08865304:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0886531C;
      }
      goto L_08865314;
    }
L_08865314:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0886531C;
L_0886531C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865324;
    }
L_08865324:
    aot_gpr_31 = (0x0886532Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886532Cu) goto L_0886532C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886532C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865334;
    }
L_08865334:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_0886533C;
    }
L_0886533C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865348;
    }
L_08865348:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865350;
    }
L_08865350:
    aot_gpr_31 = (0x08865358u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865358u) goto L_08865358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865358:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865360;
    }
L_08865360:
    aot_gpr_31 = (0x08865368u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865368u) goto L_08865368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865368:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865370;
    }
L_08865370:
    aot_gpr_31 = (0x08865378u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865378u) goto L_08865378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865378:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865380;
    }
L_08865380:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088653A0;
      }
      goto L_08865390;
    }
L_08865390:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088653A8;
      }
      goto L_088653A0;
    }
L_088653A0:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088653A8;
L_088653A8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088653B8;
      }
      goto L_088653B0;
    }
L_088653B0:
    aot_gpr_31 = (0x088653B8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088653B8u) goto L_088653B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088653B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 | 2048u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), aot_gpr_4);
    goto L_088653C4;
L_088653C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_088653CC;
    }
L_088653CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x088653D8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088653D8u) goto L_088653D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088653D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_088653E4;
    }
L_088653E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_31 = (0x088653F0u);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088653F0u) goto L_088653F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088653F0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2120)));
      if (branch_taken) {
          goto L_08865400;
      }
      goto L_088653FC;
    }
L_088653FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_08865400;
L_08865400:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088654A4;
      }
      goto L_08865410;
    }
L_08865410:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08865448;
      }
      goto L_08865418;
    }
L_08865418:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 2048u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08865438;
      }
      goto L_08865428;
    }
L_08865428:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_6 & 255u);
      if (branch_taken) {
          goto L_08865440;
      }
      goto L_08865438;
    }
L_08865438:
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_6 & 255u);
    goto L_08865440;
L_08865440:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08865458;
      }
      goto L_08865448;
    }
L_08865448:
    aot_gpr_31 = (0x08865450u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 325u, 0x088099A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865450u) goto L_08865450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865450:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_08865458;
    }
L_08865458:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08865484;
      }
      goto L_08865474;
    }
L_08865474:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0886548C;
      }
      goto L_08865484;
    }
L_08865484:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0886548C;
L_0886548C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_08865494;
    }
L_08865494:
    aot_gpr_31 = (0x0886549Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886549Cu) goto L_0886549C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886549C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_088654A4;
    }
L_088654A4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088654DC;
      }
      goto L_088654AC;
    }
L_088654AC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 2048u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_088654CC;
      }
      goto L_088654BC;
    }
L_088654BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_6 & 255u);
      if (branch_taken) {
          goto L_088654D4;
      }
      goto L_088654CC;
    }
L_088654CC:
    aot_gpr_6 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_6 & 255u);
    goto L_088654D4;
L_088654D4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_088654DC;
    }
L_088654DC:
    aot_gpr_31 = (0x088654E4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 325u, 0x088099A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088654E4u) goto L_088654E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088654E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_088654EC;
    }
L_088654EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0886550C;
      }
      goto L_088654FC;
    }
L_088654FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08865514;
      }
      goto L_0886550C;
    }
L_0886550C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08865514;
L_08865514:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08865524;
      }
      goto L_0886551C;
    }
L_0886551C:
    aot_gpr_31 = (0x08865524u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865524u) goto L_08865524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865524:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 | 2048u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), aot_gpr_4);
    goto L_08865530;
L_08865530:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_08865538;
    }
L_08865538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_31 = (0x08865544u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865544u) goto L_08865544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865544:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08865618;
      }
      goto L_08865550;
    }
L_08865550:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_31 = (0x0886555Cu);
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886555Cu) goto L_0886555C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886555C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0886556C;
      }
      goto L_08865568;
    }
L_08865568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_0886556C;
L_0886556C:
    aot_gpr_31 = (0x08865574u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 325u, 0x088099A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865574u) goto L_08865574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865574:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088655D4;
      }
      goto L_0886557C;
    }
L_0886557C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_4 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08865618;
      }
      goto L_0886558C;
    }
L_0886558C:
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088655B4;
      }
      goto L_088655A4;
    }
L_088655A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088655BC;
      }
      goto L_088655B4;
    }
L_088655B4:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088655BC;
L_088655BC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08865618;
      }
      goto L_088655C4;
    }
L_088655C4:
    aot_gpr_31 = (0x088655CCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088655CCu) goto L_088655CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088655CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865618;
      }
      goto L_088655D4;
    }
L_088655D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088655F4;
      }
      goto L_088655E4;
    }
L_088655E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_088655FC;
      }
      goto L_088655F4;
    }
L_088655F4:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_088655FC;
L_088655FC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0886560C;
      }
      goto L_08865604;
    }
L_08865604:
    aot_gpr_31 = (0x0886560Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886560Cu) goto L_0886560C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886560C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 | 2048u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), aot_gpr_4);
    goto L_08865618;
L_08865618:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_08865620;
    }
L_08865620:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886525C;
      }
      goto L_08865634;
    }
L_08865634:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886565C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[7]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_6 & 255u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2049));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    goto L_0886569C;
L_0886569C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08865860;
      }
      goto L_088656A8;
    }
L_088656A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08865860;
      }
      goto L_088656B4;
    }
L_088656B4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_088656BC;
    }
L_088656BC:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088656D8;
      }
      goto L_088656C8;
    }
L_088656C8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_088656D0;
    }
L_088656D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088656F0;
      }
      goto L_088656D8;
    }
L_088656D8:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08865764;
      }
      goto L_088656E0;
    }
L_088656E0:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088657D8;
      }
      goto L_088656E8;
    }
L_088656E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_088656F0;
    }
L_088656F0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088656FCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088656FCu) goto L_088656FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088656FC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0886575C;
      }
      goto L_08865708;
    }
L_08865708:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0886575C;
      }
      goto L_08865718;
    }
L_08865718:
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08865740;
      }
      goto L_08865730;
    }
L_08865730:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08865748;
      }
      goto L_08865740;
    }
L_08865740:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08865748;
L_08865748:
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0886575C;
      }
      goto L_08865754;
    }
L_08865754:
    aot_gpr_31 = (0x0886575Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886575Cu) goto L_0886575C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886575C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_08865764;
    }
L_08865764:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08865770u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865770u) goto L_08865770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865770:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088657D0;
      }
      goto L_0886577C;
    }
L_0886577C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088657D0;
      }
      goto L_0886578C;
    }
L_0886578C:
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_088657B4;
      }
      goto L_088657A4;
    }
L_088657A4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_088657BC;
      }
      goto L_088657B4;
    }
L_088657B4:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_088657BC;
L_088657BC:
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_088657D0;
      }
      goto L_088657C8;
    }
L_088657C8:
    aot_gpr_31 = (0x088657D0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088657D0u) goto L_088657D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088657D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_088657D8;
    }
L_088657D8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088657E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088657E4u) goto L_088657E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088657E4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08865844;
      }
      goto L_088657F0;
    }
L_088657F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_5 & 2048u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08865844;
      }
      goto L_08865800;
    }
L_08865800:
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08865828;
      }
      goto L_08865818;
    }
L_08865818:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08865830;
      }
      goto L_08865828;
    }
L_08865828:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08865830;
L_08865830:
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[19]);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08865844;
      }
      goto L_0886583C;
    }
L_0886583C:
    aot_gpr_31 = (0x08865844u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865844u) goto L_08865844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865844:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_0886584C;
    }
L_0886584C:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(400)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08865860;
L_08865860:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886569C;
      }
      goto L_08865874;
    }
L_08865874:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886589C:
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<29u>(aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[9]);
    aot_gpr_4 = (2232u << 16u);
    ctx.gpr[12] = (aot_gpr_4 + static_cast<std::uint32_t>(-26424));
    goto L_088658B8;
L_088658B8:
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088658DC;
      }
      goto L_088658C8;
    }
L_088658C8:
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[12]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[10];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088658DC:
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.set_vfpu_scalar_bits_ct<93u>(aot_gpr_31);
    ctx.set_vfpu_scalar_bits_ct<92u>(aot_gpr_6);
    ctx.set_vfpu_scalar_bits_ct<124u>(ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<30u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<62u>(ctx.gpr[12]);
    ctx.gpr[8] = (aot_gpr_5 - ctx.gpr[9]);
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<29u>());
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(0));
    aot_gpr_31 = (0x08865908u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 247u, 0x08861A7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865908u) goto L_08865908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865908:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<29u>());
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<92u>());
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<124u>());
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<30u>());
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<62u>());
    aot_gpr_31 = (ctx.vfpu_scalar_bits_ct<93u>());
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[9]);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865938;
    }
L_08865938:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865940;
    }
L_08865940:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), 0u);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865950;
    }
L_08865950:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865958;
    }
L_08865958:
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865970;
    }
L_08865970:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865978;
    }
L_08865978:
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(3));
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865994;
    }
L_08865994:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_0886599C;
    }
L_0886599C:
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_088659B8;
    }
L_088659B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_088659C0;
    }
L_088659C0:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1))))));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_088659D4;
    }
L_088659D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_088659DC;
    }
L_088659DC:
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFFFFFF00u) | ((ctx.gpr[11] & 0x00FFFFFFu) << 8u));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_088659F8;
    }
L_088659F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865A00;
    }
L_08865A00:
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(5));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865A18;
    }
L_08865A18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865A20;
    }
L_08865A20:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_gpr_5 - ctx.gpr[9]);
    goto L_08865A28;
L_08865A28:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08865A28;
      }
      goto L_08865A34;
    }
L_08865A34:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865A40;
    }
L_08865A40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865A48;
    }
L_08865A48:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    goto L_08865A4C;
L_08865A4C:
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<29u>());
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[2] = (aot_gpr_6 | 0u);
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08865A64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-137));
    ctx.gpr[7] = (aot_gpr_4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    aot_gpr_16 = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[30] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08865AD4;
      }
      goto L_08865AC8;
    }
L_08865AC8:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08865ADC;
      }
      goto L_08865AD4;
    }
L_08865AD4:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_08865ADC;
L_08865ADC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08865AECu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865AECu) goto L_08865AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865AEC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08865AFCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865AFCu) goto L_08865AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865AFC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08865B28;
      }
      goto L_08865B08;
    }
L_08865B08:
    aot_gpr_31 = (0x08865B10u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865B10u) goto L_08865B10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865B10:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(-128));
    ctx.gpr[23] = (ctx.gpr[21] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_08865B30;
      }
      goto L_08865B20;
    }
L_08865B20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865B54;
      }
      goto L_08865B28;
    }
L_08865B28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865F00;
      }
      goto L_08865B30;
    }
L_08865B30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08865B54;
      }
      goto L_08865B3C;
    }
L_08865B3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
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
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865B60;
      }
      goto L_08865B54;
    }
L_08865B54:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    goto L_08865B60;
L_08865B60:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_08865BAC;
      }
      goto L_08865B68;
    }
L_08865B68:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25776)));
    jump_target = ctx.gpr[1];
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08865B80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865BAC;
      }
      goto L_08865B88;
    }
L_08865B88:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08865B94u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 745u, 0x08863CB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865B94u) goto L_08865B94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865B94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08865BA4;
      }
      goto L_08865B9C;
    }
L_08865B9C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (0u | 1u);
    goto L_08865BA4;
L_08865BA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865BAC;
      }
      goto L_08865BAC;
    }
L_08865BAC:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08865C14;
      }
      goto L_08865BBC;
    }
L_08865BBC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[24]) || std::isnan(aot_fpr_12)) && ctx.fpr[24] == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (50042u << 16u);
      if (branch_taken) {
          goto L_08865BEC;
      }
      goto L_08865BD8;
    }
L_08865BD8:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08865C00;
    }
    goto L_08865BEC;
L_08865BEC:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x08865BF8u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865BF8u) goto L_08865BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865BF8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08865C00;
L_08865C00:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08865C20;
      }
      goto L_08865C14;
    }
L_08865C14:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    goto L_08865C20;
L_08865C20:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865C2C;
    }
L_08865C2C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_fpr_13 = ctx.fpr[30] - ctx.fpr[24];
      if (branch_taken) {
          goto L_08865CF0;
      }
      goto L_08865C3C;
    }
L_08865C3C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865C54;
    }
L_08865C54:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[30];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865C70;
    }
L_08865C70:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[28] - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865C8C;
    }
L_08865C8C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = aot_fpr_20 + ctx.fpr[28];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865CA8;
    }
L_08865CA8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865CC4;
    }
L_08865CC4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865CE0;
    }
L_08865CE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08865D58;
      }
      goto L_08865CE8;
    }
L_08865CE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08865D58;
      }
      goto L_08865CF0;
    }
L_08865CF0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08865D54;
      }
      goto L_08865D04;
    }
L_08865D04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = ctx.fpr[24] + ctx.fpr[30];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08865D54;
      }
      goto L_08865D1C;
    }
L_08865D1C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = ctx.fpr[28] - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08865D54;
      }
      goto L_08865D34;
    }
L_08865D34:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = aot_fpr_20 + ctx.fpr[28];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08865D54;
      }
      goto L_08865D4C;
    }
L_08865D4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08865D58;
      }
      goto L_08865D54;
    }
L_08865D54:
    aot_gpr_4 = (0u | 0u);
    goto L_08865D58;
L_08865D58:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865D60;
    }
L_08865D60:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865D68;
    }
L_08865D68:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25712)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08865D80:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865D8C;
    }
L_08865D8C:
    aot_gpr_31 = (0x08865D94u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865D94u) goto L_08865D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865D94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08865DA0;
      }
      goto L_08865D9C;
    }
L_08865D9C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08865DA0;
L_08865DA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865DA8;
    }
L_08865DA8:
    aot_gpr_31 = (0x08865DB0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865DB0u) goto L_08865DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865DB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08865DBC;
      }
      goto L_08865DB8;
    }
L_08865DB8:
    ctx.gpr[17] = (0u | 1u);
    goto L_08865DBC;
L_08865DBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865DC4;
    }
L_08865DC4:
    aot_gpr_4 = (0u < ctx.gpr[17] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[17] = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08865DF0;
      }
      goto L_08865DE8;
    }
L_08865DE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08865E40;
      }
      goto L_08865DF0;
    }
L_08865DF0:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08865E1C;
      }
      goto L_08865E08;
    }
L_08865E08:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[17] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08865E40;
      }
      goto L_08865E1C;
    }
L_08865E1C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[17] | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08865E40;
      }
      goto L_08865E3C;
    }
L_08865E3C:
    aot_mem.aot_direct_store16(ctx.gpr[19] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08865E40;
L_08865E40:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08865EE4;
      }
      goto L_08865E48;
    }
L_08865E48:
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = ctx.fpr[30] - ctx.fpr[24];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[30];
    ctx.fpr[22] = ctx.fpr[28] - aot_fpr_20;
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_fpr_20 = aot_fpr_20 + ctx.fpr[28];
      if (branch_taken) {
          goto L_08865EC8;
      }
      goto L_08865E64;
    }
L_08865E64:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (50042u << 16u);
      if (branch_taken) {
          goto L_08865E94;
      }
      goto L_08865E80;
    }
L_08865E80:
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08865EA8;
    }
    goto L_08865E94;
L_08865E94:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x08865EA0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865EA0u) goto L_08865EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865EA0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08865EA8;
L_08865EA8:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08865EC0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865EC0u) goto L_08865EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865EC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865EE4;
      }
      goto L_08865EC8;
    }
L_08865EC8:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08865EE4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865EE4u) goto L_08865EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865EE4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08865F00;
      }
      goto L_08865EF0;
    }
L_08865EF0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08865F00;
      }
      goto L_08865EF8;
    }
L_08865EF8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865F00;
      }
      goto L_08865F00;
    }
L_08865F00:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
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
      ctx.gpr[23] = aot_run_words[13];
      ctx.gpr[30] = aot_run_words[14];
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08865F48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 143 ? 1u : 0u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08865FAC;
      }
      goto L_08865F94;
    }
L_08865F94:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 146 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08865FAC;
      }
      goto L_08865FA0;
    }
L_08865FA0:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865FB0;
      }
      goto L_08865FAC;
    }
L_08865FAC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08865FB0;
L_08865FB0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08865FD4;
      }
      goto L_08865FB8;
    }
L_08865FB8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 6u);
    aot_gpr_31 = (0x08865FCCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_08865FCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08865FE4;
      }
      goto L_08865FD4;
    }
L_08865FD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x08865FE4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_08865FE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08865FF0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08865FF0u) goto L_08865FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08865FF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08866000u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866000u) goto L_08866000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866000:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0886600Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886600Cu) goto L_0886600C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886600C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08866038;
      }
      goto L_08866014;
    }
L_08866014:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866038;
      }
      goto L_08866020;
    }
L_08866020:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
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
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866044;
      }
      goto L_08866038;
    }
L_08866038:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    goto L_08866044;
L_08866044:
    aot_gpr_31 = (0x0886604Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886604Cu) goto L_0886604C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886604C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08866078;
      }
      goto L_08866054;
    }
L_08866054:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866078;
      }
      goto L_08866060;
    }
L_08866060:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866084;
      }
      goto L_08866078;
    }
L_08866078:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08866084;
L_08866084:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088660A0;
      }
      goto L_08866094;
    }
L_08866094:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088660A4;
      }
      goto L_088660A0;
    }
L_088660A0:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_088660A4;
L_088660A4:
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08866168;
      }
      goto L_088660B0;
    }
L_088660B0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_088660CC;
    }
L_088660CC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = aot_fpr_14 + aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_088660E8;
    }
L_088660E8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_08866104;
    }
L_08866104:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_08866120;
    }
L_08866120:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_0886613C;
    }
L_0886613C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_08866158;
    }
L_08866158:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088661E4;
      }
      goto L_08866160;
    }
L_08866160:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088661E4;
      }
      goto L_08866168;
    }
L_08866168:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088661E0;
      }
      goto L_08866184;
    }
L_08866184:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088661E0;
      }
      goto L_088661A0;
    }
L_088661A0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088661E0;
      }
      goto L_088661BC;
    }
L_088661BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088661E0;
      }
      goto L_088661D8;
    }
L_088661D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088661E4;
      }
      goto L_088661E0;
    }
L_088661E0:
    aot_gpr_4 = (0u | 0u);
    goto L_088661E4;
L_088661E4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866258;
      }
      goto L_088661EC;
    }
L_088661EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-134));
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866258;
      }
      goto L_088661FC;
    }
L_088661FC:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25648)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08866214:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866258;
      }
      goto L_08866220;
    }
L_08866220:
    aot_gpr_31 = (0x08866228u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866228u) goto L_08866228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866228:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08866234;
      }
      goto L_08866230;
    }
L_08866230:
    ctx.gpr[22] = (0u | 1u);
    goto L_08866234;
L_08866234:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866258;
      }
      goto L_0886623C;
    }
L_0886623C:
    aot_gpr_31 = (0x08866244u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866244u) goto L_08866244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866244:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08866250;
      }
      goto L_0886624C;
    }
L_0886624C:
    ctx.gpr[22] = (0u | 1u);
    goto L_08866250;
L_08866250:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866258;
      }
      goto L_08866258;
    }
L_08866258:
    aot_gpr_4 = (0u < ctx.gpr[22] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[22] = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_08866284;
      }
      goto L_0886627C;
    }
L_0886627C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_088662D4;
      }
      goto L_08866284;
    }
L_08866284:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088662B0;
      }
      goto L_0886629C;
    }
L_0886629C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[22] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088662D4;
      }
      goto L_088662B0;
    }
L_088662B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[22] | aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088662D4;
      }
      goto L_088662D0;
    }
L_088662D0:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088662D4;
L_088662D4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08866340;
      }
      goto L_088662DC;
    }
L_088662DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (aot_gpr_16 + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08866314;
      }
      goto L_088662E4;
    }
L_088662E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_20;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = ctx.fpr[15] - ctx.fpr[22];
    aot_fpr_14 = aot_fpr_14 + aot_fpr_20;
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    aot_gpr_31 = (0x0886630Cu);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886630Cu) goto L_0886630C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886630C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866340;
      }
      goto L_08866314;
    }
L_08866314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_20;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = ctx.fpr[15] - ctx.fpr[22];
    aot_fpr_14 = aot_fpr_14 + aot_fpr_20;
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    aot_gpr_5 = (49864u << 16u);
    aot_gpr_31 = (0x08866340u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866340u) goto L_08866340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866340:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0886635C;
      }
      goto L_0886634C;
    }
L_0886634C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_0886635C;
      }
      goto L_08866354;
    }
L_08866354:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886635C;
      }
      goto L_0886635C;
    }
L_0886635C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886638C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 309 ? 1u : 0u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088663EC;
      }
      goto L_088663D4;
    }
L_088663D4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 312 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088663EC;
      }
      goto L_088663E0;
    }
L_088663E0:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088663F0;
      }
      goto L_088663EC;
    }
L_088663EC:
    ctx.gpr[18] = (0u | 0u);
    goto L_088663F0;
L_088663F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08866414;
      }
      goto L_088663F8;
    }
L_088663F8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 6u);
    aot_gpr_31 = (0x0886640Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_0886640C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866424;
      }
      goto L_08866414;
    }
L_08866414:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x08866424u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_08866424:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08866430u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866430u) goto L_08866430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866430:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_31 = (0x08866440u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866440u) goto L_08866440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866440:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0886644Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886644Cu) goto L_0886644C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886644C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08866478;
      }
      goto L_08866454;
    }
L_08866454:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866478;
      }
      goto L_08866460;
    }
L_08866460:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
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
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866484;
      }
      goto L_08866478;
    }
L_08866478:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    goto L_08866484;
L_08866484:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088664B0;
      }
      goto L_088664A4;
    }
L_088664A4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088664B4;
      }
      goto L_088664B0;
    }
L_088664B0:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_088664B4;
L_088664B4:
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08866578;
      }
      goto L_088664C0;
    }
L_088664C0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_088664DC;
    }
L_088664DC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = aot_fpr_14 + aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_088664F8;
    }
L_088664F8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_08866514;
    }
L_08866514:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_08866530;
    }
L_08866530:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_0886654C;
    }
L_0886654C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_08866568;
    }
L_08866568:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088665F4;
      }
      goto L_08866570;
    }
L_08866570:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088665F4;
      }
      goto L_08866578;
    }
L_08866578:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088665F0;
      }
      goto L_08866594;
    }
L_08866594:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088665F0;
      }
      goto L_088665B0;
    }
L_088665B0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088665F0;
      }
      goto L_088665CC;
    }
L_088665CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088665F0;
      }
      goto L_088665E8;
    }
L_088665E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088665F4;
      }
      goto L_088665F0;
    }
L_088665F0:
    aot_gpr_4 = (0u | 0u);
    goto L_088665F4;
L_088665F4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866674;
      }
      goto L_088665FC;
    }
L_088665FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-306));
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866674;
      }
      goto L_0886660C;
    }
L_0886660C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886663C;
      }
      goto L_08866618;
    }
L_08866618:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08866658;
      }
      goto L_08866620;
    }
L_08866620:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0886663C;
      }
      goto L_08866628;
    }
L_08866628:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
      if (branch_taken) {
          goto L_08866658;
      }
      goto L_08866630;
    }
L_08866630:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866674;
      }
      goto L_0886663C;
    }
L_0886663C:
    aot_gpr_31 = (0x08866644u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866644u) goto L_08866644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866644:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08866650;
      }
      goto L_0886664C;
    }
L_0886664C:
    ctx.gpr[22] = (0u | 1u);
    goto L_08866650;
L_08866650:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866674;
      }
      goto L_08866658;
    }
L_08866658:
    aot_gpr_31 = (0x08866660u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866660u) goto L_08866660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866660:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0886666C;
      }
      goto L_08866668;
    }
L_08866668:
    ctx.gpr[22] = (0u | 1u);
    goto L_0886666C;
L_0886666C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866674;
      }
      goto L_08866674;
    }
L_08866674:
    aot_gpr_4 = (0u < ctx.gpr[22] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[22] = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_088666A0;
      }
      goto L_08866698;
    }
L_08866698:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_088666F0;
      }
      goto L_088666A0;
    }
L_088666A0:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088666CC;
      }
      goto L_088666B8;
    }
L_088666B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[22] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088666F0;
      }
      goto L_088666CC;
    }
L_088666CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[22] | aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088666F0;
      }
      goto L_088666EC;
    }
L_088666EC:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088666F0;
L_088666F0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0886675C;
      }
      goto L_088666F8;
    }
L_088666F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (aot_gpr_16 + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08866730;
      }
      goto L_08866700;
    }
L_08866700:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_20;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = ctx.fpr[15] - ctx.fpr[22];
    aot_fpr_14 = aot_fpr_14 + aot_fpr_20;
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    aot_gpr_31 = (0x08866728u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866728u) goto L_08866728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866728:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886675C;
      }
      goto L_08866730;
    }
L_08866730:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_20;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = ctx.fpr[15] - ctx.fpr[22];
    aot_fpr_14 = aot_fpr_14 + aot_fpr_20;
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    aot_gpr_5 = (49864u << 16u);
    aot_gpr_31 = (0x0886675Cu);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886675Cu) goto L_0886675C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886675C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866778;
      }
      goto L_08866768;
    }
L_08866768:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08866778;
      }
      goto L_08866770;
    }
L_08866770:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866778;
      }
      goto L_08866778;
    }
L_08866778:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088667A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 708 ? 1u : 0u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08866808;
      }
      goto L_088667F0;
    }
L_088667F0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 711 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08866808;
      }
      goto L_088667FC;
    }
L_088667FC:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886680C;
      }
      goto L_08866808;
    }
L_08866808:
    ctx.gpr[18] = (0u | 0u);
    goto L_0886680C;
L_0886680C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08866830;
      }
      goto L_08866814;
    }
L_08866814:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 6u);
    aot_gpr_31 = (0x08866828u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_08866828:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866840;
      }
      goto L_08866830;
    }
L_08866830:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x08866840u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_08866840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x0886684Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886684Cu) goto L_0886684C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886684C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_31 = (0x0886685Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886685Cu) goto L_0886685C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886685C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08866868u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866868u) goto L_08866868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08866894;
      }
      goto L_08866870;
    }
L_08866870:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866894;
      }
      goto L_0886687C;
    }
L_0886687C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
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
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088668A0;
      }
      goto L_08866894;
    }
L_08866894:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    goto L_088668A0;
L_088668A0:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_088668CC;
      }
      goto L_088668C0;
    }
L_088668C0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088668D0;
      }
      goto L_088668CC;
    }
L_088668CC:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_088668D0;
L_088668D0:
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08866994;
      }
      goto L_088668DC;
    }
L_088668DC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_088668F8;
    }
L_088668F8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = aot_fpr_14 + aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_08866914;
    }
L_08866914:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_08866930;
    }
L_08866930:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_0886694C;
    }
L_0886694C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_08866968;
    }
L_08866968:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_08866984;
    }
L_08866984:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08866A10;
      }
      goto L_0886698C;
    }
L_0886698C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08866A10;
      }
      goto L_08866994;
    }
L_08866994:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866A0C;
      }
      goto L_088669B0;
    }
L_088669B0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866A0C;
      }
      goto L_088669CC;
    }
L_088669CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866A0C;
      }
      goto L_088669E8;
    }
L_088669E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[22];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866A0C;
      }
      goto L_08866A04;
    }
L_08866A04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08866A10;
      }
      goto L_08866A0C;
    }
L_08866A0C:
    aot_gpr_4 = (0u | 0u);
    goto L_08866A10;
L_08866A10:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866A90;
      }
      goto L_08866A18;
    }
L_08866A18:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-705));
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866A90;
      }
      goto L_08866A28;
    }
L_08866A28:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08866A58;
      }
      goto L_08866A34;
    }
L_08866A34:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08866A74;
      }
      goto L_08866A3C;
    }
L_08866A3C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08866A58;
      }
      goto L_08866A44;
    }
L_08866A44:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
      if (branch_taken) {
          goto L_08866A74;
      }
      goto L_08866A4C;
    }
L_08866A4C:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866A90;
      }
      goto L_08866A58;
    }
L_08866A58:
    aot_gpr_31 = (0x08866A60u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866A60u) goto L_08866A60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866A60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08866A6C;
      }
      goto L_08866A68;
    }
L_08866A68:
    ctx.gpr[22] = (0u | 1u);
    goto L_08866A6C;
L_08866A6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866A90;
      }
      goto L_08866A74;
    }
L_08866A74:
    aot_gpr_31 = (0x08866A7Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866A7Cu) goto L_08866A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866A7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08866A88;
      }
      goto L_08866A84;
    }
L_08866A84:
    ctx.gpr[22] = (0u | 1u);
    goto L_08866A88;
L_08866A88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866A90;
      }
      goto L_08866A90;
    }
L_08866A90:
    aot_gpr_4 = (0u < ctx.gpr[22] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[22] = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_08866ABC;
      }
      goto L_08866AB4;
    }
L_08866AB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08866B0C;
      }
      goto L_08866ABC;
    }
L_08866ABC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08866AE8;
      }
      goto L_08866AD4;
    }
L_08866AD4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[22] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08866B0C;
      }
      goto L_08866AE8;
    }
L_08866AE8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[22] | aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866B0C;
      }
      goto L_08866B08;
    }
L_08866B08:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08866B0C;
L_08866B0C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08866B78;
      }
      goto L_08866B14;
    }
L_08866B14:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (aot_gpr_16 + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08866B4C;
      }
      goto L_08866B1C;
    }
L_08866B1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_20;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = ctx.fpr[15] - ctx.fpr[22];
    aot_fpr_14 = aot_fpr_14 + aot_fpr_20;
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    aot_gpr_31 = (0x08866B44u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866B44u) goto L_08866B44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866B44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866B78;
      }
      goto L_08866B4C;
    }
L_08866B4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_20;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = ctx.fpr[15] - ctx.fpr[22];
    aot_fpr_14 = aot_fpr_14 + aot_fpr_20;
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    aot_gpr_5 = (49864u << 16u);
    aot_gpr_31 = (0x08866B78u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866B78u) goto L_08866B78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866B78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866B94;
      }
      goto L_08866B84;
    }
L_08866B84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08866B94;
      }
      goto L_08866B8C;
    }
L_08866B8C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866B94;
      }
      goto L_08866B94;
    }
L_08866B94:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08866BC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 260 ? 1u : 0u);
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08866C20;
      }
      goto L_08866C08;
    }
L_08866C08:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 262 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08866C20;
      }
      goto L_08866C14;
    }
L_08866C14:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08866C28;
      }
      goto L_08866C20;
    }
L_08866C20:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08866C28;
L_08866C28:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08866C3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866C3Cu) goto L_08866C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866C3C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_31 = (0x08866C4Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866C4Cu) goto L_08866C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866C4C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 260 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 261 ? 1u : 0u);
      if (branch_taken) {
          goto L_08866C7C;
      }
      goto L_08866C60;
    }
L_08866C60:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 258 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 259 ? 1u : 0u);
      if (branch_taken) {
          goto L_08866CB0;
      }
      goto L_08866C6C;
    }
L_08866C6C:
    if (aot_gpr_5 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
        goto L_08866C90;
    }
    goto L_08866C74;
L_08866C74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866CB0;
      }
      goto L_08866C7C;
    }
L_08866C7C:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 262 ? 1u : 0u);
      if (branch_taken) {
          goto L_08866C74;
      }
      goto L_08866C84;
    }
L_08866C84:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08866CB0;
      }
      goto L_08866C8C;
    }
L_08866C8C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_08866C90;
L_08866C90:
    aot_gpr_31 = (0x08866C98u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 761u, 0x08863D9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866C98u) goto L_08866C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866C98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08866CA8;
      }
      goto L_08866CA0;
    }
L_08866CA0:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_08866CA8;
L_08866CA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866CB0;
      }
      goto L_08866CB0;
    }
L_08866CB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08866CD8;
      }
      goto L_08866CC0;
    }
L_08866CC0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[21] + static_cast<std::uint32_t>(12), aot_run_words);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[3]);
    }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08866CE4;
      }
      goto L_08866CD8;
    }
L_08866CD8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_08866CE4;
L_08866CE4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866CEC;
    }
L_08866CEC:
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
    aot_gpr_5 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[18] = aot_fpr_12 - ctx.fpr[15];
      if (branch_taken) {
          goto L_08866D98;
      }
      goto L_08866D04;
    }
L_08866D04:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] < ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D18;
    }
L_08866D18:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = ctx.fpr[15] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D30;
    }
L_08866D30:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = aot_fpr_13 - ctx.fpr[16];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D48;
    }
L_08866D48:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = ctx.fpr[16] + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D60;
    }
L_08866D60:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = aot_fpr_14 - ctx.fpr[17];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D78;
    }
L_08866D78:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = ctx.fpr[17] + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] <= ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D90;
    }
L_08866D90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D98;
    }
L_08866D98:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866DAC;
    }
L_08866DAC:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = ctx.fpr[15] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866DC4;
    }
L_08866DC4:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = aot_fpr_13 - ctx.fpr[16];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866DDC;
    }
L_08866DDC:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = ctx.fpr[16] + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866DF4;
    }
L_08866DF4:
    aot_gpr_5 = (0u | 1u);
    goto L_08866DF8;
L_08866DF8:
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08866E24;
      }
      goto L_08866E1C;
    }
L_08866E1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08866E74;
      }
      goto L_08866E24;
    }
L_08866E24:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08866E50;
      }
      goto L_08866E3C;
    }
L_08866E3C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08866E74;
      }
      goto L_08866E50;
    }
L_08866E50:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866E74;
      }
      goto L_08866E70;
    }
L_08866E70:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08866E74;
L_08866E74:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08866EDC;
      }
      goto L_08866E7C;
    }
L_08866E7C:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = aot_fpr_13 - ctx.fpr[15];
    aot_fpr_13 = ctx.fpr[15] + aot_fpr_13;
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
      if (branch_taken) {
          goto L_08866EBC;
      }
      goto L_08866E98;
    }
L_08866E98:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_31 = (0x08866EB4u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866EB4u) goto L_08866EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866EB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866EDC;
      }
      goto L_08866EBC;
    }
L_08866EBC:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (49864u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_31 = (0x08866EDCu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866EDCu) goto L_08866EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866EDC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08866EF8;
      }
      goto L_08866EE8;
    }
L_08866EE8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08866EF8;
      }
      goto L_08866EF0;
    }
L_08866EF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08866EF8;
      }
      goto L_08866EF8;
    }
L_08866EF8:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08866F20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[7] = (0u | 773u);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08866F60;
      }
      goto L_08866F54;
    }
L_08866F54:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08866F68;
      }
      goto L_08866F60;
    }
L_08866F60:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08866F68;
L_08866F68:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08866F7Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866F7Cu) goto L_08866F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866F7C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_31 = (0x08866F8Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08866F8Cu) goto L_08866F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08866F8C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08866FBC;
      }
      goto L_08866FA0;
    }
L_08866FA0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_run_words);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[18] = std::bit_cast<float>(aot_run_words[3]);
    }
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[17] = aot_fpr_12 - ctx.fpr[15];
      if (branch_taken) {
          goto L_08866FCC;
      }
      goto L_08866FBC;
    }
L_08866FBC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = aot_fpr_12 - ctx.fpr[15];
    goto L_08866FCC;
L_08866FCC:
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
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08867078;
      }
      goto L_08866FE4;
    }
L_08866FE4:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08866FF8;
    }
L_08866FF8:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[15] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867010;
    }
L_08867010:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = aot_fpr_13 - ctx.fpr[16];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867028;
    }
L_08867028:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[16] + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867040;
    }
L_08867040:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = aot_fpr_14 - ctx.fpr[18];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867058;
    }
L_08867058:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = ctx.fpr[18] + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867070;
    }
L_08867070:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867078;
    }
L_08867078:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_0886708C;
    }
L_0886708C:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = ctx.fpr[15] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_088670A4;
    }
L_088670A4:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = aot_fpr_13 - ctx.fpr[16];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_088670BC;
    }
L_088670BC:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = ctx.fpr[16] + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_088670D4;
    }
L_088670D4:
    aot_gpr_4 = (0u | 1u);
    goto L_088670D8;
L_088670D8:
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08867104;
      }
      goto L_088670FC;
    }
L_088670FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08867154;
      }
      goto L_08867104;
    }
L_08867104:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08867130;
      }
      goto L_0886711C;
    }
L_0886711C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08867154;
      }
      goto L_08867130;
    }
L_08867130:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08867154;
      }
      goto L_08867150;
    }
L_08867150:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08867154;
L_08867154:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088671A4;
      }
      goto L_0886715C;
    }
L_0886715C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    aot_fpr_13 = ctx.fpr[18] - ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[18];
      if (branch_taken) {
          goto L_0886718C;
      }
      goto L_08867170;
    }
L_08867170:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08867184u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867184u) goto L_08867184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867184:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088671A4;
      }
      goto L_0886718C;
    }
L_0886718C:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49864u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088671A4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088671A4u) goto L_088671A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088671A4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088671C0;
      }
      goto L_088671B0;
    }
L_088671B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088671C0;
      }
      goto L_088671B8;
    }
L_088671B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088671C0;
      }
      goto L_088671C0;
    }
L_088671C0:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_088671E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[15]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 251 ? 1u : 0u);
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[23] = (ctx.gpr[21] + static_cast<std::uint32_t>(29704));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[20] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08867258;
      }
      goto L_08867244;
    }
L_08867244:
    aot_gpr_5 = (0u | 71u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08867264;
      }
      goto L_08867250;
    }
L_08867250:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867270;
      }
      goto L_08867258;
    }
L_08867258:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08867270;
      }
      goto L_08867264;
    }
L_08867264:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08867278;
      }
      goto L_08867270;
    }
L_08867270:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_08867278;
L_08867278:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08867288u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867288u) goto L_08867288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867288:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_gpr_31 = (0x08867298u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867298u) goto L_08867298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867298:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x088672A4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088672A4u) goto L_088672A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088672A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_088672D0;
      }
      goto L_088672AC;
    }
L_088672AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088672D0;
      }
      goto L_088672B8;
    }
L_088672B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
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
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088672DC;
      }
      goto L_088672D0;
    }
L_088672D0:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    goto L_088672DC;
L_088672DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 248 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 253 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886731C;
      }
      goto L_088672EC;
    }
L_088672EC:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 72 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 246 ? 1u : 0u);
        goto L_0886730C;
    }
    goto L_088672F8;
L_088672F8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 70 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08867364;
      }
      goto L_08867304;
    }
L_08867304:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867364;
      }
      goto L_0886730C;
    }
L_0886730C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08867304;
      }
      goto L_08867314;
    }
L_08867314:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867364;
      }
      goto L_0886731C;
    }
L_0886731C:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 256 ? 1u : 0u);
        goto L_08867338;
    }
    goto L_08867324;
L_08867324:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 251 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08867304;
      }
      goto L_08867330;
    }
L_08867330:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867340;
      }
      goto L_08867338;
    }
L_08867338:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08867364;
      }
      goto L_08867340;
    }
L_08867340:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0886734Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 745u, 0x08863CB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886734Cu) goto L_0886734C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886734C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0886735C;
      }
      goto L_08867354;
    }
L_08867354:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0886735C;
L_0886735C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867364;
      }
      goto L_08867364;
    }
L_08867364:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088673B0;
      }
      goto L_0886737C;
    }
L_0886737C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[23] + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[2]);
    }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088673A8;
      }
      goto L_088673A0;
    }
L_088673A0:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_088673A8;
L_088673A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088673BC;
      }
      goto L_088673B0;
    }
L_088673B0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    goto L_088673BC;
L_088673BC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088673D4;
      }
      goto L_088673CC;
    }
L_088673CC:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088673D4;
L_088673D4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088673EC;
      }
      goto L_088673E4;
    }
L_088673E4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_088673EC;
L_088673EC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_088673F4;
    }
L_088673F4:
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08867488;
      }
      goto L_08867400;
    }
L_08867400:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_08867414;
    }
L_08867414:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_08867428;
    }
L_08867428:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_0886743C;
    }
L_0886743C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_08867450;
    }
L_08867450:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_08867464;
    }
L_08867464:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_08867478;
    }
L_08867478:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088674E4;
      }
      goto L_08867480;
    }
L_08867480:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_088674E4;
      }
      goto L_08867488;
    }
L_08867488:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088674E0;
      }
      goto L_0886749C;
    }
L_0886749C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088674E0;
      }
      goto L_088674B0;
    }
L_088674B0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088674E0;
      }
      goto L_088674C4;
    }
L_088674C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088674E0;
      }
      goto L_088674D8;
    }
L_088674D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088674E4;
      }
      goto L_088674E0;
    }
L_088674E0:
    aot_gpr_4 = (0u | 0u);
    goto L_088674E4;
L_088674E4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_088674EC;
    }
L_088674EC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 72 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 246 ? 1u : 0u);
      if (branch_taken) {
          goto L_08867510;
      }
      goto L_088674F8;
    }
L_088674F8:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 70 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867504;
    }
L_08867504:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867510;
    }
L_08867510:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867518;
    }
L_08867518:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(-246));
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867520;
    }
L_08867520:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25600)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08867538:
    aot_gpr_31 = (0x08867540u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867540u) goto L_08867540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867540:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0886754C;
      }
      goto L_08867548;
    }
L_08867548:
    ctx.gpr[22] = (0u | 1u);
    goto L_0886754C;
L_0886754C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867554;
    }
L_08867554:
    aot_gpr_31 = (0x0886755Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886755Cu) goto L_0886755C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886755C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08867568;
      }
      goto L_08867564;
    }
L_08867564:
    ctx.gpr[22] = (0u | 1u);
    goto L_08867568;
L_08867568:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867570;
    }
L_08867570:
    aot_gpr_4 = (0u < ctx.gpr[22] ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    ctx.gpr[22] = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_0886759C;
      }
      goto L_08867594;
    }
L_08867594:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_088675EC;
      }
      goto L_0886759C;
    }
L_0886759C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 9 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_088675C8;
      }
      goto L_088675B4;
    }
L_088675B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[22] & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088675EC;
      }
      goto L_088675C8;
    }
L_088675C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[22] | aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088675EC;
      }
      goto L_088675E8;
    }
L_088675E8:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088675EC;
L_088675EC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
      if (branch_taken) {
          goto L_0886764C;
      }
      goto L_088675F4;
    }
L_088675F4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_0886762C;
      }
      goto L_088675FC;
    }
L_088675FC:
    ctx.fpr[16] = ctx.fpr[24] + ctx.fpr[30];
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x08867624u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867624u) goto L_08867624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867624:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0886764C;
      }
      goto L_0886762C;
    }
L_0886762C:
    aot_gpr_4 = (49864u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x0886764Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886764Cu) goto L_0886764C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886764C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08867658;
      }
      goto L_08867658;
    }
L_08867658:
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
      ctx.gpr[23] = aot_run_words[13];
      aot_gpr_31 = aot_run_words[14];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0886769C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 85 ? 1u : 0u);
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088676F4;
      }
      goto L_088676E0;
    }
L_088676E0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 84 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0886770C;
      }
      goto L_088676EC;
    }
L_088676EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867700;
      }
      goto L_088676F4;
    }
L_088676F4:
    aot_gpr_6 = (0u | 257u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_0886770C;
      }
      goto L_08867700;
    }
L_08867700:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08867714;
      }
      goto L_0886770C;
    }
L_0886770C:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08867714;
L_08867714:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08867728u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867728u) goto L_08867728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867728:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_31 = (0x08867738u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867738u) goto L_08867738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867738:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 85 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08867760;
      }
      goto L_0886774C;
    }
L_0886774C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 83 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08867794;
      }
      goto L_08867758;
    }
L_08867758:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867794;
      }
      goto L_08867760;
    }
L_08867760:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 258 ? 1u : 0u);
      if (branch_taken) {
          goto L_08867794;
      }
      goto L_08867768;
    }
L_08867768:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08867794;
      }
      goto L_08867770;
    }
L_08867770:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_31 = (0x0886777Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 761u, 0x08863D9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0886777Cu) goto L_0886777C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0886777C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0886778C;
      }
      goto L_08867784;
    }
L_08867784:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0886778C;
L_0886778C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867794;
      }
      goto L_08867794;
    }
L_08867794:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088677E0;
      }
      goto L_088677AC;
    }
L_088677AC:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[21] + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.fpr[18] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[19] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[0] = std::bit_cast<float>(aot_run_words[2]);
    }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088677D8;
      }
      goto L_088677D0;
    }
L_088677D0:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_088677D8;
L_088677D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088677EC;
      }
      goto L_088677E0;
    }
L_088677E0:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_088677EC;
L_088677EC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867804;
      }
      goto L_088677FC;
    }
L_088677FC:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08867804;
L_08867804:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0886781C;
      }
      goto L_08867814;
    }
L_08867814:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_0886781C;
L_0886781C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_08867824;
    }
L_08867824:
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
    aot_gpr_5 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088678BC;
      }
      goto L_0886783C;
    }
L_0886783C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_08867850;
    }
L_08867850:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_08867864;
    }
L_08867864:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_08867878;
    }
L_08867878:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_0886788C;
    }
L_0886788C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678A0;
    }
L_088678A0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678B4;
    }
L_088678B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678BC;
    }
L_088678BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678D0;
    }
L_088678D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678E4;
    }
L_088678E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678F8;
    }
L_088678F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_0886790C;
    }
L_0886790C:
    aot_gpr_5 = (0u | 1u);
    goto L_08867910;
L_08867910:
    aot_gpr_4 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886793C;
      }
      goto L_08867934;
    }
L_08867934:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_0886798C;
      }
      goto L_0886793C;
    }
L_0886793C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08867968;
      }
      goto L_08867954;
    }
L_08867954:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0886798C;
      }
      goto L_08867968;
    }
L_08867968:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0886798C;
      }
      goto L_08867988;
    }
L_08867988:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_0886798C;
L_0886798C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_088679EC;
      }
      goto L_08867994;
    }
L_08867994:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088679CC;
      }
      goto L_0886799C;
    }
L_0886799C:
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[0];
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_gpr_31 = (0x088679C4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088679C4u) goto L_088679C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088679C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088679EC;
      }
      goto L_088679CC;
    }
L_088679CC:
    aot_gpr_4 = (49864u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_gpr_31 = (0x088679ECu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088679ECu) goto L_088679EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088679EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088679F8;
      }
      goto L_088679F8;
    }
L_088679F8:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08867A20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[7] = (0u | 776u);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08867A60;
      }
      goto L_08867A54;
    }
L_08867A54:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08867A68;
      }
      goto L_08867A60;
    }
L_08867A60:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08867A68;
L_08867A68:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08867A7Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867A7Cu) goto L_08867A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867A7C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    aot_gpr_31 = (0x08867A8Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867A8Cu) goto L_08867A8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867A8C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08867ADC;
      }
      goto L_08867AA8;
    }
L_08867AA8:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[19] + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.fpr[18] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[19] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[0] = std::bit_cast<float>(aot_run_words[2]);
    }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867AD4;
      }
      goto L_08867ACC;
    }
L_08867ACC:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08867AD4;
L_08867AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08867AE8;
      }
      goto L_08867ADC;
    }
L_08867ADC:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    goto L_08867AE8;
L_08867AE8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867B00;
      }
      goto L_08867AF8;
    }
L_08867AF8:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08867B00;
L_08867B00:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867B18;
      }
      goto L_08867B10;
    }
L_08867B10:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_08867B18;
L_08867B18:
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
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08867BB0;
      }
      goto L_08867B30;
    }
L_08867B30:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867B44;
    }
L_08867B44:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867B58;
    }
L_08867B58:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867B6C;
    }
L_08867B6C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867B80;
    }
L_08867B80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[17])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867B94;
    }
L_08867B94:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867BA8;
    }
L_08867BA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867BB0;
    }
L_08867BB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867BC4;
    }
L_08867BC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[18])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867BD8;
    }
L_08867BD8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867BEC;
    }
L_08867BEC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[19])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867C00;
    }
L_08867C00:
    aot_gpr_4 = (0u | 1u);
    goto L_08867C04;
L_08867C04:
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(524)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08867C30;
      }
      goto L_08867C28;
    }
L_08867C28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08867C80;
      }
      goto L_08867C30;
    }
L_08867C30:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(518));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 9 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08867C5C;
      }
      goto L_08867C48;
    }
L_08867C48:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08867C80;
      }
      goto L_08867C5C;
    }
L_08867C5C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(521)));
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(518)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08867C80;
      }
      goto L_08867C7C;
    }
L_08867C7C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08867C80;
L_08867C80:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08867CE0;
      }
      goto L_08867C88;
    }
L_08867C88:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08867CC0;
      }
      goto L_08867C90;
    }
L_08867C90:
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[0];
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_gpr_31 = (0x08867CB8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867CB8u) goto L_08867CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867CB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867CE0;
      }
      goto L_08867CC0;
    }
L_08867CC0:
    aot_gpr_4 = (49864u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_gpr_31 = (0x08867CE0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867CE0u) goto L_08867CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867CE0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08867CEC;
      }
      goto L_08867CEC;
    }
L_08867CEC:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08867D0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (aot_gpr_5 + static_cast<std::uint32_t>(-400));
    ctx.gpr[21] = (ctx.gpr[20] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_16 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[23] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08867D7C;
      }
      goto L_08867D70;
    }
L_08867D70:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08867D84;
      }
      goto L_08867D7C;
    }
L_08867D7C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08867D84;
L_08867D84:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_gpr_31 = (0x08867D98u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867D98u) goto L_08867D98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867D98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08867DE0;
      }
      goto L_08867DB8;
    }
L_08867DB8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
      if (branch_taken) {
          goto L_08867DF8;
      }
      goto L_08867DE0;
    }
L_08867DE0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    goto L_08867DF8;
L_08867DF8:
    aot_gpr_31 = (0x08867E00u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867E00u) goto L_08867E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867E00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(260));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 21u, 0x088680A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08867E30;
    }
L_08867E30:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = aot_fpr_12 - ctx.fpr[24];
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = aot_fpr_13 - aot_fpr_20;
    aot_fpr_20 = aot_fpr_20 + aot_fpr_13;
    ctx.fpr[30] = aot_fpr_14 - ctx.fpr[28];
    ctx.fpr[28] = ctx.fpr[28] + aot_fpr_14;
    goto L_08867E60;
L_08867E60:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(29704)));
    aot_gpr_31 = (0x08867E74u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0005_entry, 5u, 96u, 0x08818B00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867E74u) goto L_08867E74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867E74:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 20u, 0x08868098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08867E94;
    }
L_08867E94:
    aot_gpr_31 = (0x08867E9Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867E9Cu) goto L_08867E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867E9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08867EBC;
      }
      goto L_08867EA4;
    }
L_08867EA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
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
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867EC8;
      }
      goto L_08867EBC;
    }
L_08867EBC:
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08867EC8;
L_08867EC8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08867F18;
      }
      goto L_08867ED0;
    }
L_08867ED0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08867EF4;
      }
      goto L_08867EDC;
    }
L_08867EDC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08867EF4;
      }
      goto L_08867EE4;
    }
L_08867EE4:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
      if (branch_taken) {
          goto L_08867EF4;
      }
      goto L_08867EEC;
    }
L_08867EEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867F18;
      }
      goto L_08867EF4;
    }
L_08867EF4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08867F00u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 745u, 0x08863CB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08867F00u) goto L_08867F00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08867F00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08867F10;
      }
      goto L_08867F08;
    }
L_08867F08:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    goto L_08867F10;
L_08867F10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08867F18;
      }
      goto L_08867F18;
    }
L_08867F18:
    { const bool branch_taken = ctx.gpr[22] != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 20u, 0x08868098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08867F20;
    }
L_08867F20:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08867FB4;
      }
      goto L_08867F2C;
    }
L_08867F2C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867F40;
    }
L_08867F40:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867F54;
    }
L_08867F54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867F68;
    }
L_08867F68:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867F7C;
    }
L_08867F7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867F90;
    }
L_08867F90:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867FA4;
    }
L_08867FA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08867FAC;
    }
L_08867FAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08867FB4;
    }
L_08867FB4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 2u, 0x0886800Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08867FC8;
    }
L_08867FC8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 2u, 0x0886800Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08867FDC;
    }
L_08867FDC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 2u, 0x0886800Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08867FF0;
    }
L_08867FF0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 2u, 0x0886800Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 1u, 0x08868004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0024(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0024_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_24(Runtime &runtime) {
    runtime.register_generated_unit(24u, 0x08864000u, 16384u, &recomp_unit_0024, &recomp_unit_0024_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08864000u, &recomp_unit_0024, "recomp_unit_0024",
                                          kEntryMasks_recomp_unit_0024, 64u);
}
} // namespace psprecomp
