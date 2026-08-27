#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0188[64] = {
    0x00821A4040100401ull, 0x400040201A402020ull, 0x281200800D21A420ull, 0x0100090000002085ull,
    0x0592809080950000ull, 0x40824000231410CAull, 0x8850022140100921ull, 0x000110A0110A0000ull,
    0x0000000000002008ull, 0x0000200000000000ull, 0x0000000000000000ull, 0x0000000010000000ull,
    0x0000000000000000ull, 0x0000100022000000ull, 0x0280000102280000ull, 0x0000000000000000ull,
    0x1000000000000000ull, 0x8924252249201252ull, 0x2129124900004840ull, 0x9248012484924449ull,
    0xA508820492129248ull, 0x8010085402508508ull, 0x4820A00400809082ull, 0x1111122222222080ull,
    0x5084244448911111ull, 0x8925208102050908ull, 0x009550655490A568ull, 0x12150002151052A4ull,
    0x221508505502AA31ull, 0x4B4040D44A854A88ull, 0x850A142850A1413Aull, 0x13A4B40000102142ull,
    0x80402413A4B40204ull, 0x6808094A54827496ull, 0x0100008120A82749ull, 0x080589240095454Aull,
    0x8428202010800000ull, 0x2242484909212424ull, 0x069510901A080800ull, 0x2028510A18294220ull,
    0x5454117441004200ull, 0x5411545411545411ull, 0x0D54A82154541154ull, 0xA08AA2A08BA20802ull,
    0x8AA2A08AA2A08AA2ull, 0xA2A08AA2A08AA2A0ull, 0x504551504AA2A08Aull, 0x4551504551504551ull,
    0x5150455150455150ull, 0x5045515045515045ull, 0x4410083552A08551ull, 0xA08AA2A095454117ull,
    0x12A8A82551504AA2ull, 0xAA2A095454115454ull, 0x2A08AA2A08AA2A08ull, 0x06AA5410AA2A08AAull,
    0x0106AA5411748201ull, 0x515045515045D104ull, 0x8A2088083552A085ull, 0x51451451451428A2ull,
    0x4514514514514514ull, 0x1451451451451451ull, 0x145142850A28A145ull, 0x0082145145145145ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0188[64] = {
    1u, 11u, 20u, 34u, 41u, 54u, 68u, 81u, 89u, 91u, 92u, 92u, 93u, 93u, 96u, 102u,
    102u, 103u, 122u, 135u, 153u, 171u, 184u, 195u, 209u, 226u, 241u, 263u, 279u, 299u, 320u, 340u,
    355u, 371u, 393u, 407u, 425u, 433u, 450u, 464u, 480u, 496u, 517u, 539u, 558u, 580u, 601u, 622u,
    644u, 665u, 686u, 705u, 728u, 750u, 773u, 793u, 815u, 834u, 855u, 874u, 895u, 916u, 937u, 957u,
};
void recomp_unit_0188_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,5,6,2,29 fprs=12,13,14,15 gpr_occ=4555 fpr_occ=337 gpr_total=6923 fpr_total=602
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[2] = aot_gpr_2; ctx.gpr[29] = aot_gpr_29; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_29 = ctx.gpr[29]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF4000u;
        entry_id = 0u;
        if (entry_delta < 16352u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0188[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0188[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08AF4000;
    case 2u: goto L_08AF4028;
    case 3u: goto L_08AF4050;
    case 4u: goto L_08AF4078;
    case 5u: goto L_08AF4098;
    case 6u: goto L_08AF40A4;
    case 7u: goto L_08AF40AC;
    case 8u: goto L_08AF40B0;
    case 9u: goto L_08AF40C4;
    case 10u: goto L_08AF40DC;
    case 11u: goto L_08AF4114;
    case 12u: goto L_08AF4134;
    case 13u: goto L_08AF4158;
    case 14u: goto L_08AF4164;
    case 15u: goto L_08AF416C;
    case 16u: goto L_08AF4170;
    case 17u: goto L_08AF4194;
    case 18u: goto L_08AF41B8;
    case 19u: goto L_08AF41F8;
    case 20u: goto L_08AF4214;
    case 21u: goto L_08AF4228;
    case 22u: goto L_08AF4234;
    case 23u: goto L_08AF423C;
    case 24u: goto L_08AF4240;
    case 25u: goto L_08AF4254;
    case 26u: goto L_08AF4260;
    case 27u: goto L_08AF4268;
    case 28u: goto L_08AF426C;
    case 29u: goto L_08AF429C;
    case 30u: goto L_08AF42C4;
    case 31u: goto L_08AF42D0;
    case 32u: goto L_08AF42EC;
    case 33u: goto L_08AF42F4;
    case 34u: goto L_08AF4300;
    case 35u: goto L_08AF4308;
    case 36u: goto L_08AF431C;
    case 37u: goto L_08AF4334;
    case 38u: goto L_08AF43A0;
    case 39u: goto L_08AF43AC;
    case 40u: goto L_08AF43E0;
    case 41u: goto L_08AF4440;
    case 42u: goto L_08AF4448;
    case 43u: goto L_08AF4450;
    case 44u: goto L_08AF445C;
    case 45u: goto L_08AF447C;
    case 46u: goto L_08AF4490;
    case 47u: goto L_08AF449C;
    case 48u: goto L_08AF44BC;
    case 49u: goto L_08AF44C4;
    case 50u: goto L_08AF44D0;
    case 51u: goto L_08AF44DC;
    case 52u: goto L_08AF44E0;
    case 53u: goto L_08AF44E8;
    case 54u: goto L_08AF4504;
    case 55u: goto L_08AF450C;
    case 56u: goto L_08AF4518;
    case 57u: goto L_08AF451C;
    case 58u: goto L_08AF4530;
    case 59u: goto L_08AF4548;
    case 60u: goto L_08AF4550;
    case 61u: goto L_08AF4560;
    case 62u: goto L_08AF4564;
    case 63u: goto L_08AF4574;
    case 64u: goto L_08AF45B8;
    case 65u: goto L_08AF45C4;
    case 66u: goto L_08AF45DC;
    case 67u: goto L_08AF45F8;
    case 68u: goto L_08AF4600;
    case 69u: goto L_08AF4614;
    case 70u: goto L_08AF4620;
    case 71u: goto L_08AF462C;
    case 72u: goto L_08AF4650;
    case 73u: goto L_08AF4678;
    case 74u: goto L_08AF4680;
    case 75u: goto L_08AF4694;
    case 76u: goto L_08AF46A4;
    case 77u: goto L_08AF46D0;
    case 78u: goto L_08AF46D8;
    case 79u: goto L_08AF46EC;
    case 80u: goto L_08AF46FC;
    case 81u: goto L_08AF4744;
    case 82u: goto L_08AF474C;
    case 83u: goto L_08AF4760;
    case 84u: goto L_08AF4770;
    case 85u: goto L_08AF4794;
    case 86u: goto L_08AF479C;
    case 87u: goto L_08AF47B0;
    case 88u: goto L_08AF47C0;
    case 89u: goto L_08AF480C;
    case 90u: goto L_08AF4834;
    case 91u: goto L_08AF49B4;
    case 92u: goto L_08AF4B70;
    case 93u: goto L_08AF4D64;
    case 94u: goto L_08AF4D74;
    case 95u: goto L_08AF4DB0;
    case 96u: goto L_08AF4E4C;
    case 97u: goto L_08AF4E54;
    case 98u: goto L_08AF4E64;
    case 99u: goto L_08AF4E80;
    case 100u: goto L_08AF4EDC;
    case 101u: goto L_08AF4EE4;
    case 102u: goto L_08AF50F0;
    case 103u: goto L_08AF5104;
    case 104u: goto L_08AF5110;
    case 105u: goto L_08AF5118;
    case 106u: goto L_08AF5124;
    case 107u: goto L_08AF5130;
    case 108u: goto L_08AF5154;
    case 109u: goto L_08AF5160;
    case 110u: goto L_08AF516C;
    case 111u: goto L_08AF5178;
    case 112u: goto L_08AF5184;
    case 113u: goto L_08AF5194;
    case 114u: goto L_08AF51A0;
    case 115u: goto L_08AF51A8;
    case 116u: goto L_08AF51B4;
    case 117u: goto L_08AF51C8;
    case 118u: goto L_08AF51D4;
    case 119u: goto L_08AF51E0;
    case 120u: goto L_08AF51EC;
    case 121u: goto L_08AF51FC;
    case 122u: goto L_08AF5218;
    case 123u: goto L_08AF522C;
    case 124u: goto L_08AF5238;
    case 125u: goto L_08AF5280;
    case 126u: goto L_08AF528C;
    case 127u: goto L_08AF5298;
    case 128u: goto L_08AF52A4;
    case 129u: goto L_08AF52B0;
    case 130u: goto L_08AF52C0;
    case 131u: goto L_08AF52CC;
    case 132u: goto L_08AF52D4;
    case 133u: goto L_08AF52E0;
    case 134u: goto L_08AF52F4;
    case 135u: goto L_08AF5300;
    case 136u: goto L_08AF530C;
    case 137u: goto L_08AF5318;
    case 138u: goto L_08AF5328;
    case 139u: goto L_08AF5338;
    case 140u: goto L_08AF5344;
    case 141u: goto L_08AF5350;
    case 142u: goto L_08AF535C;
    case 143u: goto L_08AF5368;
    case 144u: goto L_08AF537C;
    case 145u: goto L_08AF5388;
    case 146u: goto L_08AF5394;
    case 147u: goto L_08AF53A0;
    case 148u: goto L_08AF53CC;
    case 149u: goto L_08AF53D8;
    case 150u: goto L_08AF53E4;
    case 151u: goto L_08AF53F0;
    case 152u: goto L_08AF53FC;
    case 153u: goto L_08AF540C;
    case 154u: goto L_08AF5418;
    case 155u: goto L_08AF5424;
    case 156u: goto L_08AF5430;
    case 157u: goto L_08AF543C;
    case 158u: goto L_08AF5444;
    case 159u: goto L_08AF5450;
    case 160u: goto L_08AF5464;
    case 161u: goto L_08AF5470;
    case 162u: goto L_08AF547C;
    case 163u: goto L_08AF5488;
    case 164u: goto L_08AF54A4;
    case 165u: goto L_08AF54BC;
    case 166u: goto L_08AF54CC;
    case 167u: goto L_08AF54E0;
    case 168u: goto L_08AF54E8;
    case 169u: goto L_08AF54F4;
    case 170u: goto L_08AF54FC;
    case 171u: goto L_08AF550C;
    case 172u: goto L_08AF5520;
    case 173u: goto L_08AF5528;
    case 174u: goto L_08AF553C;
    case 175u: goto L_08AF5550;
    case 176u: goto L_08AF5558;
    case 177u: goto L_08AF5564;
    case 178u: goto L_08AF5588;
    case 179u: goto L_08AF5590;
    case 180u: goto L_08AF5598;
    case 181u: goto L_08AF55AC;
    case 182u: goto L_08AF55D0;
    case 183u: goto L_08AF55FC;
    case 184u: goto L_08AF5604;
    case 185u: goto L_08AF561C;
    case 186u: goto L_08AF5630;
    case 187u: goto L_08AF563C;
    case 188u: goto L_08AF565C;
    case 189u: goto L_08AF5688;
    case 190u: goto L_08AF56B4;
    case 191u: goto L_08AF56BC;
    case 192u: goto L_08AF56D4;
    case 193u: goto L_08AF56EC;
    case 194u: goto L_08AF56F8;
    case 195u: goto L_08AF571C;
    case 196u: goto L_08AF5734;
    case 197u: goto L_08AF5744;
    case 198u: goto L_08AF5754;
    case 199u: goto L_08AF5764;
    case 200u: goto L_08AF5774;
    case 201u: goto L_08AF5784;
    case 202u: goto L_08AF5794;
    case 203u: goto L_08AF57A4;
    case 204u: goto L_08AF57B0;
    case 205u: goto L_08AF57C0;
    case 206u: goto L_08AF57D0;
    case 207u: goto L_08AF57E0;
    case 208u: goto L_08AF57F0;
    case 209u: goto L_08AF5800;
    case 210u: goto L_08AF5810;
    case 211u: goto L_08AF5820;
    case 212u: goto L_08AF5830;
    case 213u: goto L_08AF5840;
    case 214u: goto L_08AF5850;
    case 215u: goto L_08AF585C;
    case 216u: goto L_08AF586C;
    case 217u: goto L_08AF5878;
    case 218u: goto L_08AF5888;
    case 219u: goto L_08AF5898;
    case 220u: goto L_08AF58A8;
    case 221u: goto L_08AF58B4;
    case 222u: goto L_08AF58C8;
    case 223u: goto L_08AF58DC;
    case 224u: goto L_08AF58F0;
    case 225u: goto L_08AF58F8;
    case 226u: goto L_08AF590C;
    case 227u: goto L_08AF5920;
    case 228u: goto L_08AF592C;
    case 229u: goto L_08AF5940;
    case 230u: goto L_08AF5948;
    case 231u: goto L_08AF5964;
    case 232u: goto L_08AF5980;
    case 233u: goto L_08AF599C;
    case 234u: goto L_08AF59B4;
    case 235u: goto L_08AF59C0;
    case 236u: goto L_08AF59C8;
    case 237u: goto L_08AF59D4;
    case 238u: goto L_08AF59E0;
    case 239u: goto L_08AF59EC;
    case 240u: goto L_08AF59FC;
    case 241u: goto L_08AF5A0C;
    case 242u: goto L_08AF5A14;
    case 243u: goto L_08AF5A18;
    case 244u: goto L_08AF5A20;
    case 245u: goto L_08AF5A28;
    case 246u: goto L_08AF5A34;
    case 247u: goto L_08AF5A3C;
    case 248u: goto L_08AF5A50;
    case 249u: goto L_08AF5A5C;
    case 250u: goto L_08AF5A68;
    case 251u: goto L_08AF5A70;
    case 252u: goto L_08AF5A78;
    case 253u: goto L_08AF5A80;
    case 254u: goto L_08AF5A88;
    case 255u: goto L_08AF5A94;
    case 256u: goto L_08AF5A98;
    case 257u: goto L_08AF5AB0;
    case 258u: goto L_08AF5AB8;
    case 259u: goto L_08AF5AC0;
    case 260u: goto L_08AF5AC8;
    case 261u: goto L_08AF5AD0;
    case 262u: goto L_08AF5ADC;
    case 263u: goto L_08AF5B08;
    case 264u: goto L_08AF5B14;
    case 265u: goto L_08AF5B1C;
    case 266u: goto L_08AF5B24;
    case 267u: goto L_08AF5B30;
    case 268u: goto L_08AF5B38;
    case 269u: goto L_08AF5B50;
    case 270u: goto L_08AF5B60;
    case 271u: goto L_08AF5B68;
    case 272u: goto L_08AF5B70;
    case 273u: goto L_08AF5B84;
    case 274u: goto L_08AF5BC0;
    case 275u: goto L_08AF5BC8;
    case 276u: goto L_08AF5BD0;
    case 277u: goto L_08AF5BE4;
    case 278u: goto L_08AF5BF0;
    case 279u: goto L_08AF5C00;
    case 280u: goto L_08AF5C10;
    case 281u: goto L_08AF5C14;
    case 282u: goto L_08AF5C24;
    case 283u: goto L_08AF5C2C;
    case 284u: goto L_08AF5C34;
    case 285u: goto L_08AF5C3C;
    case 286u: goto L_08AF5C44;
    case 287u: goto L_08AF5C60;
    case 288u: goto L_08AF5C68;
    case 289u: goto L_08AF5C70;
    case 290u: goto L_08AF5C78;
    case 291u: goto L_08AF5C90;
    case 292u: goto L_08AF5C98;
    case 293u: goto L_08AF5CAC;
    case 294u: goto L_08AF5CC0;
    case 295u: goto L_08AF5CC8;
    case 296u: goto L_08AF5CD0;
    case 297u: goto L_08AF5CE4;
    case 298u: goto L_08AF5CF4;
    case 299u: goto L_08AF5D0C;
    case 300u: goto L_08AF5D1C;
    case 301u: goto L_08AF5D24;
    case 302u: goto L_08AF5D2C;
    case 303u: goto L_08AF5D38;
    case 304u: goto L_08AF5D40;
    case 305u: goto L_08AF5D48;
    case 306u: goto L_08AF5D5C;
    case 307u: goto L_08AF5D64;
    case 308u: goto L_08AF5D6C;
    case 309u: goto L_08AF5D78;
    case 310u: goto L_08AF5D88;
    case 311u: goto L_08AF5D90;
    case 312u: goto L_08AF5D98;
    case 313u: goto L_08AF5D9C;
    case 314u: goto L_08AF5DB8;
    case 315u: goto L_08AF5DD8;
    case 316u: goto L_08AF5DE0;
    case 317u: goto L_08AF5DE4;
    case 318u: goto L_08AF5DEC;
    case 319u: goto L_08AF5DF8;
    case 320u: goto L_08AF5E04;
    case 321u: goto L_08AF5E0C;
    case 322u: goto L_08AF5E10;
    case 323u: goto L_08AF5E14;
    case 324u: goto L_08AF5E20;
    case 325u: goto L_08AF5E38;
    case 326u: goto L_08AF5E40;
    case 327u: goto L_08AF5E54;
    case 328u: goto L_08AF5E5C;
    case 329u: goto L_08AF5E70;
    case 330u: goto L_08AF5E78;
    case 331u: goto L_08AF5E8C;
    case 332u: goto L_08AF5E94;
    case 333u: goto L_08AF5EA8;
    case 334u: goto L_08AF5EB0;
    case 335u: goto L_08AF5EC4;
    case 336u: goto L_08AF5ECC;
    case 337u: goto L_08AF5EE0;
    case 338u: goto L_08AF5EE8;
    case 339u: goto L_08AF5EFC;
    case 340u: goto L_08AF5F04;
    case 341u: goto L_08AF5F18;
    case 342u: goto L_08AF5F20;
    case 343u: goto L_08AF5F34;
    case 344u: goto L_08AF5F50;
    case 345u: goto L_08AF5FA8;
    case 346u: goto L_08AF5FB0;
    case 347u: goto L_08AF5FB4;
    case 348u: goto L_08AF5FBC;
    case 349u: goto L_08AF5FC8;
    case 350u: goto L_08AF5FD4;
    case 351u: goto L_08AF5FDC;
    case 352u: goto L_08AF5FE0;
    case 353u: goto L_08AF5FE4;
    case 354u: goto L_08AF5FF0;
    case 355u: goto L_08AF6008;
    case 356u: goto L_08AF6024;
    case 357u: goto L_08AF6048;
    case 358u: goto L_08AF6050;
    case 359u: goto L_08AF6054;
    case 360u: goto L_08AF605C;
    case 361u: goto L_08AF6068;
    case 362u: goto L_08AF6074;
    case 363u: goto L_08AF607C;
    case 364u: goto L_08AF6080;
    case 365u: goto L_08AF6084;
    case 366u: goto L_08AF6090;
    case 367u: goto L_08AF60A8;
    case 368u: goto L_08AF60B4;
    case 369u: goto L_08AF60D8;
    case 370u: goto L_08AF60FC;
    case 371u: goto L_08AF6104;
    case 372u: goto L_08AF6108;
    case 373u: goto L_08AF6110;
    case 374u: goto L_08AF611C;
    case 375u: goto L_08AF6128;
    case 376u: goto L_08AF6130;
    case 377u: goto L_08AF6134;
    case 378u: goto L_08AF6138;
    case 379u: goto L_08AF6144;
    case 380u: goto L_08AF615C;
    case 381u: goto L_08AF6168;
    case 382u: goto L_08AF6170;
    case 383u: goto L_08AF6178;
    case 384u: goto L_08AF6184;
    case 385u: goto L_08AF618C;
    case 386u: goto L_08AF6198;
    case 387u: goto L_08AF61A0;
    case 388u: goto L_08AF61AC;
    case 389u: goto L_08AF61CC;
    case 390u: goto L_08AF61EC;
    case 391u: goto L_08AF61F4;
    case 392u: goto L_08AF61F8;
    case 393u: goto L_08AF6200;
    case 394u: goto L_08AF620C;
    case 395u: goto L_08AF6218;
    case 396u: goto L_08AF6220;
    case 397u: goto L_08AF6224;
    case 398u: goto L_08AF6228;
    case 399u: goto L_08AF6234;
    case 400u: goto L_08AF624C;
    case 401u: goto L_08AF6254;
    case 402u: goto L_08AF625C;
    case 403u: goto L_08AF6274;
    case 404u: goto L_08AF6280;
    case 405u: goto L_08AF629C;
    case 406u: goto L_08AF62E0;
    case 407u: goto L_08AF6304;
    case 408u: goto L_08AF630C;
    case 409u: goto L_08AF6318;
    case 410u: goto L_08AF6320;
    case 411u: goto L_08AF6328;
    case 412u: goto L_08AF6338;
    case 413u: goto L_08AF6340;
    case 414u: goto L_08AF6348;
    case 415u: goto L_08AF6350;
    case 416u: goto L_08AF635C;
    case 417u: goto L_08AF6388;
    case 418u: goto L_08AF6394;
    case 419u: goto L_08AF63A0;
    case 420u: goto L_08AF63AC;
    case 421u: goto L_08AF63BC;
    case 422u: goto L_08AF63C0;
    case 423u: goto L_08AF63C8;
    case 424u: goto L_08AF63EC;
    case 425u: goto L_08AF645C;
    case 426u: goto L_08AF6470;
    case 427u: goto L_08AF6494;
    case 428u: goto L_08AF64B4;
    case 429u: goto L_08AF64CC;
    case 430u: goto L_08AF64D4;
    case 431u: goto L_08AF64E8;
    case 432u: goto L_08AF64FC;
    case 433u: goto L_08AF6508;
    case 434u: goto L_08AF6514;
    case 435u: goto L_08AF6528;
    case 436u: goto L_08AF6534;
    case 437u: goto L_08AF6540;
    case 438u: goto L_08AF6554;
    case 439u: goto L_08AF6560;
    case 440u: goto L_08AF656C;
    case 441u: goto L_08AF6580;
    case 442u: goto L_08AF658C;
    case 443u: goto L_08AF6598;
    case 444u: goto L_08AF65AC;
    case 445u: goto L_08AF65B8;
    case 446u: goto L_08AF65C4;
    case 447u: goto L_08AF65D8;
    case 448u: goto L_08AF65E4;
    case 449u: goto L_08AF65F4;
    case 450u: goto L_08AF662C;
    case 451u: goto L_08AF664C;
    case 452u: goto L_08AF6664;
    case 453u: goto L_08AF666C;
    case 454u: goto L_08AF6670;
    case 455u: goto L_08AF6690;
    case 456u: goto L_08AF669C;
    case 457u: goto L_08AF66B0;
    case 458u: goto L_08AF66C0;
    case 459u: goto L_08AF66C8;
    case 460u: goto L_08AF66D0;
    case 461u: goto L_08AF66DC;
    case 462u: goto L_08AF66E4;
    case 463u: goto L_08AF66E8;
    case 464u: goto L_08AF6714;
    case 465u: goto L_08AF6724;
    case 466u: goto L_08AF6738;
    case 467u: goto L_08AF6740;
    case 468u: goto L_08AF674C;
    case 469u: goto L_08AF6754;
    case 470u: goto L_08AF676C;
    case 471u: goto L_08AF6770;
    case 472u: goto L_08AF6784;
    case 473u: goto L_08AF678C;
    case 474u: goto L_08AF67A0;
    case 475u: goto L_08AF67B0;
    case 476u: goto L_08AF67B8;
    case 477u: goto L_08AF67CC;
    case 478u: goto L_08AF67D4;
    case 479u: goto L_08AF67F4;
    case 480u: goto L_08AF6824;
    case 481u: goto L_08AF6838;
    case 482u: goto L_08AF6860;
    case 483u: goto L_08AF6878;
    case 484u: goto L_08AF6888;
    case 485u: goto L_08AF6890;
    case 486u: goto L_08AF6894;
    case 487u: goto L_08AF6898;
    case 488u: goto L_08AF68A0;
    case 489u: goto L_08AF68B0;
    case 490u: goto L_08AF68C8;
    case 491u: goto L_08AF68D0;
    case 492u: goto L_08AF68D8;
    case 493u: goto L_08AF68E8;
    case 494u: goto L_08AF68F0;
    case 495u: goto L_08AF68F8;
    case 496u: goto L_08AF6900;
    case 497u: goto L_08AF6910;
    case 498u: goto L_08AF6928;
    case 499u: goto L_08AF6930;
    case 500u: goto L_08AF6938;
    case 501u: goto L_08AF6948;
    case 502u: goto L_08AF6950;
    case 503u: goto L_08AF6958;
    case 504u: goto L_08AF6960;
    case 505u: goto L_08AF6970;
    case 506u: goto L_08AF6988;
    case 507u: goto L_08AF6990;
    case 508u: goto L_08AF6998;
    case 509u: goto L_08AF69A8;
    case 510u: goto L_08AF69B0;
    case 511u: goto L_08AF69B8;
    case 512u: goto L_08AF69C0;
    case 513u: goto L_08AF69D0;
    case 514u: goto L_08AF69E8;
    case 515u: goto L_08AF69F0;
    case 516u: goto L_08AF69F8;
    case 517u: goto L_08AF6A08;
    case 518u: goto L_08AF6A10;
    case 519u: goto L_08AF6A18;
    case 520u: goto L_08AF6A20;
    case 521u: goto L_08AF6A30;
    case 522u: goto L_08AF6A48;
    case 523u: goto L_08AF6A50;
    case 524u: goto L_08AF6A58;
    case 525u: goto L_08AF6A68;
    case 526u: goto L_08AF6A70;
    case 527u: goto L_08AF6A78;
    case 528u: goto L_08AF6A80;
    case 529u: goto L_08AF6A94;
    case 530u: goto L_08AF6AAC;
    case 531u: goto L_08AF6AB4;
    case 532u: goto L_08AF6ABC;
    case 533u: goto L_08AF6AC8;
    case 534u: goto L_08AF6AD0;
    case 535u: goto L_08AF6AD8;
    case 536u: goto L_08AF6AE0;
    case 537u: goto L_08AF6AE8;
    case 538u: goto L_08AF6AEC;
    case 539u: goto L_08AF6B04;
    case 540u: goto L_08AF6B2C;
    case 541u: goto L_08AF6B44;
    case 542u: goto L_08AF6B54;
    case 543u: goto L_08AF6B5C;
    case 544u: goto L_08AF6B60;
    case 545u: goto L_08AF6B64;
    case 546u: goto L_08AF6B6C;
    case 547u: goto L_08AF6B7C;
    case 548u: goto L_08AF6B94;
    case 549u: goto L_08AF6B9C;
    case 550u: goto L_08AF6BA4;
    case 551u: goto L_08AF6BB4;
    case 552u: goto L_08AF6BBC;
    case 553u: goto L_08AF6BC4;
    case 554u: goto L_08AF6BCC;
    case 555u: goto L_08AF6BDC;
    case 556u: goto L_08AF6BF4;
    case 557u: goto L_08AF6BFC;
    case 558u: goto L_08AF6C04;
    case 559u: goto L_08AF6C14;
    case 560u: goto L_08AF6C1C;
    case 561u: goto L_08AF6C24;
    case 562u: goto L_08AF6C2C;
    case 563u: goto L_08AF6C3C;
    case 564u: goto L_08AF6C54;
    case 565u: goto L_08AF6C5C;
    case 566u: goto L_08AF6C64;
    case 567u: goto L_08AF6C74;
    case 568u: goto L_08AF6C7C;
    case 569u: goto L_08AF6C84;
    case 570u: goto L_08AF6C8C;
    case 571u: goto L_08AF6C9C;
    case 572u: goto L_08AF6CB4;
    case 573u: goto L_08AF6CBC;
    case 574u: goto L_08AF6CC4;
    case 575u: goto L_08AF6CD4;
    case 576u: goto L_08AF6CDC;
    case 577u: goto L_08AF6CE4;
    case 578u: goto L_08AF6CEC;
    case 579u: goto L_08AF6CFC;
    case 580u: goto L_08AF6D14;
    case 581u: goto L_08AF6D1C;
    case 582u: goto L_08AF6D24;
    case 583u: goto L_08AF6D34;
    case 584u: goto L_08AF6D3C;
    case 585u: goto L_08AF6D44;
    case 586u: goto L_08AF6D4C;
    case 587u: goto L_08AF6D5C;
    case 588u: goto L_08AF6D74;
    case 589u: goto L_08AF6D7C;
    case 590u: goto L_08AF6D84;
    case 591u: goto L_08AF6D94;
    case 592u: goto L_08AF6D9C;
    case 593u: goto L_08AF6DA4;
    case 594u: goto L_08AF6DAC;
    case 595u: goto L_08AF6DBC;
    case 596u: goto L_08AF6DD4;
    case 597u: goto L_08AF6DDC;
    case 598u: goto L_08AF6DE4;
    case 599u: goto L_08AF6DF4;
    case 600u: goto L_08AF6DFC;
    case 601u: goto L_08AF6E04;
    case 602u: goto L_08AF6E0C;
    case 603u: goto L_08AF6E1C;
    case 604u: goto L_08AF6E34;
    case 605u: goto L_08AF6E3C;
    case 606u: goto L_08AF6E44;
    case 607u: goto L_08AF6E54;
    case 608u: goto L_08AF6E5C;
    case 609u: goto L_08AF6E64;
    case 610u: goto L_08AF6E6C;
    case 611u: goto L_08AF6E78;
    case 612u: goto L_08AF6E90;
    case 613u: goto L_08AF6E98;
    case 614u: goto L_08AF6EA0;
    case 615u: goto L_08AF6EB0;
    case 616u: goto L_08AF6EB8;
    case 617u: goto L_08AF6EC0;
    case 618u: goto L_08AF6EC8;
    case 619u: goto L_08AF6ED8;
    case 620u: goto L_08AF6EF0;
    case 621u: goto L_08AF6EF8;
    case 622u: goto L_08AF6F00;
    case 623u: goto L_08AF6F10;
    case 624u: goto L_08AF6F18;
    case 625u: goto L_08AF6F20;
    case 626u: goto L_08AF6F28;
    case 627u: goto L_08AF6F38;
    case 628u: goto L_08AF6F50;
    case 629u: goto L_08AF6F58;
    case 630u: goto L_08AF6F60;
    case 631u: goto L_08AF6F70;
    case 632u: goto L_08AF6F78;
    case 633u: goto L_08AF6F80;
    case 634u: goto L_08AF6F88;
    case 635u: goto L_08AF6F98;
    case 636u: goto L_08AF6FB0;
    case 637u: goto L_08AF6FB8;
    case 638u: goto L_08AF6FC0;
    case 639u: goto L_08AF6FD0;
    case 640u: goto L_08AF6FD8;
    case 641u: goto L_08AF6FE0;
    case 642u: goto L_08AF6FE8;
    case 643u: goto L_08AF6FF8;
    case 644u: goto L_08AF7010;
    case 645u: goto L_08AF7018;
    case 646u: goto L_08AF7020;
    case 647u: goto L_08AF7030;
    case 648u: goto L_08AF7038;
    case 649u: goto L_08AF7040;
    case 650u: goto L_08AF7048;
    case 651u: goto L_08AF7058;
    case 652u: goto L_08AF7070;
    case 653u: goto L_08AF7078;
    case 654u: goto L_08AF7080;
    case 655u: goto L_08AF7090;
    case 656u: goto L_08AF7098;
    case 657u: goto L_08AF70A0;
    case 658u: goto L_08AF70A8;
    case 659u: goto L_08AF70B8;
    case 660u: goto L_08AF70D0;
    case 661u: goto L_08AF70D8;
    case 662u: goto L_08AF70E0;
    case 663u: goto L_08AF70F0;
    case 664u: goto L_08AF70F8;
    case 665u: goto L_08AF7100;
    case 666u: goto L_08AF7108;
    case 667u: goto L_08AF7118;
    case 668u: goto L_08AF7130;
    case 669u: goto L_08AF7138;
    case 670u: goto L_08AF7140;
    case 671u: goto L_08AF7150;
    case 672u: goto L_08AF7158;
    case 673u: goto L_08AF7160;
    case 674u: goto L_08AF7168;
    case 675u: goto L_08AF7178;
    case 676u: goto L_08AF7190;
    case 677u: goto L_08AF7198;
    case 678u: goto L_08AF71A0;
    case 679u: goto L_08AF71B0;
    case 680u: goto L_08AF71B8;
    case 681u: goto L_08AF71C0;
    case 682u: goto L_08AF71C8;
    case 683u: goto L_08AF71D8;
    case 684u: goto L_08AF71F0;
    case 685u: goto L_08AF71F8;
    case 686u: goto L_08AF7200;
    case 687u: goto L_08AF7210;
    case 688u: goto L_08AF7218;
    case 689u: goto L_08AF7220;
    case 690u: goto L_08AF7228;
    case 691u: goto L_08AF723C;
    case 692u: goto L_08AF7254;
    case 693u: goto L_08AF725C;
    case 694u: goto L_08AF7264;
    case 695u: goto L_08AF7270;
    case 696u: goto L_08AF7278;
    case 697u: goto L_08AF7280;
    case 698u: goto L_08AF7288;
    case 699u: goto L_08AF7290;
    case 700u: goto L_08AF7294;
    case 701u: goto L_08AF72AC;
    case 702u: goto L_08AF72D0;
    case 703u: goto L_08AF72E8;
    case 704u: goto L_08AF72F8;
    case 705u: goto L_08AF7300;
    case 706u: goto L_08AF7304;
    case 707u: goto L_08AF7308;
    case 708u: goto L_08AF7310;
    case 709u: goto L_08AF7320;
    case 710u: goto L_08AF7338;
    case 711u: goto L_08AF7340;
    case 712u: goto L_08AF7348;
    case 713u: goto L_08AF7358;
    case 714u: goto L_08AF7360;
    case 715u: goto L_08AF7368;
    case 716u: goto L_08AF7370;
    case 717u: goto L_08AF737C;
    case 718u: goto L_08AF7394;
    case 719u: goto L_08AF739C;
    case 720u: goto L_08AF73A4;
    case 721u: goto L_08AF73B4;
    case 722u: goto L_08AF73BC;
    case 723u: goto L_08AF73C4;
    case 724u: goto L_08AF73CC;
    case 725u: goto L_08AF73DC;
    case 726u: goto L_08AF73F4;
    case 727u: goto L_08AF73FC;
    case 728u: goto L_08AF7404;
    case 729u: goto L_08AF7414;
    case 730u: goto L_08AF741C;
    case 731u: goto L_08AF7424;
    case 732u: goto L_08AF742C;
    case 733u: goto L_08AF7438;
    case 734u: goto L_08AF7450;
    case 735u: goto L_08AF7458;
    case 736u: goto L_08AF7460;
    case 737u: goto L_08AF7470;
    case 738u: goto L_08AF7478;
    case 739u: goto L_08AF7480;
    case 740u: goto L_08AF7488;
    case 741u: goto L_08AF7494;
    case 742u: goto L_08AF74AC;
    case 743u: goto L_08AF74B4;
    case 744u: goto L_08AF74BC;
    case 745u: goto L_08AF74CC;
    case 746u: goto L_08AF74D4;
    case 747u: goto L_08AF74DC;
    case 748u: goto L_08AF74E4;
    case 749u: goto L_08AF74F0;
    case 750u: goto L_08AF7508;
    case 751u: goto L_08AF7510;
    case 752u: goto L_08AF7518;
    case 753u: goto L_08AF7528;
    case 754u: goto L_08AF7530;
    case 755u: goto L_08AF7538;
    case 756u: goto L_08AF7540;
    case 757u: goto L_08AF7550;
    case 758u: goto L_08AF7568;
    case 759u: goto L_08AF7570;
    case 760u: goto L_08AF7578;
    case 761u: goto L_08AF7588;
    case 762u: goto L_08AF7590;
    case 763u: goto L_08AF7598;
    case 764u: goto L_08AF75A0;
    case 765u: goto L_08AF75AC;
    case 766u: goto L_08AF75C4;
    case 767u: goto L_08AF75CC;
    case 768u: goto L_08AF75D4;
    case 769u: goto L_08AF75E4;
    case 770u: goto L_08AF75EC;
    case 771u: goto L_08AF75F4;
    case 772u: goto L_08AF75FC;
    case 773u: goto L_08AF760C;
    case 774u: goto L_08AF7624;
    case 775u: goto L_08AF762C;
    case 776u: goto L_08AF7634;
    case 777u: goto L_08AF7644;
    case 778u: goto L_08AF764C;
    case 779u: goto L_08AF7654;
    case 780u: goto L_08AF765C;
    case 781u: goto L_08AF766C;
    case 782u: goto L_08AF7684;
    case 783u: goto L_08AF768C;
    case 784u: goto L_08AF7694;
    case 785u: goto L_08AF76A4;
    case 786u: goto L_08AF76AC;
    case 787u: goto L_08AF76B4;
    case 788u: goto L_08AF76BC;
    case 789u: goto L_08AF76CC;
    case 790u: goto L_08AF76E4;
    case 791u: goto L_08AF76EC;
    case 792u: goto L_08AF76F4;
    case 793u: goto L_08AF7704;
    case 794u: goto L_08AF770C;
    case 795u: goto L_08AF7714;
    case 796u: goto L_08AF771C;
    case 797u: goto L_08AF772C;
    case 798u: goto L_08AF7744;
    case 799u: goto L_08AF774C;
    case 800u: goto L_08AF7754;
    case 801u: goto L_08AF7764;
    case 802u: goto L_08AF776C;
    case 803u: goto L_08AF7774;
    case 804u: goto L_08AF777C;
    case 805u: goto L_08AF7790;
    case 806u: goto L_08AF77A8;
    case 807u: goto L_08AF77B0;
    case 808u: goto L_08AF77B8;
    case 809u: goto L_08AF77C4;
    case 810u: goto L_08AF77CC;
    case 811u: goto L_08AF77D4;
    case 812u: goto L_08AF77DC;
    case 813u: goto L_08AF77E4;
    case 814u: goto L_08AF77E8;
    case 815u: goto L_08AF7800;
    case 816u: goto L_08AF7824;
    case 817u: goto L_08AF783C;
    case 818u: goto L_08AF7848;
    case 819u: goto L_08AF7850;
    case 820u: goto L_08AF7854;
    case 821u: goto L_08AF7858;
    case 822u: goto L_08AF7860;
    case 823u: goto L_08AF7870;
    case 824u: goto L_08AF7888;
    case 825u: goto L_08AF7890;
    case 826u: goto L_08AF7898;
    case 827u: goto L_08AF78A4;
    case 828u: goto L_08AF78AC;
    case 829u: goto L_08AF78B4;
    case 830u: goto L_08AF78BC;
    case 831u: goto L_08AF78C4;
    case 832u: goto L_08AF78C8;
    case 833u: goto L_08AF78E0;
    case 834u: goto L_08AF7908;
    case 835u: goto L_08AF7920;
    case 836u: goto L_08AF7930;
    case 837u: goto L_08AF7938;
    case 838u: goto L_08AF793C;
    case 839u: goto L_08AF7940;
    case 840u: goto L_08AF7948;
    case 841u: goto L_08AF7958;
    case 842u: goto L_08AF7970;
    case 843u: goto L_08AF7978;
    case 844u: goto L_08AF7980;
    case 845u: goto L_08AF7990;
    case 846u: goto L_08AF7998;
    case 847u: goto L_08AF79A0;
    case 848u: goto L_08AF79A8;
    case 849u: goto L_08AF79B8;
    case 850u: goto L_08AF79D0;
    case 851u: goto L_08AF79D8;
    case 852u: goto L_08AF79E0;
    case 853u: goto L_08AF79F0;
    case 854u: goto L_08AF79F8;
    case 855u: goto L_08AF7A00;
    case 856u: goto L_08AF7A08;
    case 857u: goto L_08AF7A1C;
    case 858u: goto L_08AF7A34;
    case 859u: goto L_08AF7A3C;
    case 860u: goto L_08AF7A44;
    case 861u: goto L_08AF7A50;
    case 862u: goto L_08AF7A58;
    case 863u: goto L_08AF7A60;
    case 864u: goto L_08AF7A68;
    case 865u: goto L_08AF7A70;
    case 866u: goto L_08AF7A74;
    case 867u: goto L_08AF7A8C;
    case 868u: goto L_08AF7AAC;
    case 869u: goto L_08AF7ABC;
    case 870u: goto L_08AF7AD4;
    case 871u: goto L_08AF7AE4;
    case 872u: goto L_08AF7AEC;
    case 873u: goto L_08AF7AFC;
    case 874u: goto L_08AF7B04;
    case 875u: goto L_08AF7B14;
    case 876u: goto L_08AF7B1C;
    case 877u: goto L_08AF7B2C;
    case 878u: goto L_08AF7B34;
    case 879u: goto L_08AF7B48;
    case 880u: goto L_08AF7B50;
    case 881u: goto L_08AF7B60;
    case 882u: goto L_08AF7B68;
    case 883u: goto L_08AF7B78;
    case 884u: goto L_08AF7B80;
    case 885u: goto L_08AF7B90;
    case 886u: goto L_08AF7B98;
    case 887u: goto L_08AF7BA8;
    case 888u: goto L_08AF7BB0;
    case 889u: goto L_08AF7BC0;
    case 890u: goto L_08AF7BC8;
    case 891u: goto L_08AF7BD8;
    case 892u: goto L_08AF7BE0;
    case 893u: goto L_08AF7BF0;
    case 894u: goto L_08AF7BF8;
    case 895u: goto L_08AF7C08;
    case 896u: goto L_08AF7C10;
    case 897u: goto L_08AF7C20;
    case 898u: goto L_08AF7C28;
    case 899u: goto L_08AF7C38;
    case 900u: goto L_08AF7C40;
    case 901u: goto L_08AF7C50;
    case 902u: goto L_08AF7C58;
    case 903u: goto L_08AF7C68;
    case 904u: goto L_08AF7C70;
    case 905u: goto L_08AF7C80;
    case 906u: goto L_08AF7C88;
    case 907u: goto L_08AF7C98;
    case 908u: goto L_08AF7CA0;
    case 909u: goto L_08AF7CB0;
    case 910u: goto L_08AF7CB8;
    case 911u: goto L_08AF7CC8;
    case 912u: goto L_08AF7CD0;
    case 913u: goto L_08AF7CE0;
    case 914u: goto L_08AF7CE8;
    case 915u: goto L_08AF7CF8;
    case 916u: goto L_08AF7D00;
    case 917u: goto L_08AF7D10;
    case 918u: goto L_08AF7D18;
    case 919u: goto L_08AF7D28;
    case 920u: goto L_08AF7D30;
    case 921u: goto L_08AF7D40;
    case 922u: goto L_08AF7D48;
    case 923u: goto L_08AF7D58;
    case 924u: goto L_08AF7D60;
    case 925u: goto L_08AF7D70;
    case 926u: goto L_08AF7D78;
    case 927u: goto L_08AF7D88;
    case 928u: goto L_08AF7D90;
    case 929u: goto L_08AF7DA0;
    case 930u: goto L_08AF7DA8;
    case 931u: goto L_08AF7DB8;
    case 932u: goto L_08AF7DC0;
    case 933u: goto L_08AF7DD0;
    case 934u: goto L_08AF7DD8;
    case 935u: goto L_08AF7DE8;
    case 936u: goto L_08AF7DF0;
    case 937u: goto L_08AF7E00;
    case 938u: goto L_08AF7E08;
    case 939u: goto L_08AF7E18;
    case 940u: goto L_08AF7E20;
    case 941u: goto L_08AF7E34;
    case 942u: goto L_08AF7E3C;
    case 943u: goto L_08AF7E4C;
    case 944u: goto L_08AF7E54;
    case 945u: goto L_08AF7E64;
    case 946u: goto L_08AF7E6C;
    case 947u: goto L_08AF7E80;
    case 948u: goto L_08AF7E88;
    case 949u: goto L_08AF7E9C;
    case 950u: goto L_08AF7EA4;
    case 951u: goto L_08AF7EB8;
    case 952u: goto L_08AF7EC0;
    case 953u: goto L_08AF7ED0;
    case 954u: goto L_08AF7ED8;
    case 955u: goto L_08AF7EE8;
    case 956u: goto L_08AF7EF0;
    case 957u: goto L_08AF7F00;
    case 958u: goto L_08AF7F08;
    case 959u: goto L_08AF7F18;
    case 960u: goto L_08AF7F20;
    case 961u: goto L_08AF7F30;
    case 962u: goto L_08AF7F38;
    case 963u: goto L_08AF7F48;
    case 964u: goto L_08AF7F50;
    case 965u: goto L_08AF7F60;
    case 966u: goto L_08AF7F68;
    case 967u: goto L_08AF7F78;
    case 968u: goto L_08AF7F80;
    case 969u: goto L_08AF7F90;
    case 970u: goto L_08AF7F98;
    case 971u: goto L_08AF7FA8;
    case 972u: goto L_08AF7FB0;
    case 973u: goto L_08AF7FC4;
    case 974u: goto L_08AF7FDC;
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
L_08AF4000:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[8] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08AF4028u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 949u, 0x08AA3E10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4028u) goto L_08AF4028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4028:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF4050:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AF4078u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4078u) goto L_08AF4078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4078:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_gpr_2 - aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08AF4098u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4098u) goto L_08AF4098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4098:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF40AC;
      }
      goto L_08AF40A4;
    }
