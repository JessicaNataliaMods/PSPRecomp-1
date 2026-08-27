#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0109[64] = {
    0x0004348804214121ull, 0xA02A021090442041ull, 0x2000002000002A00ull, 0x4001042A00000105ull,
    0x20442A40088902AAull, 0x004010090A862102ull, 0x0214000050000001ull, 0x0004280000A00000ull,
    0x0000085000014000ull, 0xA0000010A0000280ull, 0x0010214000000830ull, 0x8882A82109004A00ull,
    0x2100244880540420ull, 0x0400112200080000ull, 0x8912522402004028ull, 0x0864289408502494ull,
    0x0006040001800080ull, 0x2969522511008500ull, 0x8688864249492020ull, 0xE2891102A2891502ull,
    0x110808A001653144ull, 0x50042020A3185092ull, 0x0A02400006041022ull, 0x448A82400308248Aull,
    0x88824024A900C84Cull, 0x1224420228004B29ull, 0x14009420000C0410ull, 0xA0510104C0A05502ull,
    0x12254A100420A4C0ull, 0x90408004206E1550ull, 0x0300009000C00042ull, 0x8A022010A8804240ull,
    0x48A522A48A522AA4ull, 0x000400041068522Aull, 0x0046044080020400ull, 0x0A20880010000010ull,
    0x02A0010011040080ull, 0x1590A00409490880ull, 0x0A10002040A21542ull, 0x00556894A1248040ull,
    0xA2AD254AAAB10022ull, 0x55554A924A52A52Aull, 0xA49525455508002Aull, 0x5002A84214280524ull,
    0x120564C993264845ull, 0x0000020410205080ull, 0x0200501000000000ull, 0x502515A04B402496ull,
    0x5251006015000555ull, 0x14484080B4414A03ull, 0x2D24545555481285ull, 0x015042412422B490ull,
    0x2205108A00044002ull, 0x0008102816AC5100ull, 0xA4A000002A100002ull, 0xA900053A4A800053ull,
    0xD248040401008022ull, 0x0800D00008491202ull, 0x8001548A8A880000ull, 0x0110150000800042ull,
    0x20000C8900062818ull, 0x8200200004010010ull, 0x480402A040040000ull, 0x2A89000001000894ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0109[64] = {
    1u, 14u, 28u, 33u, 42u, 58u, 70u, 76u, 81u, 86u, 93u, 100u, 114u, 126u, 132u, 146u,
    163u, 169u, 187u, 205u, 225u, 241u, 257u, 267u, 283u, 300u, 316u, 326u, 342u, 358u, 374u, 382u,
    395u, 418u, 430u, 438u, 445u, 453u, 468u, 481u, 498u, 522u, 549u, 570u, 586u, 609u, 616u, 620u,
    641u, 658u, 675u, 699u, 716u, 727u, 741u, 751u, 769u, 781u, 792u, 805u, 813u, 825u, 831u, 839u,
};
void recomp_unit_0109_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,6,16 fprs=12,13,14,20 gpr_occ=4149 fpr_occ=649 gpr_total=5745 fpr_total=861
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B8000u;
        entry_id = 0u;
        if (entry_delta < 16376u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0109[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0109[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_089B8000;
    case 2u: goto L_089B8014;
    case 3u: goto L_089B8020;
    case 4u: goto L_089B8038;
    case 5u: goto L_089B8040;
    case 6u: goto L_089B8054;
    case 7u: goto L_089B8068;
    case 8u: goto L_089B808C;
    case 9u: goto L_089B809C;
    case 10u: goto L_089B80A8;
    case 11u: goto L_089B80B0;
    case 12u: goto L_089B80B4;
    case 13u: goto L_089B80C8;
    case 14u: goto L_089B8100;
    case 15u: goto L_089B8118;
    case 16u: goto L_089B8134;
    case 17u: goto L_089B8148;
    case 18u: goto L_089B8158;
    case 19u: goto L_089B8170;
    case 20u: goto L_089B817C;
    case 21u: goto L_089B8190;
    case 22u: goto L_089B81A4;
    case 23u: goto L_089B81C4;
    case 24u: goto L_089B81CC;
    case 25u: goto L_089B81D4;
    case 26u: goto L_089B81F4;
    case 27u: goto L_089B81FC;
    case 28u: goto L_089B8224;
    case 29u: goto L_089B822C;
    case 30u: goto L_089B8234;
    case 31u: goto L_089B8294;
    case 32u: goto L_089B82F4;
    case 33u: goto L_089B8300;
    case 34u: goto L_089B8308;
    case 35u: goto L_089B8320;
    case 36u: goto L_089B8384;
    case 37u: goto L_089B838C;
    case 38u: goto L_089B8394;
    case 39u: goto L_089B83A8;
    case 40u: goto L_089B83C0;
    case 41u: goto L_089B83F8;
    case 42u: goto L_089B8404;
    case 43u: goto L_089B840C;
    case 44u: goto L_089B8414;
    case 45u: goto L_089B841C;
    case 46u: goto L_089B8424;
    case 47u: goto L_089B8440;
    case 48u: goto L_089B844C;
    case 49u: goto L_089B845C;
    case 50u: goto L_089B846C;
    case 51u: goto L_089B8498;
    case 52u: goto L_089B84A4;
    case 53u: goto L_089B84AC;
    case 54u: goto L_089B84B4;
    case 55u: goto L_089B84C8;
    case 56u: goto L_089B84D8;
    case 57u: goto L_089B84F4;
    case 58u: goto L_089B8504;
    case 59u: goto L_089B8520;
    case 60u: goto L_089B8534;
    case 61u: goto L_089B8544;
    case 62u: goto L_089B8548;
    case 63u: goto L_089B855C;
    case 64u: goto L_089B8564;
    case 65u: goto L_089B856C;
    case 66u: goto L_089B8580;
    case 67u: goto L_089B858C;
    case 68u: goto L_089B85B0;
    case 69u: goto L_089B85D8;
    case 70u: goto L_089B8600;
    case 71u: goto L_089B8670;
    case 72u: goto L_089B8678;
    case 73u: goto L_089B86C8;
    case 74u: goto L_089B86D0;
    case 75u: goto L_089B86E4;
    case 76u: goto L_089B8754;
    case 77u: goto L_089B875C;
    case 78u: goto L_089B87AC;
    case 79u: goto L_089B87B4;
    case 80u: goto L_089B87C8;
    case 81u: goto L_089B8838;
    case 82u: goto L_089B8840;
    case 83u: goto L_089B8890;
    case 84u: goto L_089B8898;
    case 85u: goto L_089B88AC;
    case 86u: goto L_089B891C;
    case 87u: goto L_089B8924;
    case 88u: goto L_089B8974;
    case 89u: goto L_089B897C;
    case 90u: goto L_089B8990;
    case 91u: goto L_089B89F4;
    case 92u: goto L_089B89FC;
    case 93u: goto L_089B8A10;
    case 94u: goto L_089B8A14;
    case 95u: goto L_089B8A2C;
    case 96u: goto L_089B8A98;
    case 97u: goto L_089B8AA0;
    case 98u: goto L_089B8AB4;
    case 99u: goto L_089B8AD0;
    case 100u: goto L_089B8B24;
    case 101u: goto L_089B8B2C;
    case 102u: goto L_089B8B38;
    case 103u: goto L_089B8B60;
    case 104u: goto L_089B8B6C;
    case 105u: goto L_089B8B80;
    case 106u: goto L_089B8B94;
    case 107u: goto L_089B8BAC;
    case 108u: goto L_089B8BB4;
    case 109u: goto L_089B8BBC;
    case 110u: goto L_089B8BC4;
    case 111u: goto L_089B8BDC;
    case 112u: goto L_089B8BEC;
    case 113u: goto L_089B8BFC;
    case 114u: goto L_089B8C14;
    case 115u: goto L_089B8C28;
    case 116u: goto L_089B8C48;
    case 117u: goto L_089B8C50;
    case 118u: goto L_089B8C58;
    case 119u: goto L_089B8C7C;
    case 120u: goto L_089B8C8C;
    case 121u: goto L_089B8C98;
    case 122u: goto L_089B8CA8;
    case 123u: goto L_089B8CB4;
    case 124u: goto L_089B8CE0;
    case 125u: goto L_089B8CF4;
    case 126u: goto L_089B8D4C;
    case 127u: goto L_089B8D84;
    case 128u: goto L_089B8D94;
    case 129u: goto L_089B8DA0;
    case 130u: goto L_089B8DB0;
    case 131u: goto L_089B8DE8;
    case 132u: goto L_089B8E0C;
    case 133u: goto L_089B8E14;
    case 134u: goto L_089B8E38;
    case 135u: goto L_089B8E64;
    case 136u: goto L_089B8E88;
    case 137u: goto L_089B8E94;
    case 138u: goto L_089B8EA4;
    case 139u: goto L_089B8EB0;
    case 140u: goto L_089B8EB8;
    case 141u: goto L_089B8EC4;
    case 142u: goto L_089B8ED0;
    case 143u: goto L_089B8EE0;
    case 144u: goto L_089B8EEC;
    case 145u: goto L_089B8EFC;
    case 146u: goto L_089B8F08;
    case 147u: goto L_089B8F10;
    case 148u: goto L_089B8F1C;
    case 149u: goto L_089B8F28;
    case 150u: goto L_089B8F34;
    case 151u: goto L_089B8F50;
    case 152u: goto L_089B8F58;
    case 153u: goto L_089B8F6C;
    case 154u: goto L_089B8F88;
    case 155u: goto L_089B8F90;
    case 156u: goto L_089B8F9C;
    case 157u: goto L_089B8FAC;
    case 158u: goto L_089B8FB4;
    case 159u: goto L_089B8FC8;
    case 160u: goto L_089B8FD4;
    case 161u: goto L_089B8FD8;
    case 162u: goto L_089B8FEC;
    case 163u: goto L_089B901C;
    case 164u: goto L_089B905C;
    case 165u: goto L_089B9060;
    case 166u: goto L_089B90A8;
    case 167u: goto L_089B90C4;
    case 168u: goto L_089B90C8;
    case 169u: goto L_089B9120;
    case 170u: goto L_089B9128;
    case 171u: goto L_089B913C;
    case 172u: goto L_089B9160;
    case 173u: goto L_089B9170;
    case 174u: goto L_089B9180;
    case 175u: goto L_089B9188;
    case 176u: goto L_089B9194;
    case 177u: goto L_089B91A4;
    case 178u: goto L_089B91B0;
    case 179u: goto L_089B91B8;
    case 180u: goto L_089B91C0;
    case 181u: goto L_089B91CC;
    case 182u: goto L_089B91D4;
    case 183u: goto L_089B91D8;
    case 184u: goto L_089B91E0;
    case 185u: goto L_089B91EC;
    case 186u: goto L_089B91F4;
    case 187u: goto L_089B9214;
    case 188u: goto L_089B9234;
    case 189u: goto L_089B9240;
    case 190u: goto L_089B924C;
    case 191u: goto L_089B9258;
    case 192u: goto L_089B9260;
    case 193u: goto L_089B926C;
    case 194u: goto L_089B9278;
    case 195u: goto L_089B9284;
    case 196u: goto L_089B9298;
    case 197u: goto L_089B92A4;
    case 198u: goto L_089B92A8;
    case 199u: goto L_089B92BC;
    case 200u: goto L_089B92CC;
    case 201u: goto L_089B92DC;
    case 202u: goto L_089B92E4;
    case 203u: goto L_089B92E8;
    case 204u: goto L_089B92FC;
    case 205u: goto L_089B9304;
    case 206u: goto L_089B9320;
    case 207u: goto L_089B9328;
    case 208u: goto L_089B9330;
    case 209u: goto L_089B9340;
    case 210u: goto L_089B934C;
    case 211u: goto L_089B935C;
    case 212u: goto L_089B9364;
    case 213u: goto L_089B9374;
    case 214u: goto L_089B937C;
    case 215u: goto L_089B9384;
    case 216u: goto L_089B93A0;
    case 217u: goto L_089B93B0;
    case 218u: goto L_089B93C0;
    case 219u: goto L_089B93CC;
    case 220u: goto L_089B93DC;
    case 221u: goto L_089B93E4;
    case 222u: goto L_089B93F4;
    case 223u: goto L_089B93F8;
    case 224u: goto L_089B93FC;
    case 225u: goto L_089B9408;
    case 226u: goto L_089B9418;
    case 227u: goto L_089B9420;
    case 228u: goto L_089B9430;
    case 229u: goto L_089B9434;
    case 230u: goto L_089B9440;
    case 231u: goto L_089B9448;
    case 232u: goto L_089B9454;
    case 233u: goto L_089B9458;
    case 234u: goto L_089B9460;
    case 235u: goto L_089B9494;
    case 236u: goto L_089B949C;
    case 237u: goto L_089B94AC;
    case 238u: goto L_089B94CC;
    case 239u: goto L_089B94E0;
    case 240u: goto L_089B94F0;
    case 241u: goto L_089B9504;
    case 242u: goto L_089B9510;
    case 243u: goto L_089B951C;
    case 244u: goto L_089B9530;
    case 245u: goto L_089B9538;
    case 246u: goto L_089B954C;
    case 247u: goto L_089B9550;
    case 248u: goto L_089B9560;
    case 249u: goto L_089B9564;
    case 250u: goto L_089B9574;
    case 251u: goto L_089B957C;
    case 252u: goto L_089B9594;
    case 253u: goto L_089B95B4;
    case 254u: goto L_089B95C8;
    case 255u: goto L_089B95F0;
    case 256u: goto L_089B95F8;
    case 257u: goto L_089B9604;
    case 258u: goto L_089B9614;
    case 259u: goto L_089B9630;
    case 260u: goto L_089B9648;
    case 261u: goto L_089B9664;
    case 262u: goto L_089B9668;
    case 263u: goto L_089B96B8;
    case 264u: goto L_089B96C4;
    case 265u: goto L_089B96E4;
    case 266u: goto L_089B96EC;
    case 267u: goto L_089B9704;
    case 268u: goto L_089B970C;
    case 269u: goto L_089B971C;
    case 270u: goto L_089B9728;
    case 271u: goto L_089B9734;
    case 272u: goto L_089B974C;
    case 273u: goto L_089B9760;
    case 274u: goto L_089B9764;
    case 275u: goto L_089B9798;
    case 276u: goto L_089B97A4;
    case 277u: goto L_089B97BC;
    case 278u: goto L_089B97C4;
    case 279u: goto L_089B97CC;
    case 280u: goto L_089B97DC;
    case 281u: goto L_089B97E8;
    case 282u: goto L_089B97F8;
    case 283u: goto L_089B9808;
    case 284u: goto L_089B980C;
    case 285u: goto L_089B9818;
    case 286u: goto L_089B982C;
    case 287u: goto L_089B9838;
    case 288u: goto L_089B983C;
    case 289u: goto L_089B9860;
    case 290u: goto L_089B986C;
    case 291u: goto L_089B9874;
    case 292u: goto L_089B987C;
    case 293u: goto L_089B9888;
    case 294u: goto L_089B9894;
    case 295u: goto L_089B98B8;
    case 296u: goto L_089B98C4;
    case 297u: goto L_089B98DC;
    case 298u: goto L_089B98EC;
    case 299u: goto L_089B98FC;
    case 300u: goto L_089B9900;
    case 301u: goto L_089B990C;
    case 302u: goto L_089B9914;
    case 303u: goto L_089B9920;
    case 304u: goto L_089B9924;
    case 305u: goto L_089B992C;
    case 306u: goto L_089B9938;
    case 307u: goto L_089B996C;
    case 308u: goto L_089B9974;
    case 309u: goto L_089B9984;
    case 310u: goto L_089B99A4;
    case 311u: goto L_089B99B8;
    case 312u: goto L_089B99C8;
    case 313u: goto L_089B99D4;
    case 314u: goto L_089B99E4;
    case 315u: goto L_089B99F0;
    case 316u: goto L_089B9A10;
    case 317u: goto L_089B9A28;
    case 318u: goto L_089B9A48;
    case 319u: goto L_089B9A4C;
    case 320u: goto L_089B9A94;
    case 321u: goto L_089B9AA8;
    case 322u: goto L_089B9AB0;
    case 323u: goto L_089B9ABC;
    case 324u: goto L_089B9AE8;
    case 325u: goto L_089B9AF0;
    case 326u: goto L_089B9B04;
    case 327u: goto L_089B9B20;
    case 328u: goto L_089B9B28;
    case 329u: goto L_089B9B30;
    case 330u: goto L_089B9B38;
    case 331u: goto L_089B9B54;
    case 332u: goto L_089B9B5C;
    case 333u: goto L_089B9B78;
    case 334u: goto L_089B9B7C;
    case 335u: goto L_089B9B88;
    case 336u: goto L_089B9BA0;
    case 337u: goto L_089B9BC0;
    case 338u: goto L_089B9BD0;
    case 339u: goto L_089B9BD8;
    case 340u: goto L_089B9BF4;
    case 341u: goto L_089B9BFC;
    case 342u: goto L_089B9C18;
    case 343u: goto L_089B9C1C;
    case 344u: goto L_089B9C28;
    case 345u: goto L_089B9C34;
    case 346u: goto L_089B9C3C;
    case 347u: goto L_089B9C54;
    case 348u: goto L_089B9C68;
    case 349u: goto L_089B9C90;
    case 350u: goto L_089B9CA4;
    case 351u: goto L_089B9CAC;
    case 352u: goto L_089B9CB8;
    case 353u: goto L_089B9CC0;
    case 354u: goto L_089B9CC8;
    case 355u: goto L_089B9CD4;
    case 356u: goto L_089B9CE4;
    case 357u: goto L_089B9CF0;
    case 358u: goto L_089B9D10;
    case 359u: goto L_089B9D18;
    case 360u: goto L_089B9D20;
    case 361u: goto L_089B9D28;
    case 362u: goto L_089B9D30;
    case 363u: goto L_089B9D44;
    case 364u: goto L_089B9D48;
    case 365u: goto L_089B9D4C;
    case 366u: goto L_089B9D54;
    case 367u: goto L_089B9D58;
    case 368u: goto L_089B9D74;
    case 369u: goto L_089B9D88;
    case 370u: goto L_089B9DBC;
    case 371u: goto L_089B9DD8;
    case 372u: goto L_089B9DF0;
    case 373u: goto L_089B9DFC;
    case 374u: goto L_089B9E04;
    case 375u: goto L_089B9E18;
    case 376u: goto L_089B9E58;
    case 377u: goto L_089B9E5C;
    case 378u: goto L_089B9E90;
    case 379u: goto L_089B9E9C;
    case 380u: goto L_089B9EE0;
    case 381u: goto L_089B9EE4;
    case 382u: goto L_089B9F18;
    case 383u: goto L_089B9F24;
    case 384u: goto L_089B9F38;
    case 385u: goto L_089B9F5C;
    case 386u: goto L_089B9F6C;
    case 387u: goto L_089B9F74;
    case 388u: goto L_089B9F7C;
    case 389u: goto L_089B9F90;
    case 390u: goto L_089B9FB4;
    case 391u: goto L_089B9FC4;
    case 392u: goto L_089B9FE4;
    case 393u: goto L_089B9FEC;
    case 394u: goto L_089B9FFC;
    case 395u: goto L_089BA008;
    case 396u: goto L_089BA014;
    case 397u: goto L_089BA01C;
    case 398u: goto L_089BA024;
    case 399u: goto L_089BA02C;
    case 400u: goto L_089BA034;
    case 401u: goto L_089BA044;
    case 402u: goto L_089BA050;
    case 403u: goto L_089BA058;
    case 404u: goto L_089BA064;
    case 405u: goto L_089BA06C;
    case 406u: goto L_089BA07C;
    case 407u: goto L_089BA088;
    case 408u: goto L_089BA094;
    case 409u: goto L_089BA09C;
    case 410u: goto L_089BA0A4;
    case 411u: goto L_089BA0B4;
    case 412u: goto L_089BA0C0;
    case 413u: goto L_089BA0C8;
    case 414u: goto L_089BA0D4;
    case 415u: goto L_089BA0DC;
    case 416u: goto L_089BA0EC;
    case 417u: goto L_089BA0F8;
    case 418u: goto L_089BA104;
    case 419u: goto L_089BA10C;
    case 420u: goto L_089BA114;
    case 421u: goto L_089BA124;
    case 422u: goto L_089BA130;
    case 423u: goto L_089BA138;
    case 424u: goto L_089BA14C;
    case 425u: goto L_089BA154;
    case 426u: goto L_089BA158;
    case 427u: goto L_089BA170;
    case 428u: goto L_089BA188;
    case 429u: goto L_089BA1C8;
    case 430u: goto L_089BA228;
    case 431u: goto L_089BA244;
    case 432u: goto L_089BA27C;
    case 433u: goto L_089BA298;
    case 434u: goto L_089BA2A8;
    case 435u: goto L_089BA2C4;
    case 436u: goto L_089BA2C8;
    case 437u: goto L_089BA2D8;
    case 438u: goto L_089BA310;
    case 439u: goto L_089BA370;
    case 440u: goto L_089BA3AC;
    case 441u: goto L_089BA3BC;
    case 442u: goto L_089BA3D4;
    case 443u: goto L_089BA3E4;
    case 444u: goto L_089BA3EC;
    case 445u: goto L_089BA41C;
    case 446u: goto L_089BA448;
    case 447u: goto L_089BA460;
    case 448u: goto L_089BA470;
    case 449u: goto L_089BA4A0;
    case 450u: goto L_089BA4D4;
    case 451u: goto L_089BA4DC;
    case 452u: goto L_089BA4E4;
    case 453u: goto L_089BA51C;
    case 454u: goto L_089BA52C;
    case 455u: goto L_089BA540;
    case 456u: goto L_089BA54C;
    case 457u: goto L_089BA558;
    case 458u: goto L_089BA560;
    case 459u: goto L_089BA56C;
    case 460u: goto L_089BA588;
    case 461u: goto L_089BA5B4;
    case 462u: goto L_089BA5BC;
    case 463u: goto L_089BA5D0;
    case 464u: goto L_089BA5DC;
    case 465u: goto L_089BA5E0;
    case 466u: goto L_089BA5E8;
    case 467u: goto L_089BA5F0;
    case 468u: goto L_089BA604;
    case 469u: goto L_089BA618;
    case 470u: goto L_089BA620;
    case 471u: goto L_089BA628;
    case 472u: goto L_089BA630;
    case 473u: goto L_089BA644;
    case 474u: goto L_089BA654;
    case 475u: goto L_089BA65C;
    case 476u: goto L_089BA678;
    case 477u: goto L_089BA694;
    case 478u: goto L_089BA6D0;
    case 479u: goto L_089BA6E4;
    case 480u: goto L_089BA6EC;
    case 481u: goto L_089BA718;
    case 482u: goto L_089BA73C;
    case 483u: goto L_089BA748;
    case 484u: goto L_089BA754;
    case 485u: goto L_089BA760;
    case 486u: goto L_089BA774;
    case 487u: goto L_089BA77C;
    case 488u: goto L_089BA788;
    case 489u: goto L_089BA790;
    case 490u: goto L_089BA79C;
    case 491u: goto L_089BA7AC;
    case 492u: goto L_089BA7B4;
    case 493u: goto L_089BA7B8;
    case 494u: goto L_089BA7C0;
    case 495u: goto L_089BA7C8;
    case 496u: goto L_089BA7D0;
    case 497u: goto L_089BA7D8;
    case 498u: goto L_089BA804;
    case 499u: goto L_089BA814;
    case 500u: goto L_089BA840;
    case 501u: goto L_089BA850;
    case 502u: goto L_089BA854;
    case 503u: goto L_089BA85C;
    case 504u: goto L_089BA864;
    case 505u: goto L_089BA86C;
    case 506u: goto L_089BA874;
    case 507u: goto L_089BA87C;
    case 508u: goto L_089BA884;
    case 509u: goto L_089BA88C;
    case 510u: goto L_089BA898;
    case 511u: goto L_089BA8A0;
    case 512u: goto L_089BA8A8;
    case 513u: goto L_089BA8B4;
    case 514u: goto L_089BA8C0;
    case 515u: goto L_089BA8C8;
    case 516u: goto L_089BA8CC;
    case 517u: goto L_089BA8D4;
    case 518u: goto L_089BA8DC;
    case 519u: goto L_089BA8E4;
    case 520u: goto L_089BA8F4;
    case 521u: goto L_089BA8FC;
    case 522u: goto L_089BA904;
    case 523u: goto L_089BA90C;
    case 524u: goto L_089BA914;
    case 525u: goto L_089BA920;
    case 526u: goto L_089BA928;
    case 527u: goto L_089BA934;
    case 528u: goto L_089BA93C;
    case 529u: goto L_089BA944;
    case 530u: goto L_089BA950;
    case 531u: goto L_089BA958;
    case 532u: goto L_089BA964;
    case 533u: goto L_089BA96C;
    case 534u: goto L_089BA978;
    case 535u: goto L_089BA984;
    case 536u: goto L_089BA990;
    case 537u: goto L_089BA99C;
    case 538u: goto L_089BA9A4;
    case 539u: goto L_089BA9AC;
    case 540u: goto L_089BA9B8;
    case 541u: goto L_089BA9C0;
    case 542u: goto L_089BA9C8;
    case 543u: goto L_089BA9D0;
    case 544u: goto L_089BA9D8;
    case 545u: goto L_089BA9E0;
    case 546u: goto L_089BA9E8;
    case 547u: goto L_089BA9F0;
    case 548u: goto L_089BA9F8;
    case 549u: goto L_089BAA04;
    case 550u: goto L_089BAA0C;
    case 551u: goto L_089BAA14;
    case 552u: goto L_089BAA4C;
    case 553u: goto L_089BAA60;
    case 554u: goto L_089BAA68;
    case 555u: goto L_089BAA70;
    case 556u: goto L_089BAA78;
    case 557u: goto L_089BAA80;
    case 558u: goto L_089BAA88;
    case 559u: goto L_089BAA98;
    case 560u: goto L_089BAAA0;
    case 561u: goto L_089BAAA8;
    case 562u: goto L_089BAAB4;
    case 563u: goto L_089BAAC0;
    case 564u: goto L_089BAAC8;
    case 565u: goto L_089BAAD0;
    case 566u: goto L_089BAADC;
    case 567u: goto L_089BAAE8;
    case 568u: goto L_089BAAF4;
    case 569u: goto L_089BAAFC;
    case 570u: goto L_089BAB08;
    case 571u: goto L_089BAB14;
    case 572u: goto L_089BAB20;
    case 573u: goto L_089BAB28;
    case 574u: goto L_089BAB4C;
    case 575u: goto L_089BAB54;
    case 576u: goto L_089BAB68;
    case 577u: goto L_089BAB70;
    case 578u: goto L_089BAB84;
    case 579u: goto L_089BAB98;
    case 580u: goto L_089BABAC;
    case 581u: goto L_089BABB4;
    case 582u: goto L_089BABBC;
    case 583u: goto L_089BABC4;
    case 584u: goto L_089BABF0;
    case 585u: goto L_089BABF8;
    case 586u: goto L_089BAC00;
    case 587u: goto L_089BAC08;
    case 588u: goto L_089BAC18;
    case 589u: goto L_089BAC2C;
    case 590u: goto L_089BAC38;
    case 591u: goto L_089BAC44;
    case 592u: goto L_089BAC48;
    case 593u: goto L_089BAC54;
    case 594u: goto L_089BAC60;
    case 595u: goto L_089BAC64;
    case 596u: goto L_089BAC70;
    case 597u: goto L_089BAC7C;
    case 598u: goto L_089BAC80;
    case 599u: goto L_089BAC8C;
    case 600u: goto L_089BAC98;
    case 601u: goto L_089BAC9C;
    case 602u: goto L_089BACA8;
    case 603u: goto L_089BACB4;
    case 604u: goto L_089BACB8;
    case 605u: goto L_089BACC0;
    case 606u: goto L_089BACC8;
    case 607u: goto L_089BACE4;
    case 608u: goto L_089BACF0;
    case 609u: goto L_089BAD1C;
    case 610u: goto L_089BAD30;
    case 611u: goto L_089BAD38;
    case 612u: goto L_089BAD54;
    case 613u: goto L_089BAD70;
    case 614u: goto L_089BAD88;
    case 615u: goto L_089BADA4;
    case 616u: goto L_089BAE90;
    case 617u: goto L_089BAEB0;
    case 618u: goto L_089BAEB8;
    case 619u: goto L_089BAEE4;
    case 620u: goto L_089BAF04;
    case 621u: goto L_089BAF08;
    case 622u: goto L_089BAF10;
    case 623u: goto L_089BAF1C;
    case 624u: goto L_089BAF28;
    case 625u: goto L_089BAF34;
    case 626u: goto L_089BAF58;
    case 627u: goto L_089BAF60;
    case 628u: goto L_089BAF64;
    case 629u: goto L_089BAF6C;
    case 630u: goto L_089BAF78;
    case 631u: goto L_089BAF94;
    case 632u: goto L_089BAF9C;
    case 633u: goto L_089BAFA0;
    case 634u: goto L_089BAFA8;
    case 635u: goto L_089BAFB0;
    case 636u: goto L_089BAFC0;
    case 637u: goto L_089BAFC8;
    case 638u: goto L_089BAFD4;
    case 639u: goto L_089BAFF0;
    case 640u: goto L_089BAFF8;
    case 641u: goto L_089BB000;
    case 642u: goto L_089BB008;
    case 643u: goto L_089BB010;
    case 644u: goto L_089BB018;
    case 645u: goto L_089BB020;
    case 646u: goto L_089BB028;
    case 647u: goto L_089BB060;
    case 648u: goto L_089BB068;
    case 649u: goto L_089BB070;
    case 650u: goto L_089BB094;
    case 651u: goto L_089BB098;
    case 652u: goto L_089BB0C0;
    case 653u: goto L_089BB0D0;
    case 654u: goto L_089BB0D8;
    case 655u: goto L_089BB0E4;
    case 656u: goto L_089BB0F0;
    case 657u: goto L_089BB0F8;
    case 658u: goto L_089BB100;
    case 659u: goto L_089BB104;
    case 660u: goto L_089BB124;
    case 661u: goto L_089BB12C;
    case 662u: goto L_089BB138;
    case 663u: goto L_089BB140;
    case 664u: goto L_089BB158;
    case 665u: goto L_089BB168;
    case 666u: goto L_089BB170;
    case 667u: goto L_089BB174;
    case 668u: goto L_089BB17C;
    case 669u: goto L_089BB19C;
    case 670u: goto L_089BB1B8;
    case 671u: goto L_089BB1CC;
    case 672u: goto L_089BB1D8;
    case 673u: goto L_089BB1E8;
    case 674u: goto L_089BB1F0;
    case 675u: goto L_089BB200;
    case 676u: goto L_089BB208;
    case 677u: goto L_089BB21C;
    case 678u: goto L_089BB224;
    case 679u: goto L_089BB230;
    case 680u: goto L_089BB24C;
    case 681u: goto L_089BB258;
    case 682u: goto L_089BB260;
    case 683u: goto L_089BB268;
    case 684u: goto L_089BB270;
    case 685u: goto L_089BB278;
    case 686u: goto L_089BB280;
    case 687u: goto L_089BB288;
    case 688u: goto L_089BB290;
    case 689u: goto L_089BB298;
    case 690u: goto L_089BB2A8;
    case 691u: goto L_089BB2B0;
    case 692u: goto L_089BB2B8;
    case 693u: goto L_089BB2C8;
    case 694u: goto L_089BB2D4;
    case 695u: goto L_089BB2E0;
    case 696u: goto L_089BB2E8;
    case 697u: goto L_089BB2EC;
    case 698u: goto L_089BB2F4;
    case 699u: goto L_089BB310;
    case 700u: goto L_089BB31C;
    case 701u: goto L_089BB328;
    case 702u: goto L_089BB330;
    case 703u: goto L_089BB334;
    case 704u: goto L_089BB33C;
    case 705u: goto L_089BB344;
    case 706u: goto L_089BB354;
    case 707u: goto L_089BB368;
    case 708u: goto L_089BB374;
    case 709u: goto L_089BB380;
    case 710u: goto L_089BB398;
    case 711u: goto L_089BB3A4;
    case 712u: goto L_089BB3B8;
    case 713u: goto L_089BB3D0;
    case 714u: goto L_089BB3D8;
    case 715u: goto L_089BB3E0;
    case 716u: goto L_089BB404;
    case 717u: goto L_089BB438;
    case 718u: goto L_089BB448;
    case 719u: goto L_089BB484;
    case 720u: goto L_089BB48C;
    case 721u: goto L_089BB49C;
    case 722u: goto L_089BB4B0;
    case 723u: goto L_089BB4C0;
    case 724u: goto L_089BB4C8;
    case 725u: goto L_089BB4E4;
    case 726u: goto L_089BB4F4;
    case 727u: goto L_089BB520;
    case 728u: goto L_089BB530;
    case 729u: goto L_089BB538;
    case 730u: goto L_089BB548;
    case 731u: goto L_089BB54C;
    case 732u: goto L_089BB554;
    case 733u: goto L_089BB55C;
    case 734u: goto L_089BB564;
    case 735u: goto L_089BB568;
    case 736u: goto L_089BB570;
    case 737u: goto L_089BB58C;
    case 738u: goto L_089BB594;
    case 739u: goto L_089BB5B0;
    case 740u: goto L_089BB5CC;
    case 741u: goto L_089BB604;
    case 742u: goto L_089BB650;
    case 743u: goto L_089BB664;
    case 744u: goto L_089BB66C;
    case 745u: goto L_089BB674;
    case 746u: goto L_089BB6D4;
    case 747u: goto L_089BB6DC;
    case 748u: goto L_089BB6E8;
    case 749u: goto L_089BB6F4;
    case 750u: goto L_089BB6FC;
    case 751u: goto L_089BB700;
    case 752u: goto L_089BB704;
    case 753u: goto L_089BB710;
    case 754u: goto L_089BB718;
    case 755u: goto L_089BB75C;
    case 756u: goto L_089BB764;
    case 757u: goto L_089BB76C;
    case 758u: goto L_089BB778;
    case 759u: goto L_089BB784;
    case 760u: goto L_089BB78C;
    case 761u: goto L_089BB790;
    case 762u: goto L_089BB794;
    case 763u: goto L_089BB7A0;
    case 764u: goto L_089BB7A8;
    case 765u: goto L_089BB7E0;
    case 766u: goto L_089BB7EC;
    case 767u: goto L_089BB7F4;
    case 768u: goto L_089BB7FC;
    case 769u: goto L_089BB804;
    case 770u: goto L_089BB814;
    case 771u: goto L_089BB83C;
    case 772u: goto L_089BB860;
    case 773u: goto L_089BB888;
    case 774u: goto L_089BB8A8;
    case 775u: goto L_089BB8CC;
    case 776u: goto L_089BB8D8;
    case 777u: goto L_089BB8E4;
    case 778u: goto L_089BB8F0;
    case 779u: goto L_089BB8F8;
    case 780u: goto L_089BB8FC;
    case 781u: goto L_089BB904;
    case 782u: goto L_089BB924;
    case 783u: goto L_089BB930;
    case 784u: goto L_089BB940;
    case 785u: goto L_089BB94C;
    case 786u: goto L_089BB958;
    case 787u: goto L_089BB96C;
    case 788u: goto L_089BB9B0;
    case 789u: goto L_089BB9B8;
    case 790u: goto L_089BB9BC;
    case 791u: goto L_089BB9EC;
    case 792u: goto L_089BBA4C;
    case 793u: goto L_089BBA5C;
    case 794u: goto L_089BBA64;
    case 795u: goto L_089BBA6C;
    case 796u: goto L_089BBA7C;
    case 797u: goto L_089BBA84;
    case 798u: goto L_089BBA8C;
    case 799u: goto L_089BBA9C;
    case 800u: goto L_089BBAA8;
    case 801u: goto L_089BBAB0;
    case 802u: goto L_089BBAB8;
    case 803u: goto L_089BBAC0;
    case 804u: goto L_089BBAFC;
    case 805u: goto L_089BBB04;
    case 806u: goto L_089BBB18;
    case 807u: goto L_089BBB5C;
    case 808u: goto L_089BBBA0;
    case 809u: goto L_089BBBA8;
    case 810u: goto L_089BBBB0;
    case 811u: goto L_089BBBD0;
    case 812u: goto L_089BBBE0;
    case 813u: goto L_089BBC0C;
    case 814u: goto L_089BBC10;
    case 815u: goto L_089BBC2C;
    case 816u: goto L_089BBC34;
    case 817u: goto L_089BBC44;
    case 818u: goto L_089BBC48;
    case 819u: goto L_089BBC80;
    case 820u: goto L_089BBC8C;
    case 821u: goto L_089BBC9C;
    case 822u: goto L_089BBCA8;
    case 823u: goto L_089BBCAC;
    case 824u: goto L_089BBCF4;
    case 825u: goto L_089BBD10;
    case 826u: goto L_089BBD40;
    case 827u: goto L_089BBD68;
    case 828u: goto L_089BBDB4;
    case 829u: goto L_089BBDE4;
    case 830u: goto L_089BBDFC;
    case 831u: goto L_089BBE48;
    case 832u: goto L_089BBE78;
    case 833u: goto L_089BBE94;
    case 834u: goto L_089BBE9C;
    case 835u: goto L_089BBEA4;
    case 836u: goto L_089BBEC8;
    case 837u: goto L_089BBEEC;
    case 838u: goto L_089BBEF8;
    case 839u: goto L_089BBF08;
    case 840u: goto L_089BBF10;
    case 841u: goto L_089BBF1C;
    case 842u: goto L_089BBF2C;
    case 843u: goto L_089BBF60;
    case 844u: goto L_089BBFC0;
    case 845u: goto L_089BBFCC;
    case 846u: goto L_089BBFDC;
    case 847u: goto L_089BBFE4;
    case 848u: goto L_089BBFEC;
    case 849u: goto L_089BBFF4;
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
L_089B8000:
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(4192), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 738u, 0x089B7FFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089B8014;
    }
L_089B8014:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4234), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B8020:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    goto L_089B8038;
L_089B8038:
    aot_gpr_31 = (0x089B8040u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8040u) goto L_089B8040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8040:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(26320), ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B8038;
      }
      goto L_089B8054;
    }
