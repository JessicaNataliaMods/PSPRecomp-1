#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0056[64] = {
    0x0500000000000001ull, 0x4200003500000011ull, 0x1222402000C00004ull, 0x015420A024448891ull,
    0x19454AD46AB29810ull, 0xA950008314040615ull, 0x02052A021001092Aull, 0x5000042A00008500ull,
    0x6800088940101002ull, 0x414150505548A010ull, 0x0820292000080010ull, 0x8145A054828A0511ull,
    0x0705622808002AC6ull, 0x2002000500000B40ull, 0x8A40404A04002042ull, 0x062059652052822Aull,
    0x2A50191531104181ull, 0x400000100006A4A9ull, 0x5000002040852412ull, 0x2040140104154555ull,
    0x9501100410445AA0ull, 0x0104028152808200ull, 0x0101000010412849ull, 0x102A000404000080ull,
    0x4280244040889101ull, 0x8080401624504002ull, 0x2028320208A82000ull, 0x2852020900AA8A8Bull,
    0x829555010D488081ull, 0x2C510102820A4880ull, 0x00548041210BA915ull, 0x8020222085008881ull,
    0x0100001020050602ull, 0x020122A828AA1042ull, 0x1200100890144085ull, 0x02024542C5110A00ull,
    0x8020100401004020ull, 0x0208805520120200ull, 0x00509000188AA909ull, 0x2204089813088480ull,
    0x0A00000000020908ull, 0x11020080200A8100ull, 0x08941420AAA80421ull, 0x8201401044004820ull,
    0x90009040150B0402ull, 0x4802030880280018ull, 0x2850100809140312ull, 0x0020A30A20202820ull,
    0x110AA4805188050Aull, 0x0200040A80900020ull, 0xA045528A40610088ull, 0x4942011414201022ull,
    0x1008114202025410ull, 0x02828202808004AAull, 0x00200020A9004608ull, 0x8952A88848302400ull,
    0x1540104150410C4Aull, 0x8086901050040000ull, 0x4950200805111154ull, 0x0104000910294084ull,
    0x00024444C0A81448ull, 0x0000004825120041ull, 0x02A0000A00080000ull, 0xAAA234A5520A492Aull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0056[64] = {
    1u, 4u, 12u, 21u, 37u, 62u, 79u, 93u, 102u, 113u, 130u, 138u, 157u, 175u, 183u, 195u,
    215u, 234u, 245u, 256u, 272u, 288u, 299u, 309u, 316u, 329u, 341u, 353u, 372u, 391u, 406u, 424u,
    436u, 444u, 460u, 472u, 487u, 494u, 505u, 520u, 534u, 540u, 549u, 566u, 576u, 589u, 600u, 614u,
    626u, 643u, 651u, 668u, 682u, 694u, 707u, 717u, 734u, 750u, 760u, 776u, 787u, 801u, 810u, 816u,
};
void recomp_unit_0056_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,31,2,18 fprs=12,13,20,14 gpr_occ=4249 fpr_occ=504 gpr_total=5813 fpr_total=619
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_18 = ctx.gpr[18];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[2] = aot_gpr_2; ctx.gpr[18] = aot_gpr_18; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_18 = ctx.gpr[18]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E4000u;
        entry_id = 0u;
        if (entry_delta < 16384u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0056[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0056[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_088E4000;
    case 2u: goto L_088E40E0;
    case 3u: goto L_088E40E8;
    case 4u: goto L_088E4100;
    case 5u: goto L_088E4110;
    case 6u: goto L_088E4180;
    case 7u: goto L_088E4188;
    case 8u: goto L_088E4190;
    case 9u: goto L_088E4194;
    case 10u: goto L_088E41E4;
    case 11u: goto L_088E41F8;
    case 12u: goto L_088E4208;
    case 13u: goto L_088E4258;
    case 14u: goto L_088E425C;
    case 15u: goto L_088E4294;
    case 16u: goto L_088E42B8;
    case 17u: goto L_088E42C4;
    case 18u: goto L_088E42D4;
    case 19u: goto L_088E42E4;
    case 20u: goto L_088E42F0;
    case 21u: goto L_088E4300;
    case 22u: goto L_088E4310;
    case 23u: goto L_088E431C;
    case 24u: goto L_088E432C;
    case 25u: goto L_088E433C;
    case 26u: goto L_088E4348;
    case 27u: goto L_088E4358;
    case 28u: goto L_088E4368;
    case 29u: goto L_088E4374;
    case 30u: goto L_088E4394;
    case 31u: goto L_088E439C;
    case 32u: goto L_088E43B4;
    case 33u: goto L_088E43C8;
    case 34u: goto L_088E43D0;
    case 35u: goto L_088E43D8;
    case 36u: goto L_088E43E0;
    case 37u: goto L_088E4410;
    case 38u: goto L_088E442C;
    case 39u: goto L_088E4430;
    case 40u: goto L_088E443C;
    case 41u: goto L_088E4444;
    case 42u: goto L_088E4450;
    case 43u: goto L_088E4454;
    case 44u: goto L_088E445C;
    case 45u: goto L_088E4464;
    case 46u: goto L_088E446C;
    case 47u: goto L_088E4474;
    case 48u: goto L_088E4478;
    case 49u: goto L_088E4488;
    case 50u: goto L_088E4490;
    case 51u: goto L_088E4498;
    case 52u: goto L_088E449C;
    case 53u: goto L_088E44A4;
    case 54u: goto L_088E44AC;
    case 55u: goto L_088E44B8;
    case 56u: goto L_088E44C0;
    case 57u: goto L_088E44C8;
    case 58u: goto L_088E44D8;
    case 59u: goto L_088E44E0;
    case 60u: goto L_088E44EC;
    case 61u: goto L_088E44F0;
    case 62u: goto L_088E4500;
    case 63u: goto L_088E4508;
    case 64u: goto L_088E4510;
    case 65u: goto L_088E4524;
    case 66u: goto L_088E4528;
    case 67u: goto L_088E4548;
    case 68u: goto L_088E4568;
    case 69u: goto L_088E4570;
    case 70u: goto L_088E4580;
    case 71u: goto L_088E4584;
    case 72u: goto L_088E459C;
    case 73u: goto L_088E45D0;
    case 74u: goto L_088E45D8;
    case 75u: goto L_088E45E0;
    case 76u: goto L_088E45EC;
    case 77u: goto L_088E45F4;
    case 78u: goto L_088E45FC;
    case 79u: goto L_088E4604;
    case 80u: goto L_088E460C;
    case 81u: goto L_088E4614;
    case 82u: goto L_088E4620;
    case 83u: goto L_088E462C;
    case 84u: goto L_088E4640;
    case 85u: goto L_088E4670;
    case 86u: goto L_088E4684;
    case 87u: goto L_088E46A4;
    case 88u: goto L_088E46AC;
    case 89u: goto L_088E46B4;
    case 90u: goto L_088E46C0;
    case 91u: goto L_088E46C8;
    case 92u: goto L_088E46E4;
    case 93u: goto L_088E4720;
    case 94u: goto L_088E4728;
    case 95u: goto L_088E473C;
    case 96u: goto L_088E4784;
    case 97u: goto L_088E478C;
    case 98u: goto L_088E4794;
    case 99u: goto L_088E47A8;
    case 100u: goto L_088E47F0;
    case 101u: goto L_088E47F8;
    case 102u: goto L_088E4804;
    case 103u: goto L_088E4830;
    case 104u: goto L_088E4850;
    case 105u: goto L_088E4878;
    case 106u: goto L_088E4880;
    case 107u: goto L_088E488C;
    case 108u: goto L_088E489C;
    case 109u: goto L_088E48AC;
    case 110u: goto L_088E48EC;
    case 111u: goto L_088E48F4;
    case 112u: goto L_088E48F8;
    case 113u: goto L_088E4910;
    case 114u: goto L_088E4934;
    case 115u: goto L_088E493C;
    case 116u: goto L_088E494C;
    case 117u: goto L_088E4958;
    case 118u: goto L_088E4960;
    case 119u: goto L_088E4968;
    case 120u: goto L_088E4970;
    case 121u: goto L_088E4978;
    case 122u: goto L_088E4990;
    case 123u: goto L_088E4998;
    case 124u: goto L_088E49B0;
    case 125u: goto L_088E49B8;
    case 126u: goto L_088E49C0;
    case 127u: goto L_088E49D8;
    case 128u: goto L_088E49E0;
    case 129u: goto L_088E49F8;
    case 130u: goto L_088E4A10;
    case 131u: goto L_088E4A4C;
    case 132u: goto L_088E4A94;
    case 133u: goto L_088E4AA0;
    case 134u: goto L_088E4AAC;
    case 135u: goto L_088E4AB4;
    case 136u: goto L_088E4AD4;
    case 137u: goto L_088E4AEC;
    case 138u: goto L_088E4B00;
    case 139u: goto L_088E4B10;
    case 140u: goto L_088E4B20;
    case 141u: goto L_088E4B28;
    case 142u: goto L_088E4B44;
    case 143u: goto L_088E4B4C;
    case 144u: goto L_088E4B5C;
    case 145u: goto L_088E4B64;
    case 146u: goto L_088E4B7C;
    case 147u: goto L_088E4B88;
    case 148u: goto L_088E4B90;
    case 149u: goto L_088E4B98;
    case 150u: goto L_088E4BB4;
    case 151u: goto L_088E4BBC;
    case 152u: goto L_088E4BC0;
    case 153u: goto L_088E4BC8;
    case 154u: goto L_088E4BD8;
    case 155u: goto L_088E4BE0;
    case 156u: goto L_088E4BFC;
    case 157u: goto L_088E4C04;
    case 158u: goto L_088E4C08;
    case 159u: goto L_088E4C18;
    case 160u: goto L_088E4C1C;
    case 161u: goto L_088E4C24;
    case 162u: goto L_088E4C2C;
    case 163u: goto L_088E4C34;
    case 164u: goto L_088E4C6C;
    case 165u: goto L_088E4C8C;
    case 166u: goto L_088E4C94;
    case 167u: goto L_088E4CA4;
    case 168u: goto L_088E4CB4;
    case 169u: goto L_088E4CB8;
    case 170u: goto L_088E4CC0;
    case 171u: goto L_088E4CC8;
    case 172u: goto L_088E4CE0;
    case 173u: goto L_088E4CE4;
    case 174u: goto L_088E4CE8;
    case 175u: goto L_088E4D18;
    case 176u: goto L_088E4D20;
    case 177u: goto L_088E4D24;
    case 178u: goto L_088E4D2C;
    case 179u: goto L_088E4D80;
    case 180u: goto L_088E4D88;
    case 181u: goto L_088E4DC4;
    case 182u: goto L_088E4DF4;
    case 183u: goto L_088E4E04;
    case 184u: goto L_088E4E18;
    case 185u: goto L_088E4E34;
    case 186u: goto L_088E4E68;
    case 187u: goto L_088E4E84;
    case 188u: goto L_088E4E8C;
    case 189u: goto L_088E4E98;
    case 190u: goto L_088E4EB8;
    case 191u: goto L_088E4ED8;
    case 192u: goto L_088E4EE4;
    case 193u: goto L_088E4EEC;
    case 194u: goto L_088E4EFC;
    case 195u: goto L_088E4F04;
    case 196u: goto L_088E4F0C;
    case 197u: goto L_088E4F14;
    case 198u: goto L_088E4F24;
    case 199u: goto L_088E4F3C;
    case 200u: goto L_088E4F44;
    case 201u: goto L_088E4F50;
    case 202u: goto L_088E4F58;
    case 203u: goto L_088E4F74;
    case 204u: goto L_088E4F80;
    case 205u: goto L_088E4F88;
    case 206u: goto L_088E4F94;
    case 207u: goto L_088E4F98;
    case 208u: goto L_088E4FA0;
    case 209u: goto L_088E4FAC;
    case 210u: goto L_088E4FB0;
    case 211u: goto L_088E4FB8;
    case 212u: goto L_088E4FD4;
    case 213u: goto L_088E4FE4;
    case 214u: goto L_088E4FE8;
    case 215u: goto L_088E5000;
    case 216u: goto L_088E501C;
    case 217u: goto L_088E5020;
    case 218u: goto L_088E5038;
    case 219u: goto L_088E5050;
    case 220u: goto L_088E5060;
    case 221u: goto L_088E5070;
    case 222u: goto L_088E5074;
    case 223u: goto L_088E5080;
    case 224u: goto L_088E5088;
    case 225u: goto L_088E5090;
    case 226u: goto L_088E50A0;
    case 227u: goto L_088E50AC;
    case 228u: goto L_088E50B0;
    case 229u: goto L_088E50D0;
    case 230u: goto L_088E50D8;
    case 231u: goto L_088E50E4;
    case 232u: goto L_088E50EC;
    case 233u: goto L_088E50F4;
    case 234u: goto L_088E5100;
    case 235u: goto L_088E510C;
    case 236u: goto L_088E5114;
    case 237u: goto L_088E511C;
    case 238u: goto L_088E5128;
    case 239u: goto L_088E5134;
    case 240u: goto L_088E513C;
    case 241u: goto L_088E5144;
    case 242u: goto L_088E5148;
    case 243u: goto L_088E5190;
    case 244u: goto L_088E51F8;
    case 245u: goto L_088E5204;
    case 246u: goto L_088E5210;
    case 247u: goto L_088E5228;
    case 248u: goto L_088E5234;
    case 249u: goto L_088E5240;
    case 250u: goto L_088E5248;
    case 251u: goto L_088E525C;
    case 252u: goto L_088E5278;
    case 253u: goto L_088E5294;
    case 254u: goto L_088E52F0;
    case 255u: goto L_088E52F8;
    case 256u: goto L_088E5300;
    case 257u: goto L_088E5308;
    case 258u: goto L_088E5310;
    case 259u: goto L_088E5318;
    case 260u: goto L_088E5320;
    case 261u: goto L_088E5328;
    case 262u: goto L_088E5338;
    case 263u: goto L_088E5340;
    case 264u: goto L_088E5348;
    case 265u: goto L_088E5350;
    case 266u: goto L_088E5368;
    case 267u: goto L_088E5380;
    case 268u: goto L_088E53A8;
    case 269u: goto L_088E53B0;
    case 270u: goto L_088E53D8;
    case 271u: goto L_088E53F4;
    case 272u: goto L_088E5414;
    case 273u: goto L_088E541C;
    case 274u: goto L_088E5424;
    case 275u: goto L_088E542C;
    case 276u: goto L_088E5430;
    case 277u: goto L_088E5438;
    case 278u: goto L_088E5448;
    case 279u: goto L_088E5458;
    case 280u: goto L_088E5470;
    case 281u: goto L_088E5488;
    case 282u: goto L_088E54B0;
    case 283u: goto L_088E54C0;
    case 284u: goto L_088E54E0;
    case 285u: goto L_088E54E8;
    case 286u: goto L_088E54F0;
    case 287u: goto L_088E54FC;
    case 288u: goto L_088E5524;
    case 289u: goto L_088E553C;
    case 290u: goto L_088E555C;
    case 291u: goto L_088E5564;
    case 292u: goto L_088E5570;
    case 293u: goto L_088E5578;
    case 294u: goto L_088E5580;
    case 295u: goto L_088E559C;
    case 296u: goto L_088E55A4;
    case 297u: goto L_088E55C8;
    case 298u: goto L_088E55E0;
    case 299u: goto L_088E5600;
    case 300u: goto L_088E560C;
    case 301u: goto L_088E5618;
    case 302u: goto L_088E562C;
    case 303u: goto L_088E5634;
    case 304u: goto L_088E5640;
    case 305u: goto L_088E5658;
    case 306u: goto L_088E5670;
    case 307u: goto L_088E56C0;
    case 308u: goto L_088E56E0;
    case 309u: goto L_088E571C;
    case 310u: goto L_088E5768;
    case 311u: goto L_088E5788;
    case 312u: goto L_088E57C4;
    case 313u: goto L_088E57CC;
    case 314u: goto L_088E57D4;
    case 315u: goto L_088E57F0;
    case 316u: goto L_088E5800;
    case 317u: goto L_088E5820;
    case 318u: goto L_088E5830;
    case 319u: goto L_088E583C;
    case 320u: goto L_088E584C;
    case 321u: goto L_088E585C;
    case 322u: goto L_088E5878;
    case 323u: goto L_088E5898;
    case 324u: goto L_088E58A8;
    case 325u: goto L_088E58B4;
    case 326u: goto L_088E58DC;
    case 327u: goto L_088E58E4;
    case 328u: goto L_088E58F8;
    case 329u: goto L_088E5904;
    case 330u: goto L_088E5938;
    case 331u: goto L_088E5950;
    case 332u: goto L_088E5958;
    case 333u: goto L_088E5968;
    case 334u: goto L_088E5974;
    case 335u: goto L_088E5984;
    case 336u: goto L_088E5988;
    case 337u: goto L_088E5990;
    case 338u: goto L_088E59B8;
    case 339u: goto L_088E59DC;
    case 340u: goto L_088E59FC;
    case 341u: goto L_088E5A34;
    case 342u: goto L_088E5A4C;
    case 343u: goto L_088E5A54;
    case 344u: goto L_088E5A5C;
    case 345u: goto L_088E5A6C;
    case 346u: goto L_088E5A84;
    case 347u: goto L_088E5AA4;
    case 348u: goto L_088E5AB0;
    case 349u: goto L_088E5AB4;
    case 350u: goto L_088E5ACC;
    case 351u: goto L_088E5AD4;
    case 352u: goto L_088E5AF4;
    case 353u: goto L_088E5B00;
    case 354u: goto L_088E5B04;
    case 355u: goto L_088E5B0C;
    case 356u: goto L_088E5B1C;
    case 357u: goto L_088E5B24;
    case 358u: goto L_088E5B2C;
    case 359u: goto L_088E5B3C;
    case 360u: goto L_088E5B44;
    case 361u: goto L_088E5B4C;
    case 362u: goto L_088E5B54;
    case 363u: goto L_088E5B5C;
    case 364u: goto L_088E5B80;
    case 365u: goto L_088E5B8C;
    case 366u: goto L_088E5BA4;
    case 367u: goto L_088E5BC4;
    case 368u: goto L_088E5BD0;
    case 369u: goto L_088E5BD8;
    case 370u: goto L_088E5BEC;
    case 371u: goto L_088E5BF4;
    case 372u: goto L_088E5C00;
    case 373u: goto L_088E5C1C;
    case 374u: goto L_088E5C3C;
    case 375u: goto L_088E5C4C;
    case 376u: goto L_088E5C58;
    case 377u: goto L_088E5C60;
    case 378u: goto L_088E5C68;
    case 379u: goto L_088E5C6C;
    case 380u: goto L_088E5C80;
    case 381u: goto L_088E5CA0;
    case 382u: goto L_088E5CA8;
    case 383u: goto L_088E5CB0;
    case 384u: goto L_088E5CB8;
    case 385u: goto L_088E5CC0;
    case 386u: goto L_088E5CC8;
    case 387u: goto L_088E5CD0;
    case 388u: goto L_088E5CDC;
    case 389u: goto L_088E5CE4;
    case 390u: goto L_088E5CFC;
    case 391u: goto L_088E5D1C;
    case 392u: goto L_088E5D2C;
    case 393u: goto L_088E5D38;
    case 394u: goto L_088E5D44;
    case 395u: goto L_088E5D4C;
    case 396u: goto L_088E5D64;
    case 397u: goto L_088E5D7C;
    case 398u: goto L_088E5D84;
    case 399u: goto L_088E5DA0;
    case 400u: goto L_088E5DC0;
    case 401u: goto L_088E5DD0;
    case 402u: goto L_088E5DD8;
    case 403u: goto L_088E5DE8;
    case 404u: goto L_088E5DEC;
    case 405u: goto L_088E5DF4;
    case 406u: goto L_088E5E00;
    case 407u: goto L_088E5E08;
    case 408u: goto L_088E5E10;
    case 409u: goto L_088E5E20;
    case 410u: goto L_088E5E2C;
    case 411u: goto L_088E5E34;
    case 412u: goto L_088E5E3C;
    case 413u: goto L_088E5E40;
    case 414u: goto L_088E5E44;
    case 415u: goto L_088E5E4C;
    case 416u: goto L_088E5E60;
    case 417u: goto L_088E5E74;
    case 418u: goto L_088E5E80;
    case 419u: goto L_088E5E98;
    case 420u: goto L_088E5EBC;
    case 421u: goto L_088E5EC8;
    case 422u: goto L_088E5ED0;
    case 423u: goto L_088E5ED8;
    case 424u: goto L_088E5F00;
    case 425u: goto L_088E5F1C;
    case 426u: goto L_088E5F2C;
    case 427u: goto L_088E5F3C;
    case 428u: goto L_088E5F60;
    case 429u: goto L_088E5F68;
    case 430u: goto L_088E5F7C;
    case 431u: goto L_088E5F94;
    case 432u: goto L_088E5FA4;
    case 433u: goto L_088E5FB4;
    case 434u: goto L_088E5FD4;
    case 435u: goto L_088E5FFC;
    case 436u: goto L_088E6004;
    case 437u: goto L_088E6024;
    case 438u: goto L_088E6028;
    case 439u: goto L_088E6040;
    case 440u: goto L_088E6048;
    case 441u: goto L_088E6074;
    case 442u: goto L_088E6090;
    case 443u: goto L_088E60E0;
    case 444u: goto L_088E6104;
    case 445u: goto L_088E6118;
    case 446u: goto L_088E6130;
    case 447u: goto L_088E6144;
    case 448u: goto L_088E614C;
    case 449u: goto L_088E6154;
    case 450u: goto L_088E615C;
    case 451u: goto L_088E616C;
    case 452u: goto L_088E6174;
    case 453u: goto L_088E618C;
    case 454u: goto L_088E6194;
    case 455u: goto L_088E619C;
    case 456u: goto L_088E61A4;
    case 457u: goto L_088E61B4;
    case 458u: goto L_088E61C0;
    case 459u: goto L_088E61E4;
    case 460u: goto L_088E6200;
    case 461u: goto L_088E6208;
    case 462u: goto L_088E621C;
    case 463u: goto L_088E6238;
    case 464u: goto L_088E6248;
    case 465u: goto L_088E6250;
    case 466u: goto L_088E6270;
    case 467u: goto L_088E627C;
    case 468u: goto L_088E628C;
    case 469u: goto L_088E62B0;
    case 470u: goto L_088E62E4;
    case 471u: goto L_088E62F0;
    case 472u: goto L_088E6324;
    case 473u: goto L_088E632C;
    case 474u: goto L_088E6340;
    case 475u: goto L_088E6350;
    case 476u: goto L_088E6360;
    case 477u: goto L_088E6368;
    case 478u: goto L_088E6378;
    case 479u: goto L_088E637C;
    case 480u: goto L_088E6384;
    case 481u: goto L_088E6398;
    case 482u: goto L_088E63A0;
    case 483u: goto L_088E63A8;
    case 484u: goto L_088E63B8;
    case 485u: goto L_088E63C4;
    case 486u: goto L_088E63E4;
    case 487u: goto L_088E6414;
    case 488u: goto L_088E6438;
    case 489u: goto L_088E6460;
    case 490u: goto L_088E6488;
    case 491u: goto L_088E64B0;
    case 492u: goto L_088E64D4;
    case 493u: goto L_088E64FC;
    case 494u: goto L_088E6524;
    case 495u: goto L_088E6544;
    case 496u: goto L_088E6550;
    case 497u: goto L_088E6574;
    case 498u: goto L_088E6580;
    case 499u: goto L_088E6588;
    case 500u: goto L_088E6590;
    case 501u: goto L_088E6598;
    case 502u: goto L_088E65BC;
    case 503u: goto L_088E65CC;
    case 504u: goto L_088E65E4;
    case 505u: goto L_088E6600;
    case 506u: goto L_088E660C;
    case 507u: goto L_088E6620;
    case 508u: goto L_088E662C;
    case 509u: goto L_088E6634;
    case 510u: goto L_088E663C;
    case 511u: goto L_088E6644;
    case 512u: goto L_088E664C;
    case 513u: goto L_088E665C;
    case 514u: goto L_088E666C;
    case 515u: goto L_088E6670;
    case 516u: goto L_088E66B0;
    case 517u: goto L_088E66BC;
    case 518u: goto L_088E66D0;
    case 519u: goto L_088E66D8;
    case 520u: goto L_088E671C;
    case 521u: goto L_088E6728;
    case 522u: goto L_088E673C;
    case 523u: goto L_088E674C;
    case 524u: goto L_088E6760;
    case 525u: goto L_088E6764;
    case 526u: goto L_088E6770;
    case 527u: goto L_088E678C;
    case 528u: goto L_088E6790;
    case 529u: goto L_088E679C;
    case 530u: goto L_088E67AC;
    case 531u: goto L_088E67C8;
    case 532u: goto L_088E67E4;
    case 533u: goto L_088E67F4;
    case 534u: goto L_088E680C;
    case 535u: goto L_088E6820;
    case 536u: goto L_088E682C;
    case 537u: goto L_088E6844;
    case 538u: goto L_088E68E4;
    case 539u: goto L_088E68EC;
    case 540u: goto L_088E6920;
    case 541u: goto L_088E693C;
    case 542u: goto L_088E6944;
    case 543u: goto L_088E694C;
    case 544u: goto L_088E6974;
    case 545u: goto L_088E699C;
    case 546u: goto L_088E69C4;
    case 547u: goto L_088E69E0;
    case 548u: goto L_088E69F0;
    case 549u: goto L_088E6A00;
    case 550u: goto L_088E6A14;
    case 551u: goto L_088E6A28;
    case 552u: goto L_088E6A4C;
    case 553u: goto L_088E6A54;
    case 554u: goto L_088E6A5C;
    case 555u: goto L_088E6A64;
    case 556u: goto L_088E6A6C;
    case 557u: goto L_088E6A74;
    case 558u: goto L_088E6A7C;
    case 559u: goto L_088E6A94;
    case 560u: goto L_088E6AA8;
    case 561u: goto L_088E6AB0;
    case 562u: goto L_088E6AC8;
    case 563u: goto L_088E6AD0;
    case 564u: goto L_088E6ADC;
    case 565u: goto L_088E6AEC;
    case 566u: goto L_088E6B14;
    case 567u: goto L_088E6B2C;
    case 568u: goto L_088E6B38;
    case 569u: goto L_088E6B68;
    case 570u: goto L_088E6B78;
    case 571u: goto L_088E6B90;
    case 572u: goto L_088E6BB8;
    case 573u: goto L_088E6BC0;
    case 574u: goto L_088E6BE4;
    case 575u: goto L_088E6BFC;
    case 576u: goto L_088E6C04;
    case 577u: goto L_088E6C28;
    case 578u: goto L_088E6C40;
    case 579u: goto L_088E6C44;
    case 580u: goto L_088E6C4C;
    case 581u: goto L_088E6C60;
    case 582u: goto L_088E6C68;
    case 583u: goto L_088E6C70;
    case 584u: goto L_088E6C98;
    case 585u: goto L_088E6CB0;
    case 586u: goto L_088E6CBC;
    case 587u: goto L_088E6CF0;
    case 588u: goto L_088E6CFC;
    case 589u: goto L_088E6D0C;
    case 590u: goto L_088E6D10;
    case 591u: goto L_088E6D4C;
    case 592u: goto L_088E6D54;
    case 593u: goto L_088E6D7C;
    case 594u: goto L_088E6D8C;
    case 595u: goto L_088E6DA0;
    case 596u: goto L_088E6DA4;
    case 597u: goto L_088E6DC4;
    case 598u: goto L_088E6DEC;
    case 599u: goto L_088E6DF8;
    case 600u: goto L_088E6E04;
    case 601u: goto L_088E6E10;
    case 602u: goto L_088E6E20;
    case 603u: goto L_088E6E24;
    case 604u: goto L_088E6E48;
    case 605u: goto L_088E6E50;
    case 606u: goto L_088E6E60;
    case 607u: goto L_088E6E6C;
    case 608u: goto L_088E6E8C;
    case 609u: goto L_088E6EB0;
    case 610u: goto L_088E6ED0;
    case 611u: goto L_088E6ED8;
    case 612u: goto L_088E6EEC;
    case 613u: goto L_088E6EF4;
    case 614u: goto L_088E6F14;
    case 615u: goto L_088E6F2C;
    case 616u: goto L_088E6F34;
    case 617u: goto L_088E6F54;
    case 618u: goto L_088E6F74;
    case 619u: goto L_088E6F84;
    case 620u: goto L_088E6F8C;
    case 621u: goto L_088E6FA0;
    case 622u: goto L_088E6FA4;
    case 623u: goto L_088E6FB4;
    case 624u: goto L_088E6FBC;
    case 625u: goto L_088E6FD4;
    case 626u: goto L_088E7004;
    case 627u: goto L_088E700C;
    case 628u: goto L_088E7020;
    case 629u: goto L_088E7028;
    case 630u: goto L_088E704C;
    case 631u: goto L_088E705C;
    case 632u: goto L_088E7060;
    case 633u: goto L_088E7070;
    case 634u: goto L_088E7078;
    case 635u: goto L_088E709C;
    case 636u: goto L_088E70A8;
    case 637u: goto L_088E70B4;
    case 638u: goto L_088E70BC;
    case 639u: goto L_088E70C4;
    case 640u: goto L_088E70CC;
    case 641u: goto L_088E70E0;
    case 642u: goto L_088E70F0;
    case 643u: goto L_088E7114;
    case 644u: goto L_088E7150;
    case 645u: goto L_088E715C;
    case 646u: goto L_088E717C;
    case 647u: goto L_088E7184;
    case 648u: goto L_088E718C;
    case 649u: goto L_088E71A8;
    case 650u: goto L_088E71E4;
    case 651u: goto L_088E720C;
    case 652u: goto L_088E721C;
    case 653u: goto L_088E7240;
    case 654u: goto L_088E7254;
    case 655u: goto L_088E7258;
    case 656u: goto L_088E7278;
    case 657u: goto L_088E7284;
    case 658u: goto L_088E728C;
    case 659u: goto L_088E729C;
    case 660u: goto L_088E72A4;
    case 661u: goto L_088E72B0;
    case 662u: goto L_088E72B8;
    case 663u: goto L_088E72C0;
    case 664u: goto L_088E72C8;
    case 665u: goto L_088E72D8;
    case 666u: goto L_088E72F4;
    case 667u: goto L_088E72FC;
    case 668u: goto L_088E7304;
    case 669u: goto L_088E7314;
    case 670u: goto L_088E7330;
    case 671u: goto L_088E7354;
    case 672u: goto L_088E7368;
    case 673u: goto L_088E7370;
    case 674u: goto L_088E7388;
    case 675u: goto L_088E7390;
    case 676u: goto L_088E73A0;
    case 677u: goto L_088E73C4;
    case 678u: goto L_088E73D8;
    case 679u: goto L_088E73E0;
    case 680u: goto L_088E73EC;
    case 681u: goto L_088E73F8;
    case 682u: goto L_088E7410;
    case 683u: goto L_088E7428;
    case 684u: goto L_088E7430;
    case 685u: goto L_088E7438;
    case 686u: goto L_088E7444;
    case 687u: goto L_088E7464;
    case 688u: goto L_088E7484;
    case 689u: goto L_088E7498;
    case 690u: goto L_088E74A0;
    case 691u: goto L_088E74B0;
    case 692u: goto L_088E74CC;
    case 693u: goto L_088E74F0;
    case 694u: goto L_088E7504;
    case 695u: goto L_088E750C;
    case 696u: goto L_088E7514;
    case 697u: goto L_088E751C;
    case 698u: goto L_088E7528;
    case 699u: goto L_088E755C;
    case 700u: goto L_088E757C;
    case 701u: goto L_088E7584;
    case 702u: goto L_088E75A4;
    case 703u: goto L_088E75BC;
    case 704u: goto L_088E75C4;
    case 705u: goto L_088E75DC;
    case 706u: goto L_088E75E4;
    case 707u: goto L_088E760C;
    case 708u: goto L_088E7624;
    case 709u: goto L_088E7628;
    case 710u: goto L_088E7638;
    case 711u: goto L_088E7660;
    case 712u: goto L_088E766C;
    case 713u: goto L_088E7674;
    case 714u: goto L_088E767C;
    case 715u: goto L_088E7694;
    case 716u: goto L_088E76D4;
    case 717u: goto L_088E7728;
    case 718u: goto L_088E7734;
    case 719u: goto L_088E7750;
    case 720u: goto L_088E7754;
    case 721u: goto L_088E776C;
    case 722u: goto L_088E7778;
    case 723u: goto L_088E778C;
    case 724u: goto L_088E779C;
    case 725u: goto L_088E77AC;
    case 726u: goto L_088E77B4;
    case 727u: goto L_088E77BC;
    case 728u: goto L_088E77C4;
    case 729u: goto L_088E77D0;
    case 730u: goto L_088E77D8;
    case 731u: goto L_088E77E0;
    case 732u: goto L_088E77EC;
    case 733u: goto L_088E77FC;
    case 734u: goto L_088E7804;
    case 735u: goto L_088E780C;
    case 736u: goto L_088E7818;
    case 737u: goto L_088E7828;
    case 738u: goto L_088E782C;
    case 739u: goto L_088E7840;
    case 740u: goto L_088E7858;
    case 741u: goto L_088E7870;
    case 742u: goto L_088E7878;
    case 743u: goto L_088E7880;
    case 744u: goto L_088E7898;
    case 745u: goto L_088E78B0;
    case 746u: goto L_088E78D8;
    case 747u: goto L_088E78E0;
    case 748u: goto L_088E78E8;
    case 749u: goto L_088E78F0;
    case 750u: goto L_088E7948;
    case 751u: goto L_088E7970;
    case 752u: goto L_088E7978;
    case 753u: goto L_088E7990;
    case 754u: goto L_088E79B0;
    case 755u: goto L_088E79BC;
    case 756u: goto L_088E79C4;
    case 757u: goto L_088E79C8;
    case 758u: goto L_088E79DC;
    case 759u: goto L_088E79FC;
    case 760u: goto L_088E7A08;
    case 761u: goto L_088E7A10;
    case 762u: goto L_088E7A18;
    case 763u: goto L_088E7A20;
    case 764u: goto L_088E7A30;
    case 765u: goto L_088E7A40;
    case 766u: goto L_088E7A50;
    case 767u: goto L_088E7A60;
    case 768u: goto L_088E7A68;
    case 769u: goto L_088E7A8C;
    case 770u: goto L_088E7AB4;
    case 771u: goto L_088E7AD0;
    case 772u: goto L_088E7AD8;
    case 773u: goto L_088E7AE0;
    case 774u: goto L_088E7AEC;
    case 775u: goto L_088E7AF8;
    case 776u: goto L_088E7B08;
    case 777u: goto L_088E7B1C;
    case 778u: goto L_088E7B38;
    case 779u: goto L_088E7B40;
    case 780u: goto L_088E7B4C;
    case 781u: goto L_088E7B54;
    case 782u: goto L_088E7B70;
    case 783u: goto L_088E7B80;
    case 784u: goto L_088E7B8C;
    case 785u: goto L_088E7BC8;
    case 786u: goto L_088E7BE0;
    case 787u: goto L_088E7C0C;
    case 788u: goto L_088E7C18;
    case 789u: goto L_088E7C28;
    case 790u: goto L_088E7C30;
    case 791u: goto L_088E7C4C;
    case 792u: goto L_088E7C54;
    case 793u: goto L_088E7C5C;
    case 794u: goto L_088E7C78;
    case 795u: goto L_088E7C7C;
    case 796u: goto L_088E7C88;
    case 797u: goto L_088E7C98;
    case 798u: goto L_088E7CA8;
    case 799u: goto L_088E7CB8;
    case 800u: goto L_088E7CC4;
    case 801u: goto L_088E7D00;
    case 802u: goto L_088E7D18;
    case 803u: goto L_088E7D44;
    case 804u: goto L_088E7D50;
    case 805u: goto L_088E7D60;
    case 806u: goto L_088E7D68;
    case 807u: goto L_088E7D74;
    case 808u: goto L_088E7D8C;
    case 809u: goto L_088E7D98;
    case 810u: goto L_088E7E4C;
    case 811u: goto L_088E7E84;
    case 812u: goto L_088E7E8C;
    case 813u: goto L_088E7ED4;
    case 814u: goto L_088E7EDC;
    case 815u: goto L_088E7EE4;
    case 816u: goto L_088E7F04;
    case 817u: goto L_088E7F0C;
    case 818u: goto L_088E7F14;
    case 819u: goto L_088E7F20;
    case 820u: goto L_088E7F2C;
    case 821u: goto L_088E7F38;
    case 822u: goto L_088E7F44;
    case 823u: goto L_088E7F4C;
    case 824u: goto L_088E7F64;
    case 825u: goto L_088E7F70;
    case 826u: goto L_088E7F78;
    case 827u: goto L_088E7F80;
    case 828u: goto L_088E7F88;
    case 829u: goto L_088E7F94;
    case 830u: goto L_088E7F9C;
    case 831u: goto L_088E7FA8;
    case 832u: goto L_088E7FB0;
    case 833u: goto L_088E7FB4;
    case 834u: goto L_088E7FC4;
    case 835u: goto L_088E7FD4;
    case 836u: goto L_088E7FDC;
    case 837u: goto L_088E7FE4;
    case 838u: goto L_088E7FEC;
    case 839u: goto L_088E7FF4;
    case 840u: goto L_088E7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_088E4000:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_12 + ctx.fpr[22];
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    aot_gpr_18 = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x088E40E0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E40E0u) goto L_088E40E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E40E0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E4110;
      }
      goto L_088E40E8;
    }