L_08AF40A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF40B0;
      }
      goto L_08AF40AC;
    }
L_08AF40AC:
    aot_gpr_4 = (0u | 0u);
    goto L_08AF40B0;
L_08AF40B0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF40C4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-25888));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 943u, 0x08AA3DD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF40C4u) goto L_08AF40C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF40C4:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF40DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AF4114u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4114u) goto L_08AF4114;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4114:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[19] = (aot_gpr_2 - ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x08AF4134u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4134u) goto L_08AF4134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4134:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_gpr_5 & 65535u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2240u << 16u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AF4158u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25888));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4158u) goto L_08AF4158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4158:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF416C;
    }
    goto L_08AF4164;
L_08AF4164:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4170;
      }
      goto L_08AF416C;
    }
L_08AF416C:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08AF4170;
L_08AF4170:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08AF4194u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 949u, 0x08AA3E10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4194u) goto L_08AF4194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4194:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF41B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AF41F8u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF41F8u) goto L_08AF41F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF41F8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[19] = (aot_gpr_2 - ctx.gpr[19]);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 3u);
    aot_gpr_31 = (0x08AF4214u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4214u) goto L_08AF4214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4214:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08AF4228u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4228u) goto L_08AF4228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4228:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF423C;
    }
    goto L_08AF4234;