L_089B8054:
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
L_089B8068:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089B808Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B808Cu) goto L_089B808C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B808C:
    aot_gpr_4 = (ctx.gpr[2] << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B80B0;
      }
      goto L_089B809C;
    }
L_089B809C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B80A8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B80A8u) goto L_089B80A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B80A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089B80B4;
      }
      goto L_089B80B0;
    }
L_089B80B0:
    ctx.gpr[2] = (0u | 1u);
    goto L_089B80B4;
L_089B80B4:
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
L_089B80C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (15488u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 63u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_31 = (0x089B8100u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 951u, 0x08B578B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8100u) goto L_089B8100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8100:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6254));
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 63u);
        goto L_089B8118;
    }
    goto L_089B8118;
L_089B8118:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_16 = (aot_gpr_5 + aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B8158;
      }
      goto L_089B8134;
    }
L_089B8134:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(63));
    aot_gpr_16 = (0u | 107u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 107 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_16 = (aot_gpr_4 | 0u);
        goto L_089B8148;
    }
    goto L_089B8148;
L_089B8148:
    aot_gpr_4 = (aot_gpr_16 << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_089B817C;
      }
      goto L_089B8158;
    }
L_089B8158:
    aot_gpr_4 = (0u | 63u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_16);
    aot_gpr_16 = (0u | 20u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_16 = (aot_gpr_4 | 0u);
        goto L_089B8170;
    }
    goto L_089B8170;