L_088E40E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E4110;
      }
      goto L_088E4100;
    }
L_088E4100:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (16204u << 16u);
      if (branch_taken) {
          goto L_088E4194;
      }
      goto L_088E4110;
    }
L_088E4110:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = aot_fpr_12 + ctx.fpr[22];
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x088E4180u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4180u) goto L_088E4180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4180:
    if (aot_gpr_2 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
        goto L_088E41E4;
    }
    goto L_088E4188;
L_088E4188:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E4258;
      }
      goto L_088E4190;
    }
L_088E4190:
    aot_gpr_4 = (16204u << 16u);
    goto L_088E4194;
L_088E4194:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088E425C;
      }
      goto L_088E41E4;
    }
L_088E41E4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E4258;
      }
      goto L_088E41F8;
    }
L_088E41F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (16204u << 16u);
      if (branch_taken) {
          goto L_088E4258;
      }
      goto L_088E4208;
    }
L_088E4208:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088E425C;
      }
      goto L_088E4258;
    }
L_088E4258:
    aot_gpr_2 = (0u | 0u);
    goto L_088E425C;
L_088E425C:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(272), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      aot_gpr_18 = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[21] = aot_run_words[8];
      ctx.gpr[22] = aot_run_words[9];
      ctx.gpr[23] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
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
L_088E4294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088E42B8u);
    aot_gpr_6 = (0u | 214u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E42B8u) goto L_088E42B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E42B8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E42D4;
      }
      goto L_088E42C4;
    }