L_08AF4234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF4240;
      }
      goto L_08AF423C;
    }
L_08AF423C:
    ctx.gpr[16] = (aot_gpr_4 + ctx.gpr[16]);
    goto L_08AF4240;
L_08AF4240:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AF4254u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4254u) goto L_08AF4254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4254:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[20] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF4268;
    }
    goto L_08AF4260;
L_08AF4260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF426C;
      }
      goto L_08AF4268;
    }
L_08AF4268:
    ctx.gpr[20] = (aot_gpr_4 + ctx.gpr[20]);
    goto L_08AF426C;
L_08AF426C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (2240u << 16u);
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF429Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-25888));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 949u, 0x08AA3E10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF429Cu) goto L_08AF429C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF429C:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF42C4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF42D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AF4308;
      }
      goto L_08AF42EC;
    }
L_08AF42EC:
    aot_gpr_31 = (0x08AF42F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AF44D0;
L_08AF42F4:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF4308;
      }
      goto L_08AF4300;
    }
L_08AF4300:
    aot_gpr_31 = (0x08AF4308u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4308u) goto L_08AF4308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4308:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF431C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10368), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AF4334u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10372), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 122u, 0x08890830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4334u) goto L_08AF4334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4334:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[0];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_gpr_6 = (18303u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 64000u);
    ctx.gpr[7] = (15112u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    ctx.gpr[7] = (ctx.gpr[7] | 34953u);
    ctx.gpr[8] = (15216u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10364), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[8] = (ctx.gpr[8] | 61681u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10360), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF43A0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(aot_fpr_13));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF43AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10368)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (2238u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-272));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AF43E0u);
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    goto L_08AF4EE4;
L_08AF43E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10372)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10368)));
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12016));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_5 & 65535u);
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10372)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10368)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10372), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AF4440u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10368), aot_gpr_4);
    goto L_08AF445C;