L_089B8170:
    aot_gpr_4 = (aot_gpr_16 << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_089B817C;
L_089B817C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B8190:
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[2] = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_089B81CC;
      }
      goto L_089B81A4;
    }
L_089B81A4:
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
        goto L_089B81D4;
    }
    goto L_089B81C4;
L_089B81C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B822C;
      }
      goto L_089B81CC;
    }
L_089B81CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089B822C;
      }
      goto L_089B81D4;
    }
L_089B81D4:
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_fpr_13 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[2]);
        goto L_089B81FC;
    }
    goto L_089B81F4;
L_089B81F4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[2]);
    goto L_089B81FC;
L_089B81FC:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.gpr[2] = (0u | 127u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    ctx.gpr[2] = (aot_gpr_4 | 0u);
        goto L_089B8224;
    }
    goto L_089B8224;
L_089B8224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_089B822C;
      }
      goto L_089B822C;
    }
L_089B822C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B8234:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words); }
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x089B8294u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8294u) goto L_089B8294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8294:
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
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B8308;
      }
      goto L_089B82F4;
    }
L_089B82F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B8308;
      }
      goto L_089B8300;
    }
L_089B8300:
    aot_gpr_31 = (0x089B8308u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8308u) goto L_089B8308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8308:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B8320:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), ctx.gpr[9]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[11] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x089B8384u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8384u) goto L_089B8384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8384:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089B8394;
      }
      goto L_089B838C;
    }
L_089B838C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B83A8;
      }
      goto L_089B8394;
    }
L_089B8394:
    aot_gpr_4 = (0u | 127u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089B83A8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B83A8u) goto L_089B83A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B83A8:
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
L_089B83C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 & 65535u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089B840C;
      }
      goto L_089B83F8;
    }
L_089B83F8:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089B8414;
      }
      goto L_089B8404;
    }
L_089B8404:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B840C;
    }
L_089B840C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B8414;
    }
L_089B8414:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B841C;
    }
L_089B841C:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B8424;
    }
L_089B8424:
    aot_gpr_6 = (aot_gpr_5 << 6u);
    ctx.gpr[7] = (aot_gpr_5 << 3u);
    ctx.gpr[17] = (aot_gpr_6 - ctx.gpr[7]);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6264)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B8440;
    }
L_089B8440:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[18]) < 238 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B844C;
    }
L_089B844C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6256)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_089B84B4;
      }
      goto L_089B845C;
    }
L_089B845C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(21524)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 40 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089B8498;
      }
      goto L_089B846C;
    }
L_089B846C:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6266), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6308), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(21524));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(21364), aot_gpr_5);
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B8498;
    }
L_089B8498:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B84AC;
      }
      goto L_089B84A4;
    }
L_089B84A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B84AC;
    }
L_089B84AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B84B4;
    }
L_089B84B4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6308)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[7] = (2234u << 16u);
      if (branch_taken) {
          goto L_089B8580;
      }
      goto L_089B84C8;
    }
L_089B84C8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6016));
    aot_gpr_6 = (ctx.gpr[18] + ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_4);
    goto L_089B84D8;
L_089B84D8:
    aot_gpr_16 = (ctx.gpr[17] + aot_gpr_16);
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(6266)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_089B856C;
      }
      goto L_089B84F4;
    }
L_089B84F4:
    ctx.gpr[19] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089B8548;
      }
      goto L_089B8504;
    }
L_089B8504:
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(6268));
    ctx.gpr[20] = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(6266));
    aot_gpr_6 = (ctx.gpr[20] + ctx.gpr[20]);
    aot_gpr_31 = (0x089B8520u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8520u) goto L_089B8520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8520:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(6280));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(6276));
    aot_gpr_31 = (0x089B8534u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8534u) goto L_089B8534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8534:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(6296));
    aot_gpr_5 = (ctx.gpr[19] + static_cast<std::uint32_t>(6292));
    aot_gpr_31 = (0x089B8544u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8544u) goto L_089B8544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8544:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6308)));
    goto L_089B8548;