L_088E42C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_088E42D4;
L_088E42D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E42E4u);
    aot_gpr_6 = (0u | 215u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E42E4u) goto L_088E42E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E42E4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E4300;
      }
      goto L_088E42F0;
    }
L_088E42F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_088E4300;
L_088E4300:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E4310u);
    aot_gpr_6 = (0u | 218u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4310u) goto L_088E4310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4310:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E432C;
      }
      goto L_088E431C;
    }
L_088E431C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_088E432C;
L_088E432C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E433Cu);
    aot_gpr_6 = (0u | 216u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E433Cu) goto L_088E433C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E433C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E4358;
      }
      goto L_088E4348;
    }
L_088E4348:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    goto L_088E4358;
L_088E4358:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E4368u);
    aot_gpr_6 = (0u | 217u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4368u) goto L_088E4368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4368:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E43B4;
      }
      goto L_088E4374;
    }
L_088E4374:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_gpr_6 = (aot_gpr_5 & 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088E439C;
      }
      goto L_088E4394;
    }
L_088E4394:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_088E43B4;
      }
      goto L_088E439C;
    }
L_088E439C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E43B4u);
    ctx.gpr[7] = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E43B4u) goto L_088E43B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E43B4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_088E43C8:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 4u);
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
L_088E43D0:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 1u);
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
L_088E43D8:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
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
L_088E43E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_18);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_088E442C;
      }
      goto L_088E4410;
    }
L_088E4410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E4430;
      }
      goto L_088E442C;
    }
L_088E442C:
    ctx.gpr[19] = (0u | 1u);
    goto L_088E4430;
L_088E4430:
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    aot_gpr_31 = (0x088E443Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E443Cu) goto L_088E443C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E443C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E4450;
      }
      goto L_088E4444;
    }
L_088E4444:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088E4454;
      }
      goto L_088E4450;
    }
L_088E4450:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_088E4454;
L_088E4454:
    aot_gpr_31 = (0x088E445Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E445Cu) goto L_088E445C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E445C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_gpr_18 | 0u);
      if (branch_taken) {
          goto L_088E4478;
      }
      goto L_088E4464;
    }
L_088E4464:
    aot_gpr_31 = (0x088E446Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 762u, 0x089AB910u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E446Cu) goto L_088E446C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E446C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E4478;
      }
      goto L_088E4474;
    }
L_088E4474:
    ctx.gpr[19] = (0u | 0u);
    goto L_088E4478;
L_088E4478:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
        goto L_088E449C;
    }
    goto L_088E4488;
L_088E4488:
    aot_gpr_31 = (0x088E4490u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4490u) goto L_088E4490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4490:
    { const bool branch_taken = aot_gpr_18 != aot_gpr_2;
      if (branch_taken) {
          goto L_088E44A4;
      }
      goto L_088E4498;
    }
L_088E4498:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    goto L_088E449C;
L_088E449C:
    { const bool branch_taken = aot_gpr_18 != aot_gpr_4;
      if (branch_taken) {
          goto L_088E44B8;
      }
      goto L_088E44A4;
    }
L_088E44A4:
    aot_gpr_31 = (0x088E44ACu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E44ACu) goto L_088E44AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E44AC:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    ctx.gpr[19] = (aot_gpr_4 & 31u);
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088E44B8;
L_088E44B8:
    aot_gpr_31 = (0x088E44C0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E44C0u) goto L_088E44C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E44C0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E44E0;
      }
      goto L_088E44C8;
    }
L_088E44C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E44E0;
      }
      goto L_088E44D8;
    }
L_088E44D8:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (0u | 0u);
    goto L_088E44E0;
L_088E44E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_088E44F0;
      }
      goto L_088E44EC;
    }
L_088E44EC:
    ctx.gpr[19] = (0u | 0u);
    goto L_088E44F0;
L_088E44F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(2276)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E4528;
      }
      goto L_088E4500;
    }
L_088E4500:
    aot_gpr_31 = (0x088E4508u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4508u) goto L_088E4508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4508:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E4528;
      }
      goto L_088E4510;
    }
L_088E4510:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (4096u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E4528;
      }
      goto L_088E4524;
    }
L_088E4524:
    ctx.gpr[19] = (0u | 0u);
    goto L_088E4528;
L_088E4528:
    aot_gpr_2 = (ctx.gpr[19] | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
L_088E4548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x088E4568u);
    ctx.gpr[17] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4568u) goto L_088E4568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4568:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E4584;
      }
      goto L_088E4570;
    }
L_088E4570:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E4584;
      }
      goto L_088E4580;
    }
L_088E4580:
    ctx.gpr[17] = (0u | 0u);
    goto L_088E4584;
L_088E4584:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_088E459C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), ctx.gpr[16], ctx.gpr[17], aot_gpr_18, ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E45E0;
      }
      goto L_088E45D0;
    }
L_088E45D0:
    aot_gpr_31 = (0x088E45D8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_088E43D8;
L_088E45D8:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E45F4;
      }
      goto L_088E45E0;
    }
L_088E45E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_088E460C;
      }
      goto L_088E45EC;
    }
L_088E45EC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E45FC;
      }
      goto L_088E45F4;
    }
L_088E45F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E4804;
      }
      goto L_088E45FC;
    }
L_088E45FC:
    aot_gpr_31 = (0x088E4604u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_088E43D8;
L_088E4604:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E47F8;
      }
      goto L_088E460C;
    }
L_088E460C:
    aot_gpr_31 = (0x088E4614u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_088E43D0;
L_088E4614:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088E4620u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_088E43C8;
L_088E4620:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    aot_gpr_31 = (0x088E462Cu);
    aot_gpr_18 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E462Cu) goto L_088E462C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E462C:
    aot_gpr_6 = (aot_gpr_18 - ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x088E4640u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4640u) goto L_088E4640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4640:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_31 = (0x088E4670u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4670u) goto L_088E4670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4670:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23292)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23296)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088E4684u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4684u) goto L_088E4684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4684:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E46C8;
      }
      goto L_088E46A4;
    }