L_08AF4440:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AF4450;
      }
      goto L_08AF4448;
    }
L_08AF4448:
    aot_gpr_31 = (0x08AF4450u);
    goto L_08AF447C;
L_08AF4450:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF445C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10368)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10372)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 381 ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_4 ^ 1u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 1019 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_2 | aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF447C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10368)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08AF44C4;
      }
      goto L_08AF4490;
    }
L_08AF4490:
    aot_gpr_4 = (0u | 7u);
    aot_gpr_31 = (0x08AF449Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF449Cu) goto L_08AF449C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF449C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10368)));
    aot_gpr_5 = (2238u << 16u);
    ctx.gpr[7] = (2238u << 16u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10372)));
    aot_gpr_4 = (0u | 3u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-272));
    aot_gpr_31 = (0x08AF44BCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12016));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 495u, 0x08AEE294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF44BCu) goto L_08AF44BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF44BC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10368), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10372), 0u);
    goto L_08AF44C4;
L_08AF44C4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF44D0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AF44E0;
      }
      goto L_08AF44DC;
    }
L_08AF44DC:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    goto L_08AF44E0;
L_08AF44E0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF44E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AF4504u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    goto L_08AF44D0;
L_08AF4504:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AF451C;
      }
      goto L_08AF450C;
    }
L_08AF450C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF4518u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4518u) goto L_08AF4518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4518:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_2);
    goto L_08AF451C;
L_08AF451C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF4530:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AF4564;
      }
      goto L_08AF4548;
    }
L_08AF4548:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF4564;
      }
      goto L_08AF4550;
    }
L_08AF4550:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF4560u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4560u) goto L_08AF4560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4560:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_gpr_2);
    goto L_08AF4564;
L_08AF4564:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF4574:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), ctx.gpr[16]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (0u | 4u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    aot_gpr_31 = (0x08AF45B8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF45B8u) goto L_08AF45B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF45B8:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AF45C4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF45C4u) goto L_08AF45C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF45C4:
    aot_fpr_14 = ctx.fpr[22] + ctx.fpr[26];
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_15 = ctx.fpr[20] + ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x08AF45DCu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089D1B1C, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, aot_fpr_15); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF45DCu) goto L_08AF45DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF45DC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF45F8u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08AF47C0;
L_08AF45F8:
    aot_gpr_31 = (0x08AF4600u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AF50F0;
L_08AF4600:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08AF4614u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4614u) goto L_08AF4614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4614:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AF4620u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4620u) goto L_08AF4620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4620:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AF462Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF462Cu) goto L_08AF462C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF462C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF4650:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AF4678u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08AF47C0;
L_08AF4678:
    aot_gpr_31 = (0x08AF4680u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AF50F0;
L_08AF4680:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08AF4694u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4694u) goto L_08AF4694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4694:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF46A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AF46D0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08AF47C0;
L_08AF46D0:
    aot_gpr_31 = (0x08AF46D8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AF50F0;
L_08AF46D8:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08AF46ECu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF46ECu) goto L_08AF46EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF46EC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF46FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(448)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(452)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_6 = (aot_gpr_5 | 0u);
    { const float fs = ctx.fpr[2]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_gpr_31 = (0x08AF4744u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    goto L_08AF49B4;
L_08AF4744:
    aot_gpr_31 = (0x08AF474Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AF50F0;
L_08AF474C:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08AF4760u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF4760u) goto L_08AF4760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF4760:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF4770:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AF4794u);
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    goto L_08AF4B70;
L_08AF4794:
    aot_gpr_31 = (0x08AF479Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AF50F0;
L_08AF479C:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08AF47B0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF47B0u) goto L_08AF47B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF47B0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF47C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_15 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[2]);
    }
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AF4834;
      }
      goto L_08AF480C;
    }
L_08AF480C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(448)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(452)));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_08AF4834;
L_08AF4834:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10364)));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    ctx.gpr[3] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[10] = (2238u << 16u);
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8272));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[3]);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_2));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store16(ctx.gpr[10] + static_cast<std::uint32_t>(-8272), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[13] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (18176u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 128u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[10]);
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr_2));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[12] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.gpr[7] = (ctx.gpr[10] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr_2));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr_2));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF49B4:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[10] = (2238u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10364)));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8272));
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[8] = (ctx.gpr[9] << 16u);
    ctx.gpr[9] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_2));
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store16(ctx.gpr[10] + static_cast<std::uint32_t>(-8272), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(3)));
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (ctx.gpr[9] << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    ctx.gpr[8] = (18176u << 16u);
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[8] = (ctx.gpr[8] | 128u);
    aot_gpr_6 = (ctx.gpr[12] << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr_6));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr_2));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_6));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_6));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_gpr_6 = (ctx.gpr[8] << 16u);
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (ctx.gpr[3] << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr_6));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr_2));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_6));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.gpr[8] << 16u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (ctx.gpr[10] << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr_2));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[7]));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(aot_gpr_4));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF4B70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(448)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(452)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    aot_gpr_4 = (18176u << 16u);
    ctx.gpr[9] = (16128u << 16u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10364)));
    ctx.fpr[2] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[11] = (2238u << 16u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[9]);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[3];
    ctx.gpr[9] = (ctx.gpr[11] + static_cast<std::uint32_t>(-8272));
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[3];
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.fpr[4] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[7]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_2));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(ctx.gpr[11] + static_cast<std::uint32_t>(-8272), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[1]));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_14 + ctx.fpr[3];
    ctx.gpr[12] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    aot_fpr_13 = aot_fpr_15 + ctx.fpr[3];
    ctx.gpr[13] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[11] << 16u);
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[10]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr_2));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[5]));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_fpr_12 = aot_fpr_14 + ctx.fpr[3];
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = ctx.fpr[19] + ctx.fpr[3];
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (ctx.gpr[12] << 16u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_fpr_12 = aot_fpr_14 + ctx.fpr[3];
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr_2));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_fpr_13 = aot_fpr_15 + ctx.fpr[3];
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(3)));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr_2));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store16(ctx.gpr[9] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF4D64:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10364)));
      if (branch_taken) {
          goto L_08AF4E4C;
      }
      goto L_08AF4D74;
    }
L_08AF4D74:
    ctx.gpr[8] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[9] = (18176u << 16u);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    ctx.gpr[8] = (2238u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8272));
    ctx.gpr[11] = (16128u << 16u);
    aot_gpr_2 = (0u | 0u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (aot_gpr_2 + ctx.gpr[8]);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[11]);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_08AF4DB0;
L_08AF4DB0:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_6));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[11] = (ctx.gpr[11] << 16u);
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_gpr_2 << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_fpr_15 = aot_fpr_15 + aot_fpr_12;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_2));
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.gpr[12] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[13] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_2));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[13]));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AF4DB0;
      }
      goto L_08AF4E4C;
    }
L_08AF4E4C:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF4E54:
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10364)));
      if (branch_taken) {
          goto L_08AF4EDC;
      }
      goto L_08AF4E64;
    }
L_08AF4E64:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[9] = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[9]);
    goto L_08AF4E80;
L_08AF4E80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[11] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AF4E80;
      }
      goto L_08AF4EDC;
    }
L_08AF4EDC:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF4EE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(448)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(452)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    aot_gpr_5 = (18176u << 16u);
    ctx.gpr[10] = (16128u << 16u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10364)));
    ctx.fpr[8] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[9] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[10]);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[6];
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[6];
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.fpr[4] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[7]));
    aot_gpr_5 = (ctx.gpr[11] << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[1]));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    aot_fpr_13 = aot_fpr_14 + ctx.fpr[6];
    ctx.gpr[3] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[6];
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_2));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (ctx.gpr[11] << 16u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr_5));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[5]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_fpr_12 = aot_fpr_14 + ctx.fpr[6];
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = ctx.fpr[19] + ctx.fpr[6];
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    aot_gpr_2 = (aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_2));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (ctx.gpr[3] << 16u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(aot_gpr_5));
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_fpr_12 = aot_fpr_15 + ctx.fpr[6];
    ctx.gpr[9] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = ctx.fpr[17] + ctx.fpr[6];
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_gpr_2 << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(aot_gpr_6));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF50F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF5118;
      }
      goto L_08AF5104;
    }
L_08AF5104:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08AF5110u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5110u) goto L_08AF5110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5110:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5124;
      }
      goto L_08AF5118;
    }
L_08AF5118:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AF5124u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5124u) goto L_08AF5124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5124:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF5130:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[9] = (aot_gpr_6 & 255u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AF5154u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AF47C0;
L_08AF5154:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08AF5160u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5160u) goto L_08AF5160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5160:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_31 = (0x08AF516Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF516Cu) goto L_08AF516C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF516C:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AF5178u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5178u) goto L_08AF5178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5178:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AF5184u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5184u) goto L_08AF5184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5184:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 255u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AF51A8;
      }
      goto L_08AF5194;
    }
L_08AF5194:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08AF51A0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF51A0u) goto L_08AF51A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF51A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF51B4;
      }
      goto L_08AF51A8;
    }
L_08AF51A8:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08AF51B4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF51B4u) goto L_08AF51B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF51B4:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08AF51C8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF51C8u) goto L_08AF51C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF51C8:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AF51D4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF51D4u) goto L_08AF51D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF51D4:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AF51E0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF51E0u) goto L_08AF51E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF51E0:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_31 = (0x08AF51ECu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF51ECu) goto L_08AF51EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF51EC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF51FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AF5218u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08AF47C0;
L_08AF5218:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08AF522Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF522Cu) goto L_08AF522C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF522C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF5238:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(448)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(452)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[2]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_gpr_31 = (0x08AF5280u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    goto L_08AF49B4;
L_08AF5280:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08AF528Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF528Cu) goto L_08AF528C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF528C:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_31 = (0x08AF5298u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5298u) goto L_08AF5298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5298:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AF52A4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF52A4u) goto L_08AF52A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF52A4:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AF52B0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF52B0u) goto L_08AF52B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF52B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 255u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AF52D4;
      }
      goto L_08AF52C0;
    }
L_08AF52C0:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08AF52CCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF52CCu) goto L_08AF52CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF52CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF52E0;
      }
      goto L_08AF52D4;
    }
L_08AF52D4:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08AF52E0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF52E0u) goto L_08AF52E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF52E0:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08AF52F4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF52F4u) goto L_08AF52F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF52F4:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AF5300u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5300u) goto L_08AF5300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5300:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AF530Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF530Cu) goto L_08AF530C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF530C:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_31 = (0x08AF5318u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5318u) goto L_08AF5318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5318:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF5328:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AF5338u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08AF47C0;
L_08AF5338:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08AF5344u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5344u) goto L_08AF5344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5344:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AF5350u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5350u) goto L_08AF5350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5350:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AF535Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF535Cu) goto L_08AF535C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF535C:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08AF5368u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5368u) goto L_08AF5368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5368:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08AF537Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF537Cu) goto L_08AF537C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF537C:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AF5388u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5388u) goto L_08AF5388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5388:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AF5394u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5394u) goto L_08AF5394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5394:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF53A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AF53CCu);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    goto L_08AF49B4;
L_08AF53CC:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08AF53D8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF53D8u) goto L_08AF53D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF53D8:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_31 = (0x08AF53E4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF53E4u) goto L_08AF53E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF53E4:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AF53F0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF53F0u) goto L_08AF53F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF53F0:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AF53FCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF53FCu) goto L_08AF53FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF53FC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    aot_gpr_4 = (0u | 255u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AF5444;
      }
      goto L_08AF540C;
    }
L_08AF540C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AF5444;
      }
      goto L_08AF5418;
    }
L_08AF5418:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AF5444;
      }
      goto L_08AF5424;
    }
L_08AF5424:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AF5444;
      }
      goto L_08AF5430;
    }
L_08AF5430:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08AF543Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF543Cu) goto L_08AF543C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF543C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5450;
      }
      goto L_08AF5444;
    }
L_08AF5444:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08AF5450u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5450u) goto L_08AF5450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5450:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    aot_gpr_6 = (0u | 4u);
    aot_gpr_31 = (0x08AF5464u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5464u) goto L_08AF5464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5464:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AF5470u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5470u) goto L_08AF5470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5470:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AF547Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF547Cu) goto L_08AF547C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF547C:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_31 = (0x08AF5488u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5488u) goto L_08AF5488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5488:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF54A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AF54E8;
      }
      goto L_08AF54BC;
    }
L_08AF54BC:
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_2 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AF54E8;
      }
      goto L_08AF54CC;
    }
L_08AF54CC:
    aot_gpr_6 = (aot_gpr_2 | aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 | aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 & 3u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AF54FC;
      }
      goto L_08AF54E0;
    }
L_08AF54E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5528;
      }
      goto L_08AF54E8;
    }
L_08AF54E8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AF54F4u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF54F4u) goto L_08AF54F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF54F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5558;
      }
      goto L_08AF54FC;
    }
L_08AF54FC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_2;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
      if (branch_taken) {
          goto L_08AF5520;
      }
      goto L_08AF550C;
    }
L_08AF550C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_2;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08AF550C;
      }
      goto L_08AF5520;
    }
L_08AF5520:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5558;
      }
      goto L_08AF5528;
    }
L_08AF5528:
    aot_gpr_4 = (aot_gpr_4 >> 2u);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_6);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_2;
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
      if (branch_taken) {
          goto L_08AF5550;
      }
      goto L_08AF553C;
    }
L_08AF553C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_2;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
      if (branch_taken) {
          goto L_08AF553C;
      }
      goto L_08AF5550;
    }
L_08AF5550:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5558;
      }
      goto L_08AF5558;
    }
L_08AF5558:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF5564:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_6, aot_gpr_5, ctx.gpr[7]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AF5590;
      }
      goto L_08AF5588;
    }
L_08AF5588:
    aot_gpr_31 = (0x08AF5590u);
    goto L_08AF571C;
L_08AF5590:
    aot_gpr_31 = (0x08AF5598u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AF599C;
L_08AF5598:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF55AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08AF55D0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08AF5ADC;
L_08AF55D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_2 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2280u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12080));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AF5604;
      }
      goto L_08AF55FC;
    }
L_08AF55FC:
    aot_gpr_31 = (0x08AF5604u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5604u) goto L_08AF5604;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5604:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF561Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08AF5A3C;
L_08AF561C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AF5630u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5630u) goto L_08AF5630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5630:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AF563Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF563Cu) goto L_08AF563C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF563C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF565C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08AF5688u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AF5ADC;
L_08AF5688:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_2 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2280u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12080));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AF56BC;
      }
      goto L_08AF56B4;
    }
L_08AF56B4:
    aot_gpr_31 = (0x08AF56BCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF56BCu) goto L_08AF56BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF56BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF56D4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08AF5A3C;
L_08AF56D4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AF56ECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF56ECu) goto L_08AF56EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF56EC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AF56F8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF56F8u) goto L_08AF56F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF56F8:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF571C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 69u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AF5734u);
    aot_gpr_6 = (0u | 89u);
    goto L_08AF58F8;
L_08AF5734:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 70u);
    aot_gpr_31 = (0x08AF5744u);
    aot_gpr_6 = (0u | 90u);
    goto L_08AF5964;
L_08AF5744:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (0u | 71u);
    aot_gpr_31 = (0x08AF5754u);
    aot_gpr_6 = (0u | 91u);
    goto L_08AF58F8;
L_08AF5754:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (0u | 72u);
    aot_gpr_31 = (0x08AF5764u);
    aot_gpr_6 = (0u | 92u);
    goto L_08AF5964;
L_08AF5764:
    aot_gpr_4 = (0u | 2u);
    aot_gpr_5 = (0u | 73u);
    aot_gpr_31 = (0x08AF5774u);
    aot_gpr_6 = (0u | 93u);
    goto L_08AF58F8;
L_08AF5774:
    aot_gpr_4 = (0u | 2u);
    aot_gpr_5 = (0u | 74u);
    aot_gpr_31 = (0x08AF5784u);
    aot_gpr_6 = (0u | 94u);
    goto L_08AF5964;