L_089B8548:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(6266), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(6276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(6292), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_089B8564;
      }
      goto L_089B855C;
    }
L_089B855C:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6308), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089B8564;
L_089B8564:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B856C;
    }
L_089B856C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_16 = (aot_gpr_4 + aot_gpr_4);
      if (branch_taken) {
          goto L_089B84D8;
      }
      goto L_089B8580;
    }
L_089B8580:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B858C;
    }
L_089B858C:
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[17] + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(6266), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6292), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6308), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089B85B0;
L_089B85B0:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B85D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-304));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26344)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 7u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(296), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(300), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B86D0;
      }
      goto L_089B8600;
    }
L_089B8600:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
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
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(21264));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_20;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21268), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{0u, ctx.gpr[2], ctx.gpr[2], 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x089B8670u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8670u) goto L_089B8670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8670:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B86C8;
      }
      goto L_089B8678;
    }
L_089B8678:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
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
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21344), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B86C8;
    }
L_089B86C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21344), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B86D0;
    }
L_089B86D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26344)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B87B4;
      }
      goto L_089B86E4;
    }
L_089B86E4:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
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
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(21280));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21284), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{0u, ctx.gpr[2], ctx.gpr[2], 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x089B8754u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8754u) goto L_089B8754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8754:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B87AC;
      }
      goto L_089B875C;
    }
L_089B875C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
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
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21348), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B87AC;
    }
L_089B87AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21348), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B87B4;
    }
L_089B87B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26344)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B8898;
      }
      goto L_089B87C8;
    }
L_089B87C8:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
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
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(21296));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21296), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{0u, ctx.gpr[2], ctx.gpr[2], 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x089B8838u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8838u) goto L_089B8838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8838:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B8890;
      }
      goto L_089B8840;
    }
L_089B8840:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
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
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21352), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B8890;
    }
L_089B8890:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21352), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B8898;
    }
L_089B8898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26344)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B897C;
      }
      goto L_089B88AC;
    }
L_089B88AC:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
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
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(21312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_20;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21312), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{0u, ctx.gpr[2], ctx.gpr[2], 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x089B891Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B891Cu) goto L_089B891C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B891C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B8974;
      }
      goto L_089B8924;
    }
L_089B8924:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
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
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21356), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B8974;
    }
L_089B8974:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21356), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B897C;
    }
L_089B897C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26344)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B8990;
    }
L_089B8990:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(21328));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_20;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21336), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x089B89F4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B89F4u) goto L_089B89F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B89F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B8A10;
      }
      goto L_089B89FC;
    }
L_089B89FC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21360), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B8A10;
    }
L_089B8A10:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(21360), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_089B8A14;
L_089B8A14:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B8A2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[30] = (aot_gpr_16 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_gpr_31 = (0x089B8A98u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8A98u) goto L_089B8A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8A98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B8AB4;
      }
      goto L_089B8AA0;
    }
L_089B8AA0:
    ctx.gpr[20] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 4u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] >> 1u);
      if (branch_taken) {
          goto L_089B8AD0;
      }
      goto L_089B8AB4;
    }
L_089B8AB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 4u));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 4u));
    goto L_089B8AD0;
L_089B8AD0:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (16347u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 34079u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (16475u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 34079u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_6 = (20352u << 16u);
    ctx.gpr[7] = (16968u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_4 = (15872u << 16u);
    aot_fpr_20 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[21] = (0u | 5u);
    goto L_089B8B24;
L_089B8B24:
    aot_gpr_31 = (0x089B8B2Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8B2Cu) goto L_089B8B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8B2C:
    ctx.gpr[17] = (ctx.gpr[18] << 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (aot_gpr_16 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089B8B6C;
      }
      goto L_089B8B38;
    }
L_089B8B38:
    aot_gpr_4 = (ctx.gpr[18] & 3u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.hi);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (static_cast<std::int32_t>(aot_gpr_4) < 0) {
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[30];
        goto L_089B8B60;
    }
    goto L_089B8B60;
L_089B8B60:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(21344), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089B8B6C;
L_089B8B6C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8B80;
    }
L_089B8B80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8B94;
    }
L_089B8B94:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(88)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089B8BB4;
      }
      goto L_089B8BAC;
    }
L_089B8BAC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8BB4;
    }
L_089B8BB4:
    aot_gpr_31 = (0x089B8BBCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8BBCu) goto L_089B8BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8BBC:
    if (ctx.gpr[2] == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
        goto L_089B8BDC;
    }
    goto L_089B8BC4;
L_089B8BC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089B8BEC;
      }
      goto L_089B8BDC;
    }
L_089B8BDC:
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[22];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089B8BEC;
L_089B8BEC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8BFC;
    }
L_089B8BFC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B8C14u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    goto L_089B8190;
L_089B8C14:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8C28;
    }
L_089B8C28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B8CB4;
      }
      goto L_089B8C48;
    }
L_089B8C48:
    aot_gpr_31 = (0x089B8C50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8C50u) goto L_089B8C50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8C50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B8C7C;
      }
      goto L_089B8C58;
    }
L_089B8C58:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_089B8CB4;
      }
      goto L_089B8C7C;
    }
L_089B8C7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B8C8Cu);
    aot_gpr_5 = (aot_gpr_5 >> 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089B7A84, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8C8Cu) goto L_089B8C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8C8C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089B8CA8;
      }
      goto L_089B8C98;
    }
L_089B8C98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
      if (branch_taken) {
          goto L_089B8CB4;
      }
      goto L_089B8CA8;
    }
L_089B8CA8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_089B8CB4;
L_089B8CB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] << 4u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21264));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B8CE0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8CE0u) goto L_089B8CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8CE0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B8B24;
      }
      goto L_089B8CF4;
    }
L_089B8CF4:
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
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
L_089B8D4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(144)));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089B8D94;
      }
      goto L_089B8D84;
    }
L_089B8D84:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4234)));
      if (branch_taken) {
          goto L_089B8DA0;
      }
      goto L_089B8D94;
    }
L_089B8D94:
    ctx.gpr[18] = (aot_gpr_16 | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4234)));
    goto L_089B8DA0;
L_089B8DA0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[20] << 5u);
      if (branch_taken) {
          goto L_089B8FEC;
      }
      goto L_089B8DB0;
    }
L_089B8DB0:
    aot_gpr_6 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[19] = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_4 << 3u);
    ctx.gpr[20] = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_16 + ctx.gpr[19]);
    ctx.gpr[20] = (aot_gpr_16 + ctx.gpr[20]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[22] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[17]);
    goto L_089B8DE8;
L_089B8DE8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4192)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B8E14;
      }
      goto L_089B8E0C;
    }
L_089B8E0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B8FD8;
      }
      goto L_089B8E14;
    }
L_089B8E14:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (aot_gpr_29 + ctx.gpr[17]);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(4234)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (aot_gpr_4 << 5u);
      if (branch_taken) {
          goto L_089B8EC4;
      }
      goto L_089B8E38;
    }
L_089B8E38:
    ctx.gpr[11] = (0u - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] << 6u);
    ctx.gpr[2] = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (aot_gpr_4 + ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] << 3u);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[10] = (aot_gpr_16 + ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[8]);
    goto L_089B8E64;
L_089B8E64:
    ctx.gpr[2] = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(4192)));
    ctx.gpr[2] = (ctx.gpr[2] << 5u);
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[2] = (aot_gpr_4 + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(160));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
      if (branch_taken) {
          goto L_089B8E94;
      }
      goto L_089B8E88;
    }
L_089B8E88:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_089B8EB8;
      }
      goto L_089B8E94;
    }
L_089B8E94:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
      if (branch_taken) {
          goto L_089B8EB0;
      }
      goto L_089B8EA4;
    }
L_089B8EA4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_089B8EB8;
      }
      goto L_089B8EB0;
    }
L_089B8EB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_089B8EC4;
      }
      goto L_089B8EB8;
    }
L_089B8EB8:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089B8E64;
      }
      goto L_089B8EC4;
    }
L_089B8EC4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B8FD8;
      }
      goto L_089B8ED0;
    }
L_089B8ED0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B8F10;
      }
      goto L_089B8EE0;
    }
L_089B8EE0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089B8F10;
      }
      goto L_089B8EEC;
    }
L_089B8EEC:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089B8EFCu);
    aot_gpr_6 = (0u | 96u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8EFCu) goto L_089B8EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8EFC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B8F08u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8F08u) goto L_089B8F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8F08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4234)));
      if (branch_taken) {
          goto L_089B8FD8;
      }
      goto L_089B8F10;
    }
L_089B8F10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B8FD8;
      }
      goto L_089B8F1C;
    }
L_089B8F1C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089B8FB4;
      }
      goto L_089B8F28;
    }
L_089B8F28:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[23];
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089B8F58;
      }
      goto L_089B8F34;
    }
L_089B8F34:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
      if (branch_taken) {
          goto L_089B8F58;
      }
      goto L_089B8F50;
    }
L_089B8F50:
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(80))))));
    goto L_089B8F58;
L_089B8F58:
    aot_gpr_4 = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_4);
      if (branch_taken) {
          goto L_089B8F90;
      }
      goto L_089B8F6C;
    }
L_089B8F6C:
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(68)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(68), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B8F9C;
      }
      goto L_089B8F88;
    }
L_089B8F88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B8FB4;
      }
      goto L_089B8F90;
    }
L_089B8F90:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4234)));
      if (branch_taken) {
          goto L_089B8FD8;
      }
      goto L_089B8F9C;
    }
L_089B8F9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089B8FB4;
      }
      goto L_089B8FAC;
    }
L_089B8FAC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), aot_gpr_4);
    goto L_089B8FB4;
L_089B8FB4:
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089B8FC8u);
    aot_gpr_6 = (0u | 96u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8FC8u) goto L_089B8FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8FC8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B8FD4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B8FD4u) goto L_089B8FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B8FD4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4234)));
    goto L_089B8FD8;
L_089B8FD8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089B8DE8;
      }
      goto L_089B8FEC;
    }
L_089B8FEC:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
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
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B901C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const std::uint32_t aot_run_words[8]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089B90A8;
      }
      goto L_089B905C;
    }
L_089B905C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    goto L_089B9060;
L_089B9060:
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    ctx.gpr[7] = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_089B9060;
    }
    goto L_089B90A8;
L_089B90A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4234)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B95B4;
      }
      goto L_089B90C4;
    }
L_089B90C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    goto L_089B90C8;
L_089B90C8:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[22]);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(4192)));
    aot_gpr_6 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[21] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_089B9128;
      }
      goto L_089B9120;
    }
L_089B9120:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B9594;
      }
      goto L_089B9128;
    }
L_089B9128:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9594;
      }
      goto L_089B913C;
    }
L_089B913C:
    aot_gpr_4 = (ctx.gpr[20] << 5u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4240));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089B9180;
      }
      goto L_089B9160;
    }
L_089B9160:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089B9180;
      }
      goto L_089B9170;
    }
L_089B9170:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089B9188;
      }
      goto L_089B9180;
    }
L_089B9180:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B957C;
      }
      goto L_089B9188;
    }
L_089B9188:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9214;
      }
      goto L_089B9194;
    }
L_089B9194:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(26344)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B91C0;
      }
      goto L_089B91A4;
    }
L_089B91A4:
    aot_gpr_4 = (ctx.gpr[20] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B91B8;
      }
      goto L_089B91B0;
    }
L_089B91B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089B91D8;
      }
      goto L_089B91B8;
    }
L_089B91B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_089B91D8;
      }
      goto L_089B91C0;
    }
L_089B91C0:
    aot_gpr_4 = (ctx.gpr[20] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B91D4;
      }
      goto L_089B91CC;
    }
L_089B91CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_089B91D8;
      }
      goto L_089B91D4;
    }
L_089B91D4:
    aot_gpr_4 = (0u | 1u);
    goto L_089B91D8;
L_089B91D8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9214;
      }
      goto L_089B91E0;
    }
L_089B91E0:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x089B91ECu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B91ECu) goto L_089B91EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B91EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089B9214;
      }
      goto L_089B91F4;
    }
L_089B91F4:
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_089B957C;
      }
      goto L_089B9214;
    }
L_089B9214:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9240;
      }
      goto L_089B9234;
    }
L_089B9234:
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089B957C;
      }
      goto L_089B9240;
    }
L_089B9240:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B926C;
      }
      goto L_089B924C;
    }
L_089B924C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x089B9258u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9258u) goto L_089B9258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9258:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089B926C;
      }
      goto L_089B9260;
    }
L_089B9260:
    aot_mem.aot_direct_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089B957C;
      }
      goto L_089B926C;
    }
L_089B926C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B9304;
      }
      goto L_089B9278;
    }
L_089B9278:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089B92A4;
      }
      goto L_089B9284;
    }
L_089B9284:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (0u | 63u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
        goto L_089B9298;
    }
    goto L_089B9298;
L_089B9298:
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] << 1u);
      if (branch_taken) {
          goto L_089B92A8;
      }
      goto L_089B92A4;
    }
L_089B92A4:
    ctx.gpr[19] = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    goto L_089B92A8;
L_089B92A8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x089B92BCu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B92BCu) goto L_089B92BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B92BC:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(66)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x089B92CCu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B92CCu) goto L_089B92CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B92CC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x089B92DCu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 507u, 0x0880A3C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B92DCu) goto L_089B92DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B92DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B92E8;
      }
      goto L_089B92E4;
    }
L_089B92E4:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B92E8;
L_089B92E8:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089B92FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B92FCu) goto L_089B92FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B92FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B9574;
      }
      goto L_089B9304;
    }
L_089B9304:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x089B9320u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 666u, 0x089B788Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9320u) goto L_089B9320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9320:
    aot_gpr_31 = (0x089B9328u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9328u) goto L_089B9328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9328:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B9330;
      }
      goto L_089B9330;
    }
L_089B9330:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_089B93B0;
      }
      goto L_089B9340;
    }
L_089B9340:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089B9364;
      }
      goto L_089B934C;
    }
L_089B934C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6000));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_089B935C;
    }
    goto L_089B935C;
L_089B935C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B9374;
      }
      goto L_089B9364;
    }
L_089B9364:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6000));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_089B9374;
    }
    goto L_089B9374;
L_089B9374:
    aot_gpr_31 = (0x089B937Cu);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B937Cu) goto L_089B937C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B937C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B93A0;
      }
      goto L_089B9384;
    }