L_088E46A4:
    aot_gpr_31 = (0x088E46ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_088E43D8;
L_088E46AC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E46C8;
      }
      goto L_088E46B4;
    }
L_088E46B4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E46C0u);
    aot_gpr_5 = (0u | 138u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E46C0u) goto L_088E46C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E46C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E47F0;
      }
      goto L_088E46C8;
    }
L_088E46C8:
    aot_gpr_4 = (16204u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16281u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_gpr_31 = (0x088E46E4u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E46E4u) goto L_088E46E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E46E4:
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[22];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23284)));
    aot_gpr_5 = (aot_gpr_4 ^ 20u);
    aot_gpr_4 = (aot_gpr_4 ^ 5u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    aot_gpr_18 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23288)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_088E478C;
      }
      goto L_088E4720;
    }
L_088E4720:
    aot_gpr_31 = (0x088E4728u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4728u) goto L_088E4728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4728:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088E473Cu);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E473Cu) goto L_088E473C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E473C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23276)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23280)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (aot_gpr_2 >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_6 = (ctx.gpr[9] + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_31 = (0x088E4784u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4784u) goto L_088E4784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4784:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E47F0;
      }
      goto L_088E478C;
    }
L_088E478C:
    aot_gpr_31 = (0x088E4794u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4794u) goto L_088E4794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4794:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088E47A8u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E47A8u) goto L_088E47A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E47A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23268)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23272)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_6 = (aot_gpr_2 >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_6 = (ctx.gpr[1] | aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_4 ? 1u : 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_6 = (ctx.gpr[9] + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_31 = (0x088E47F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E47F0u) goto L_088E47F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E47F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E4804;
      }
      goto L_088E47F8;
    }
L_088E47F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), aot_gpr_4);
    goto L_088E4804;
L_088E4804:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      aot_gpr_18 = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
L_088E4830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_088E48F4;
      }
      goto L_088E4850;
    }
L_088E4850:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1396));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_6 = (16268u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x088E4878u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 161u, 0x08A40D58u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4878u) goto L_088E4878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4878:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E488C;
      }
      goto L_088E4880;
    }
L_088E4880:
    aot_gpr_4 = (16332u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    goto L_088E488C;
L_088E488C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E48AC;
      }
      goto L_088E489C;
    }
L_088E489C:
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    goto L_088E48AC;
L_088E48AC:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (0u | 0u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[17] = (0u | 1u);
        goto L_088E48EC;
    }
    goto L_088E48EC;
L_088E48EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_088E48F8;
      }
      goto L_088E48F4;
    }
L_088E48F4:
    aot_gpr_2 = (0u | 0u);
    goto L_088E48F8;
L_088E48F8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
L_088E4910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_18);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x088E4934u);
    aot_gpr_18 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4934u) goto L_088E4934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4934:
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_2;
      if (branch_taken) {
          goto L_088E49F8;
      }
      goto L_088E493C;
    }
L_088E493C:
    aot_gpr_6 = (0u | 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_6;
    aot_gpr_4 = (0u | 6u);
      if (branch_taken) {
          goto L_088E4970;
      }
      goto L_088E494C;
    }
L_088E494C:
    aot_gpr_6 = (0u | 10u);
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_6;
    aot_gpr_6 = (0u | 9u);
      if (branch_taken) {
          goto L_088E4970;
      }
      goto L_088E4958;
    }
L_088E4958:
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_6;
    aot_gpr_6 = (0u | 11u);
      if (branch_taken) {
          goto L_088E4970;
      }
      goto L_088E4960;
    }
L_088E4960:
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_6;
    aot_gpr_6 = (0u | 53u);
      if (branch_taken) {
          goto L_088E4970;
      }
      goto L_088E4968;
    }
L_088E4968:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_6;
      if (branch_taken) {
          goto L_088E49B8;
      }
      goto L_088E4970;
    }
L_088E4970:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088E4998;
      }
      goto L_088E4978;
    }
L_088E4978:
    aot_gpr_4 = (0u | 18u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E4990u);
    ctx.gpr[8] = (0u | 2000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4990u) goto L_088E4990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4990:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E49F8;
      }
      goto L_088E4998;
    }
L_088E4998:
    aot_gpr_4 = (0u | 17u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E49B0u);
    ctx.gpr[8] = (0u | 2000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E49B0u) goto L_088E49B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E49B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E49F8;
      }
      goto L_088E49B8;
    }
L_088E49B8:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088E49E0;
      }
      goto L_088E49C0;
    }
L_088E49C0:
    aot_gpr_4 = (0u | 3u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E49D8u);
    ctx.gpr[8] = (0u | 2000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E49D8u) goto L_088E49D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E49D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E49F8;
      }
      goto L_088E49E0;
    }
L_088E49E0:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E49F8u);
    ctx.gpr[8] = (0u | 2000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E49F8u) goto L_088E49F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E49F8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
L_088E4A10:
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_14));
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
L_088E4A4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 12u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_18, ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088E4AA0;
      }
      goto L_088E4A94;
    }
L_088E4A94:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_088E4AAC;
      }
      goto L_088E4AA0;
    }
L_088E4AA0:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_088E4AAC;
L_088E4AAC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088E4B10;
      }
      goto L_088E4AB4;
    }
L_088E4AB4:
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_31 = (0x088E4AD4u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4AD4u) goto L_088E4AD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4AD4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088E4B10;
      }
      goto L_088E4AEC;
    }
L_088E4AEC:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x088E4B00u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4B00u) goto L_088E4B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4B00:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088E4B10;
L_088E4B10:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_18 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088E4B4C;
      }
      goto L_088E4B20;
    }
L_088E4B20:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_088E4B44;
    }
    goto L_088E4B28;
L_088E4B28:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[8] = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    goto L_088E4B44;
L_088E4B44:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088E4B20;
      }
      goto L_088E4B4C;
    }
L_088E4B4C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_088E4B88;
      }
      goto L_088E4B5C;
    }
L_088E4B5C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088E4B7C;
      }
      goto L_088E4B64;
    }
L_088E4B64:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[7], ctx.gpr[8], aot_gpr_6};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_run_words); }
    goto L_088E4B7C;
L_088E4B7C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088E4BC0;
      }
      goto L_088E4B88;
    }
L_088E4B88:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088E4BBC;
      }
      goto L_088E4B90;
    }
L_088E4B90:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_088E4BB4;
    }
    goto L_088E4B98;
L_088E4B98:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[8] = aot_run_words[0];
      ctx.gpr[9] = aot_run_words[1];
      ctx.gpr[10] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], ctx.gpr[9], ctx.gpr[10]};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_088E4BB4;
L_088E4BB4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088E4B90;
      }
      goto L_088E4BBC;
    }
L_088E4BBC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088E4BC0;
L_088E4BC0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E4C08;
      }
      goto L_088E4BC8;
    }
L_088E4BC8:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088E4C08;
      }
      goto L_088E4BD8;
    }
L_088E4BD8:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
        goto L_088E4BFC;
    }
    goto L_088E4BE0;
L_088E4BE0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_6 = aot_run_words[0];
      ctx.gpr[7] = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, ctx.gpr[7], ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    goto L_088E4BFC;
L_088E4BFC:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088E4BD8;
      }
      goto L_088E4C04;
    }
L_088E4C04:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088E4C08;
L_088E4C08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088E4C24;
      }
      goto L_088E4C18;
    }
L_088E4C18:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    goto L_088E4C1C;
L_088E4C1C:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088E4C1C;
      }
      goto L_088E4C24;
    }
L_088E4C24:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E4C34;
      }
      goto L_088E4C2C;
    }
L_088E4C2C:
    aot_gpr_31 = (0x088E4C34u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], aot_gpr_18, ctx.gpr[19], ctx.gpr[20], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4C34u) goto L_088E4C34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4C34:
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_18);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_18 = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
L_088E4C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088E4CC0;
      }
      goto L_088E4C8C;
    }
L_088E4C8C:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    goto L_088E4C94;
L_088E4C94:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
        goto L_088E4CB4;
    }
    goto L_088E4CA4;
L_088E4CA4:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088E4CB8;
      }
      goto L_088E4CB4;
    }
L_088E4CB4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_088E4CB8;
L_088E4CB8:
    if (aot_gpr_6 != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
        goto L_088E4C94;
    }
    goto L_088E4CC0;
L_088E4CC0:
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_088E4CE4;
    }
    goto L_088E4CC8;
L_088E4CC8:
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (ctx.gpr[7] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_4);
        goto L_088E4CE8;
    }
    goto L_088E4CE0;
L_088E4CE0:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_088E4CE4;
L_088E4CE4:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), aot_gpr_4);
    goto L_088E4CE8;
L_088E4CE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E4D20;
      }
      goto L_088E4D18;
    }
L_088E4D18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_088E4D24;
      }
      goto L_088E4D20;
    }
L_088E4D20:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    goto L_088E4D24;
L_088E4D24:
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
L_088E4D2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], aot_gpr_18, ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(60), aot_run_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), aot_gpr_5);
      if (branch_taken) {
          goto L_088E4D88;
      }
      goto L_088E4D80;
    }
L_088E4D80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_088E5148;
      }
      goto L_088E4D88;
    }
L_088E4D88:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_18 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1914)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_18) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088E50D0;
      }
      goto L_088E4DC4;
    }
L_088E4DC4:
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (0u | 58u);
    aot_gpr_4 = (48921u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16295u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 36151u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16134u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 2706u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    goto L_088E4DF4;
L_088E4DF4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1914)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_18) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E4E18;
      }
      goto L_088E4E04;
    }
L_088E4E04:
    aot_gpr_4 = (aot_gpr_18 << 2u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088E4E34;
      }
      goto L_088E4E18;
    }
L_088E4E18:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1914)));
    aot_gpr_4 = (aot_gpr_18 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1824)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_088E4E34;
L_088E4E34:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E50B0;
      }
      goto L_088E4E68;
    }
L_088E4E68:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_31 = (0x088E4E84u);
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4E84u) goto L_088E4E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4E84:
    aot_gpr_31 = (0x088E4E8Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4E8Cu) goto L_088E4E8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4E8C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x088E4E98u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2256)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4E98u) goto L_088E4E98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4E98:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2256)));
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_088E4EB8;
    }
    goto L_088E4EB8;
L_088E4EB8:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_088E4EE4;
      }
      goto L_088E4ED8;
    }
L_088E4ED8:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    goto L_088E4EE4;
L_088E4EE4:
    aot_gpr_31 = (0x088E4EECu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 244u, 0x088E289Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4EECu) goto L_088E4EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4EEC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 45u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 46u);
      if (branch_taken) {
          goto L_088E4F14;
      }
      goto L_088E4EFC;
    }
L_088E4EFC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 57u);
      if (branch_taken) {
          goto L_088E4F14;
      }
      goto L_088E4F04;
    }
L_088E4F04:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E4F14;
      }
      goto L_088E4F0C;
    }
L_088E4F0C:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_088E4FB8;
      }
      goto L_088E4F14;
    }
L_088E4F14:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (16273u << 16u);
      if (branch_taken) {
          goto L_088E50B0;
      }
      goto L_088E4F24;
    }
L_088E4F24:
    aot_gpr_5 = (aot_gpr_5 | 13854u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E50B0;
      }
      goto L_088E4F3C;
    }
L_088E4F3C:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_088E4F58;
      }
      goto L_088E4F44;
    }
L_088E4F44:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088E50B0;
      }
      goto L_088E4F50;
    }
L_088E4F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E50B0;
      }
      goto L_088E4F58;
    }
L_088E4F58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E4F88;
      }
      goto L_088E4F74;
    }
L_088E4F74:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E4F80u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4F80u) goto L_088E4F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4F80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u < aot_gpr_2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088E4F98;
      }
      goto L_088E4F88;
    }
L_088E4F88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x088E4F94u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 576u, 0x089D3298u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E4F94u) goto L_088E4F94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E4F94:
    aot_gpr_4 = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_088E4F98;
L_088E4F98:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E4FB0;
      }
      goto L_088E4FA0;
    }
L_088E4FA0:
    ctx.gpr[30] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
      if (branch_taken) {
          goto L_088E4FB0;
      }
      goto L_088E4FAC;
    }
L_088E4FAC:
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    goto L_088E4FB0;
L_088E4FB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E50B0;
      }
      goto L_088E4FB8;
    }
L_088E4FB8:
    aot_gpr_4 = (16204u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16294u << 16u);
      if (branch_taken) {
          goto L_088E4FE8;
      }
      goto L_088E4FD4;
    }
L_088E4FD4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088E5074;
      }
      goto L_088E4FE4;
    }
L_088E4FE4:
    aot_gpr_4 = (16294u << 16u);
    goto L_088E4FE8;
L_088E4FE8:
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16345u << 16u);
      if (branch_taken) {
          goto L_088E5020;
      }
      goto L_088E5000;
    }
L_088E5000:
    aot_gpr_4 = (16245u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 48651u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088E5074;
      }
      goto L_088E501C;
    }
L_088E501C:
    aot_gpr_4 = (16345u << 16u);
    goto L_088E5020;
L_088E5020:
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16156u << 16u);
      if (branch_taken) {
          goto L_088E5050;
      }
      goto L_088E5038;
    }
L_088E5038:
    aot_gpr_4 = (aot_gpr_4 | 25003u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088E5074;
      }
      goto L_088E5050;
    }
L_088E5050:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E5090;
      }
      goto L_088E5060;
    }
L_088E5060:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[30])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E5090;
      }
      goto L_088E5070;
    }
L_088E5070:
    aot_gpr_4 = (0u | 1u);
    goto L_088E5074;
L_088E5074:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088E5088;
      }
      goto L_088E5080;
    }
L_088E5080:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088E5088;
L_088E5088:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E5148;
      }
      goto L_088E5090;
    }
L_088E5090:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E50B0;
      }
      goto L_088E50A0;
    }
L_088E50A0:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_mem.aot_direct_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_088E50B0;
      }
      goto L_088E50AC;
    }
L_088E50AC:
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_088E50B0;
L_088E50B0:
    aot_gpr_18 = (aot_gpr_18 + static_cast<std::uint32_t>(1));
    aot_gpr_18 = (aot_gpr_18 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1914)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_18) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E4DF4;
      }
      goto L_088E50D0;
    }
L_088E50D0:
    { const bool branch_taken = ctx.gpr[30] == 0u;
      if (branch_taken) {
          goto L_088E50F4;
      }
      goto L_088E50D8;
    }
L_088E50D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E50EC;
      }
      goto L_088E50E4;
    }
L_088E50E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_088E50EC;
L_088E50EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_088E5148;
      }
      goto L_088E50F4;
    }
L_088E50F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E511C;
      }
      goto L_088E5100;
    }
L_088E5100:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E5114;
      }
      goto L_088E510C;
    }
L_088E510C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    goto L_088E5114;
L_088E5114:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 3u);
      if (branch_taken) {
          goto L_088E5148;
      }
      goto L_088E511C;
    }
L_088E511C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E5144;
      }
      goto L_088E5128;
    }