L_08AF5784:
    aot_gpr_4 = (0u | 2u);
    aot_gpr_5 = (0u | 176u);
    aot_gpr_31 = (0x08AF5794u);
    aot_gpr_6 = (0u | 180u);
    goto L_08AF5948;
L_08AF5794:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_5 = (0u | 84u);
    aot_gpr_31 = (0x08AF57A4u);
    aot_gpr_6 = (0u | 124u);
    goto L_08AF58F8;
L_08AF57A4:
    aot_gpr_4 = (0u | 3u);
    aot_gpr_31 = (0x08AF57B0u);
    aot_gpr_5 = (0u | 95u);
    goto L_08AF58C8;
L_08AF57B0:
    aot_gpr_4 = (0u | 3u);
    aot_gpr_5 = (0u | 96u);
    aot_gpr_31 = (0x08AF57C0u);
    aot_gpr_6 = (0u | 96u);
    goto L_08AF5964;
L_08AF57C0:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_5 = (0u | 61u);
    aot_gpr_31 = (0x08AF57D0u);
    aot_gpr_6 = (0u | 59u);
    goto L_08AF58F8;
L_08AF57D0:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_5 = (0u | 62u);
    aot_gpr_31 = (0x08AF57E0u);
    aot_gpr_6 = (0u | 60u);
    goto L_08AF5964;
L_08AF57E0:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_5 = (0u | 65u);
    aot_gpr_31 = (0x08AF57F0u);
    aot_gpr_6 = (0u | 85u);
    goto L_08AF58F8;
L_08AF57F0:
    aot_gpr_4 = (0u | 7u);
    aot_gpr_5 = (0u | 128u);
    aot_gpr_31 = (0x08AF5800u);
    aot_gpr_6 = (0u | 129u);
    goto L_08AF58F8;
L_08AF5800:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_5 = (0u | 82u);
    aot_gpr_31 = (0x08AF5810u);
    aot_gpr_6 = (0u | 122u);
    goto L_08AF58F8;
L_08AF5810:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_5 = (0u | 83u);
    aot_gpr_31 = (0x08AF5820u);
    aot_gpr_6 = (0u | 123u);
    goto L_08AF5964;
L_08AF5820:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_5 = (0u | 177u);
    aot_gpr_31 = (0x08AF5830u);
    aot_gpr_6 = (0u | 181u);
    goto L_08AF5948;
L_08AF5830:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_5 = (0u | 198u);
    aot_gpr_31 = (0x08AF5840u);
    aot_gpr_6 = (0u | 199u);
    goto L_08AF58F8;
L_08AF5840:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_5 = (0u | 212u);
    aot_gpr_31 = (0x08AF5850u);
    aot_gpr_6 = (0u | 213u);
    goto L_08AF5980;
L_08AF5850:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08AF585Cu);
    aot_gpr_5 = (0u | 64u);
    goto L_08AF58C8;
L_08AF585C:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_5 = (0u | 66u);
    aot_gpr_31 = (0x08AF586Cu);
    aot_gpr_6 = (0u | 86u);
    goto L_08AF58F8;
L_08AF586C:
    aot_gpr_4 = (0u | 12u);
    aot_gpr_31 = (0x08AF5878u);
    aot_gpr_5 = (0u | 186u);
    goto L_08AF58C8;
L_08AF5878:
    aot_gpr_4 = (0u | 13u);
    aot_gpr_5 = (0u | 130u);
    aot_gpr_31 = (0x08AF5888u);
    aot_gpr_6 = (0u | 131u);
    goto L_08AF58F8;
L_08AF5888:
    aot_gpr_4 = (0u | 14u);
    aot_gpr_5 = (0u | 80u);
    aot_gpr_31 = (0x08AF5898u);
    aot_gpr_6 = (0u | 81u);
    goto L_08AF58F8;
L_08AF5898:
    aot_gpr_4 = (0u | 16u);
    aot_gpr_5 = (0u | 412u);
    aot_gpr_31 = (0x08AF58A8u);
    aot_gpr_6 = (0u | 412u);
    goto L_08AF58F8;
L_08AF58A8:
    aot_gpr_4 = (0u | 15u);
    aot_gpr_31 = (0x08AF58B4u);
    aot_gpr_5 = (0u | 200u);
    goto L_08AF58C8;
L_08AF58B4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF58C8:
    ctx.gpr[7] = (2280u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12080));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    goto L_08AF58DC;
L_08AF58DC:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF58DC;
      }
      goto L_08AF58F0;
    }
L_08AF58F0:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF58F8:
    ctx.gpr[7] = (2280u << 16u);
    ctx.gpr[8] = (aot_gpr_4 << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12080));
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[8] + ctx.gpr[7]);
    goto L_08AF590C;
L_08AF590C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF590C;
      }
      goto L_08AF5920;
    }
L_08AF5920:
    aot_gpr_4 = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (0u | 4u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    goto L_08AF592C;
L_08AF592C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[9]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF592C;
      }
      goto L_08AF5940;
    }
L_08AF5940:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF5948:
    ctx.gpr[7] = (2280u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12080));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), aot_gpr_6);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF5964:
    ctx.gpr[7] = (2280u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12080));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_6);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF5980:
    ctx.gpr[7] = (2280u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12080));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), aot_gpr_6);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF599C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[9] = (ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_5 = (0u | 3u);
      if (branch_taken) {
          goto L_08AF59D4;
      }
      goto L_08AF59B4;
    }
L_08AF59B4:
    ctx.gpr[9] = (0u | 4u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[9];
    ctx.gpr[9] = (0u | 5u);
      if (branch_taken) {
          goto L_08AF59C8;
      }
      goto L_08AF59C0;
    }
L_08AF59C0:
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[9];
      if (branch_taken) {
          goto L_08AF59D4;
      }
      goto L_08AF59C8;
    }
L_08AF59C8:
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF5A18;
      }
      goto L_08AF59D4;
    }
L_08AF59D4:
    ctx.gpr[7] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08AF59EC;
      }
      goto L_08AF59E0;
    }
L_08AF59E0:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF5A18;
      }
      goto L_08AF59EC;
    }
L_08AF59EC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(852)));
    ctx.gpr[9] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
      if (branch_taken) {
          goto L_08AF5A14;
      }
      goto L_08AF59FC;
    }
L_08AF59FC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(236)));
    ctx.gpr[7] = (ctx.gpr[7] & 256u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08AF5A14;
      }
      goto L_08AF5A0C;
    }
L_08AF5A0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
      if (branch_taken) {
          goto L_08AF5A18;
      }
      goto L_08AF5A14;
    }
L_08AF5A14:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    goto L_08AF5A18;
L_08AF5A18:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    aot_gpr_5 = (0u | 5u);
      if (branch_taken) {
          goto L_08AF5A28;
      }
      goto L_08AF5A20;
    }
L_08AF5A20:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AF5A34;
      }
      goto L_08AF5A28;
    }
L_08AF5A28:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    goto L_08AF5A34;
L_08AF5A34:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF5A3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 205 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 214 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF5A80;
      }
      goto L_08AF5A50;
    }
L_08AF5A50:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 182 ? 1u : 0u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 187 ? 1u : 0u);
        goto L_08AF5A70;
    }
    goto L_08AF5A5C;
L_08AF5A5C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < 174 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF5AC8;
      }
      goto L_08AF5A68;
    }
L_08AF5A68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF5AD0;
      }
      goto L_08AF5A70;
    }
L_08AF5A70:
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_08AF5A98;
    }
    goto L_08AF5A78;
L_08AF5A78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_08AF5AD0;
      }
      goto L_08AF5A80;
    }
L_08AF5A80:
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (0u | 412u);
        goto L_08AF5AB8;
    }
    goto L_08AF5A88;
L_08AF5A88:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 208 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AF5A68;
      }
      goto L_08AF5A94;
    }
L_08AF5A94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08AF5A98;
L_08AF5A98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(376));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AF5AB0u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5AB0u) goto L_08AF5AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5AB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5AD0;
      }
      goto L_08AF5AB8;
    }
L_08AF5AB8:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AF5A68;
      }
      goto L_08AF5AC0;
    }
L_08AF5AC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 89u);
      if (branch_taken) {
          goto L_08AF5AD0;
      }
      goto L_08AF5AC8;
    }
L_08AF5AC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF5AD0;
      }
      goto L_08AF5AD0;
    }
L_08AF5AD0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF5ADC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[18] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AF5B24;
      }
      goto L_08AF5B08;
    }
L_08AF5B08:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF5D98;
      }
      goto L_08AF5B14;
    }
L_08AF5B14:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF5B38;
      }
      goto L_08AF5B1C;
    }
L_08AF5B1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5B70;
      }
      goto L_08AF5B24;
    }
L_08AF5B24:
    ctx.gpr[17] = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_08AF5BD0;
      }
      goto L_08AF5B30;
    }
L_08AF5B30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5D98;
      }
      goto L_08AF5B38;
    }
L_08AF5B38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (16u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF5B60;
      }
      goto L_08AF5B50;
    }
L_08AF5B50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AF5B68;
      }
      goto L_08AF5B60;
    }
L_08AF5B60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5D98;
      }
      goto L_08AF5B68;
    }
L_08AF5B68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 10u);
      if (branch_taken) {
          goto L_08AF5D9C;
      }
      goto L_08AF5B70;
    }
L_08AF5B70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2274)));
    aot_gpr_31 = (0x08AF5B84u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5B84u) goto L_08AF5B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5B84:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (16524u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AF5BC8;
      }
      goto L_08AF5BC0;
    }
L_08AF5BC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 11u);
      if (branch_taken) {
          goto L_08AF5D9C;
      }
      goto L_08AF5BC8;
    }
L_08AF5BC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5D98;
      }
      goto L_08AF5BD0;
    }
L_08AF5BD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 6u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF5C10;
      }
      goto L_08AF5BE4;
    }
L_08AF5BE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_5 == ctx.gpr[17]) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08AF5C14;
    }
    goto L_08AF5BF0;
L_08AF5BF0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 9u);
    if (aot_gpr_5 == aot_gpr_6) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08AF5C14;
    }
    goto L_08AF5C00;
L_08AF5C00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AF5C14;
      }
      goto L_08AF5C10;
    }
L_08AF5C10:
    ctx.gpr[19] = (0u | 1u);
    goto L_08AF5C14;
L_08AF5C14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    aot_gpr_31 = (0x08AF5C24u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 339u, 0x08B012BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5C24u) goto L_08AF5C24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5C24:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AF5D40;
      }
      goto L_08AF5C2C;
    }
L_08AF5C2C:
    aot_gpr_31 = (0x08AF5C34u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5C34u) goto L_08AF5C34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5C34:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AF5D40;
      }
      goto L_08AF5C3C;
    }
L_08AF5C3C:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AF5C78;
    }
    goto L_08AF5C44;
L_08AF5C44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(408));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AF5C60u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5C60u) goto L_08AF5C60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5C60:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AF5C70;
      }
      goto L_08AF5C68;
    }
L_08AF5C68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 15u);
      if (branch_taken) {
          goto L_08AF5D9C;
      }
      goto L_08AF5C70;
    }
L_08AF5C70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5D40;
      }
      goto L_08AF5C78;
    }
L_08AF5C78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(408));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AF5C90u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5C90u) goto L_08AF5C90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5C90:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AF5D40;
      }
      goto L_08AF5C98;
    }
L_08AF5C98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AF5CC8;
      }
      goto L_08AF5CAC;
    }
L_08AF5CAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 5u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AF5CD0;
    }
    goto L_08AF5CC0;
L_08AF5CC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5D0C;
      }
      goto L_08AF5CC8;
    }
L_08AF5CC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 16u);
      if (branch_taken) {
          goto L_08AF5D9C;
      }
      goto L_08AF5CD0;
    }
L_08AF5CD0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF5CF4;
      }
      goto L_08AF5CE4;
    }
L_08AF5CE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08AF5CF4;
L_08AF5CF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(636)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF5D24;
      }
      goto L_08AF5D0C;
    }
L_08AF5D0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF5D2C;
      }
      goto L_08AF5D1C;
    }
L_08AF5D1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5D38;
      }
      goto L_08AF5D24;
    }
L_08AF5D24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AF5D9C;
      }
      goto L_08AF5D2C;
    }
L_08AF5D2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AF5D38u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 752u, 0x0883365Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5D38u) goto L_08AF5D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5D38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 13u);
      if (branch_taken) {
          goto L_08AF5D9C;
      }
      goto L_08AF5D40;
    }
L_08AF5D40:
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_08AF5D64;
      }
      goto L_08AF5D48;
    }
L_08AF5D48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08AF5D6C;
    }
    goto L_08AF5D5C;
L_08AF5D5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5D90;
      }
      goto L_08AF5D64;
    }
L_08AF5D64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 9u);
      if (branch_taken) {
          goto L_08AF5D9C;
      }
      goto L_08AF5D6C;
    }
L_08AF5D6C:
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AF5D88;
      }
      goto L_08AF5D78;
    }
L_08AF5D78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AF5D90;
      }
      goto L_08AF5D88;
    }
L_08AF5D88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 12u);
      if (branch_taken) {
          goto L_08AF5D9C;
      }
      goto L_08AF5D90;
    }
L_08AF5D90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AF5D98;
      }
      goto L_08AF5D98;
    }
L_08AF5D98:
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    goto L_08AF5D9C;
L_08AF5D9C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF5DB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08AF5DE4;
    }
    goto L_08AF5DD8;
L_08AF5DD8:
    aot_gpr_31 = (0x08AF5DE0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5DE0u) goto L_08AF5DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5DE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08AF5DE4;
L_08AF5DE4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08AF5E14;
      }
      goto L_08AF5DEC;
    }
L_08AF5DEC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AF5DF8u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5DF8u) goto L_08AF5DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5DF8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AF5E10;
      }
      goto L_08AF5E04;
    }
L_08AF5E04:
    aot_gpr_31 = (0x08AF5E0Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5E0Cu) goto L_08AF5E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5E0C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AF5E10;
L_08AF5E10:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AF5E14;
L_08AF5E14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08AF5E20u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(488));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5E20u) goto L_08AF5E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5E20:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AF5E38u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5E38u) goto L_08AF5E38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5E38:
    aot_gpr_31 = (0x08AF5E40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5E40u) goto L_08AF5E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5E40:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 6u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AF5E54u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5E54u) goto L_08AF5E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5E54:
    aot_gpr_31 = (0x08AF5E5Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5E5Cu) goto L_08AF5E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5E5C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 19u);
    aot_gpr_6 = (0u | 100u);
    aot_gpr_31 = (0x08AF5E70u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5E70u) goto L_08AF5E70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5E70:
    aot_gpr_31 = (0x08AF5E78u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5E78u) goto L_08AF5E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5E78:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 25u);
    aot_gpr_6 = (0u | 100u);
    aot_gpr_31 = (0x08AF5E8Cu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5E8Cu) goto L_08AF5E8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5E8C:
    aot_gpr_31 = (0x08AF5E94u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5E94u) goto L_08AF5E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5E94:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 21u);
    aot_gpr_6 = (0u | 20u);
    aot_gpr_31 = (0x08AF5EA8u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5EA8u) goto L_08AF5EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5EA8:
    aot_gpr_31 = (0x08AF5EB0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5EB0u) goto L_08AF5EB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5EB0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 30u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x08AF5EC4u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5EC4u) goto L_08AF5EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5EC4:
    aot_gpr_31 = (0x08AF5ECCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5ECCu) goto L_08AF5ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5ECC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 18u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x08AF5EE0u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5EE0u) goto L_08AF5EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5EE0:
    aot_gpr_31 = (0x08AF5EE8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5EE8u) goto L_08AF5EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5EE8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 17u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x08AF5EFCu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5EFCu) goto L_08AF5EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5EFC:
    aot_gpr_31 = (0x08AF5F04u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5F04u) goto L_08AF5F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5F04:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 12u);
    aot_gpr_6 = (0u | 5u);
    aot_gpr_31 = (0x08AF5F18u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5F18u) goto L_08AF5F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5F18:
    aot_gpr_31 = (0x08AF5F20u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5F20u) goto L_08AF5F20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5F20:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 33u);
    aot_gpr_6 = (0u | 200u);
    aot_gpr_31 = (0x08AF5F34u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5F34u) goto L_08AF5F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5F34:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF5F50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_6 = (4u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-12144));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08AF5FB4;
    }
    goto L_08AF5FA8;