L_089B9384:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[19]);
    aot_gpr_4 = (16192u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089B93A0;
L_089B93A0:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089B93B0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B93B0u) goto L_089B93B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B93B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089B93FC;
      }
      goto L_089B93C0;
    }
L_089B93C0:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089B93E4;
      }
      goto L_089B93CC;
    }
L_089B93CC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(10));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_089B93DC;
    }
    goto L_089B93DC;
L_089B93DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089B93F8;
      }
      goto L_089B93E4;
    }
L_089B93E4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-10));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_089B93F4;
    }
    goto L_089B93F4;
L_089B93F4:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_089B93F8;
L_089B93F8:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089B93FC;
L_089B93FC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089B9420;
      }
      goto L_089B9408;
    }
L_089B9408:
    aot_gpr_5 = (0u | 63u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_089B9418;
    }
    goto L_089B9418;
L_089B9418:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 << 1u);
      if (branch_taken) {
          goto L_089B9420;
      }
      goto L_089B9420;
    }
L_089B9420:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089B9454;
      }
      goto L_089B9430;
    }
L_089B9430:
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
    goto L_089B9434;
L_089B9434:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(26309)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B9448;
      }
      goto L_089B9440;
    }
L_089B9440:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_089B9458;
      }
      goto L_089B9448;
    }
L_089B9448:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_5);
      if (branch_taken) {
          goto L_089B9434;
      }
      goto L_089B9454;
    }
L_089B9454:
    aot_gpr_5 = (0u | 0u);
    goto L_089B9458;
L_089B9458:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089B949C;
      }
      goto L_089B9460;
    }
L_089B9460:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26319)));
    aot_gpr_6 = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_31 = (0x089B9494u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9494u) goto L_089B9494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9494:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B94E0;
      }
      goto L_089B949C;
    }
L_089B949C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26319)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 127 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089B94CC;
      }
      goto L_089B94AC;
    }
L_089B94AC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26319)));
    aot_gpr_6 = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    goto L_089B94CC;
L_089B94CC:
    aot_gpr_6 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089B94E0u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B94E0u) goto L_089B94E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B94E0:
    aot_gpr_5 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B94F0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089B8234;
L_089B94F0:
    ctx.gpr[19] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B9504u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_089B80C8;
L_089B9504:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[21];
      if (branch_taken) {
          goto L_089B9564;
      }
      goto L_089B9510;
    }
L_089B9510:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9538;
      }
      goto L_089B951C;
    }
L_089B951C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[19] | 0u);
        goto L_089B9530;
    }
    goto L_089B9530;
L_089B9530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089B9550;
      }
      goto L_089B9538;
    }
L_089B9538:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-10));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[19] | 0u);
        goto L_089B954C;
    }
    goto L_089B954C;
L_089B954C:
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    goto L_089B9550;
L_089B9550:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_6 = (ctx.gpr[19] & 255u);
    aot_gpr_31 = (0x089B9560u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9560u) goto L_089B9560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9560:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_089B9564;
L_089B9564:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_6 = (ctx.gpr[19] & 255u);
    aot_gpr_31 = (0x089B9574u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9574u) goto L_089B9574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9574:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B9594;
      }
      goto L_089B957C;
    }
L_089B957C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B913C;
      }
      goto L_089B9594;
    }
L_089B9594:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4234)));
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_089B90C8;
    }
    goto L_089B95B4;
L_089B95B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9648;
      }
      goto L_089B95C8;
    }
L_089B95C8:
    aot_gpr_4 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4240));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
      if (branch_taken) {
          goto L_089B95F8;
      }
      goto L_089B95F0;
    }
L_089B95F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B9630;
      }
      goto L_089B95F8;
    }
L_089B95F8:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089B9630;
      }
      goto L_089B9604;
    }
L_089B9604:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x089B9614u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9614u) goto L_089B9614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9614:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    goto L_089B9630;
L_089B9630:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B95C8;
      }
      goto L_089B9648;
    }
L_089B9648:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4234)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(7)));
        goto L_089B9A4C;
    }
    goto L_089B9664;
L_089B9664:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    goto L_089B9668;
L_089B9668:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(4192)));
    aot_gpr_6 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B96B8;
    }
L_089B96B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B96C4;
    }
L_089B96C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6264)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B96EC;
      }
      goto L_089B96E4;
    }
L_089B96E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B96EC;
    }
L_089B96EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6028));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B970C;
      }
      goto L_089B9704;
    }
L_089B9704:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B970C;
    }
L_089B970C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B974C;
      }
      goto L_089B971C;
    }
L_089B971C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B974C;
      }
      goto L_089B9728;
    }
L_089B9728:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089B974C;
      }
      goto L_089B9734;
    }
L_089B9734:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), aot_gpr_5);
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B974C;
    }
L_089B974C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B9760;
    }
L_089B9760:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(7)));
    goto L_089B9764;
L_089B9764:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[22] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    aot_gpr_5 = (ctx.gpr[22] << 5u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[20] = (aot_gpr_16 + aot_gpr_5);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4240));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089B9A10;
      }
      goto L_089B9798;
    }
L_089B9798:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089B97CC;
      }
      goto L_089B97A4;
    }
L_089B97A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26340)));
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089B97C4;
      }
      goto L_089B97BC;
    }
L_089B97BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B9A10;
      }
      goto L_089B97C4;
    }
L_089B97C4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), aot_gpr_4);
    goto L_089B97CC;
L_089B97CC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089B97DCu);
    aot_gpr_6 = (0u | 96u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B97DCu) goto L_089B97DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B97DC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B980C;
      }
      goto L_089B97E8;
    }
L_089B97E8:
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B97F8u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089B8234;
L_089B97F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B9808u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_089B80C8;
L_089B9808:
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089B980C;
L_089B980C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9838;
      }
      goto L_089B9818;
    }
L_089B9818:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (0u | 63u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[21] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_089B982C;
    }
    goto L_089B982C;
L_089B982C:
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 1u);
      if (branch_taken) {
          goto L_089B983C;
      }
      goto L_089B9838;
    }
L_089B9838:
    ctx.gpr[21] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    goto L_089B983C;
L_089B983C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(81)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089B9860u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 474u, 0x0880A214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9860u) goto L_089B9860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9860:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B98DC;
      }
      goto L_089B986C;
    }
L_089B986C:
    aot_gpr_31 = (0x089B9874u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9874u) goto L_089B9874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9874:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089B98DC;
      }
      goto L_089B987C;
    }
L_089B987C:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_089B9894;
      }
      goto L_089B9888;
    }
L_089B9888:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_089B9894;
L_089B9894:
    aot_gpr_4 = (16192u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (20224u << 16u);
      if (branch_taken) {
          goto L_089B98C4;
      }
      goto L_089B98B8;
    }
L_089B98B8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089B98DC;
      }
      goto L_089B98C4;
    }
L_089B98C4:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.gpr[23] = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[23] = (aot_gpr_4 + ctx.gpr[23]);
    goto L_089B98DC;
L_089B98DC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089B98ECu);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B98ECu) goto L_089B98EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B98EC:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9920;
      }
      goto L_089B98FC;
    }
L_089B98FC:
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[23]);
    goto L_089B9900;
L_089B9900:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(26309)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B9914;
      }
      goto L_089B990C;
    }
L_089B990C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089B9924;
      }
      goto L_089B9914;
    }
L_089B9914:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089B9900;
      }
      goto L_089B9920;
    }
L_089B9920:
    aot_gpr_4 = (0u | 0u);
    goto L_089B9924;
L_089B9924:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9974;
      }
      goto L_089B992C;
    }
L_089B992C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089B9974;
      }
      goto L_089B9938;
    }
L_089B9938:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26319)));
    aot_gpr_5 = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_31 = (0x089B996Cu);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B996Cu) goto L_089B996C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B996C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B99B8;
      }
      goto L_089B9974;
    }
L_089B9974:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26319)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 127 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B99A4;
      }
      goto L_089B9984;
    }
L_089B9984:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(26319)));
    aot_gpr_5 = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.lo);
    goto L_089B99A4;
L_089B99A4:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_6 = (ctx.gpr[21] & 255u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089B99B8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B99B8u) goto L_089B99B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B99B8:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(66)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x089B99C8u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B99C8u) goto L_089B99C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B99C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B99E4;
      }
      goto L_089B99D4;
    }
L_089B99D4:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(67)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x089B99E4u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 538u, 0x0880A5ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B99E4u) goto L_089B99E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B99E4:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_gpr_31 = (0x089B99F0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0001_entry, 1u, 546u, 0x0880A624u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B99F0u) goto L_089B99F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B99F0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B9A10;
    }
L_089B9A10:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(7)));
        goto L_089B9764;
    }
    goto L_089B9A28;
L_089B9A28:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4234)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(144)));
        goto L_089B9668;
    }
    goto L_089B9A48;
L_089B9A48:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(7)));
    goto L_089B9A4C;
L_089B9A4C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(7)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.hi);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9A94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089B9AA8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0108_entry, 108u, 448u, 0x089B6B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9AA8u) goto L_089B9AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9AA8:
    aot_gpr_31 = (0x089B9AB0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-13220));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9AB0u) goto L_089B9AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9AB0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9ABC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x089B9AE8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B735A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9AE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089B9B28;
      }
      goto L_089B9AF0;
    }
L_089B9AF0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089B9B04u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 485u, 0x08ABE3E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9B04u) goto L_089B9B04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9B04:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(301), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(304)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_089B9B30;
      }
      goto L_089B9B20;
    }
L_089B9B20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B9B88;
      }
      goto L_089B9B28;
    }
L_089B9B28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089B9B88;
      }
      goto L_089B9B30;
    }
L_089B9B30:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B9B5C;
      }
      goto L_089B9B38;
    }
L_089B9B38:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089B9B54u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9B54u) goto L_089B9B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9B54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_089B9B7C;
      }
      goto L_089B9B5C;
    }
L_089B9B5C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089B9B78u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9B78u) goto L_089B9B78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9B78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(308)));
    goto L_089B9B7C;
L_089B9B7C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_089B9B30;
      }
      goto L_089B9B88;
    }
L_089B9B88:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9BA0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x089B9BC0u);
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9BC0u) goto L_089B9BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9BC0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(304)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_089B9C28;
      }
      goto L_089B9BD0;
    }
L_089B9BD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B9BFC;
      }
      goto L_089B9BD8;
    }
L_089B9BD8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089B9BF4u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9BF4u) goto L_089B9BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9BF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_089B9C1C;
      }
      goto L_089B9BFC;
    }
L_089B9BFC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089B9C18u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9C18u) goto L_089B9C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9C18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(308)));
    goto L_089B9C1C;
L_089B9C1C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
      if (branch_taken) {
          goto L_089B9BD0;
      }
      goto L_089B9C28;
    }
L_089B9C28:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(301), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x089B9C34u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 500u, 0x08ABE564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9C34u) goto L_089B9C34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9C34:
    aot_gpr_31 = (0x089B9C3Cu);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B735ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9C3C:
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
L_089B9C54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089B9C68u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 484u, 0x08ABE3BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9C68u) goto L_089B9C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9C68:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(301), static_cast<std::uint8_t>(0u));
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(304), aot_run_words); }
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9C90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089B9CA4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    goto L_089B9C54;
L_089B9CA4:
    aot_gpr_31 = (0x089B9CACu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-13200));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9CACu) goto L_089B9CAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9CAC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9CB8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9CC0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9CC8:
    ctx.gpr[2] = (2204u << 16u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-25400));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9CD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089B9CE4u);
    goto L_089B9CC8;
L_089B9CE4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9CF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x089B9D10u);
    ctx.gpr[18] = (0u | 0u);
    goto L_089B9CC8;
L_089B9D10:
    if (ctx.gpr[2] == aot_gpr_16) {
    ctx.gpr[18] = (0u | 1u);
        goto L_089B9D58;
    }
    goto L_089B9D18;
L_089B9D18:
    aot_gpr_31 = (0x089B9D20u);
    ctx.gpr[17] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9D20u) goto L_089B9D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9D20:
    if (ctx.gpr[2] == aot_gpr_16) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089B9D48;
    }
    goto L_089B9D28;
L_089B9D28:
    aot_gpr_31 = (0x089B9D30u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 115u, 0x08980688u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9D30u) goto L_089B9D30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9D30:
    aot_gpr_4 = (ctx.gpr[2] ^ aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_089B9D4C;
      }
      goto L_089B9D44;
    }
L_089B9D44:
    ctx.gpr[17] = (0u | 1u);
    goto L_089B9D48;
L_089B9D48:
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_089B9D4C;
L_089B9D4C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9D58;
      }
      goto L_089B9D54;
    }
L_089B9D54:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B9D58;
L_089B9D58:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_089B9D74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089B9D88u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC59D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9D88u) goto L_089B9D88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9D88:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25048));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(184), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9DBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089B9E04;
      }
      goto L_089B9DD8;
    }
L_089B9DD8:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25048));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089B9DF0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 486u, 0x08AC5AE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9DF0u) goto L_089B9DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9DF0:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089B9E04;
      }
      goto L_089B9DFC;
    }
L_089B9DFC:
    aot_gpr_31 = (0x089B9E04u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9E04u) goto L_089B9E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9E04:
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
L_089B9E18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(196)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(184)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089B9E5C;
      }
      goto L_089B9E58;
    }
L_089B9E58:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089B9E5C;
L_089B9E5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(192)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(188)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(184)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_31 = (0x089B9E90u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 571u, 0x08AC61E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9E90u) goto L_089B9E90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9E90:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9E9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(196)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(184)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089B9EE4;
      }
      goto L_089B9EE0;
    }
L_089B9EE0:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089B9EE4;
L_089B9EE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(192)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(188)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(184)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_31 = (0x089B9F18u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 571u, 0x08AC61E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9F18u) goto L_089B9F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9F18:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9F24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089B9F38u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 507u, 0x08AC5C90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9F38u) goto L_089B9F38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9F38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(184)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x089B9F5Cu);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    goto L_089BA1C8;
L_089B9F5C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9F6C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9F74:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9F7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089B9F90u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 511u, 0x08AC5CC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9F90u) goto L_089B9F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9F90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(184)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x089B9FB4u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    goto L_089BA1C8;
L_089B9FB4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089B9FC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_31);
    aot_gpr_31 = (0x089B9FE4u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 605u, 0x08AC646Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9FE4u) goto L_089B9FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9FE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089BA01C;
      }
      goto L_089B9FEC;
    }
L_089B9FEC:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 154u);
    aot_gpr_31 = (0x089B9FFCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089B9FFCu) goto L_089B9FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089B9FFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089BA008u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA008u) goto L_089BA008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA008:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BA024;
      }
      goto L_089BA014;
    }