L_088E5128:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_088E513C;
      }
      goto L_088E5134;
    }
L_088E5134:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    goto L_088E513C;
L_088E513C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E5148;
      }
      goto L_088E5144;
    }
L_088E5144:
    aot_gpr_2 = (0u | 0u);
    goto L_088E5148;
L_088E5148:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(60), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      ctx.gpr[16] = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      aot_gpr_18 = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      ctx.gpr[22] = aot_run_words[12];
      ctx.gpr[23] = aot_run_words[13];
      ctx.gpr[30] = aot_run_words[14];
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
L_088E5190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    { const std::uint32_t aot_run_words[13]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), ctx.gpr[16], ctx.gpr[17], aot_gpr_18, ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(152), aot_run_words); }
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), aot_gpr_6);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_18 = (2237u << 16u);
    aot_gpr_18 = (aot_gpr_18 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(43), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(46), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_31 = (0x088E51F8u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E51F8u) goto L_088E51F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E51F8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088E5310;
      }
      goto L_088E5204;
    }
L_088E5204:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088E5308;
      }
      goto L_088E5210;
    }
L_088E5210:
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(45), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(48), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5228u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5228u) goto L_088E5228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5228:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088E5300;
      }
      goto L_088E5234;
    }
L_088E5234:
    aot_gpr_18 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    aot_gpr_31 = (0x088E5240u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5240u) goto L_088E5240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5240:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E52F8;
      }
      goto L_088E5248;
    }
L_088E5248:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), aot_gpr_18);
    aot_gpr_18 = (ctx.gpr[16] | 0u);
    aot_gpr_4 = (aot_gpr_18 + static_cast<std::uint32_t>(3));
    aot_gpr_31 = (0x088E525Cu);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    goto L_088E4A10;
L_088E525C:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_18 + static_cast<std::uint32_t>(15));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x088E5278u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_088E4A10;
L_088E5278:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_18 + static_cast<std::uint32_t>(27));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x088E5294u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    goto L_088E4A10;
L_088E5294:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[16] = (aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(53)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(49)));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_20)));
    ctx.gpr[30] = (aot_mem.aot_direct_load_word_right(aot_gpr_18 + static_cast<std::uint32_t>(47), ctx.gpr[30]));
    ctx.gpr[30] = (aot_mem.aot_direct_load_word_left(aot_gpr_18 + static_cast<std::uint32_t>(50), ctx.gpr[30]));
    ctx.gpr[30] = (ctx.gpr[30] << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.gpr[22] = (aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(50)));
    ctx.gpr[1] = (aot_mem.aot_direct_load_word_right(aot_gpr_18 + static_cast<std::uint32_t>(39), ctx.gpr[1]));
    ctx.gpr[1] = (aot_mem.aot_direct_load_word_left(aot_gpr_18 + static_cast<std::uint32_t>(42), ctx.gpr[1]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[1]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[20] << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), aot_gpr_4);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_18 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_088E5318;
      }
      goto L_088E52F0;
    }
L_088E52F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E5338;
      }
      goto L_088E52F8;
    }
L_088E52F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E56E0;
      }
      goto L_088E5300;
    }
L_088E5300:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E56E0;
      }
      goto L_088E5308;
    }
L_088E5308:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E56E0;
      }
      goto L_088E5310;
    }
L_088E5310:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E56E0;
      }
      goto L_088E5318;
    }
L_088E5318:
    aot_gpr_31 = (0x088E5320u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5320u) goto L_088E5320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5320:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E5338;
      }
      goto L_088E5328;
    }
L_088E5328:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 46u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E5348;
      }
      goto L_088E5338;
    }
L_088E5338:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_088E5350;
      }
      goto L_088E5340;
    }
L_088E5340:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E53B0;
      }
      goto L_088E5348;
    }
L_088E5348:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E56E0;
      }
      goto L_088E5350;
    }
L_088E5350:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E5368u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5368u) goto L_088E5368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5368:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E5380u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5380u) goto L_088E5380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5380:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_2 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E53B0;
      }
      goto L_088E53A8;
    }
L_088E53A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E56E0;
      }
      goto L_088E53B0;
    }
L_088E53B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[20] << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E5424;
      }
      goto L_088E53D8;
    }
L_088E53D8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_18) >> 31u));
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    aot_gpr_31 = (0x088E53F4u);
    aot_gpr_6 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E53F4u) goto L_088E53F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E53F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23244)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23248)));
    aot_gpr_5 = (ctx.gpr[3] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_088E541C;
      }
      goto L_088E5414;
    }
L_088E5414:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088E542C;
      }
      goto L_088E541C;
    }
L_088E541C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E5430;
      }
      goto L_088E5424;
    }
L_088E5424:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E56E0;
      }
      goto L_088E542C;
    }
L_088E542C:
    aot_gpr_18 = (0u | 0u);
    goto L_088E5430;
L_088E5430:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088E56E0;
      }
      goto L_088E5438;
    }
L_088E5438:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E54E0;
      }
      goto L_088E5448;
    }
L_088E5448:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E54E0;
      }
      goto L_088E5458;
    }
L_088E5458:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E5470u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5470u) goto L_088E5470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E5488u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5488u) goto L_088E5488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5488:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_2 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E54C0;
      }
      goto L_088E54B0;
    }
L_088E54B0:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_088E54C0;
L_088E54C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.gpr[8] = (ctx.gpr[22] & 255u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x088E54E0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E54E0u) goto L_088E54E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E54E0:
    aot_gpr_31 = (0x088E54E8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_088E4548;
L_088E54E8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[30] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_088E5564;
      }
      goto L_088E54F0;
    }
L_088E54F0:
    aot_gpr_4 = (0u | 255u);
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_4;
      if (branch_taken) {
          goto L_088E5524;
      }
      goto L_088E54FC;
    }
L_088E54FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[16] << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E5640;
      }
      goto L_088E5524;
    }
L_088E5524:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E553Cu);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E553Cu) goto L_088E553C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E553C:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (aot_gpr_18 | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088E555Cu);
    ctx.gpr[9] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 486u, 0x0881ECDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E555Cu) goto L_088E555C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E555C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E5640;
      }
      goto L_088E5564;
    }
L_088E5564:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    aot_gpr_31 = (0x088E5570u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5570u) goto L_088E5570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5570:
    aot_gpr_31 = (0x088E5578u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5578u) goto L_088E5578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5578:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E5640;
      }
      goto L_088E5580;
    }
L_088E5580:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(112), aot_run_words); }
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr_31 = (0x088E559Cu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E559Cu) goto L_088E559C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E559C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[16] = (0u | 17u);
      if (branch_taken) {
          goto L_088E55C8;
      }
      goto L_088E55A4;
    }
L_088E55A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x088E55C8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E55C8u) goto L_088E55C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E55C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E55E0u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E55E0u) goto L_088E55E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E55E0:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (aot_gpr_18 | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088E5600u);
    ctx.gpr[9] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 486u, 0x0881ECDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5600u) goto L_088E5600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5600:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
      if (branch_taken) {
          goto L_088E5618;
      }
      goto L_088E560C;
    }
L_088E560C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088E5618u);
    aot_gpr_5 = (0u | 17u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5618u) goto L_088E5618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5618:
    aot_gpr_4 = (0u | 1u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(ctx.fpr[24])) && aot_fpr_20 == ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E5634;
      }
      goto L_088E562C;
    }
L_088E562C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    goto L_088E5634;
L_088E5634:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    aot_gpr_31 = (0x088E5640u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 428u, 0x088E3464u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5640u) goto L_088E5640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5640:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x088E5658u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5658u) goto L_088E5658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5658:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5670u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881FB44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5670u) goto L_088E5670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5670:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E56C0u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E56C0u) goto L_088E56C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E56C0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (aot_gpr_18 | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E56E0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 439u, 0x08822484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E56E0u) goto L_088E56E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E56E0:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(152), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      aot_gpr_18 = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[21] = aot_run_words[8];
      ctx.gpr[22] = aot_run_words[9];
      ctx.gpr[23] = aot_run_words[10];
      ctx.gpr[30] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
L_088E571C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), ctx.gpr[16], ctx.gpr[17], aot_gpr_18, ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(248), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 17u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_18 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E57CC;
      }
      goto L_088E5768;
    }
L_088E5768:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x088E5788u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5788u) goto L_088E5788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5788:
    ctx.gpr[30] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(456)));
    ctx.gpr[19] = (aot_gpr_4 & 4u);
    ctx.gpr[19] = (0u < ctx.gpr[19] ? 1u : 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), aot_gpr_4);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E57D4;
      }
      goto L_088E57C4;
    }
L_088E57C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E584C;
      }
      goto L_088E57CC;
    }
L_088E57CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E57D4;
    }
L_088E57D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (2u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E57F0;
    }
L_088E57F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_gpr_5 & 4096u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E5800;
    }
L_088E5800:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (0u | 215u);
        goto L_088E5820;
    }
    goto L_088E5820;
L_088E5820:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5830u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5830u) goto L_088E5830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5830:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E583C;
    }
L_088E583C:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E584C;
    }
L_088E584C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1360)));
    ctx.gpr[16] = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_088E58DC;
      }
      goto L_088E585C;
    }
L_088E585C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (4u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E58DC;
      }
      goto L_088E5878;
    }
L_088E5878:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (0u | 218u);
        goto L_088E5898;
    }
    goto L_088E5898;
L_088E5898:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E58A8u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E58A8u) goto L_088E58A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E58A8:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E58B4;
    }
L_088E58B4:
    aot_gpr_4 = (16059u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 48060u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16162u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8738u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16110u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 61167u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E58DC;
    }
L_088E58DC:
    aot_gpr_31 = (0x088E58E4u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E58E4u) goto L_088E58E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E58E4:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
      if (branch_taken) {
          goto L_088E59B8;
      }
      goto L_088E58F8;
    }
L_088E58F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
      if (branch_taken) {
          goto L_088E59B8;
      }
      goto L_088E5904;
    }
L_088E5904:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088E5938u);
    aot_gpr_6 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5938u) goto L_088E5938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5938:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23228)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23232)));
    aot_gpr_5 = (ctx.gpr[3] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_088E5958;
      }
      goto L_088E5950;
    }
L_088E5950:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[21];
      if (branch_taken) {
          goto L_088E59B8;
      }
      goto L_088E5958;
    }
L_088E5958:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5968u);
    aot_gpr_6 = (0u | 172u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5968u) goto L_088E5968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5968:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_088E5988;
      }
      goto L_088E5974;
    }
L_088E5974:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5984u);
    aot_gpr_6 = (0u | 218u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5984u) goto L_088E5984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5984:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    goto L_088E5988;
L_088E5988:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E5990;
    }
L_088E5990:
    aot_gpr_4 = (16059u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 48060u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16162u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 8738u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16110u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 61167u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E59B8;
    }
L_088E59B8:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (0u | 214u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (32u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 55u);
        goto L_088E59DC;
    }
    goto L_088E59DC;
L_088E59DC:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E59FCu);
    aot_gpr_5 = (ctx.gpr[10] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E59FCu) goto L_088E59FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E59FC:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr_31 = (0x088E5A34u);
    aot_gpr_6 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5A34u) goto L_088E5A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5A34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23220)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23224)));
    aot_gpr_5 = (ctx.gpr[3] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_088E5A54;
      }
      goto L_088E5A4C;
    }
L_088E5A4C:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[23];
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E5A54;
    }
L_088E5A54:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E5A6C;
      }
      goto L_088E5A5C;
    }
L_088E5A5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(472)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(472), aot_gpr_4);
    goto L_088E5A6C;
L_088E5A6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E5AB4;
      }
      goto L_088E5A84;
    }
L_088E5A84:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 32768u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 216u);
        goto L_088E5AA4;
    }
    goto L_088E5AA4;
L_088E5AA4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E5AB0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5AB0u) goto L_088E5AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5AB0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    goto L_088E5AB4;
L_088E5AB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E5B04;
      }
      goto L_088E5ACC;
    }
L_088E5ACC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_088E5B04;
      }
      goto L_088E5AD4;
    }
L_088E5AD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 32768u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 217u);
        goto L_088E5AF4;
    }
    goto L_088E5AF4;
L_088E5AF4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E5B00u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5B00u) goto L_088E5B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5B00:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    goto L_088E5B04;
L_088E5B04:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088E5B54;
      }
      goto L_088E5B0C;
    }
L_088E5B0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E5B54;
      }
      goto L_088E5B1C;
    }
L_088E5B1C:
    aot_gpr_31 = (0x088E5B24u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5B24u) goto L_088E5B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5B24:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E5B44;
      }
      goto L_088E5B2C;
    }
L_088E5B2C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E5B44;
      }
      goto L_088E5B3C;
    }
L_088E5B3C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E5B44;
    }
L_088E5B44:
    aot_gpr_31 = (0x088E5B4Cu);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 261u, 0x088E29C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5B4Cu) goto L_088E5B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5B4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E5B54;
    }
L_088E5B54:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088E5B8C;
      }
      goto L_088E5B5C;
    }
L_088E5B5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E5B8C;
      }
      goto L_088E5B80;
    }
L_088E5B80:
    aot_gpr_4 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088E5B8C;
L_088E5B8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
        goto L_088E5BD8;
    }
    goto L_088E5BA4;
L_088E5BA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 1024u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 216u);
        goto L_088E5BC4;
    }
    goto L_088E5BC4;
L_088E5BC4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E5BD0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5BD0u) goto L_088E5BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5BD0:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), aot_gpr_2);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    goto L_088E5BD8;
L_088E5BD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1748)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E5BF4;
      }
      goto L_088E5BEC;
    }
L_088E5BEC:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    ctx.gpr[19] = (0u | 1u);
    goto L_088E5BF4;
L_088E5BF4:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_088E5CDC;
      }
      goto L_088E5C00;
    }
L_088E5C00:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E5CDC;
      }
      goto L_088E5C1C;
    }
L_088E5C1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (0u | 216u);
        goto L_088E5C3C;
    }
    goto L_088E5C3C;
L_088E5C3C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5C4Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5C4Cu) goto L_088E5C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5C4C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E5CDC;
      }
      goto L_088E5C58;
    }
L_088E5C58:
    aot_gpr_31 = (0x088E5C60u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5C60u) goto L_088E5C60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5C60:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E5C6C;
      }
      goto L_088E5C68;
    }
L_088E5C68:
    ctx.gpr[17] = (0u | 1u);
    goto L_088E5C6C;
L_088E5C6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (15948u << 16u);
      if (branch_taken) {
          goto L_088E5CD0;
      }
      goto L_088E5C80;
    }
L_088E5C80:
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088E5CC0;
      }
      goto L_088E5CA0;
    }
L_088E5CA0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E5CC8;
      }
      goto L_088E5CA8;
    }
L_088E5CA8:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088E5CC8;
      }
      goto L_088E5CB0;
    }
L_088E5CB0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_088E5CD0;
      }
      goto L_088E5CB8;
    }
L_088E5CB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E5CD0;
      }
      goto L_088E5CC0;
    }
L_088E5CC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E5CD0;
      }
      goto L_088E5CC8;
    }