L_08AF5FA8:
    aot_gpr_31 = (0x08AF5FB0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5FB0u) goto L_08AF5FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5FB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08AF5FB4;
L_08AF5FB4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08AF5FE4;
      }
      goto L_08AF5FBC;
    }
L_08AF5FBC:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AF5FC8u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5FC8u) goto L_08AF5FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5FC8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AF5FE0;
      }
      goto L_08AF5FD4;
    }
L_08AF5FD4:
    aot_gpr_31 = (0x08AF5FDCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5FDCu) goto L_08AF5FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5FDC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AF5FE0;
L_08AF5FE0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AF5FE4;
L_08AF5FE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08AF5FF0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(496));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF5FF0u) goto L_08AF5FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF5FF0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AF6008u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6008u) goto L_08AF6008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6008:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF6024:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08AF6054;
    }
    goto L_08AF6048;
L_08AF6048:
    aot_gpr_31 = (0x08AF6050u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6050u) goto L_08AF6050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6050:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08AF6054;
L_08AF6054:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08AF6084;
      }
      goto L_08AF605C;
    }
L_08AF605C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AF6068u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6068u) goto L_08AF6068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6068:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AF6080;
      }
      goto L_08AF6074;
    }
L_08AF6074:
    aot_gpr_31 = (0x08AF607Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF607Cu) goto L_08AF607C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF607C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AF6080;
L_08AF6080:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AF6084;
L_08AF6084:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08AF6090u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(504));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6090u) goto L_08AF6090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6090:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AF60A8u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF60A8u) goto L_08AF60A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF60A8:
    aot_gpr_4 = (17096u << 16u);
    aot_gpr_31 = (0x08AF60B4u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF60B4u) goto L_08AF60B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF60B4:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
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
L_08AF60D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08AF6108;
    }
    goto L_08AF60FC;
L_08AF60FC:
    aot_gpr_31 = (0x08AF6104u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6104u) goto L_08AF6104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6104:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08AF6108;
L_08AF6108:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08AF6138;
      }
      goto L_08AF6110;
    }
L_08AF6110:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08AF611Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF611Cu) goto L_08AF611C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF611C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AF6134;
      }
      goto L_08AF6128;
    }
L_08AF6128:
    aot_gpr_31 = (0x08AF6130u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6130u) goto L_08AF6130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6130:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AF6134;
L_08AF6134:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AF6138;
L_08AF6138:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08AF6144u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(512));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6144u) goto L_08AF6144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6144:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AF615Cu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF615Cu) goto L_08AF615C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF615C:
    aot_gpr_4 = (17096u << 16u);
    aot_gpr_31 = (0x08AF6168u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6168u) goto L_08AF6168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6168:
    aot_gpr_31 = (0x08AF6170u);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6170u) goto L_08AF6170;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6170:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AF61AC;
      }
      goto L_08AF6178;
    }
L_08AF6178:
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_31 = (0x08AF6184u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6184u) goto L_08AF6184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6184:
    aot_gpr_31 = (0x08AF618Cu);
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF618Cu) goto L_08AF618C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF618C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF61AC;
      }
      goto L_08AF6198;
    }
L_08AF6198:
    aot_gpr_31 = (0x08AF61A0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF61A0u) goto L_08AF61A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF61A0:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08AF61ACu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 383u, 0x08B0D94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF61ACu) goto L_08AF61AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF61AC:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
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
L_08AF61CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08AF61F8;
    }
    goto L_08AF61EC;
L_08AF61EC:
    aot_gpr_31 = (0x08AF61F4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF61F4u) goto L_08AF61F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF61F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08AF61F8;
L_08AF61F8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08AF6228;
      }
      goto L_08AF6200;
    }
L_08AF6200:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08AF620Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF620Cu) goto L_08AF620C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF620C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AF6224;
      }
      goto L_08AF6218;
    }
L_08AF6218:
    aot_gpr_31 = (0x08AF6220u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6220u) goto L_08AF6220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6220:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AF6224;
L_08AF6224:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08AF6228;
L_08AF6228:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08AF6234u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(520));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6234u) goto L_08AF6234;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6234:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08AF624Cu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF624Cu) goto L_08AF624C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF624C:
    aot_gpr_31 = (0x08AF6254u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6254u) goto L_08AF6254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6254:
    aot_gpr_31 = (0x08AF625Cu);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF625Cu) goto L_08AF625C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF625C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2320)));
    aot_gpr_4 = (0u | 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 6 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08AF6274;
    }
    goto L_08AF6274;
L_08AF6274:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AF6280u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 655u, 0x08947470u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6280u) goto L_08AF6280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6280:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF629C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF62E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words); }
    aot_gpr_31 = (0x08AF6304u);
    ctx.gpr[18] = (0u | 246u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806634, 0u, 302u, 0x08806634u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6304u) goto L_08AF6304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6304:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AF6320;
      }
      goto L_08AF630C;
    }
L_08AF630C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF6318u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6318u) goto L_08AF6318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6318:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AF6320;
L_08AF6320:
    aot_gpr_31 = (0x08AF6328u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 544u, 0x08AD323Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6328u) goto L_08AF6328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6328:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AF6338u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6338u) goto L_08AF6338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6338:
    aot_gpr_31 = (0x08AF6340u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6340u) goto L_08AF6340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6340:
    aot_gpr_31 = (0x08AF6348u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6348u) goto L_08AF6348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6348:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AF6494;
      }
      goto L_08AF6350;
    }
L_08AF6350:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_31 = (0x08AF635Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF635Cu) goto L_08AF635C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF635C:
    aot_gpr_2 = (17096u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_2);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08AF6388u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6388u) goto L_08AF6388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6388:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
      if (branch_taken) {
          goto L_08AF6494;
      }
      goto L_08AF6394;
    }
L_08AF6394:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08AF63A0u);
    aot_gpr_4 = (0u | 1920u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF63A0u) goto L_08AF63A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF63A0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AF63C0;
      }
      goto L_08AF63AC;
    }
L_08AF63AC:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x08AF63BCu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF63BCu) goto L_08AF63BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF63BC:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08AF63C0;
L_08AF63C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AF6494;
      }
      goto L_08AF63C8;
    }
L_08AF63C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[17] << 3u);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08AF63ECu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AF629C;
L_08AF63EC:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_15 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_15)};
      aot_mem.aot_direct_store32_block(ctx.gpr[16] + static_cast<std::uint32_t>(48), aot_run_words); }
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (16479u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26355u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF645Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF645Cu) goto L_08AF645C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF645C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08AF6470u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6470u) goto L_08AF6470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), aot_gpr_4);
    aot_gpr_31 = (0x08AF6494u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6494u) goto L_08AF6494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6494:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF64B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF64D4;
      }
      goto L_08AF64CC;
    }
L_08AF64CC:
    aot_gpr_31 = (0x08AF64D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF64D4u) goto L_08AF64D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF64D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(528));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08AF64E8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF64E8u) goto L_08AF64E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF64E8:
    aot_gpr_5 = (2223u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AF64FCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(23992));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF64FCu) goto L_08AF64FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF64FC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF6508u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6508u) goto L_08AF6508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6508:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(544));
    aot_gpr_31 = (0x08AF6514u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6514u) goto L_08AF6514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6514:
    aot_gpr_5 = (2223u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AF6528u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24400));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6528u) goto L_08AF6528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6528:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF6534u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6534u) goto L_08AF6534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6534:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(556));
    aot_gpr_31 = (0x08AF6540u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6540u) goto L_08AF6540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6540:
    aot_gpr_5 = (2223u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AF6554u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24612));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6554u) goto L_08AF6554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6554:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF6560u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6560u) goto L_08AF6560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6560:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(568));
    aot_gpr_31 = (0x08AF656Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF656Cu) goto L_08AF656C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF656C:
    aot_gpr_5 = (2223u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AF6580u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(24792));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6580u) goto L_08AF6580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6580:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF658Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF658Cu) goto L_08AF658C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF658C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(580));
    aot_gpr_31 = (0x08AF6598u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6598u) goto L_08AF6598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6598:
    aot_gpr_5 = (2223u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AF65ACu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(25036));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF65ACu) goto L_08AF65AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF65AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF65B8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF65B8u) goto L_08AF65B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF65B8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(592));
    aot_gpr_31 = (0x08AF65C4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF65C4u) goto L_08AF65C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF65C4:
    aot_gpr_5 = (2223u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AF65D8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(25312));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF65D8u) goto L_08AF65D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF65D8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF65E4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088073CC, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF65E4u) goto L_08AF65E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF65E4:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF65F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_run_words); }
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AF67F4;
      }
      goto L_08AF662C;
    }
L_08AF662C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AF6664;
      }
      goto L_08AF664C;
    }
L_08AF664C:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AF6670;
      }
      goto L_08AF6664;
    }
L_08AF6664:
    aot_gpr_31 = (0x08AF666Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF666Cu) goto L_08AF666C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF666C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    goto L_08AF6670;
L_08AF6670:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AF67A0;
      }
      goto L_08AF6690;
    }
L_08AF6690:
    aot_gpr_5 = (aot_gpr_4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF66B0;
      }
      goto L_08AF669C;
    }
L_08AF669C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF66C0;
      }
      goto L_08AF66B0;
    }
L_08AF66B0:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AF66C0;
L_08AF66C0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF66E8;
      }
      goto L_08AF66C8;
    }
L_08AF66C8:
    aot_gpr_31 = (0x08AF66D0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF66D0u) goto L_08AF66D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF66D0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
      if (branch_taken) {
          goto L_08AF66E8;
      }
      goto L_08AF66DC;
    }
L_08AF66DC:
    aot_gpr_31 = (0x08AF66E4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF66E4u) goto L_08AF66E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF66E4:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    goto L_08AF66E8;
L_08AF66E8:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AF6714u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08AF6824;
L_08AF6714:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_2);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AF6740;
      }
      goto L_08AF6724;
    }
L_08AF6724:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AF6738u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    goto L_08AF54A4;
L_08AF6738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_gpr_2 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AF6740;
      }
      goto L_08AF6740;
    }
L_08AF6740:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    aot_gpr_5 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AF6754;
      }
      goto L_08AF674C;
    }
L_08AF674C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AF6770;
      }
      goto L_08AF6754;
    }
L_08AF6754:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08AF676Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08AF54A4;
L_08AF676C:
    ctx.gpr[17] = (aot_gpr_2 + ctx.gpr[17]);
    goto L_08AF6770;
L_08AF6770:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF678C;
      }
      goto L_08AF6784;
    }
L_08AF6784:
    aot_gpr_31 = (0x08AF678Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF678Cu) goto L_08AF678C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF678C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
      if (branch_taken) {
          goto L_08AF67F4;
      }
      goto L_08AF67A0;
    }
L_08AF67A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF67B8;
      }
      goto L_08AF67B0;
    }
L_08AF67B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AF67D4;
      }
      goto L_08AF67B8;
    }
L_08AF67B8:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (ctx.gpr[18] - aot_gpr_6);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08AF67CCu);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    goto L_08AF54A4;
L_08AF67CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    goto L_08AF67D4;
L_08AF67D4:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08AF67F4;
L_08AF67F4:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF6824:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF6838:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AF6860u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6860u) goto L_08AF6860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6860:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6894;
      }
      goto L_08AF6878;
    }
L_08AF6878:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6888u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6888u) goto L_08AF6888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6888:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6898;
      }
      goto L_08AF6890;
    }
L_08AF6890:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AF6894;
L_08AF6894:
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6898;
L_08AF6898:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF68D0;
      }
      goto L_08AF68A0;
    }
L_08AF68A0:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29168));
    aot_gpr_31 = (0x08AF68B0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF68B0u) goto L_08AF68B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF68B0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF68D8;
      }
      goto L_08AF68C8;
    }
L_08AF68C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF68F8;
      }
      goto L_08AF68D0;
    }
L_08AF68D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6AEC;
      }
      goto L_08AF68D8;
    }
L_08AF68D8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF68E8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF68E8u) goto L_08AF68E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF68E8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF68F8;
      }
      goto L_08AF68F0;
    }
L_08AF68F0:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF68F8;
L_08AF68F8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6930;
      }
      goto L_08AF6900;
    }
L_08AF6900:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29192));
    aot_gpr_31 = (0x08AF6910u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6910u) goto L_08AF6910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6910:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6938;
      }
      goto L_08AF6928;
    }
L_08AF6928:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6958;
      }
      goto L_08AF6930;
    }
L_08AF6930:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF6AEC;
      }
      goto L_08AF6938;
    }
L_08AF6938:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6948u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6948u) goto L_08AF6948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6948:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6958;
      }
      goto L_08AF6950;
    }
L_08AF6950:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6958;
L_08AF6958:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6990;
      }
      goto L_08AF6960;
    }
L_08AF6960:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29212));
    aot_gpr_31 = (0x08AF6970u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6970u) goto L_08AF6970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6970:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6998;
      }
      goto L_08AF6988;
    }
L_08AF6988:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF69B8;
      }
      goto L_08AF6990;
    }
L_08AF6990:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_08AF6AEC;
      }
      goto L_08AF6998;
    }
L_08AF6998:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF69A8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF69A8u) goto L_08AF69A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF69A8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF69B8;
      }
      goto L_08AF69B0;
    }
L_08AF69B0:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF69B8;
L_08AF69B8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF69F0;
      }
      goto L_08AF69C0;
    }
L_08AF69C0:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29236));
    aot_gpr_31 = (0x08AF69D0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF69D0u) goto L_08AF69D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF69D0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF69F8;
      }
      goto L_08AF69E8;
    }
L_08AF69E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6A18;
      }
      goto L_08AF69F0;
    }
L_08AF69F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 3u);
      if (branch_taken) {
          goto L_08AF6AEC;
      }
      goto L_08AF69F8;
    }
L_08AF69F8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6A08u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6A08u) goto L_08AF6A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6A08:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6A18;
      }
      goto L_08AF6A10;
    }
L_08AF6A10:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6A18;
L_08AF6A18:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6A50;
      }
      goto L_08AF6A20;
    }
L_08AF6A20:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29256));
    aot_gpr_31 = (0x08AF6A30u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6A30u) goto L_08AF6A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6A30:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6A58;
      }
      goto L_08AF6A48;
    }
L_08AF6A48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6A78;
      }
      goto L_08AF6A50;
    }
L_08AF6A50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 4u);
      if (branch_taken) {
          goto L_08AF6AEC;
      }
      goto L_08AF6A58;
    }
L_08AF6A58:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6A68u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6A68u) goto L_08AF6A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6A68:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6A78;
      }
      goto L_08AF6A70;
    }
L_08AF6A70:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6A78;
L_08AF6A78:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6AB4;
      }
      goto L_08AF6A80;
    }
L_08AF6A80:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29280));
    aot_gpr_31 = (0x08AF6A94u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6A94u) goto L_08AF6A94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6A94:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6ABC;
      }
      goto L_08AF6AAC;
    }
L_08AF6AAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08AF6AD8;
      }
      goto L_08AF6AB4;
    }
L_08AF6AB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 5u);
      if (branch_taken) {
          goto L_08AF6AEC;
      }
      goto L_08AF6ABC;
    }
L_08AF6ABC:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6AC8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6AC8u) goto L_08AF6AC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6AC8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08AF6AD8;
      }
      goto L_08AF6AD0;
    }
L_08AF6AD0:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_08AF6AD8;
L_08AF6AD8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF6AE8;
      }
      goto L_08AF6AE0;
    }
L_08AF6AE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 6u);
      if (branch_taken) {
          goto L_08AF6AEC;
      }
      goto L_08AF6AE8;
    }
L_08AF6AE8:
    aot_gpr_2 = (0u | 7u);
    goto L_08AF6AEC;
L_08AF6AEC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF6B04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29304));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AF6B2Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6B2Cu) goto L_08AF6B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6B2C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6B60;
      }
      goto L_08AF6B44;
    }
L_08AF6B44:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6B54u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6B54u) goto L_08AF6B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6B54:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6B64;
      }
      goto L_08AF6B5C;
    }
L_08AF6B5C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AF6B60;
L_08AF6B60:
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6B64;
L_08AF6B64:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6B9C;
      }
      goto L_08AF6B6C;
    }