L_089BA014:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BA02C;
      }
      goto L_089BA01C;
    }
L_089BA01C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA158;
      }
      goto L_089BA024;
    }
L_089BA024:
    aot_gpr_31 = (0x089BA02Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA02Cu) goto L_089BA02C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA02C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089BA06C;
      }
      goto L_089BA034;
    }
L_089BA034:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (0u | 171u);
    aot_gpr_31 = (0x089BA044u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA044u) goto L_089BA044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA044:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x089BA050u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA050u) goto L_089BA050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA050:
    aot_gpr_31 = (0x089BA058u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA058u) goto L_089BA058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA058:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(188), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089BA06C;
      }
      goto L_089BA064;
    }
L_089BA064:
    aot_gpr_31 = (0x089BA06Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA06Cu) goto L_089BA06C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA06C:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 155u);
    aot_gpr_31 = (0x089BA07Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA07Cu) goto L_089BA07C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA07C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089BA088u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA088u) goto L_089BA088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA088:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BA09C;
      }
      goto L_089BA094;
    }
L_089BA094:
    aot_gpr_31 = (0x089BA09Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA09Cu) goto L_089BA09C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA09C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089BA0DC;
      }
      goto L_089BA0A4;
    }
L_089BA0A4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (0u | 171u);
    aot_gpr_31 = (0x089BA0B4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA0B4u) goto L_089BA0B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA0B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x089BA0C0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA0C0u) goto L_089BA0C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA0C0:
    aot_gpr_31 = (0x089BA0C8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA0C8u) goto L_089BA0C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA0C8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(192), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089BA0DC;
      }
      goto L_089BA0D4;
    }
L_089BA0D4:
    aot_gpr_31 = (0x089BA0DCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA0DCu) goto L_089BA0DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA0DC:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 153u);
    aot_gpr_31 = (0x089BA0ECu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA0ECu) goto L_089BA0EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA0EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089BA0F8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA0F8u) goto L_089BA0F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA0F8:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BA10C;
      }
      goto L_089BA104;
    }
L_089BA104:
    aot_gpr_31 = (0x089BA10Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA10Cu) goto L_089BA10C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA10C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089BA154;
      }
      goto L_089BA114;
    }
L_089BA114:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    aot_gpr_5 = (0u | 171u);
    aot_gpr_31 = (0x089BA124u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA124u) goto L_089BA124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA124:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_31 = (0x089BA130u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA130u) goto L_089BA130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA130:
    aot_gpr_31 = (0x089BA138u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA138u) goto L_089BA138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA138:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_089BA154;
      }
      goto L_089BA14C;
    }
L_089BA14C:
    aot_gpr_31 = (0x089BA154u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA154u) goto L_089BA154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA154:
    ctx.gpr[2] = (0u | 1u);
    goto L_089BA158;
L_089BA158:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BA170:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089BA188u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 577u, 0x08AC6238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA188u) goto L_089BA188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA188:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(188)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(192)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BA1C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(196)));
    ctx.fpr[26] = ctx.fpr[26] + aot_fpr_12;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA2D8;
      }
      goto L_089BA228;
    }
L_089BA228:
    aot_gpr_5 = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (16608u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16672u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    goto L_089BA244;
L_089BA244:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = ctx.fpr[28] / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[19]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_14;
      if (branch_taken) {
          goto L_089BA2A8;
      }
      goto L_089BA27C;
    }
L_089BA27C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_5 = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x089BA298u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089BA310;
L_089BA298:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089BA2C8;
      }
      goto L_089BA2A8;
    }
L_089BA2A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_5 = (0u | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x089BA2C4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089BA310;
L_089BA2C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(196)));
    goto L_089BA2C8;
L_089BA2C8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089BA244;
      }
      goto L_089BA2D8;
    }
L_089BA2D8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BA310:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 & 255u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_31);
    aot_gpr_31 = (0x089BA370u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA370u) goto L_089BA370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA370:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[22];
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_20;
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[30] = ctx.fpr[26] + ctx.fpr[28];
    aot_gpr_5 = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_12 = ctx.fpr[22] + ctx.fpr[15];
    aot_fpr_13 = aot_fpr_20 + ctx.fpr[15];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[28];
    aot_fpr_14 = ctx.fpr[30] + ctx.fpr[15];
    aot_gpr_31 = (0x089BA3ACu);
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[15];
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA3ACu) goto L_089BA3AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA3AC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089BA3BCu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA3BCu) goto L_089BA3BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA3BC:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[28];
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_13 = aot_fpr_20 - ctx.fpr[28];
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x089BA3D4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA3D4u) goto L_089BA3D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA3D4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089BA3E4u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA3E4u) goto L_089BA3E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA3E4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089BA41C;
      }
      goto L_089BA3EC;
    }
L_089BA3EC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(76));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(21)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(23)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_089BA448;
      }
      goto L_089BA41C;
    }
L_089BA41C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(72));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(25)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(26)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(27)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_089BA448;
L_089BA448:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x089BA460u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA460u) goto L_089BA460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA460:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089BA470u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA470u) goto L_089BA470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA470:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BA4A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27012));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    ctx.gpr[7] = (2223u << 16u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(10924));
    aot_gpr_5 = (0u | 72u);
    aot_gpr_6 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089BA4D4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17092));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA4D4u) goto L_089BA4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA4D4:
    aot_gpr_31 = (0x089BA4DCu);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(11212));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 814u, 0x08AAFA54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA4DCu) goto L_089BA4DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA4DC:
    aot_gpr_31 = (0x089BA4E4u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(11215));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 814u, 0x08AAFA54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA4E4u) goto L_089BA4E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA4E4:
    aot_gpr_4 = (0u | 209u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11222), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11223), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(11224), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11226), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11228), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11232), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11253), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BA51C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BA560;
      }
      goto L_089BA52C;
    }
L_089BA52C:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27028));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5848), 0u);
      if (branch_taken) {
          goto L_089BA54C;
      }
      goto L_089BA540;
    }
L_089BA540:
    aot_gpr_6 = (2235u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_089BA54C;
L_089BA54C:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089BA560;
      }
      goto L_089BA558;
    }
L_089BA558:
    aot_gpr_31 = (0x089BA560u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA560u) goto L_089BA560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA560:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BA56C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089BA5F0;
      }
      goto L_089BA588;
    }
L_089BA588:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27012));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    ctx.gpr[7] = (2223u << 16u);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(10924));
    aot_gpr_5 = (0u | 72u);
    aot_gpr_6 = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x089BA5B4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17104));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA5B4u) goto L_089BA5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA5B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_089BA5E0;
      }
      goto L_089BA5BC;
    }
L_089BA5BC:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27028));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5848), 0u);
      if (branch_taken) {
          goto L_089BA5DC;
      }
      goto L_089BA5D0;
    }
L_089BA5D0:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_089BA5DC;
L_089BA5DC:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_089BA5E0;
L_089BA5E0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BA5F0;
      }
      goto L_089BA5E8;
    }
L_089BA5E8:
    aot_gpr_31 = (0x089BA5F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA5F0u) goto L_089BA5F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA5F0:
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
L_089BA604:
    aot_gpr_5 = (aot_gpr_5 << 16u);
    ctx.gpr[7] = (aot_gpr_6 << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[7] = (0u | 0u);
    goto L_089BA618;
L_089BA618:
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_6;
      if (branch_taken) {
          goto L_089BA644;
      }
      goto L_089BA620;
    }
L_089BA620:
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
      if (branch_taken) {
          goto L_089BA644;
      }
      goto L_089BA628;
    }
L_089BA628:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    goto L_089BA630;
L_089BA630:
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089BA630;
      }
      goto L_089BA644;
    }
L_089BA644:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_089BA618;
      }
      goto L_089BA654;
    }
L_089BA654:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BA65C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(9244), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(9252), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    goto L_089BA678;
L_089BA678:
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(9276), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(9788), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(10300), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089BA678;
      }
      goto L_089BA694;
    }
L_089BA694:
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(10812), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10824), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(10825), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10832), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10828), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10836), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10852), 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(10840), aot_run_words); }
    aot_gpr_5 = (0u | 0u);
    goto L_089BA6D0;
L_089BA6D0:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089BA6D0;
      }
      goto L_089BA6E4;
    }
L_089BA6E4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BA6EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4203)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[20] = (2236u << 16u);
      if (branch_taken) {
          goto L_089BA9F8;
      }
      goto L_089BA718;
    }
L_089BA718:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (50944u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(257));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x089BA73Cu);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_5);
    goto L_089BB368;
L_089BA73C:
    aot_gpr_4 = (0u | 7u);
    aot_gpr_31 = (0x089BA748u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA748u) goto L_089BA748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA748:
    aot_gpr_4 = (0u | 2u);
    aot_gpr_31 = (0x089BA754u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA754u) goto L_089BA754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA754:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x089BA760u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA760u) goto L_089BA760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA760:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089BA944;
      }
      goto L_089BA774;
    }
L_089BA774:
    aot_gpr_31 = (0x089BA77Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0111_entry, 111u, 48u, 0x089C0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA77Cu) goto L_089BA77C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA77C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24920)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BA790;
      }
      goto L_089BA788;
    }
L_089BA788:
    aot_gpr_31 = (0x089BA790u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 432u, 0x089C5CFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA790u) goto L_089BA790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA790:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(9256)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_089BA914;
      }
      goto L_089BA79C;
    }
L_089BA79C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[17] = (2238u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6992));
      if (branch_taken) {
          goto L_089BA7B8;
      }
      goto L_089BA7AC;
    }
L_089BA7AC:
    aot_gpr_31 = (0x089BA7B4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA7B4u) goto L_089BA7B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA7B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089BA7B8;
L_089BA7B8:
    aot_gpr_31 = (0x089BA7C0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA7C0u) goto L_089BA7C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA7C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089BA7D0;
      }
      goto L_089BA7C8;
    }
L_089BA7C8:
    aot_gpr_31 = (0x089BA7D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089BB3E0;
L_089BA7D0:
    aot_gpr_31 = (0x089BA7D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 253u, 0x089C4F8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA7D8u) goto L_089BA7D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA7D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(224)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(10856)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089BA840;
      }
      goto L_089BA804;
    }
L_089BA804:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x089BA814u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 612u, 0x089BF18Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA814u) goto L_089BA814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA814:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(10868)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(10856), aot_gpr_4);
      if (branch_taken) {
          goto L_089BA854;
      }
      goto L_089BA840;
    }
L_089BA840:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x089BA850u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 612u, 0x089BF18Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA850u) goto L_089BA850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA850:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(10868)));
    goto L_089BA854;
L_089BA854:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089BA87C;
      }
      goto L_089BA85C;
    }
L_089BA85C:
    aot_gpr_31 = (0x089BA864u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089BB9EC;
L_089BA864:
    aot_gpr_31 = (0x089BA86Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 375u, 0x089BDD20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA86Cu) goto L_089BA86C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA86C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089BA87C;
      }
      goto L_089BA874;
    }
L_089BA874:
    aot_gpr_31 = (0x089BA87Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 671u, 0x089BF4F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA87Cu) goto L_089BA87C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA87C:
    aot_gpr_31 = (0x089BA884u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 342u, 0x089BDA30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA884u) goto L_089BA884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA884:
    aot_gpr_31 = (0x089BA88Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089BB5CC;
L_089BA88C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BA8A0;
      }
      goto L_089BA898;
    }
L_089BA898:
    aot_gpr_31 = (0x089BA8A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 361u, 0x089C57B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA8A0u) goto L_089BA8A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA8A0:
    aot_gpr_31 = (0x089BA8A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 195u, 0x089C4B68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA8A8u) goto L_089BA8A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA8A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(10920)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_089BA8E4;
      }
      goto L_089BA8B4;
    }
L_089BA8B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BA8CC;
      }
      goto L_089BA8C0;
    }
L_089BA8C0:
    aot_gpr_31 = (0x089BA8C8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA8C8u) goto L_089BA8C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA8C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089BA8CC;
L_089BA8CC:
    aot_gpr_31 = (0x089BA8D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA8D4u) goto L_089BA8D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA8D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089BA8E4;
      }
      goto L_089BA8DC;
    }
L_089BA8DC:
    aot_gpr_31 = (0x089BA8E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 290u, 0x089BD59Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA8E4u) goto L_089BA8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA8E4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11236), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11237), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x089BA8F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 222u, 0x089BD108u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA8F4u) goto L_089BA8F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA8F4:
    aot_gpr_31 = (0x089BA8FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 156u, 0x089C4858u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA8FCu) goto L_089BA8FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA8FC:
    aot_gpr_31 = (0x089BA904u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 804u, 0x089BFF80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA904u) goto L_089BA904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA904:
    aot_gpr_31 = (0x089BA90Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 250u, 0x089BD32Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA90Cu) goto L_089BA90C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA90C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BA96C;
      }
      goto L_089BA914;
    }
L_089BA914:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11244)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BA928;
      }
      goto L_089BA920;
    }
L_089BA920:
    aot_gpr_31 = (0x089BA928u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0111_entry, 111u, 48u, 0x089C0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA928u) goto L_089BA928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA928:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11252)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BA96C;
      }
      goto L_089BA934;
    }
L_089BA934:
    aot_gpr_31 = (0x089BA93Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089BB3E0;
L_089BA93C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BA96C;
      }
      goto L_089BA944;
    }
L_089BA944:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11244)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BA958;
      }
      goto L_089BA950;
    }
L_089BA950:
    aot_gpr_31 = (0x089BA958u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0111_entry, 111u, 48u, 0x089C0468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA958u) goto L_089BA958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA958:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11252)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BA96C;
      }
      goto L_089BA964;
    }
L_089BA964:
    aot_gpr_31 = (0x089BA96Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089BB3E0;
L_089BA96C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(9258)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_089BA9AC;
      }
      goto L_089BA978;
    }
L_089BA978:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BA9AC;
      }
      goto L_089BA984;
    }
L_089BA984:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(9256)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_089BA9AC;
      }
      goto L_089BA990;
    }
L_089BA990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BA9A4;
      }
      goto L_089BA99C;
    }
L_089BA99C:
    aot_gpr_31 = (0x089BA9A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA9A4u) goto L_089BA9A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA9A4:
    aot_gpr_31 = (0x089BA9ACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0003_entry, 3u, 765u, 0x088128A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA9ACu) goto L_089BA9AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA9AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BA9F8;
      }
      goto L_089BA9B8;
    }