L_088E5CC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E5CD0;
      }
      goto L_088E5CD0;
    }
L_088E5CD0:
    aot_gpr_4 = (17095u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    goto L_088E5CDC;
L_088E5CDC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_088E5D44;
      }
      goto L_088E5CE4;
    }
L_088E5CE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E5D44;
      }
      goto L_088E5CFC;
    }
L_088E5CFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 4096u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (0u | 215u);
        goto L_088E5D1C;
    }
    goto L_088E5D1C;
L_088E5D1C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5D2Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5D2Cu) goto L_088E5D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5D2C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E5D44;
      }
      goto L_088E5D38;
    }
L_088E5D38:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[30] + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
    }
    goto L_088E5D44;
L_088E5D44:
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_088E5E00;
      }
      goto L_088E5D4C;
    }
L_088E5D4C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 8192u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088E5D7C;
      }
      goto L_088E5D64;
    }
L_088E5D64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    goto L_088E5D7C;
L_088E5D7C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E5DD8;
      }
      goto L_088E5D84;
    }
L_088E5D84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 8192u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[20] = (0u | 215u);
      if (branch_taken) {
          goto L_088E5DC0;
      }
      goto L_088E5DA0;
    }
L_088E5DA0:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (8u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (0u | 218u);
        goto L_088E5DC0;
    }
    goto L_088E5DC0;
L_088E5DC0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5DD0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5DD0u) goto L_088E5DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5DD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088E5DEC;
      }
      goto L_088E5DD8;
    }
L_088E5DD8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5DE8u);
    aot_gpr_6 = (0u | 57u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5DE8u) goto L_088E5DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5DE8:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    goto L_088E5DEC;
L_088E5DEC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E5E00;
      }
      goto L_088E5DF4;
    }
L_088E5DF4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[30] + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
    }
    goto L_088E5E00;
L_088E5E00:
    aot_gpr_31 = (0x088E5E08u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5E08u) goto L_088E5E08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5E08:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E5ED0;
      }
      goto L_088E5E10;
    }
L_088E5E10:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088E5E40;
      }
      goto L_088E5E20;
    }
L_088E5E20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_088E5E44;
      }
      goto L_088E5E2C;
    }
L_088E5E2C:
    aot_gpr_31 = (0x088E5E34u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5E34u) goto L_088E5E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5E34:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_088E5E44;
      }
      goto L_088E5E3C;
    }
L_088E5E3C:
    ctx.gpr[16] = (0u | 1u);
    goto L_088E5E40;
L_088E5E40:
    aot_gpr_4 = (ctx.gpr[16] & 255u);
    goto L_088E5E44;
L_088E5E44:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E5ED0;
      }
      goto L_088E5E4C;
    }
L_088E5E4C:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088E5E60u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5E60u) goto L_088E5E60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5E60:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(724)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x088E5E74u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5E74u) goto L_088E5E74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5E74:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E5E80u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5E80u) goto L_088E5E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5E80:
    ctx.gpr[7] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (aot_gpr_2 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[29] | 0u);
    aot_gpr_5 = (ctx.gpr[29] | 0u);
    aot_gpr_31 = (0x088E5E98u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5E98u) goto L_088E5E98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5E98:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_5 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5EBCu);
    aot_gpr_6 = (ctx.gpr[29] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0144_entry, 144u, 206u, 0x08A45338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5EBCu) goto L_088E5EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5EBC:
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E5EC8u);
    aot_gpr_5 = (0u | 50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5EC8u) goto L_088E5EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5EC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E5ED0;
    }
L_088E5ED0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E7278;
      }
      goto L_088E5ED8;
    }
L_088E5ED8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[16] = (0u | 11u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[22] = (0u | 15u);
      if (branch_taken) {
          goto L_088E5FB4;
      }
      goto L_088E5F00;
    }
L_088E5F00:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E5FB4;
      }
      goto L_088E5F1C;
    }
L_088E5F1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E5F68;
      }
      goto L_088E5F2C;
    }
L_088E5F2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E5F7C;
      }
      goto L_088E5F3C;
    }
L_088E5F3C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (4u << 16u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 218u);
        goto L_088E5F60;
    }
    goto L_088E5F60;
L_088E5F60:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088E5F7C;
      }
      goto L_088E5F68;
    }
L_088E5F68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(860)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(860), aot_gpr_4);
      if (branch_taken) {
          goto L_088E5FB4;
      }
      goto L_088E5F7C;
    }
L_088E5F7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E5FA4;
      }
      goto L_088E5F94;
    }
L_088E5F94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(860)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(860), aot_gpr_4);
      if (branch_taken) {
          goto L_088E5FB4;
      }
      goto L_088E5FA4;
    }
L_088E5FA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(860)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(860), aot_gpr_4);
    goto L_088E5FB4;
L_088E5FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_18 + aot_gpr_5);
    aot_gpr_31 = (0x088E5FD4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 315u, 0x0881E094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E5FD4u) goto L_088E5FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E5FD4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_18 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1396));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[16];
      if (branch_taken) {
          goto L_088E61C0;
      }
      goto L_088E5FFC;
    }
L_088E5FFC:
    if (ctx.gpr[17] != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
        goto L_088E6028;
    }
    goto L_088E6004;
L_088E6004:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = ctx.fpr[24] - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E61C0;
      }
      goto L_088E6024;
    }
L_088E6024:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    goto L_088E6028;
L_088E6028:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E61C0;
      }
      goto L_088E6040;
    }
L_088E6040:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E61C0;
      }
      goto L_088E6048;
    }
L_088E6048:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (0u | 215u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (0u | 4u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_088E6090;
      }
      goto L_088E6074;
    }
L_088E6074:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (16179u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[26];
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088E6090;
L_088E6090:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(48);
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x088E60E0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0144_entry, 144u, 206u, 0x08A45338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E60E0u) goto L_088E60E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E60E0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_088E6174;
      }
      goto L_088E6104;
    }
L_088E6104:
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6130;
      }
      goto L_088E6118;
    }
L_088E6118:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(336)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    goto L_088E6130;
L_088E6130:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 54u);
    aot_gpr_31 = (0x088E6144u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6144u) goto L_088E6144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6144:
    aot_gpr_31 = (0x088E614Cu);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E614Cu) goto L_088E614C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E614C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E616C;
      }
      goto L_088E6154;
    }
L_088E6154:
    aot_gpr_31 = (0x088E615Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E615Cu) goto L_088E615C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E615C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 240u);
    aot_gpr_31 = (0x088E616Cu);
    aot_gpr_6 = (0u | 180u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E616Cu) goto L_088E616C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E616C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E61B4;
      }
      goto L_088E6174;
    }
L_088E6174:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(96)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 53u);
    aot_gpr_31 = (0x088E618Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E618Cu) goto L_088E618C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E618C:
    aot_gpr_31 = (0x088E6194u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6194u) goto L_088E6194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6194:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E61B4;
      }
      goto L_088E619C;
    }
L_088E619C:
    aot_gpr_31 = (0x088E61A4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E61A4u) goto L_088E61A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E61A4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 240u);
    aot_gpr_31 = (0x088E61B4u);
    aot_gpr_6 = (0u | 90u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E61B4u) goto L_088E61B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E61B4:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E6790;
      }
      goto L_088E61C0;
    }
L_088E61C0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_18 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1396));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[16];
      if (branch_taken) {
          goto L_088E6208;
      }
      goto L_088E61E4;
    }
L_088E61E4:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(96)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x088E6200u);
    aot_gpr_6 = (0u | 52u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6200u) goto L_088E6200;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6200:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E6790;
      }
      goto L_088E6208;
    }
L_088E6208:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E6770;
      }
      goto L_088E621C;
    }
L_088E621C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E6770;
      }
      goto L_088E6238;
    }
L_088E6238:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088E6770;
      }
      goto L_088E6248;
    }
L_088E6248:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E6770;
      }
      goto L_088E6250;
    }
L_088E6250:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[21] = (0u | 4u);
      if (branch_taken) {
          goto L_088E627C;
      }
      goto L_088E6270;
    }
L_088E6270:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_088E62E4;
      }
      goto L_088E627C;
    }
L_088E627C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_5 = (0u | 215u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E62B0;
      }
      goto L_088E628C;
    }
L_088E628C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088E62B0;
L_088E62B0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(48);
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E6398;
      }
      goto L_088E62E4;
    }
L_088E62E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E6324;
      }
      goto L_088E62F0;
    }
L_088E62F0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_18 + static_cast<std::uint32_t>(48);
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E6398;
      }
      goto L_088E6324;
    }
L_088E6324:
    aot_gpr_31 = (0x088E632Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E632Cu) goto L_088E632C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E632C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_5 = (0u | 215u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E6368;
      }
      goto L_088E6340;
    }
L_088E6340:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u | 7u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E6368;
      }
      goto L_088E6350;
    }
L_088E6350:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(740)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x088E6360u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6360u) goto L_088E6360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_2 << 6u);
      if (branch_taken) {
          goto L_088E637C;
      }
      goto L_088E6368;
    }
L_088E6368:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(724)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x088E6378u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6378u) goto L_088E6378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6378:
    ctx.gpr[16] = (aot_gpr_2 << 6u);
    goto L_088E637C;
L_088E637C:
    aot_gpr_31 = (0x088E6384u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6384u) goto L_088E6384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6384:
    ctx.gpr[7] = (aot_gpr_2 + ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088E6398u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6398u) goto L_088E6398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6398:
    aot_gpr_31 = (0x088E63A0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E63A0u) goto L_088E63A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E63A0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E6414;
      }
      goto L_088E63A8;
    }
L_088E63A8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6414;
      }
      goto L_088E63B8;
    }
L_088E63B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6414;
      }
      goto L_088E63C4;
    }
L_088E63C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(2120)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6414;
      }
      goto L_088E63E4;
    }
L_088E63E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(2120)));
    aot_gpr_5 = (16480u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088E6414u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6414u) goto L_088E6414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6414:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_5 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E6438u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0144_entry, 144u, 206u, 0x08A45338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6438u) goto L_088E6438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6438:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E6524;
      }
      goto L_088E6460;
    }
L_088E6460:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E6524;
      }
      goto L_088E6488;
    }
L_088E6488:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 14u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E6524;
      }
      goto L_088E64B0;
    }
L_088E64B0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
      if (branch_taken) {
          goto L_088E6524;
      }
      goto L_088E64D4;
    }
L_088E64D4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E6524;
      }
      goto L_088E64FC;
    }
L_088E64FC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E6550;
      }
      goto L_088E6524;
    }
L_088E6524:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x088E6544u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6544u) goto L_088E6544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6544:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x088E6550u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6550u) goto L_088E6550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6550:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E6598;
      }
      goto L_088E6574;
    }
L_088E6574:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6598;
      }
      goto L_088E6580;
    }
L_088E6580:
    aot_gpr_31 = (0x088E6588u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6588u) goto L_088E6588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6588:
    { const bool branch_taken = aot_gpr_2 == aot_gpr_18;
      if (branch_taken) {
          goto L_088E6598;
      }
      goto L_088E6590;
    }
L_088E6590:
    aot_gpr_31 = (0x088E6598u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 642u, 0x089AB158u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6598u) goto L_088E6598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6598:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_088E6764;
      }
      goto L_088E65BC;
    }
L_088E65BC:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088E660C;
      }
      goto L_088E65CC;
    }
L_088E65CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(268)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E6600;
      }
      goto L_088E65E4;
    }
L_088E65E4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 ^ 2u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_088E660C;
      }
      goto L_088E6600;
    }
L_088E6600:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 >> 1u);
    goto L_088E660C;
L_088E660C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-7));
    aot_gpr_6 = (aot_gpr_5 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_088E673C;
      }
      goto L_088E6620;
    }
L_088E6620:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088E673C;
      }
      goto L_088E662C;
    }
L_088E662C:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088E66D8;
      }
      goto L_088E6634;
    }
L_088E6634:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E66D8;
      }
      goto L_088E663C;
    }
L_088E663C:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088E66D8;
      }
      goto L_088E6644;
    }
L_088E6644:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
      if (branch_taken) {
          goto L_088E66D8;
      }
      goto L_088E664C;
    }
L_088E664C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (0u | 214u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E6670;
      }
      goto L_088E665C;
    }
L_088E665C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_6 = (0u | 216u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088E66D0;
      }
      goto L_088E666C;
    }
L_088E666C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    goto L_088E6670;
L_088E6670:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[8] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_18 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1396));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    aot_gpr_6 = (ctx.gpr[7] | aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[7] = (16256u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_088E66BC;
      }
      goto L_088E66B0;
    }
L_088E66B0:
    aot_gpr_6 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_088E66BC;
L_088E66BC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088E66D0u);
    aot_gpr_6 = (0u | 46u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E66D0u) goto L_088E66D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E66D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E673C;
      }
      goto L_088E66D8;
    }
L_088E66D8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[8] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_18 + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1396));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    aot_gpr_6 = (ctx.gpr[7] | aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[7] = (16256u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_088E6728;
      }
      goto L_088E671C;
    }
L_088E671C:
    aot_gpr_6 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_088E6728;
L_088E6728:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x088E673Cu);
    aot_gpr_6 = (0u | 50u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E673Cu) goto L_088E673C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E673C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E6760;
      }
      goto L_088E674C;
    }
L_088E674C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1748)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6764;
      }
      goto L_088E6760;
    }
L_088E6760:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), 0u);
    goto L_088E6764;
L_088E6764:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E6790;
      }
      goto L_088E6770;
    }
L_088E6770:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E6790;
      }
      goto L_088E678C;
    }
L_088E678C:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088E6790;
L_088E6790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
      if (branch_taken) {
          goto L_088E693C;
      }
      goto L_088E679C;
    }
L_088E679C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E693C;
      }
      goto L_088E67AC;
    }
L_088E67AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E693C;
      }
      goto L_088E67C8;
    }
L_088E67C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E693C;
      }
      goto L_088E67E4;
    }
L_088E67E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E693C;
      }
      goto L_088E67F4;
    }
L_088E67F4:
    aot_gpr_4 = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x088E680Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E680Cu) goto L_088E680C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E680C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(724)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x088E6820u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08969194, 89u, 251u, 0x08969194u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6820u) goto L_088E6820;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6820:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088E682Cu);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0896918C, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E682Cu) goto L_088E682C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E682C:
    ctx.gpr[7] = (ctx.gpr[17] << 6u);
    ctx.gpr[7] = (aot_gpr_2 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E6844u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6844u) goto L_088E6844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6844:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr_5 = (aot_gpr_18 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (16153u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr_5 = (aot_gpr_18 + static_cast<std::uint32_t>(32));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (15897u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E68EC;
      }
      goto L_088E68E4;
    }
L_088E68E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088E6920;
      }
      goto L_088E68EC;
    }
L_088E68EC:
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_6);
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 17u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088E6920;
L_088E6920:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (15564u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088E693Cu);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 255u, 0x08A41568u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E693Cu) goto L_088E693C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E693C:
    aot_gpr_31 = (0x088E6944u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6944u) goto L_088E6944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6944:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E6A4C;
      }
      goto L_088E694C;
    }
L_088E694C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E69C4;
      }
      goto L_088E6974;
    }