L_08AF6B6C:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29340));
    aot_gpr_31 = (0x08AF6B7Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6B7Cu) goto L_08AF6B7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6B7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6BA4;
      }
      goto L_08AF6B94;
    }
L_08AF6B94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6BC4;
      }
      goto L_08AF6B9C;
    }
L_08AF6B9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6BA4;
    }
L_08AF6BA4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6BB4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6BB4u) goto L_08AF6BB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6BB4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6BC4;
      }
      goto L_08AF6BBC;
    }
L_08AF6BBC:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6BC4;
L_08AF6BC4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6BFC;
      }
      goto L_08AF6BCC;
    }
L_08AF6BCC:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29364));
    aot_gpr_31 = (0x08AF6BDCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6BDCu) goto L_08AF6BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6BDC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6C04;
      }
      goto L_08AF6BF4;
    }
L_08AF6BF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6C24;
      }
      goto L_08AF6BFC;
    }
L_08AF6BFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6C04;
    }
L_08AF6C04:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6C14u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6C14u) goto L_08AF6C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6C14:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6C24;
      }
      goto L_08AF6C1C;
    }
L_08AF6C1C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6C24;
L_08AF6C24:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6C5C;
      }
      goto L_08AF6C2C;
    }
L_08AF6C2C:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29388));
    aot_gpr_31 = (0x08AF6C3Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6C3Cu) goto L_08AF6C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6C3C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6C64;
      }
      goto L_08AF6C54;
    }
L_08AF6C54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6C84;
      }
      goto L_08AF6C5C;
    }
L_08AF6C5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6C64;
    }
L_08AF6C64:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6C74u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6C74u) goto L_08AF6C74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6C74:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6C84;
      }
      goto L_08AF6C7C;
    }
L_08AF6C7C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6C84;
L_08AF6C84:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6CBC;
      }
      goto L_08AF6C8C;
    }
L_08AF6C8C:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29412));
    aot_gpr_31 = (0x08AF6C9Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6C9Cu) goto L_08AF6C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6C9C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6CC4;
      }
      goto L_08AF6CB4;
    }
L_08AF6CB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6CE4;
      }
      goto L_08AF6CBC;
    }
L_08AF6CBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 3u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6CC4;
    }
L_08AF6CC4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6CD4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6CD4u) goto L_08AF6CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6CD4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6CE4;
      }
      goto L_08AF6CDC;
    }
L_08AF6CDC:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6CE4;
L_08AF6CE4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6D1C;
      }
      goto L_08AF6CEC;
    }
L_08AF6CEC:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29440));
    aot_gpr_31 = (0x08AF6CFCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6CFCu) goto L_08AF6CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6CFC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6D24;
      }
      goto L_08AF6D14;
    }
L_08AF6D14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6D44;
      }
      goto L_08AF6D1C;
    }
L_08AF6D1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 4u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6D24;
    }
L_08AF6D24:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6D34u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6D34u) goto L_08AF6D34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6D34:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6D44;
      }
      goto L_08AF6D3C;
    }
L_08AF6D3C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6D44;
L_08AF6D44:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6D7C;
      }
      goto L_08AF6D4C;
    }
L_08AF6D4C:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29468));
    aot_gpr_31 = (0x08AF6D5Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6D5Cu) goto L_08AF6D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6D5C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6D84;
      }
      goto L_08AF6D74;
    }
L_08AF6D74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6DA4;
      }
      goto L_08AF6D7C;
    }
L_08AF6D7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 5u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6D84;
    }
L_08AF6D84:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6D94u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6D94u) goto L_08AF6D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6D94:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6DA4;
      }
      goto L_08AF6D9C;
    }
L_08AF6D9C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6DA4;
L_08AF6DA4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6DDC;
      }
      goto L_08AF6DAC;
    }
L_08AF6DAC:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29496));
    aot_gpr_31 = (0x08AF6DBCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6DBCu) goto L_08AF6DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6DBC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6DE4;
      }
      goto L_08AF6DD4;
    }
L_08AF6DD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6E04;
      }
      goto L_08AF6DDC;
    }
L_08AF6DDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 6u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6DE4;
    }
L_08AF6DE4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6DF4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6DF4u) goto L_08AF6DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6DF4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6E04;
      }
      goto L_08AF6DFC;
    }
L_08AF6DFC:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6E04;
L_08AF6E04:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6E3C;
      }
      goto L_08AF6E0C;
    }
L_08AF6E0C:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29524));
    aot_gpr_31 = (0x08AF6E1Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6E1Cu) goto L_08AF6E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6E1C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6E44;
      }
      goto L_08AF6E34;
    }
L_08AF6E34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6E64;
      }
      goto L_08AF6E3C;
    }
L_08AF6E3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 7u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6E44;
    }
L_08AF6E44:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6E54u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6E54u) goto L_08AF6E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6E54:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6E64;
      }
      goto L_08AF6E5C;
    }
L_08AF6E5C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6E64;
L_08AF6E64:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6E98;
      }
      goto L_08AF6E6C;
    }
L_08AF6E6C:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(636));
    aot_gpr_31 = (0x08AF6E78u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6E78u) goto L_08AF6E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6E78:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6EA0;
      }
      goto L_08AF6E90;
    }
L_08AF6E90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6EC0;
      }
      goto L_08AF6E98;
    }
L_08AF6E98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 8u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6EA0;
    }
L_08AF6EA0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6EB0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6EB0u) goto L_08AF6EB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6EB0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6EC0;
      }
      goto L_08AF6EB8;
    }
L_08AF6EB8:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6EC0;
L_08AF6EC0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6EF8;
      }
      goto L_08AF6EC8;
    }
L_08AF6EC8:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29544));
    aot_gpr_31 = (0x08AF6ED8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6ED8u) goto L_08AF6ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6ED8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6F00;
      }
      goto L_08AF6EF0;
    }
L_08AF6EF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6F20;
      }
      goto L_08AF6EF8;
    }
L_08AF6EF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 9u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6F00;
    }
L_08AF6F00:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6F10u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6F10u) goto L_08AF6F10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6F10:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6F20;
      }
      goto L_08AF6F18;
    }
L_08AF6F18:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6F20;
L_08AF6F20:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6F58;
      }
      goto L_08AF6F28;
    }
L_08AF6F28:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29564));
    aot_gpr_31 = (0x08AF6F38u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6F38u) goto L_08AF6F38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6F38:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6F60;
      }
      goto L_08AF6F50;
    }
L_08AF6F50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6F80;
      }
      goto L_08AF6F58;
    }
L_08AF6F58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 10u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6F60;
    }
L_08AF6F60:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6F70u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6F70u) goto L_08AF6F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6F70:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6F80;
      }
      goto L_08AF6F78;
    }
L_08AF6F78:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6F80;
L_08AF6F80:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF6FB8;
      }
      goto L_08AF6F88;
    }
L_08AF6F88:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29584));
    aot_gpr_31 = (0x08AF6F98u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6F98u) goto L_08AF6F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6F98:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF6FC0;
      }
      goto L_08AF6FB0;
    }
L_08AF6FB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6FE0;
      }
      goto L_08AF6FB8;
    }
L_08AF6FB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 11u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF6FC0;
    }
L_08AF6FC0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF6FD0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6FD0u) goto L_08AF6FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6FD0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF6FE0;
      }
      goto L_08AF6FD8;
    }
L_08AF6FD8:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF6FE0;
L_08AF6FE0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7018;
      }
      goto L_08AF6FE8;
    }
L_08AF6FE8:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29620));
    aot_gpr_31 = (0x08AF6FF8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF6FF8u) goto L_08AF6FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF6FF8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7020;
      }
      goto L_08AF7010;
    }
L_08AF7010:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7040;
      }
      goto L_08AF7018;
    }
L_08AF7018:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 12u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF7020;
    }
L_08AF7020:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7030u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7030u) goto L_08AF7030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7030:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7040;
      }
      goto L_08AF7038;
    }
L_08AF7038:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7040;
L_08AF7040:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7078;
      }
      goto L_08AF7048;
    }
L_08AF7048:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29656));
    aot_gpr_31 = (0x08AF7058u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7058u) goto L_08AF7058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7058:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7080;
      }
      goto L_08AF7070;
    }
L_08AF7070:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF70A0;
      }
      goto L_08AF7078;
    }
L_08AF7078:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 13u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF7080;
    }
L_08AF7080:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7090u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7090u) goto L_08AF7090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7090:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF70A0;
      }
      goto L_08AF7098;
    }
L_08AF7098:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF70A0;
L_08AF70A0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF70D8;
      }
      goto L_08AF70A8;
    }
L_08AF70A8:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29680));
    aot_gpr_31 = (0x08AF70B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF70B8u) goto L_08AF70B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF70B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF70E0;
      }
      goto L_08AF70D0;
    }
L_08AF70D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7100;
      }
      goto L_08AF70D8;
    }
L_08AF70D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 14u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF70E0;
    }
L_08AF70E0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF70F0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF70F0u) goto L_08AF70F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF70F0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7100;
      }
      goto L_08AF70F8;
    }
L_08AF70F8:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7100;
L_08AF7100:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7138;
      }
      goto L_08AF7108;
    }
L_08AF7108:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29700));
    aot_gpr_31 = (0x08AF7118u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7118u) goto L_08AF7118;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7118:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7140;
      }
      goto L_08AF7130;
    }
L_08AF7130:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7160;
      }
      goto L_08AF7138;
    }
L_08AF7138:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 15u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF7140;
    }
L_08AF7140:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7150u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7150u) goto L_08AF7150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7150:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7160;
      }
      goto L_08AF7158;
    }
L_08AF7158:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7160;
L_08AF7160:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7198;
      }
      goto L_08AF7168;
    }
L_08AF7168:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29732));
    aot_gpr_31 = (0x08AF7178u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7178u) goto L_08AF7178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7178:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF71A0;
      }
      goto L_08AF7190;
    }
L_08AF7190:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF71C0;
      }
      goto L_08AF7198;
    }
L_08AF7198:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 16u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF71A0;
    }
L_08AF71A0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF71B0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF71B0u) goto L_08AF71B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF71B0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF71C0;
      }
      goto L_08AF71B8;
    }
L_08AF71B8:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF71C0;
L_08AF71C0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF71F8;
      }
      goto L_08AF71C8;
    }
L_08AF71C8:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29760));
    aot_gpr_31 = (0x08AF71D8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF71D8u) goto L_08AF71D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF71D8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7200;
      }
      goto L_08AF71F0;
    }
L_08AF71F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7220;
      }
      goto L_08AF71F8;
    }
L_08AF71F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 17u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF7200;
    }
L_08AF7200:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7210u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7210u) goto L_08AF7210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7210:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7220;
      }
      goto L_08AF7218;
    }
L_08AF7218:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7220;
L_08AF7220:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF725C;
      }
      goto L_08AF7228;
    }
L_08AF7228:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29788));
    aot_gpr_31 = (0x08AF723Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF723Cu) goto L_08AF723C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF723C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7264;
      }
      goto L_08AF7254;
    }
L_08AF7254:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08AF7280;
      }
      goto L_08AF725C;
    }
L_08AF725C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 18u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF7264;
    }
L_08AF7264:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7270u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7270u) goto L_08AF7270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7270:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08AF7280;
      }
      goto L_08AF7278;
    }
L_08AF7278:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_08AF7280;
L_08AF7280:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF7290;
      }
      goto L_08AF7288;
    }
L_08AF7288:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 19u);
      if (branch_taken) {
          goto L_08AF7294;
      }
      goto L_08AF7290;
    }
L_08AF7290:
    aot_gpr_2 = (0u | 20u);
    goto L_08AF7294;
L_08AF7294:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF72AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(652));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AF72D0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF72D0u) goto L_08AF72D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF72D0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7304;
      }
      goto L_08AF72E8;
    }
L_08AF72E8:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF72F8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF72F8u) goto L_08AF72F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF72F8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7308;
      }
      goto L_08AF7300;
    }
L_08AF7300:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AF7304;
L_08AF7304:
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7308;
L_08AF7308:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7340;
      }
      goto L_08AF7310;
    }
L_08AF7310:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29816));
    aot_gpr_31 = (0x08AF7320u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7320u) goto L_08AF7320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7320:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7348;
      }
      goto L_08AF7338;
    }
L_08AF7338:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7368;
      }
      goto L_08AF7340;
    }
L_08AF7340:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF7348;
    }
L_08AF7348:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7358u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7358u) goto L_08AF7358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7358:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7368;
      }
      goto L_08AF7360;
    }
L_08AF7360:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7368;
L_08AF7368:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF739C;
      }
      goto L_08AF7370;
    }
L_08AF7370:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(664));
    aot_gpr_31 = (0x08AF737Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF737Cu) goto L_08AF737C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF737C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF73A4;
      }
      goto L_08AF7394;
    }
L_08AF7394:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF73C4;
      }
      goto L_08AF739C;
    }
L_08AF739C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF73A4;
    }
L_08AF73A4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF73B4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF73B4u) goto L_08AF73B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF73B4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF73C4;
      }
      goto L_08AF73BC;
    }
L_08AF73BC:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF73C4;
L_08AF73C4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF73FC;
      }
      goto L_08AF73CC;
    }
L_08AF73CC:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29836));
    aot_gpr_31 = (0x08AF73DCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF73DCu) goto L_08AF73DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF73DC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7404;
      }
      goto L_08AF73F4;
    }
L_08AF73F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7424;
      }
      goto L_08AF73FC;
    }
L_08AF73FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF7404;
    }
L_08AF7404:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7414u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7414u) goto L_08AF7414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7414:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7424;
      }
      goto L_08AF741C;
    }
L_08AF741C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7424;
L_08AF7424:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7458;
      }
      goto L_08AF742C;
    }
L_08AF742C:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(680));
    aot_gpr_31 = (0x08AF7438u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7438u) goto L_08AF7438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7438:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7460;
      }
      goto L_08AF7450;
    }
L_08AF7450:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7480;
      }
      goto L_08AF7458;
    }
L_08AF7458:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 3u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF7460;
    }
L_08AF7460:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7470u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7470u) goto L_08AF7470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7470:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7480;
      }
      goto L_08AF7478;
    }
L_08AF7478:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7480;
L_08AF7480:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF74B4;
      }
      goto L_08AF7488;
    }
L_08AF7488:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(696));
    aot_gpr_31 = (0x08AF7494u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7494u) goto L_08AF7494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7494:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF74BC;
      }
      goto L_08AF74AC;
    }
L_08AF74AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF74DC;
      }
      goto L_08AF74B4;
    }
L_08AF74B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 4u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF74BC;
    }
L_08AF74BC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF74CCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF74CCu) goto L_08AF74CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF74CC:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF74DC;
      }
      goto L_08AF74D4;
    }
L_08AF74D4:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF74DC;
L_08AF74DC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7510;
      }
      goto L_08AF74E4;
    }
L_08AF74E4:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(712));
    aot_gpr_31 = (0x08AF74F0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF74F0u) goto L_08AF74F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF74F0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7518;
      }
      goto L_08AF7508;
    }
L_08AF7508:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7538;
      }
      goto L_08AF7510;
    }
L_08AF7510:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 5u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF7518;
    }
L_08AF7518:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7528u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7528u) goto L_08AF7528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7528:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7538;
      }
      goto L_08AF7530;
    }
L_08AF7530:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7538;
L_08AF7538:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7570;
      }
      goto L_08AF7540;
    }
L_08AF7540:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29856));
    aot_gpr_31 = (0x08AF7550u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7550u) goto L_08AF7550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7550:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7578;
      }
      goto L_08AF7568;
    }
L_08AF7568:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7598;
      }
      goto L_08AF7570;
    }
L_08AF7570:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 6u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF7578;
    }
L_08AF7578:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7588u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7588u) goto L_08AF7588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7588:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7598;
      }
      goto L_08AF7590;
    }
L_08AF7590:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7598;
L_08AF7598:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF75CC;
      }
      goto L_08AF75A0;
    }
L_08AF75A0:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(728));
    aot_gpr_31 = (0x08AF75ACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF75ACu) goto L_08AF75AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF75AC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF75D4;
      }
      goto L_08AF75C4;
    }
L_08AF75C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF75F4;
      }
      goto L_08AF75CC;
    }
L_08AF75CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 7u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF75D4;
    }
L_08AF75D4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF75E4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF75E4u) goto L_08AF75E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF75E4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF75F4;
      }
      goto L_08AF75EC;
    }