L_089BA9B8:
    aot_gpr_31 = (0x089BA9C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089BBF60;
L_089BA9C0:
    aot_gpr_31 = (0x089BA9C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 65u, 0x089BC530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA9C8u) goto L_089BA9C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA9C8:
    aot_gpr_31 = (0x089BA9D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0111_entry, 111u, 209u, 0x089C15C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA9D0u) goto L_089BA9D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA9D0:
    aot_gpr_31 = (0x089BA9D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 720u, 0x089BF9F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA9D8u) goto L_089BA9D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA9D8:
    aot_gpr_31 = (0x089BA9E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 365u, 0x089BDC34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA9E0u) goto L_089BA9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA9E0:
    aot_gpr_31 = (0x089BA9E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 168u, 0x089BCDB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA9E8u) goto L_089BA9E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA9E8:
    aot_gpr_31 = (0x089BA9F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 26u, 0x089BC1D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA9F0u) goto L_089BA9F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA9F0:
    aot_gpr_31 = (0x089BA9F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 118u, 0x089BC858u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BA9F8u) goto L_089BA9F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BA9F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BAA0C;
      }
      goto L_089BAA04;
    }
L_089BAA04:
    aot_gpr_31 = (0x089BAA0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0111_entry, 111u, 283u, 0x089C1C78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BAA0Cu) goto L_089BAA0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BAA0C:
    aot_gpr_31 = (0x089BAA14u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 123u, 0x089E8B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BAA14u) goto L_089BAA14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BAA14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (50944u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), aot_gpr_4);
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
L_089BAA4C:
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_5 = (aot_gpr_5 << 9u);
    ctx.gpr[2] = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(538));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAA60:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(11224)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAA68:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(11221)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAA70:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(9260))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAA78:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11228)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAA80:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(11220)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAA88:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_gpr_5 = (16704u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_089BAAA0;
      }
      goto L_089BAA98;
    }
L_089BAA98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BAAA0;
      }
      goto L_089BAAA0;
    }
L_089BAAA0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAAA8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BAAC0;
      }
      goto L_089BAAB4;
    }
L_089BAAB4:
    aot_gpr_4 = (17194u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_089BAAC8;
      }
      goto L_089BAAC0;
    }
L_089BAAC0:
    aot_gpr_4 = (17220u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    goto L_089BAAC8;
L_089BAAC8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAAD0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BAAE8;
      }
      goto L_089BAADC;
    }
L_089BAADC:
    aot_gpr_4 = (17080u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_089BAAF4;
      }
      goto L_089BAAE8;
    }
L_089BAAE8:
    aot_gpr_4 = (17027u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    goto L_089BAAF4;
L_089BAAF4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAAFC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BAB14;
      }
      goto L_089BAB08;
    }
L_089BAB08:
    aot_gpr_4 = (17080u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_089BAB20;
      }
      goto L_089BAB14;
    }
L_089BAB14:
    aot_gpr_4 = (17027u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    goto L_089BAB20;
L_089BAB20:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAB28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2279u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17968));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089BAB4Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089BA65C;
L_089BAB4C:
    aot_gpr_4 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    goto L_089BAB54;
L_089BAB54:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BAB84;
      }
      goto L_089BAB68;
    }
L_089BAB68:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_089BAB70;
L_089BAB70:
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089BAB70;
      }
      goto L_089BAB84;
    }
L_089BAB84:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_089BAB54;
      }
      goto L_089BAB98;
    }
L_089BAB98:
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
L_089BABAC:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9256)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BABB4:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BABBC:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BABC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2234u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(6320));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x089BABF0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12212));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BABF0u) goto L_089BABF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BABF0:
    aot_gpr_31 = (0x089BABF8u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BABF8u) goto L_089BABF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BABF8:
    aot_gpr_31 = (0x089BAC00u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BAC00u) goto L_089BAC00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BAC00:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(10924));
    goto L_089BAC08;
L_089BAC08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x089BAC18u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 58u, 0x08AF4530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BAC18u) goto L_089BAC18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BAC18:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 72 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089BAC08;
      }
      goto L_089BAC2C;
    }
L_089BAC2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13164)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BAC48;
      }
      goto L_089BAC38;
    }
L_089BAC38:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12384));
    aot_gpr_31 = (0x089BAC44u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BAC44u) goto L_089BAC44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BAC44:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-13164), ctx.gpr[2]);
    goto L_089BAC48;
L_089BAC48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13160)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BAC64;
      }
      goto L_089BAC54;
    }
L_089BAC54:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12504));
    aot_gpr_31 = (0x089BAC60u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BAC60u) goto L_089BAC60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BAC60:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-13160), ctx.gpr[2]);
    goto L_089BAC64;
L_089BAC64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13152)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BAC80;
      }
      goto L_089BAC70;
    }
L_089BAC70:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12340));
    aot_gpr_31 = (0x089BAC7Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BAC7Cu) goto L_089BAC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BAC7C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-13152), ctx.gpr[2]);
    goto L_089BAC80;
L_089BAC80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13148)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BAC9C;
      }
      goto L_089BAC8C;
    }
L_089BAC8C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12316));
    aot_gpr_31 = (0x089BAC98u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BAC98u) goto L_089BAC98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BAC98:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-13148), ctx.gpr[2]);
    goto L_089BAC9C;
L_089BAC9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13156)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BACB8;
      }
      goto L_089BACA8;
    }
L_089BACA8:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12292));
    aot_gpr_31 = (0x089BACB4u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12276));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BACB4u) goto L_089BACB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BACB4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-13156), ctx.gpr[2]);
    goto L_089BACB8;
L_089BACB8:
    aot_gpr_31 = (0x089BACC0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BACC0u) goto L_089BACC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BACC0:
    aot_gpr_31 = (0x089BACC8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089BACF0;
L_089BACC8:
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
L_089BACE4:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(10820)));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BACF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2279u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17968));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_5 = (0u | 0u);
    goto L_089BAD1C;
L_089BAD1C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089BAD1C;
      }
      goto L_089BAD30;
    }
L_089BAD30:
    aot_gpr_31 = (0x089BAD38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089BAB28;
L_089BAD38:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11240), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(9256), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(9258), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(9257), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[28] | 0u);
    goto L_089BAD54;
L_089BAD54:
    aot_gpr_6 = (aot_gpr_5 + ctx.gpr[28]);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(9536), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(9540), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089BAD54;
      }
      goto L_089BAD70;
    }
L_089BAD70:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9546), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(11218), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11220), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(9260), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    goto L_089BAD88;
L_089BAD88:
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(9262), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 13 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089BAD88;
      }
      goto L_089BADA4;
    }
L_089BADA4:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13168), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9516), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (17174u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9524), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(8730), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13166), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9526), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9528), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9532), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(224)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(10860), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(10856), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(10864), 0u);
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(10868), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 << 8u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 << 5u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(10876), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(10872), aot_gpr_5);
    { const std::uint32_t aot_run_words[10]{0u, aot_gpr_4, 0u, 0u, 0u, aot_gpr_4, 0u, 0u, 0u, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(10880), aot_run_words); }
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(10920), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11244), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11248), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11252), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11253), static_cast<std::uint8_t>(0u));
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAE90:
    aot_gpr_5 = (2279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(17968));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(1562), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(17968), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAEB0:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9257), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAEB8:
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.gpr[8] = (2279u << 16u);
    ctx.gpr[7] = (aot_gpr_6 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(17968));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BAFA8;
      }
      goto L_089BAEE4;
    }
L_089BAEE4:
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[9] << 9u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 5u);
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_089BAF58;
      }
      goto L_089BAF04;
    }
L_089BAF04:
    ctx.gpr[9] = (0u | 1u);
    goto L_089BAF08;
L_089BAF08:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (aot_gpr_5 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BAFA0;
      }
      goto L_089BAF10;
    }
L_089BAF10:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_089BAFA0;
      }
      goto L_089BAF1C;
    }
L_089BAF1C:
    ctx.gpr[10] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4634)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[10];
      if (branch_taken) {
          goto L_089BAF34;
      }
      goto L_089BAF28;
    }
L_089BAF28:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9532), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13166), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_089BAF34;
L_089BAF34:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4634), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BAF08;
      }
      goto L_089BAF58;
    }
L_089BAF58:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089BAF9C;
      }
      goto L_089BAF60;
    }
L_089BAF60:
    ctx.gpr[9] = (0u | 1u);
    goto L_089BAF64;
L_089BAF64:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BAF94;
      }
      goto L_089BAF6C;
    }
L_089BAF6C:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_089BAF94;
      }
      goto L_089BAF78;
    }
L_089BAF78:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BAF64;
      }
      goto L_089BAF94;
    }
L_089BAF94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089BAFA0;
      }
      goto L_089BAF9C;
    }
L_089BAF9C:
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    goto L_089BAFA0;
L_089BAFA0:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4634), static_cast<std::uint16_t>(0u));
    goto L_089BAFA8;
L_089BAFA8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAFB0:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    goto L_089BAFC0;
L_089BAFC0:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BAFF0;
      }
      goto L_089BAFC8;
    }
L_089BAFC8:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_089BAFF0;
      }
      goto L_089BAFD4;
    }
L_089BAFD4:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(8730), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BAFC0;
      }
      goto L_089BAFF0;
    }
L_089BAFF0:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(8730), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BAFF8:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11226), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB000:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11222), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB008:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11223), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB010:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(11224), static_cast<std::uint16_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB018:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10920), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB020:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10884), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB028:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[20] = (aot_gpr_6 & 255u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    aot_gpr_4 = (ctx.gpr[8] & 255u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(9276));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089BB068;
      }
      goto L_089BB060;
    }
L_089BB060:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(9257), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089BB094;
      }
      goto L_089BB068;
    }
L_089BB068:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BB094;
      }
      goto L_089BB070;
    }
L_089BB070:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x089BB094u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB094u) goto L_089BB094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB094:
    aot_gpr_4 = (0u | 0u);
    goto L_089BB098;
L_089BB098:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(9276), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(9788), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(10300), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089BB098;
      }
      goto L_089BB0C0;
    }
L_089BB0C0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089BB0D0u);
    aot_gpr_6 = (0u | 256u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 147u, 0x08AB8A5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB0D0u) goto L_089BB0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB0D0:
    aot_gpr_31 = (0x089BB0D8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 327u, 0x08AB9A5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB0D8u) goto L_089BB0D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB0D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10820)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(10300));
      if (branch_taken) {
          goto L_089BB100;
      }
      goto L_089BB0E4;
    }
L_089BB0E4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089BB0F0u);
    aot_gpr_6 = (0u | 256u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 155u, 0x08AB8ADCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB0F0u) goto L_089BB0F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB0F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089BB100;
      }
      goto L_089BB0F8;
    }
L_089BB0F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BB17C;
      }
      goto L_089BB100;
    }
L_089BB100:
    aot_gpr_4 = (0u | 0u);
    goto L_089BB104;
L_089BB104:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(9788), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089BB104;
      }
      goto L_089BB124;
    }
L_089BB124:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_089BB138;
      }
      goto L_089BB12C;
    }
L_089BB12C:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(9276), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(10300), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(10820), 0u);
    goto L_089BB138;
L_089BB138:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_089BB170;
      }
      goto L_089BB140;
    }
L_089BB140:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(10820), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(10300));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089BB158u);
    aot_gpr_6 = (0u | 256u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 147u, 0x08AB8A5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB158u) goto L_089BB158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB158:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(9788));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089BB168u);
    aot_gpr_6 = (0u | 256u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 147u, 0x08AB8A5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB168u) goto L_089BB168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB168:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BB174;
      }
      goto L_089BB170;
    }
L_089BB170:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(10820), 0u);
    goto L_089BB174;
L_089BB174:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10824), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10825), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_089BB17C;
L_089BB17C:
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
L_089BB19C:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 << 16u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(9260), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (0u | 10u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_089BB1CC;
      }
      goto L_089BB1B8;
    }
L_089BB1B8:
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (0u | 40u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11213), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11214), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_089BB1E8;
      }
      goto L_089BB1CC;
    }
L_089BB1CC:
    aot_gpr_6 = (0u | 11u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_089BB1E8;
      }
      goto L_089BB1D8;
    }
L_089BB1D8:
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (0u | 40u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11216), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11217), static_cast<std::uint8_t>(aot_gpr_6));
    goto L_089BB1E8;
L_089BB1E8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB1F0:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9262), static_cast<std::uint8_t>(aot_gpr_6));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB200:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11228), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB208:
    ctx.gpr[10] = (aot_gpr_6 & 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    goto L_089BB21C;
L_089BB21C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BB24C;
      }
      goto L_089BB224;
    }
L_089BB224:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_089BB24C;
      }
      goto L_089BB230;
    }
L_089BB230:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BB21C;
      }
      goto L_089BB24C;
    }
L_089BB24C:
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(ctx.gpr[10]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB258:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11220), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB260:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10832), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB268:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(10900), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB270:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(9256), static_cast<std::uint8_t>(aot_gpr_5));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB278:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB280:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(9252), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB288:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB290:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB298:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089BB2A8u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB2A8u) goto L_089BB2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB2A8:
    aot_gpr_31 = (0x089BB2B0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB2B0u) goto L_089BB2B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB2B0:
    aot_gpr_31 = (0x089BB2B8u);
    aot_gpr_4 = (0u | 20u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB2B8u) goto L_089BB2B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB2B8:
    aot_gpr_4 = (16156u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 10486u);
    aot_gpr_31 = (0x089BB2C8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB2C8u) goto L_089BB2C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB2C8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB2D4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13168))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_089BB2E8;
      }
      goto L_089BB2E0;
    }
L_089BB2E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089BB2EC;
      }
      goto L_089BB2E8;
    }
L_089BB2E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089BB2EC;
L_089BB2EC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB2F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_089BB33C;
    }
    goto L_089BB310;
L_089BB310:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x089BB31Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB31Cu) goto L_089BB31C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB31C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_089BB334;
      }
      goto L_089BB328;
    }
L_089BB328:
    aot_gpr_31 = (0x089BB330u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB330u) goto L_089BB330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB330:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_089BB334;
L_089BB334:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_089BB33C;
L_089BB33C:
    aot_gpr_31 = (0x089BB344u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12208));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB344u) goto L_089BB344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB344:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 20000u);
    aot_gpr_31 = (0x089BB354u);
    aot_gpr_6 = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 246u, 0x08AB9448u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB354u) goto L_089BB354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB354:
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
L_089BB368:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11232)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(11221)));
      if (branch_taken) {
          goto L_089BB3A4;
      }
      goto L_089BB374;
    }
L_089BB374:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 209 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_089BB3D8;
      }
      goto L_089BB380;
    }
L_089BB380:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(11221)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 210 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089BB3D8;
      }
      goto L_089BB398;
    }