L_088E6974:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E69C4;
      }
      goto L_088E699C;
    }
L_088E699C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E6A4C;
      }
      goto L_088E69C4;
    }
L_088E69C4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (17092u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E69F0;
      }
      goto L_088E69E0;
    }
L_088E69E0:
    aot_gpr_4 = (16110u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 61167u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    goto L_088E69F0;
L_088E69F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6A4C;
      }
      goto L_088E6A00;
    }
L_088E6A00:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_20)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E6A4C;
      }
      goto L_088E6A14;
    }
L_088E6A14:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E6A4C;
      }
      goto L_088E6A28;
    }
L_088E6A28:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088E6A4Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 619u, 0x088ABE6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6A4Cu) goto L_088E6A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6A4C:
    aot_gpr_31 = (0x088E6A54u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6A54u) goto L_088E6A54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6A54:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E6A94;
      }
      goto L_088E6A5C;
    }
L_088E6A5C:
    aot_gpr_31 = (0x088E6A64u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6A64u) goto L_088E6A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6A64:
    aot_gpr_31 = (0x088E6A6Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 543u, 0x0898D7C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6A6Cu) goto L_088E6A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6A6C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E6A94;
      }
      goto L_088E6A74;
    }
L_088E6A74:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_088E6A94;
      }
      goto L_088E6A7C;
    }
L_088E6A7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E6AB0;
      }
      goto L_088E6A94;
    }
L_088E6A94:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_088E6AEC;
      }
      goto L_088E6AA8;
    }
L_088E6AA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E6AD0;
      }
      goto L_088E6AB0;
    }
L_088E6AB0:
    aot_gpr_4 = (49280u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x088E6AC8u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 309u, 0x088ED12Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6AC8u) goto L_088E6AC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6AC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E6AD0;
    }
L_088E6AD0:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E7240;
      }
      goto L_088E6ADC;
    }
L_088E6ADC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E7240;
      }
      goto L_088E6AEC;
    }
L_088E6AEC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_088E6D54;
      }
      goto L_088E6B14;
    }
L_088E6B14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6D54;
      }
      goto L_088E6B2C;
    }
L_088E6B2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E6D54;
      }
      goto L_088E6B38;
    }
L_088E6B38:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(334)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_088E6C60;
      }
      goto L_088E6B68;
    }
L_088E6B68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6C04;
      }
      goto L_088E6B78;
    }
L_088E6B78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6C04;
      }
      goto L_088E6B90;
    }
L_088E6B90:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 30u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E6BC0;
      }
      goto L_088E6BB8;
    }
L_088E6BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6C44;
      }
      goto L_088E6BC0;
    }
L_088E6BC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 32768u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[20] = (0u | 217u);
        goto L_088E6BE4;
    }
    goto L_088E6BE4;
L_088E6BE4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (16640u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E6BFCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6BFCu) goto L_088E6BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6BFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088E6C44;
      }
      goto L_088E6C04;
    }
L_088E6C04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 32768u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[20] = (0u | 216u);
        goto L_088E6C28;
    }
    goto L_088E6C28;
L_088E6C28:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (16640u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E6C40u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6C40u) goto L_088E6C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6C40:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    goto L_088E6C44;
L_088E6C44:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E6C60;
      }
      goto L_088E6C4C;
    }
L_088E6C4C:
    aot_gpr_5 = (2190u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(14284));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088E6C60u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6C60u) goto L_088E6C60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6C60:
    aot_gpr_31 = (0x088E6C68u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[16], ctx.gpr[29], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6C68u) goto L_088E6C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6C68:
    aot_gpr_31 = (0x088E6C70u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6C70u) goto L_088E6C70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6C70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(1748), aot_gpr_4);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_088E6D10;
      }
      goto L_088E6C98;
    }
L_088E6C98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (20224u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_088E6CBC;
      }
      goto L_088E6CB0;
    }
L_088E6CB0:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_088E6CBC;
L_088E6CBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_4 = (17274u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
        goto L_088E6CFC;
    }
    goto L_088E6CF0;
L_088E6CF0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088E6D0C;
      }
      goto L_088E6CFC;
    }
L_088E6CFC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_088E6D0C;
L_088E6D0C:
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(1744), aot_gpr_4);
    goto L_088E6D10;
L_088E6D10:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088E6D4Cu);
    aot_gpr_6 = (0u | 57u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6D4Cu) goto L_088E6D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6D4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E6D54;
    }
L_088E6D54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E70BC;
      }
      goto L_088E6D7C;
    }
L_088E6D7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
        goto L_088E6DA4;
    }
    goto L_088E6D8C;
L_088E6D8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1748)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E70BC;
      }
      goto L_088E6DA0;
    }
L_088E6DA0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    goto L_088E6DA4;
L_088E6DA4:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_088E6DEC;
      }
      goto L_088E6DC4;
    }
L_088E6DC4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 35u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E70BC;
      }
      goto L_088E6DEC;
    }
L_088E6DEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6DF8;
    }
L_088E6DF8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
        goto L_088E6E24;
    }
    goto L_088E6E04;
L_088E6E04:
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E6E10u);
    aot_gpr_5 = (0u | 0u);
    goto L_088E4D2C;
L_088E6E10:
    aot_gpr_4 = (aot_gpr_2 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_088E6E8C;
      }
      goto L_088E6E20;
    }
L_088E6E20:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    goto L_088E6E24;
L_088E6E24:
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_18 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1396));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6E48;
    }
L_088E6E48:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6E50;
    }
L_088E6E50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6E60;
    }
L_088E6E60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6E6C;
    }
L_088E6E6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1328)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6FBC;
      }
      goto L_088E6E8C;
    }
L_088E6E8C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_4 = (0u | 215u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 8192u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[17] = (2191u << 16u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-11988));
      if (branch_taken) {
          goto L_088E6ED0;
      }
      goto L_088E6EB0;
    }
L_088E6EB0:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (8u << 16u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 218u);
        goto L_088E6ED0;
    }
    goto L_088E6ED0;
L_088E6ED0:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_088E6EF4;
      }
      goto L_088E6ED8;
    }
L_088E6ED8:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088E6EECu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6EECu) goto L_088E6EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6EEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E6FA4;
      }
      goto L_088E6EF4;
    }
L_088E6EF4:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 8192u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (16640u << 16u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
      if (branch_taken) {
          goto L_088E6F2C;
      }
      goto L_088E6F14;
    }
L_088E6F14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    goto L_088E6F2C;
L_088E6F2C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E6F8C;
      }
      goto L_088E6F34;
    }
L_088E6F34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 8192u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[20] = (0u | 215u);
      if (branch_taken) {
          goto L_088E6F74;
      }
      goto L_088E6F54;
    }
L_088E6F54:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (8u << 16u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[20] = (0u | 218u);
        goto L_088E6F74;
    }
    goto L_088E6F74;
L_088E6F74:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E6F84u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6F84u) goto L_088E6F84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088E6FA4;
      }
      goto L_088E6F8C;
    }
L_088E6F8C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x088E6FA0u);
    ctx.gpr[7] = (0u | 57u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6FA0u) goto L_088E6FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6FA0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    goto L_088E6FA4;
L_088E6FA4:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088E6FB4u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E6FB4u) goto L_088E6FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E6FB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E70B4;
      }
      goto L_088E6FBC;
    }
L_088E6FBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7078;
      }
      goto L_088E6FD4;
    }
L_088E6FD4:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 4096u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (16640u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[17] = (2191u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-11988));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 215u);
        goto L_088E7004;
    }
    goto L_088E7004;
L_088E7004:
    { const bool branch_taken = ctx.gpr[20] != aot_gpr_4;
      if (branch_taken) {
          goto L_088E7028;
      }
      goto L_088E700C;
    }
L_088E700C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E7020u);
    ctx.gpr[7] = (0u | 214u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7020u) goto L_088E7020;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088E7060;
      }
      goto L_088E7028;
    }
L_088E7028:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 4096u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[20] = (0u | 215u);
        goto L_088E704C;
    }
    goto L_088E704C;
L_088E704C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E705Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E705Cu) goto L_088E705C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E705C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    goto L_088E7060;
L_088E7060:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088E7070u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7070u) goto L_088E7070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7070:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E70B4;
      }
      goto L_088E7078;
    }
L_088E7078:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E70B4;
      }
      goto L_088E709C;
    }
L_088E709C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088E70A8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E70A8u) goto L_088E70A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E70A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_088E70B4;
L_088E70B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7240;
      }
      goto L_088E70BC;
    }
L_088E70BC:
    aot_gpr_31 = (0x088E70C4u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E70C4u) goto L_088E70C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E70C4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E7184;
      }
      goto L_088E70CC;
    }
L_088E70CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(2076)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7184;
      }
      goto L_088E70E0;
    }
L_088E70E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7184;
      }
      goto L_088E70F0;
    }
L_088E70F0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_088E7184;
      }
      goto L_088E7114;
    }
L_088E7114:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (aot_gpr_6 << 5u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_18 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1396));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x088E7150u);
    aot_gpr_6 = (0u | 57u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7150u) goto L_088E7150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7150:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x088E715Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E715Cu) goto L_088E715C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E715C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(2076)));
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_31 = (0x088E717Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 594u, 0x088EB074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E717Cu) goto L_088E717C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E717C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7240;
      }
      goto L_088E7184;
    }
L_088E7184:
    aot_gpr_31 = (0x088E718Cu);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E718Cu) goto L_088E718C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E718C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E71E4;
      }
      goto L_088E71A8;
    }
L_088E71A8:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[7] = (aot_gpr_6 << 5u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_18 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1396));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x088E71E4u);
    aot_gpr_6 = (0u | 57u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E71E4u) goto L_088E71E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E71E4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 33u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E7240;
      }
      goto L_088E720C;
    }
L_088E720C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7240;
      }
      goto L_088E721C;
    }
L_088E721C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (49280u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088E7240;
L_088E7240:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E7258;
      }
      goto L_088E7254;
    }
L_088E7254:
    ctx.gpr[19] = (0u | 0u);
    goto L_088E7258;
L_088E7258:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[19] & 1u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(456), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E7278;
    }
L_088E7278:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E7284;
    }
L_088E7284:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_088E72A4;
      }
      goto L_088E728C;
    }
L_088E728C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E72B8;
      }
      goto L_088E729C;
    }
L_088E729C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E72D8;
      }
      goto L_088E72A4;
    }
L_088E72A4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x088E72B0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0058_entry, 58u, 309u, 0x088ED12Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E72B0u) goto L_088E72B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E72B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E72B8;
    }
L_088E72B8:
    aot_gpr_31 = (0x088E72C0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E72C0u) goto L_088E72C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E72C0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E72D8;
      }
      goto L_088E72C8;
    }
L_088E72C8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E72FC;
      }
      goto L_088E72D8;
    }
L_088E72D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    aot_gpr_5 = (16640u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[17] = (2191u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-11988));
      if (branch_taken) {
          goto L_088E7304;
      }
      goto L_088E72F4;
    }
L_088E72F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7370;
      }
      goto L_088E72FC;
    }
L_088E72FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E7304;
    }
L_088E7304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7370;
      }
      goto L_088E7314;
    }
L_088E7314:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (2u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E7370;
      }
      goto L_088E7330;
    }
L_088E7330:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[7] & aot_gpr_6);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[16] = (0u | 215u);
        goto L_088E7354;
    }
    goto L_088E7354;
L_088E7354:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E7368u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7368u) goto L_088E7368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088E7628;
      }
      goto L_088E7370;
    }
L_088E7370:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E73E0;
      }
      goto L_088E7388;
    }
L_088E7388:
    aot_gpr_31 = (0x088E7390u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7390u) goto L_088E7390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7390:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E73E0;
      }
      goto L_088E73A0;
    }
L_088E73A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 4096u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[16] = (0u | 215u);
        goto L_088E73C4;
    }
    goto L_088E73C4;
L_088E73C4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E73D8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E73D8u) goto L_088E73D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E73D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088E7628;
      }
      goto L_088E73E0;
    }
L_088E73E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E74A0;
      }
      goto L_088E73EC;
    }
L_088E73EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E74A0;
      }
      goto L_088E73F8;
    }
L_088E73F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 8192u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_088E7428;
      }
      goto L_088E7410;
    }
L_088E7410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    goto L_088E7428;
L_088E7428:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_18 | 0u);
      if (branch_taken) {
          goto L_088E74A0;
      }
      goto L_088E7430;
    }
L_088E7430:
    aot_gpr_31 = (0x088E7438u);
    aot_gpr_5 = (0u | 0u);
    goto L_088E4D2C;
L_088E7438:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E74A0;
      }
      goto L_088E7444;
    }
L_088E7444:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 8192u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[16] = (0u | 215u);
      if (branch_taken) {
          goto L_088E7484;
      }
      goto L_088E7464;
    }
L_088E7464:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (8u << 16u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[16] = (0u | 218u);
        goto L_088E7484;
    }
    goto L_088E7484;
L_088E7484:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E7498u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7498u) goto L_088E7498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088E7628;
      }
      goto L_088E74A0;
    }
L_088E74A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1360)));
    ctx.gpr[16] = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
      if (branch_taken) {
          goto L_088E750C;
      }
      goto L_088E74B0;
    }
L_088E74B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (4u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_088E750C;
      }
      goto L_088E74CC;
    }
L_088E74CC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[7] & aot_gpr_6);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[16] = (0u | 218u);
        goto L_088E74F0;
    }
    goto L_088E74F0;
L_088E74F0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E7504u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7504u) goto L_088E7504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088E7628;
      }
      goto L_088E750C;
    }
L_088E750C:
    aot_gpr_31 = (0x088E7514u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7514u) goto L_088E7514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7514:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E75E4;
      }
      goto L_088E751C;
    }
L_088E751C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
      if (branch_taken) {
          goto L_088E75E4;
      }
      goto L_088E7528;
    }
L_088E7528:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_18 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 31u));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23252)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23256)));
    aot_gpr_31 = (0x088E755Cu);
    aot_gpr_6 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E755Cu) goto L_088E755C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E755C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23228)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23232)));
    aot_gpr_5 = (ctx.gpr[3] & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_2 & aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23236)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23240)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
      if (branch_taken) {
          goto L_088E7584;
      }
      goto L_088E757C;
    }
L_088E757C:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
      if (branch_taken) {
          goto L_088E75E4;
      }
      goto L_088E7584;
    }
L_088E7584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E75C4;
      }
      goto L_088E75A4;
    }
L_088E75A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 172u);
    aot_gpr_31 = (0x088E75BCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E75BCu) goto L_088E75BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E75BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088E7628;
      }
      goto L_088E75C4;
    }
L_088E75C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_6 = (0u | 14u);
    ctx.gpr[7] = (0u | 218u);
    aot_gpr_31 = (0x088E75DCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E75DCu) goto L_088E75DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E75DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_088E7628;
      }
      goto L_088E75E4;
    }
L_088E75E4:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_18 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (0u | 214u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (32u << 16u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 55u);
        goto L_088E760C;
    }
    goto L_088E760C;