L_08AF75EC:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF75F4;
L_08AF75F4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF762C;
      }
      goto L_08AF75FC;
    }
L_08AF75FC:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29880));
    aot_gpr_31 = (0x08AF760Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF760Cu) goto L_08AF760C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF760C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7634;
      }
      goto L_08AF7624;
    }
L_08AF7624:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7654;
      }
      goto L_08AF762C;
    }
L_08AF762C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 8u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF7634;
    }
L_08AF7634:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7644u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7644u) goto L_08AF7644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7644:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7654;
      }
      goto L_08AF764C;
    }
L_08AF764C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7654;
L_08AF7654:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF768C;
      }
      goto L_08AF765C;
    }
L_08AF765C:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29904));
    aot_gpr_31 = (0x08AF766Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF766Cu) goto L_08AF766C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF766C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7694;
      }
      goto L_08AF7684;
    }
L_08AF7684:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF76B4;
      }
      goto L_08AF768C;
    }
L_08AF768C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 9u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF7694;
    }
L_08AF7694:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF76A4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF76A4u) goto L_08AF76A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF76A4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF76B4;
      }
      goto L_08AF76AC;
    }
L_08AF76AC:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF76B4;
L_08AF76B4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF76EC;
      }
      goto L_08AF76BC;
    }
L_08AF76BC:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29936));
    aot_gpr_31 = (0x08AF76CCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF76CCu) goto L_08AF76CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF76CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF76F4;
      }
      goto L_08AF76E4;
    }
L_08AF76E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7714;
      }
      goto L_08AF76EC;
    }
L_08AF76EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 10u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF76F4;
    }
L_08AF76F4:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7704u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7704u) goto L_08AF7704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7704:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7714;
      }
      goto L_08AF770C;
    }
L_08AF770C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7714;
L_08AF7714:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF774C;
      }
      goto L_08AF771C;
    }
L_08AF771C:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29960));
    aot_gpr_31 = (0x08AF772Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF772Cu) goto L_08AF772C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF772C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7754;
      }
      goto L_08AF7744;
    }
L_08AF7744:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7774;
      }
      goto L_08AF774C;
    }
L_08AF774C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 11u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF7754;
    }
L_08AF7754:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7764u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7764u) goto L_08AF7764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7764:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7774;
      }
      goto L_08AF776C;
    }
L_08AF776C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7774;
L_08AF7774:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF77B0;
      }
      goto L_08AF777C;
    }
L_08AF777C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29984));
    aot_gpr_31 = (0x08AF7790u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7790u) goto L_08AF7790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7790:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF77B8;
      }
      goto L_08AF77A8;
    }
L_08AF77A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08AF77D4;
      }
      goto L_08AF77B0;
    }
L_08AF77B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 12u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF77B8;
    }
L_08AF77B8:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF77C4u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF77C4u) goto L_08AF77C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF77C4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08AF77D4;
      }
      goto L_08AF77CC;
    }
L_08AF77CC:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_08AF77D4;
L_08AF77D4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF77E4;
      }
      goto L_08AF77DC;
    }
L_08AF77DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 13u);
      if (branch_taken) {
          goto L_08AF77E8;
      }
      goto L_08AF77E4;
    }
L_08AF77E4:
    aot_gpr_2 = (0u | 14u);
    goto L_08AF77E8;
L_08AF77E8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF7800:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(744));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AF7824u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7824u) goto L_08AF7824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7824:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7854;
      }
      goto L_08AF783C;
    }
L_08AF783C:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7848u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7848u) goto L_08AF7848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7848:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08AF7858;
      }
      goto L_08AF7850;
    }
L_08AF7850:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AF7854;
L_08AF7854:
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_08AF7858;
L_08AF7858:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7890;
      }
      goto L_08AF7860;
    }
L_08AF7860:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(30004));
    aot_gpr_31 = (0x08AF7870u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7870u) goto L_08AF7870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7870:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7898;
      }
      goto L_08AF7888;
    }
L_08AF7888:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08AF78B4;
      }
      goto L_08AF7890;
    }
L_08AF7890:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF78C8;
      }
      goto L_08AF7898;
    }
L_08AF7898:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF78A4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF78A4u) goto L_08AF78A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF78A4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08AF78B4;
      }
      goto L_08AF78AC;
    }
L_08AF78AC:
    ctx.gpr[16] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] & 255u);
    goto L_08AF78B4;
L_08AF78B4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF78C4;
      }
      goto L_08AF78BC;
    }
L_08AF78BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF78C8;
      }
      goto L_08AF78C4;
    }
L_08AF78C4:
    aot_gpr_2 = (0u | 2u);
    goto L_08AF78C8;
L_08AF78C8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF78E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(30024));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AF7908u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7908u) goto L_08AF7908;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7908:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF793C;
      }
      goto L_08AF7920;
    }
L_08AF7920:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7930u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7930u) goto L_08AF7930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7930:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7940;
      }
      goto L_08AF7938;
    }
L_08AF7938:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AF793C;
L_08AF793C:
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7940;
L_08AF7940:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7978;
      }
      goto L_08AF7948;
    }
L_08AF7948:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(30044));
    aot_gpr_31 = (0x08AF7958u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7958u) goto L_08AF7958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7958:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7980;
      }
      goto L_08AF7970;
    }
L_08AF7970:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF79A0;
      }
      goto L_08AF7978;
    }
L_08AF7978:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7A74;
      }
      goto L_08AF7980;
    }
L_08AF7980:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7990u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7990u) goto L_08AF7990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7990:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF79A0;
      }
      goto L_08AF7998;
    }
L_08AF7998:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF79A0;
L_08AF79A0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF79D8;
      }
      goto L_08AF79A8;
    }
L_08AF79A8:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(30072));
    aot_gpr_31 = (0x08AF79B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF79B8u) goto L_08AF79B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF79B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_4;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF79E0;
      }
      goto L_08AF79D0;
    }
L_08AF79D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7A00;
      }
      goto L_08AF79D8;
    }
L_08AF79D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF7A74;
      }
      goto L_08AF79E0;
    }
L_08AF79E0:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF79F0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF79F0u) goto L_08AF79F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF79F0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AF7A00;
      }
      goto L_08AF79F8;
    }
L_08AF79F8:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_08AF7A00;
L_08AF7A00:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AF7A3C;
      }
      goto L_08AF7A08;
    }
L_08AF7A08:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(30100));
    aot_gpr_31 = (0x08AF7A1Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7A1Cu) goto L_08AF7A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7A1C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF7A44;
      }
      goto L_08AF7A34;
    }
L_08AF7A34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08AF7A60;
      }
      goto L_08AF7A3C;
    }
L_08AF7A3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 2u);
      if (branch_taken) {
          goto L_08AF7A74;
      }
      goto L_08AF7A44;
    }
L_08AF7A44:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08AF7A50u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58100, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7A50u) goto L_08AF7A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7A50:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08AF7A60;
      }
      goto L_08AF7A58;
    }
L_08AF7A58:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_08AF7A60;
L_08AF7A60:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AF7A70;
      }
      goto L_08AF7A68;
    }
L_08AF7A68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 3u);
      if (branch_taken) {
          goto L_08AF7A74;
      }
      goto L_08AF7A70;
    }
L_08AF7A70:
    aot_gpr_2 = (0u | 4u);
    goto L_08AF7A74;
L_08AF7A74:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AF7A8C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_6 = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AF7FB0;
      }
      goto L_08AF7AAC;
    }
L_08AF7AAC:
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-128));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(51) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 14u, 0x08AF80C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7ABC;
    }
L_08AF7ABC:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30248)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AF7AD4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(760));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08AF7AE4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7AE4u) goto L_08AF7AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7AE4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7AEC;
    }
L_08AF7AEC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(768));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(2));
    aot_gpr_31 = (0x08AF7AFCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7AFCu) goto L_08AF7AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7AFC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7B04;
    }
L_08AF7B04:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(780));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(3));
    aot_gpr_31 = (0x08AF7B14u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7B14u) goto L_08AF7B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7B14:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7B1C;
    }
L_08AF7B1C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(792));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AF7B2Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7B2Cu) goto L_08AF7B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7B2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7B34;
    }
L_08AF7B34:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(5));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF7B48u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30132));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7B48u) goto L_08AF7B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7B48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7B50;
    }
L_08AF7B50:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(804));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(6));
    aot_gpr_31 = (0x08AF7B60u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7B60u) goto L_08AF7B60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7B60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7B68;
    }
L_08AF7B68:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(812));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(7));
    aot_gpr_31 = (0x08AF7B78u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7B78u) goto L_08AF7B78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7B78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7B80;
    }
L_08AF7B80:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(820));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08AF7B90u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7B90u) goto L_08AF7B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7B90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7B98;
    }
L_08AF7B98:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(832));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(9));
    aot_gpr_31 = (0x08AF7BA8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7BA8u) goto L_08AF7BA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7BA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7BB0;
    }
L_08AF7BB0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(840));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(10));
    aot_gpr_31 = (0x08AF7BC0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7BC0u) goto L_08AF7BC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7BC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7BC8;
    }
L_08AF7BC8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(852));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(11));
    aot_gpr_31 = (0x08AF7BD8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7BD8u) goto L_08AF7BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7BD8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7BE0;
    }
L_08AF7BE0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(780));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08AF7BF0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7BF0u) goto L_08AF7BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7BF0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7BF8;
    }
L_08AF7BF8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(860));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(13));
    aot_gpr_31 = (0x08AF7C08u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7C08u) goto L_08AF7C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7C08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7C10;
    }
L_08AF7C10:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(868));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(14));
    aot_gpr_31 = (0x08AF7C20u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7C20u) goto L_08AF7C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7C20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7C28;
    }
L_08AF7C28:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(880));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(15));
    aot_gpr_31 = (0x08AF7C38u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7C38u) goto L_08AF7C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7C38:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7C40;
    }
L_08AF7C40:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(892));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08AF7C50u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7C50u) goto L_08AF7C50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7C50:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7C58;
    }
L_08AF7C58:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(900));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(17));
    aot_gpr_31 = (0x08AF7C68u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7C68u) goto L_08AF7C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7C68:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7C70;
    }
L_08AF7C70:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(912));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(18));
    aot_gpr_31 = (0x08AF7C80u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7C80u) goto L_08AF7C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7C80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7C88;
    }
L_08AF7C88:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(924));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(19));
    aot_gpr_31 = (0x08AF7C98u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7C98u) goto L_08AF7C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7C98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7CA0;
    }
L_08AF7CA0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(936));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x08AF7CB0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7CB0u) goto L_08AF7CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7CB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7CB8;
    }
L_08AF7CB8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(948));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(21));
    aot_gpr_31 = (0x08AF7CC8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7CC8u) goto L_08AF7CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7CC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7CD0;
    }
L_08AF7CD0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(964));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(22));
    aot_gpr_31 = (0x08AF7CE0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7CE0u) goto L_08AF7CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7CE0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7CE8;
    }
L_08AF7CE8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(980));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(23));
    aot_gpr_31 = (0x08AF7CF8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7CF8u) goto L_08AF7CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7CF8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7D00;
    }
L_08AF7D00:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(992));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08AF7D10u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7D10u) goto L_08AF7D10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7D10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7D18;
    }
L_08AF7D18:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1004));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(25));
    aot_gpr_31 = (0x08AF7D28u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7D28u) goto L_08AF7D28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7D28:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7D30;
    }
L_08AF7D30:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1016));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(26));
    aot_gpr_31 = (0x08AF7D40u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7D40u) goto L_08AF7D40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7D40:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7D48;
    }
L_08AF7D48:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1032));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(27));
    aot_gpr_31 = (0x08AF7D58u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7D58u) goto L_08AF7D58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7D58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7D60;
    }
L_08AF7D60:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1044));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_31 = (0x08AF7D70u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7D70u) goto L_08AF7D70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7D70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7D78;
    }
L_08AF7D78:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1056));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(29));
    aot_gpr_31 = (0x08AF7D88u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7D88u) goto L_08AF7D88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7D88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7D90;
    }
L_08AF7D90:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1068));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(30));
    aot_gpr_31 = (0x08AF7DA0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7DA0u) goto L_08AF7DA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7DA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7DA8;
    }
L_08AF7DA8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1080));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(31));
    aot_gpr_31 = (0x08AF7DB8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7DB8u) goto L_08AF7DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7DB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7DC0;
    }
L_08AF7DC0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1088));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08AF7DD0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7DD0u) goto L_08AF7DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7DD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7DD8;
    }
L_08AF7DD8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1096));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(33));
    aot_gpr_31 = (0x08AF7DE8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7DE8u) goto L_08AF7DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7DE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7DF0;
    }
L_08AF7DF0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1112));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(34));
    aot_gpr_31 = (0x08AF7E00u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7E00u) goto L_08AF7E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7E00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7E08;
    }
L_08AF7E08:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1124));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(35));
    aot_gpr_31 = (0x08AF7E18u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7E18u) goto L_08AF7E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7E18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7E20;
    }
L_08AF7E20:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF7E34u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30160));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7E34u) goto L_08AF7E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7E34:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7E3C;
    }
L_08AF7E3C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1140));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(37));
    aot_gpr_31 = (0x08AF7E4Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7E4Cu) goto L_08AF7E4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7E4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7E54;
    }
L_08AF7E54:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1156));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(38));
    aot_gpr_31 = (0x08AF7E64u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7E64u) goto L_08AF7E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7E64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7E6C;
    }
L_08AF7E6C:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(39));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF7E80u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30180));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7E80u) goto L_08AF7E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7E80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7E88;
    }
L_08AF7E88:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(40));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF7E9Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30200));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7E9Cu) goto L_08AF7E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7E9C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7EA4;
    }
L_08AF7EA4:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(41));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AF7EB8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(30220));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7EB8u) goto L_08AF7EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7EB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7EC0;
    }
L_08AF7EC0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1172));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(42));
    aot_gpr_31 = (0x08AF7ED0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7ED0u) goto L_08AF7ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7ED0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7ED8;
    }
L_08AF7ED8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1188));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(43));
    aot_gpr_31 = (0x08AF7EE8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7EE8u) goto L_08AF7EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7EE8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7EF0;
    }
L_08AF7EF0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1200));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    aot_gpr_31 = (0x08AF7F00u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7F00u) goto L_08AF7F00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7F00:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7F08;
    }
L_08AF7F08:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1208));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(45));
    aot_gpr_31 = (0x08AF7F18u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7F18u) goto L_08AF7F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7F18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7F20;
    }
L_08AF7F20:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1216));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(46));
    aot_gpr_31 = (0x08AF7F30u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7F30u) goto L_08AF7F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7F30:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7F38;
    }
L_08AF7F38:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1220));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(47));
    aot_gpr_31 = (0x08AF7F48u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7F48u) goto L_08AF7F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7F48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7F50;
    }
L_08AF7F50:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1236));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08AF7F60u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7F60u) goto L_08AF7F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7F60:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7F68;
    }
L_08AF7F68:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1244));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(49));
    aot_gpr_31 = (0x08AF7F78u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7F78u) goto L_08AF7F78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7F78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7F80;
    }
L_08AF7F80:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1252));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(50));
    aot_gpr_31 = (0x08AF7F90u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7F90u) goto L_08AF7F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7F90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7F98;
    }
L_08AF7F98:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1260));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(51));
    aot_gpr_31 = (0x08AF7FA8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7FA8u) goto L_08AF7FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7FA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          (void)([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08AF80D8, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem, ctx.pc, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0189_entry, 189u, 15u, 0x08AF80D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AF7FB0;
    }
L_08AF7FB0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(632));
    aot_gpr_31 = (0x08AF7FC4u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7FC4u) goto L_08AF7FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7FC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(56));
    aot_gpr_31 = (0x08AF7FDCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B58974, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AF7FDCu) goto L_08AF7FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AF7FDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_gpr_29 + aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < ctx.gpr[17] ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 7u, 0x08AF805Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 1u, 0x08AF8000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0188(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0188_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_188(Runtime &runtime) {
    runtime.register_generated_unit(188u, 0x08AF4000u, 16384u, &recomp_unit_0188, &recomp_unit_0188_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08AF4000u, &recomp_unit_0188, "recomp_unit_0188",
                                          kEntryMasks_recomp_unit_0188, 64u);
}
} // namespace psprecomp