L_089BB398:
    aot_gpr_5 = (0u | 209u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_089BB3D8;
      }
      goto L_089BB3A4;
    }
L_089BB3A4:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11232), aot_gpr_6);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 101 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_089BB3D8;
      }
      goto L_089BB3B8;
    }
L_089BB3B8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(11221)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 100 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089BB3D8;
      }
      goto L_089BB3D0;
    }
L_089BB3D0:
    aot_gpr_5 = (0u | 100u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_089BB3D8;
L_089BB3D8:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB3E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-224));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(9264)));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089BB484;
      }
      goto L_089BB404;
    }
L_089BB404:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[18] = (2238u << 16u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(10872)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
      if (branch_taken) {
          goto L_089BB48C;
      }
      goto L_089BB438;
    }
L_089BB438:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x089BB448u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 612u, 0x089BF18Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB448u) goto L_089BB448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB448:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11221)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(10872), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(10884)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_089BB4B0;
      }
      goto L_089BB484;
    }
L_089BB484:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BB5B0;
      }
      goto L_089BB48C;
    }
L_089BB48C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x089BB49Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 612u, 0x089BF18Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB49Cu) goto L_089BB49C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB49C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11221)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(10884)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    goto L_089BB4B0;
L_089BB4B0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BB4C0;
      }
      goto L_089BB4C0;
    }
L_089BB4C0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BB5B0;
      }
      goto L_089BB4C8;
    }
L_089BB4C8:
    aot_gpr_5 = (17336u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    ctx.gpr[17] = (2236u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_089BB4F4;
      }
      goto L_089BB4E4;
    }
L_089BB4E4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x089BB4F4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB4F4u) goto L_089BB4F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB4F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_6 = (0u | 4u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_089BB538;
      }
      goto L_089BB520;
    }
L_089BB520:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12200));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089BB530u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB530u) goto L_089BB530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2052)));
      if (branch_taken) {
          goto L_089BB54C;
      }
      goto L_089BB538;
    }
L_089BB538:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12192));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089BB548u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB548u) goto L_089BB548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB548:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2052)));
    goto L_089BB54C;
L_089BB54C:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11252)));
        goto L_089BB568;
    }
    goto L_089BB554;
L_089BB554:
    aot_gpr_31 = (0x089BB55Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089BABAC;
L_089BB55C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089BB594;
      }
      goto L_089BB564;
    }
L_089BB564:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11252)));
    goto L_089BB568;
L_089BB568:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BB594;
      }
      goto L_089BB570;
    }
L_089BB570:
    ctx.gpr[7] = (16608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089BB58Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 315u, 0x089BD72Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB58Cu) goto L_089BB58C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB58C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BB5B0;
      }
      goto L_089BB594;
    }
L_089BB594:
    ctx.gpr[7] = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089BB5B0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 315u, 0x089BD72Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB5B0u) goto L_089BB5B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB5B0:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB5CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9292)));
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BB9BC;
      }
      goto L_089BB604;
    }
L_089BB604:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (16179u << 16u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9088)));
    aot_gpr_5 = (aot_gpr_5 | 13107u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_16 = (2238u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16928u << 16u);
      if (branch_taken) {
          goto L_089BB9B8;
      }
      goto L_089BB650;
    }
L_089BB650:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BB9B8;
      }
      goto L_089BB664;
    }
L_089BB664:
    aot_gpr_31 = (0x089BB66Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB66Cu) goto L_089BB66C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB66C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089BB9B8;
      }
      goto L_089BB674;
    }
L_089BB674:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9088)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[17] = (2238u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[22] = (2238u << 16u);
    aot_gpr_4 = (16448u << 16u);
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14304));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12168));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-8144));
      if (branch_taken) {
          goto L_089BB764;
      }
      goto L_089BB6D4;
    }
L_089BB6D4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12180));
      if (branch_taken) {
          goto L_089BB704;
      }
      goto L_089BB6DC;
    }
L_089BB6DC:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x089BB6E8u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB6E8u) goto L_089BB6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB6E8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_089BB700;
      }
      goto L_089BB6F4;
    }
L_089BB6F4:
    aot_gpr_31 = (0x089BB6FCu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB6FCu) goto L_089BB6FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB6FC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089BB700;
L_089BB700:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_089BB704;
L_089BB704:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089BB710u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB710u) goto L_089BB710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB710:
    aot_gpr_31 = (0x089BB718u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB718u) goto L_089BB718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB718:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9088)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089BB75Cu);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB75Cu) goto L_089BB75C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB75C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BB7E0;
      }
      goto L_089BB764;
    }
L_089BB764:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12160));
      if (branch_taken) {
          goto L_089BB794;
      }
      goto L_089BB76C;
    }
L_089BB76C:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x089BB778u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB778u) goto L_089BB778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB778:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_089BB790;
      }
      goto L_089BB784;
    }
L_089BB784:
    aot_gpr_31 = (0x089BB78Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB78Cu) goto L_089BB78C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB78C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089BB790;
L_089BB790:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_089BB794;
L_089BB794:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089BB7A0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB7A0u) goto L_089BB7A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB7A0:
    aot_gpr_31 = (0x089BB7A8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB7A8u) goto L_089BB7A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB7A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089BB7E0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB7E0u) goto L_089BB7E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB7E0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089BB7ECu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB7ECu) goto L_089BB7EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB7EC:
    aot_gpr_31 = (0x089BB7F4u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB7F4u) goto L_089BB7F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB7F4:
    aot_gpr_31 = (0x089BB7FCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB7FCu) goto L_089BB7FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB7FC:
    aot_gpr_31 = (0x089BB804u);
    aot_gpr_4 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB804u) goto L_089BB804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB804:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BB860;
      }
      goto L_089BB814;
    }
L_089BB814:
    aot_gpr_4 = (0u | 204u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 185u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 180u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x089BB83Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB83Cu) goto L_089BB83C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB83C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_089BB8A8;
      }
      goto L_089BB860;
    }
L_089BB860:
    aot_gpr_4 = (0u | 178u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 162u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 180u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x089BB888u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB888u) goto L_089BB888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_089BB8A8;
L_089BB8A8:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_6 = (17122u << 16u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 461u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_31 = (0x089BB8CCu);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB8CCu) goto L_089BB8CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB8CC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089BB904;
    }
    goto L_089BB8D8;
L_089BB8D8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x089BB8E4u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB8E4u) goto L_089BB8E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB8E4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_089BB8FC;
      }
      goto L_089BB8F0;
    }
L_089BB8F0:
    aot_gpr_31 = (0x089BB8F8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB8F8u) goto L_089BB8F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB8F8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089BB8FC;
L_089BB8FC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_089BB904;
L_089BB904:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_31 = (0x089BB924u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 170u, 0x08990C28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB924u) goto L_089BB924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB924:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089BB930u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB930u) goto L_089BB930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB930:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6864)));
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
      if (branch_taken) {
          goto L_089BB94C;
      }
      goto L_089BB940;
    }
L_089BB940:
    aot_gpr_4 = (0u | 100u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12184), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6864), aot_gpr_16);
    goto L_089BB94C;
L_089BB94C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12184)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BB9B0;
      }
      goto L_089BB958;
    }
L_089BB958:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12184), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089BB96Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 854u, 0x08887BB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB96Cu) goto L_089BB96C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB96C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (17162u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 461u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_31 = (0x089BB9B0u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BB9B0u) goto L_089BB9B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BB9B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BB9BC;
      }
      goto L_089BB9B8;
    }
L_089BB9B8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12184), 0u);
    goto L_089BB9BC;
L_089BB9BC:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BB9EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(9260))))));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1252)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BBA5C;
      }
      goto L_089BBA4C;
    }
L_089BBA4C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[7] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_089BBA7C;
      }
      goto L_089BBA5C;
    }
L_089BBA5C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_089BBA7C;
      }
      goto L_089BBA64;
    }
L_089BBA64:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BBB04;
      }
      goto L_089BBA6C;
    }
L_089BBA6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089BBB04;
      }
      goto L_089BBA7C;
    }
L_089BBA7C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BBA9C;
      }
      goto L_089BBA84;
    }
L_089BBA84:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BBB04;
      }
      goto L_089BBA8C;
    }
L_089BBA8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089BBB04;
      }
      goto L_089BBA9C;
    }
L_089BBA9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089BBAB0;
      }
      goto L_089BBAA8;
    }
L_089BBAA8:
    aot_gpr_31 = (0x089BBAB0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBAB0u) goto L_089BBAB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBAB0:
    aot_gpr_31 = (0x089BBAB8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBAB8u) goto L_089BBAB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBAB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089BBB04;
      }
      goto L_089BBAC0;
    }
L_089BBAC0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1252)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_31 = (0x089BBAFCu);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    goto L_089BBB18;
L_089BBAFC:
    aot_gpr_31 = (0x089BBB04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 192u, 0x089BCF8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBB04u) goto L_089BBB04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBB04:
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
L_089BBB18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(9266)));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
      if (branch_taken) {
          goto L_089BBBA8;
      }
      goto L_089BBB5C;
    }
L_089BBB5C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(9260))))));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[9] = (0u | 4u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
      if (branch_taken) {
          goto L_089BBBB0;
      }
      goto L_089BBBA0;
    }
L_089BBBA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_089BBC10;
      }
      goto L_089BBBA8;
    }
L_089BBBA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BBF2C;
      }
      goto L_089BBBB0;
    }
L_089BBBB0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1252)));
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(336)));
        goto L_089BBC10;
    }
    goto L_089BBBD0;
L_089BBBD0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12152)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12152), ctx.gpr[8]);
      if (branch_taken) {
          goto L_089BBC0C;
      }
      goto L_089BBBE0;
    }
L_089BBBE0:
    aot_gpr_6 = (0u | 50u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12152), aot_gpr_6);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(9260), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 << 8u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 << 5u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    goto L_089BBC0C;
L_089BBC0C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(336)));
    goto L_089BBC10;
L_089BBC10:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BBC34;
      }
      goto L_089BBC2C;
    }
L_089BBC2C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_089BBC48;
      }
      goto L_089BBC34;
    }
L_089BBC34:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BBC48;
      }
      goto L_089BBC44;
    }
L_089BBC44:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089BBC48;
L_089BBC48:
    aot_fpr_13 = ctx.fpr[24] / aot_fpr_20;
    aot_gpr_5 = (16928u << 16u);
    aot_gpr_6 = (16768u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[8] = (15488u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[15];
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    { const bool branch_taken = aot_gpr_4 != 0u;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_089BBC8C;
      }
      goto L_089BBC80;
    }
L_089BBC80:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089BBCA8;
      }
      goto L_089BBC8C;
    }
L_089BBC8C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16267u << 16u);
      if (branch_taken) {
          goto L_089BBCAC;
      }
      goto L_089BBC9C;
    }
L_089BBC9C:
    aot_gpr_4 = (17024u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_089BBCA8;
L_089BBCA8:
    aot_gpr_4 = (16267u << 16u);
    goto L_089BBCAC;
L_089BBCAC:
    aot_gpr_4 = (aot_gpr_4 | 34079u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (17328u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (16936u << 16u);
    aot_gpr_6 = (17000u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.fpr[30] = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x089BBCF4u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBCF4u) goto L_089BBCF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBCF4:
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11221)));
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(11168));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    aot_gpr_31 = (0x089BBD10u);
    ctx.gpr[7] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBD10u) goto L_089BBD10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBD10:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x089BBD40u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBD40u) goto L_089BBD40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBD40:
    aot_gpr_5 = (17362u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (aot_gpr_5 | 57672u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x089BBD68u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBD68u) goto L_089BBD68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBD68:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11221)));
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(11156));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    aot_gpr_31 = (0x089BBDB4u);
    ctx.gpr[7] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBDB4u) goto L_089BBDB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBDB4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x089BBDE4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBDE4u) goto L_089BBDE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBDE4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x089BBDFCu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBDFCu) goto L_089BBDFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBDFC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11221)));
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(11172));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    aot_gpr_31 = (0x089BBE48u);
    ctx.gpr[7] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBE48u) goto L_089BBE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBE48:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x089BBE78u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBE78u) goto L_089BBE78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBE78:
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089BBF2C;
      }
      goto L_089BBE94;
    }
L_089BBE94:
    aot_gpr_31 = (0x089BBE9Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBE9Cu) goto L_089BBE9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBE9C:
    aot_gpr_31 = (0x089BBEA4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBEA4u) goto L_089BBEA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBEA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11221)));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089BBEC8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C4A8, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBEC8u) goto L_089BBEC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBEC8:
    aot_gpr_4 = (0u | 43u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (17146u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089BBF10;
      }
      goto L_089BBEEC;
    }
L_089BBEEC:
    aot_gpr_4 = (16288u << 16u);
    aot_gpr_31 = (0x089BBEF8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBEF8u) goto L_089BBEF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBEF8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 362u);
    aot_gpr_31 = (0x089BBF08u);
    aot_gpr_6 = (0u | 35u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBF08u) goto L_089BBF08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBF08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089BBF2C;
      }
      goto L_089BBF10;
    }
L_089BBF10:
    aot_gpr_4 = (16192u << 16u);
    aot_gpr_31 = (0x089BBF1Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBF1Cu) goto L_089BBF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBF1C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 366u);
    aot_gpr_31 = (0x089BBF2Cu);
    aot_gpr_6 = (0u | 40u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C138, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBF2Cu) goto L_089BBF2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBF2C:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
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
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089BBF60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    ctx.gpr[21] = (2239u << 16u);
    ctx.gpr[22] = (2240u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32064));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-30112));
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_31);
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(38));
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_4 = (17288u << 16u);
    aot_gpr_16 = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    goto L_089BBFC0;
L_089BBFC0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 14u, 0x089BC0E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089BBFCC;
    }
L_089BBFCC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0110_entry, 110u, 14u, 0x089BC0E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089BBFDC;
    }
L_089BBFDC:
    aot_gpr_31 = (0x089BBFE4u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C498, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBFE4u) goto L_089BBFE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBFE4:
    aot_gpr_31 = (0x089BBFECu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C05C, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_16, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBFECu) goto L_089BBFEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBFEC:
    aot_gpr_31 = (0x089BBFF4u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089BBFF4u) goto L_089BBFF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089BBFF4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.pc = 0x089BC000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0109(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0109_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_109(Runtime &runtime) {
    runtime.register_generated_unit(109u, 0x089B8000u, 16384u, &recomp_unit_0109, &recomp_unit_0109_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x089B8000u, &recomp_unit_0109, "recomp_unit_0109",
                                          kEntryMasks_recomp_unit_0109, 64u);
}
} // namespace psprecomp