L_088E760C:
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E7624u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7624u) goto L_088E7624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7624:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    goto L_088E7628;
L_088E7628:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x088E7638u);
    aot_gpr_6 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7638u) goto L_088E7638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7638:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E766C;
      }
      goto L_088E7660;
    }
L_088E7660:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x088E766Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E766Cu) goto L_088E766C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E766C:
    aot_gpr_31 = (0x088E7674u);
    aot_gpr_4 = (aot_gpr_18 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7674u) goto L_088E7674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7674:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E7694;
      }
      goto L_088E767C;
    }
L_088E767C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_18 + static_cast<std::uint32_t>(3168), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_18 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_18 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_088E7694;
L_088E7694:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(248), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      aot_gpr_18 = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[30] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
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
L_088E76D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], aot_gpr_18, ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(240), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_18 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x088E7728u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7728u) goto L_088E7728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7728:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088E7754;
      }
      goto L_088E7734;
    }
L_088E7734:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7754;
      }
      goto L_088E7750;
    }
L_088E7750:
    aot_gpr_18 = (ctx.gpr[17] | 0u);
    goto L_088E7754;
L_088E7754:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E77D8;
      }
      goto L_088E776C;
    }
L_088E776C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E77C4;
      }
      goto L_088E7778;
    }
L_088E7778:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E77BC;
      }
      goto L_088E778C;
    }
L_088E778C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    aot_gpr_5 = (0u | 11u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E77B4;
      }
      goto L_088E779C;
    }
L_088E779C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_088E77E0;
    }
    goto L_088E77AC;
L_088E77AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E77EC;
      }
      goto L_088E77B4;
    }
L_088E77B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E77BC;
    }
L_088E77BC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E77C4;
    }
L_088E77C4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E77D0u);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 384u, 0x088E3180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E77D0u) goto L_088E77D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E77D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E77D8;
    }
L_088E77D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E77E0;
    }
L_088E77E0:
    aot_gpr_4 = (aot_gpr_4 & 4096u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7804;
      }
      goto L_088E77EC;
    }
L_088E77EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[20] = (0u | 17u);
    if (aot_gpr_4 == ctx.gpr[20]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_088E782C;
    }
    goto L_088E77FC;
L_088E77FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_088E780C;
      }
      goto L_088E7804;
    }
L_088E7804:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E780C;
    }
L_088E780C:
    aot_gpr_5 = (0u | 22u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_088E782C;
    }
    goto L_088E7818;
L_088E7818:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E78D8;
      }
      goto L_088E7828;
    }
L_088E7828:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_088E782C;
L_088E782C:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E7840u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7840u) goto L_088E7840;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E78E8;
      }
      goto L_088E7858;
    }
L_088E7858:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E7870u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7870u) goto L_088E7870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7870:
    aot_gpr_31 = (0x088E7878u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 563u, 0x0881F274u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7878u) goto L_088E7878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7878:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E78E8;
      }
      goto L_088E7880;
    }
L_088E7880:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E7898u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7898u) goto L_088E7898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x088E78B0u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E78B0u) goto L_088E78B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E78B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_2 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E78E8;
      }
      goto L_088E78D8;
    }
L_088E78D8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_088E78F0;
      }
      goto L_088E78E0;
    }
L_088E78E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7978;
      }
      goto L_088E78E8;
    }
L_088E78E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E78F0;
    }
L_088E78F0:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (16332u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E7978;
      }
      goto L_088E7948;
    }
L_088E7948:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E7978;
      }
      goto L_088E7970;
    }
L_088E7970:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E7978;
    }
L_088E7978:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088E79C8;
    }
    goto L_088E7990;
L_088E7990:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 32768u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 216u);
        goto L_088E79B0;
    }
    goto L_088E79B0;
L_088E79B0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E79BCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E79BCu) goto L_088E79BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E79BC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E7A10;
      }
      goto L_088E79C4;
    }
L_088E79C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_088E79C8;
L_088E79C8:
    aot_gpr_4 = (aot_gpr_4 & 32768u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7A68;
      }
      goto L_088E79DC;
    }
L_088E79DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & 32768u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 217u);
        goto L_088E79FC;
    }
    goto L_088E79FC;
L_088E79FC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x088E7A08u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7A08u) goto L_088E7A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7A08:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E7A68;
      }
      goto L_088E7A10;
    }
L_088E7A10:
    aot_gpr_31 = (0x088E7A18u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7A18u) goto L_088E7A18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7A18:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E7A50;
      }
      goto L_088E7A20;
    }
L_088E7A20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E7A50;
      }
      goto L_088E7A30;
    }
L_088E7A30:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E7A50;
      }
      goto L_088E7A40;
    }
L_088E7A40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), aot_gpr_4);
      if (branch_taken) {
          goto L_088E7A60;
      }
      goto L_088E7A50;
    }
L_088E7A50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_088E7A60;
L_088E7A60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E7A68;
    }
L_088E7A68:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7AD0;
      }
      goto L_088E7A8C;
    }
L_088E7A8C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
      if (branch_taken) {
          goto L_088E7AD0;
      }
      goto L_088E7AB4;
    }
L_088E7AB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7C30;
      }
      goto L_088E7AD0;
    }
L_088E7AD0:
    aot_gpr_31 = (0x088E7AD8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7AD8u) goto L_088E7AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7AD8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E7B54;
      }
      goto L_088E7AE0;
    }
L_088E7AE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
      if (branch_taken) {
          goto L_088E7B38;
      }
      goto L_088E7AEC;
    }
L_088E7AEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7B38;
      }
      goto L_088E7AF8;
    }
L_088E7AF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E7B38;
      }
      goto L_088E7B08;
    }
L_088E7B08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E7B38;
      }
      goto L_088E7B1C;
    }
L_088E7B1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E7B54;
      }
      goto L_088E7B38;
    }
L_088E7B38:
    aot_gpr_31 = (0x088E7B40u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7B40u) goto L_088E7B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7B40:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E7B4Cu);
    aot_gpr_5 = (aot_gpr_18 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 384u, 0x088E3180u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7B4Cu) goto L_088E7B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7B4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7C28;
      }
      goto L_088E7B54;
    }
L_088E7B54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7C28;
      }
      goto L_088E7B70;
    }
L_088E7B70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_18 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088E7C28;
      }
      goto L_088E7B80;
    }
L_088E7B80:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E7B8Cu);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7B8Cu) goto L_088E7B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7B8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & aot_gpr_18);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[19] = (2191u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-11988));
    if (aot_gpr_6 != 0u) {
    ctx.gpr[17] = (0u | 216u);
        goto L_088E7BC8;
    }
    goto L_088E7BC8;
L_088E7BC8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (16640u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E7BE0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7BE0u) goto L_088E7BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7BE0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E7C18;
      }
      goto L_088E7C0C;
    }
L_088E7C0C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x088E7C18u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7C18u) goto L_088E7C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7C18:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088E7C28u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7C28u) goto L_088E7C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7C28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E7C30;
    }
L_088E7C30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (16u << 16u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7D68;
      }
      goto L_088E7C4C;
    }
L_088E7C4C:
    aot_gpr_31 = (0x088E7C54u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7C54u) goto L_088E7C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7C54:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
        goto L_088E7C7C;
    }
    goto L_088E7C5C;
L_088E7C5C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3156)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E7CA8;
      }
      goto L_088E7C78;
    }
L_088E7C78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    goto L_088E7C7C;
L_088E7C7C:
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E7CA8;
      }
      goto L_088E7C88;
    }
L_088E7C88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E7CA8;
      }
      goto L_088E7C98;
    }
L_088E7C98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_088E7D68;
      }
      goto L_088E7CA8;
    }
L_088E7CA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_088E7D60;
      }
      goto L_088E7CB8;
    }
L_088E7CB8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E7CC4u);
    aot_gpr_5 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7CC4u) goto L_088E7CC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7CC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[20]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[19] = (2191u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-11988));
    if (aot_gpr_6 != 0u) {
    ctx.gpr[17] = (0u | 216u);
        goto L_088E7D00;
    }
    goto L_088E7D00;
L_088E7D00:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (16640u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E7D18u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7D18u) goto L_088E7D18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7D18:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_088E7D50;
      }
      goto L_088E7D44;
    }
L_088E7D44:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x088E7D50u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7D50u) goto L_088E7D50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7D50:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088E7D60u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7D60u) goto L_088E7D60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7D60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E7D68;
    }
L_088E7D68:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088E7D74u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7D74u) goto L_088E7D74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7D74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7FB4;
      }
      goto L_088E7D8C;
    }
L_088E7D8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7FB4;
      }
      goto L_088E7D98;
    }
L_088E7D98:
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (16051u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x088E7E4Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7E4Cu) goto L_088E7E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7E4C:
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x088E7E84u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7E84u) goto L_088E7E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7E84:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E7F14;
      }
      goto L_088E7E8C;
    }
L_088E7E8C:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2032));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_4 ^ 8u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_4 ^ 16u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 ^ 31u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 ^ 12u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_088E7F14;
      }
      goto L_088E7ED4;
    }
L_088E7ED4:
    aot_gpr_31 = (0x088E7EDCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7EDCu) goto L_088E7EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7EDC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_088E7F0C;
      }
      goto L_088E7EE4;
    }
L_088E7EE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (64u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20328)));
    aot_gpr_31 = (0x088E7F04u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7F04u) goto L_088E7F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7F04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1772), aot_gpr_4);
    goto L_088E7F0C;
L_088E7F0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 154u, 0x088E89A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E7F14;
    }
L_088E7F14:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_088E7F2C;
      }
      goto L_088E7F20;
    }
L_088E7F20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    aot_gpr_31 = (0x088E7F2Cu);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(1716));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7F2Cu) goto L_088E7F2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7F2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7F4C;
      }
      goto L_088E7F38;
    }
L_088E7F38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    aot_gpr_31 = (0x088E7F44u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 405u, 0x08909804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7F44u) goto L_088E7F44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7F44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7FB4;
      }
      goto L_088E7F4C;
    }
L_088E7F4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_088E7F78;
      }
      goto L_088E7F64;
    }
L_088E7F64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    aot_gpr_31 = (0x088E7F70u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 397u, 0x08909744u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7F70u) goto L_088E7F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7F70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_088E7FB4;
      }
      goto L_088E7F78;
    }
L_088E7F78:
    aot_gpr_31 = (0x088E7F80u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7F80u) goto L_088E7F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7F80:
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_2;
    ctx.gpr[20] = (2236u << 16u);
      if (branch_taken) {
          goto L_088E7FB4;
      }
      goto L_088E7F88;
    }
L_088E7F88:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x088E7F94u);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 124u, 0x08999134u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7F94u) goto L_088E7F94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7F94:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_088E7FB4;
      }
      goto L_088E7F9C;
    }
L_088E7F9C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    aot_gpr_31 = (0x088E7FA8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 397u, 0x08909744u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7FA8u) goto L_088E7FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7FA8:
    aot_gpr_31 = (0x088E7FB0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 36u, 0x08A1C438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7FB0u) goto L_088E7FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7FB0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3228), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088E7FB4;
L_088E7FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 10u, 0x088E80A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E7FC4;
    }
L_088E7FC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 10u, 0x088E80A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E7FD4;
    }
L_088E7FD4:
    aot_gpr_31 = (0x088E7FDCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7FDCu) goto L_088E7FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7FDC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 5u, 0x088E807Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E7FE4;
    }
L_088E7FE4:
    aot_gpr_31 = (0x088E7FECu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7FECu) goto L_088E7FEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7FEC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0057_entry, 57u, 5u, 0x088E807Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088E7FF4;
    }
L_088E7FF4:
    aot_gpr_31 = (0x088E7FFCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088E7FFCu) goto L_088E7FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088E7FFC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3262))))));
    ctx.pc = 0x088E8000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0056(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0056_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_56(Runtime &runtime) {
    runtime.register_generated_unit(56u, 0x088E4000u, 16384u, &recomp_unit_0056, &recomp_unit_0056_entry);
    runtime.register_function(0x088E4000u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4100u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4110u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4180u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4188u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4190u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4194u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4208u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4258u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E425Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4294u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4300u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4310u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E431Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E432Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E433Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4348u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4358u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4368u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4374u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4394u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E439Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4410u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E442Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4430u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E443Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4444u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4450u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4454u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E445Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4464u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E446Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4474u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4478u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4488u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4490u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4498u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E449Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4500u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4508u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4510u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4524u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4528u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4548u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4568u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4570u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4580u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4584u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E459Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4604u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E460Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4614u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4620u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E462Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4640u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4670u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4684u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4720u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4728u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E473Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4784u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E478Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4794u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4804u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4830u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4850u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4878u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4880u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E488Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E489Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4910u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4934u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E493Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E494Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4958u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4960u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4968u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4970u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4978u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4990u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4998u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4ED8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5000u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E501Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5020u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5038u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5050u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5060u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5070u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5074u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5080u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5088u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5090u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5100u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E510Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5114u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E511Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5128u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5134u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E513Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5144u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5148u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5190u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5204u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5210u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5228u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5234u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5240u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5248u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E525Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5278u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5294u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5300u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5308u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5310u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5318u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5320u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5328u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5338u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5340u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5348u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5350u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5368u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5380u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5414u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E541Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5424u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E542Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5430u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5438u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5448u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5458u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5470u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5488u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5524u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E553Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E555Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5564u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5570u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5578u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5580u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E559Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5600u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E560Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5618u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E562Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5634u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5640u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5658u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5670u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E571Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5768u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5788u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5800u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5820u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5830u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E583Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E584Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E585Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5878u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5898u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5904u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5938u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5950u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5958u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5968u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5974u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5984u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5988u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5990u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5ACCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5ED0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5ED8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6004u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6024u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6028u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6040u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6048u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6074u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6090u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6104u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6118u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6130u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6144u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E614Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6154u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E615Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E616Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E618Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6194u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E619Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6200u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6208u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E621Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6238u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6248u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6250u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6270u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E627Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E628Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6324u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E632Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6340u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6350u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6360u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6368u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6378u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E637Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6384u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6398u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6414u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6438u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6460u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6488u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6524u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6544u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6550u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6574u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6580u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6588u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6590u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6598u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6600u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E660Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6620u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E662Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6634u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E663Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6644u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E664Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E665Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E666Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6670u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E671Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6728u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E673Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E674Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6760u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6764u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6770u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E678Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6790u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E679Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E680Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6820u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E682Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6844u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6920u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E693Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6944u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E694Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6974u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E699Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6ADCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6ED0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6ED8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7004u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E700Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7020u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7028u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E704Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E705Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7060u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7070u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7078u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E709Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7114u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7150u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E715Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E717Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7184u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E718Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E720Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E721Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7240u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7254u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7258u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7278u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7284u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E728Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E729Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7304u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7314u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7330u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7354u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7368u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7370u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7388u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7390u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7410u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7428u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7430u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7438u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7444u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7464u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7484u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7498u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7504u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E750Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7514u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E751Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7528u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E755Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E757Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7584u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E760Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7624u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7628u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7638u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7660u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E766Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7674u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E767Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7694u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7728u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7734u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7750u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7754u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E776Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7778u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E778Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E779Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7804u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E780Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7818u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7828u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E782Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7840u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7858u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7870u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7878u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7880u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7898u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7948u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7970u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7978u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7990u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AD8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7ED4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FFCu, &recomp_unit_0056, "recomp_unit_0056");
}
} // namespace psprecomp
