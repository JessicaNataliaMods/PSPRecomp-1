#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0181[64] = {
    0x5552A9250842AA95ull, 0x2495082921255528ull, 0x28A0A294480450A9ull, 0x80888002028A1044ull,
    0x08A4221040202088ull, 0x10880906920AA291ull, 0x0488000080C20419ull, 0x4111020220055400ull,
    0x54505050808B1050ull, 0x1130428811528AA5ull, 0x0854A4AA8A0A0A10ull, 0x08880A5545050508ull,
    0x5050509102620482ull, 0xA0848811528AA554ull, 0x292AA28282848804ull, 0x8A5545050509102Aull,
    0xA14550454A914A54ull, 0x30451A54A2911155ull, 0x852AD0A284815145ull, 0x1514A209848AA550ull,
    0x488521A968516111ull, 0x4AA42052A4D0A280ull, 0x81244102404000A1ull, 0xC141002020000140ull,
    0x0900902081081002ull, 0x040B6548AC020200ull, 0x0020820008210200ull, 0x10A0145515340904ull,
    0xA081200840000108ull, 0x0840020000024444ull, 0x8156024094148421ull, 0x4020220920000800ull,
    0x4628A04441020150ull, 0x008008C252490410ull, 0x4000200000000120ull, 0x81144050A4104004ull,
    0x0480244114500110ull, 0x0002004AA80500A8ull, 0x8401140544420000ull, 0x00B01400A002424Aull,
    0x432140201084085Aull, 0x40A9020480406009ull, 0x0050D14000B00016ull, 0x8100020102A02140ull,
    0x014404018A100808ull, 0x8040030024062801ull, 0x0003480000000000ull, 0x50000D2000000D20ull,
    0xA492A42004082900ull, 0x042552804255515Aull, 0xA010954A01095528ull, 0x02544697020402B4ull,
    0x04022001A8000209ull, 0x8004001204A88D2Eull, 0x2E04A808091002AAull, 0x446970255154A88Dull,
    0x08411514B4801A55ull, 0x408AE040D50820A0ull, 0xA908000A40011515ull, 0x5551C444A4711000ull,
    0x2D255088000A0000ull, 0x800C046D28051200ull, 0x802AA8C000011400ull, 0x4008140164A2B45Aull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0181[64] = {
    1u, 26u, 47u, 66u, 78u, 90u, 108u, 119u, 131u, 148u, 168u, 187u, 204u, 220u, 241u, 259u,
    279u, 302u, 325u, 347u, 368u, 390u, 410u, 422u, 431u, 441u, 457u, 464u, 482u, 491u, 499u, 516u,
    524u, 539u, 552u, 556u, 569u, 581u, 593u, 604u, 617u, 632u, 645u, 658u, 668u, 679u, 690u, 694u,
    704u, 719u, 740u, 759u, 778u, 788u, 804u, 821u, 846u, 866u, 883u, 898u, 918u, 931u, 946u, 958u,
};
void recomp_unit_0181_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,16,29,6,31 fprs=12,13,20,14 gpr_occ=4554 fpr_occ=182 gpr_total=6287 fpr_total=202
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[16] = aot_gpr_16; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD8000u;
        entry_id = 0u;
        if (entry_delta < 16380u && (entry_delta & 3u) == 0u) {
            const std::uint32_t entry_slot = entry_delta >> 2u;
            const std::uint32_t entry_group = entry_slot >> 6u;
            const std::uint64_t entry_mask = kEntryMasks_recomp_unit_0181[entry_group];
            const std::uint64_t entry_bit = 1ull << (entry_slot & 63u);
            if ((entry_mask & entry_bit) != 0u) {
                entry_id = static_cast<std::uint16_t>(
                    kEntryBases_recomp_unit_0181[entry_group] +
                    std::popcount(entry_mask & (entry_bit - 1ull)));
            }
        }
    }
    switch (entry_id) {
    case 1u: goto L_08AD8000;
    case 2u: goto L_08AD8008;
    case 3u: goto L_08AD8010;
    case 4u: goto L_08AD801C;
    case 5u: goto L_08AD8024;
    case 6u: goto L_08AD802C;
    case 7u: goto L_08AD8034;
    case 8u: goto L_08AD803C;
    case 9u: goto L_08AD8044;
    case 10u: goto L_08AD8058;
    case 11u: goto L_08AD806C;
    case 12u: goto L_08AD8080;
    case 13u: goto L_08AD8088;
    case 14u: goto L_08AD8094;
    case 15u: goto L_08AD80A0;
    case 16u: goto L_08AD80AC;
    case 17u: goto L_08AD80B4;
    case 18u: goto L_08AD80BC;
    case 19u: goto L_08AD80C4;
    case 20u: goto L_08AD80D0;
    case 21u: goto L_08AD80D8;
    case 22u: goto L_08AD80E0;
    case 23u: goto L_08AD80E8;
    case 24u: goto L_08AD80F0;
    case 25u: goto L_08AD80F8;
    case 26u: goto L_08AD810C;
    case 27u: goto L_08AD8114;
    case 28u: goto L_08AD8120;
    case 29u: goto L_08AD8128;
    case 30u: goto L_08AD8130;
    case 31u: goto L_08AD8138;
    case 32u: goto L_08AD8140;
    case 33u: goto L_08AD8148;
    case 34u: goto L_08AD8154;
    case 35u: goto L_08AD8160;
    case 36u: goto L_08AD8174;
    case 37u: goto L_08AD8180;
    case 38u: goto L_08AD818C;
    case 39u: goto L_08AD8194;
    case 40u: goto L_08AD81AC;
    case 41u: goto L_08AD81C0;
    case 42u: goto L_08AD81C8;
    case 43u: goto L_08AD81D0;
    case 44u: goto L_08AD81DC;
    case 45u: goto L_08AD81E8;
    case 46u: goto L_08AD81F4;
    case 47u: goto L_08AD8200;
    case 48u: goto L_08AD820C;
    case 49u: goto L_08AD8214;
    case 50u: goto L_08AD821C;
    case 51u: goto L_08AD8230;
    case 52u: goto L_08AD8238;
    case 53u: goto L_08AD8248;
    case 54u: goto L_08AD826C;
    case 55u: goto L_08AD8278;
    case 56u: goto L_08AD8288;
    case 57u: goto L_08AD8290;
    case 58u: goto L_08AD829C;
    case 59u: goto L_08AD82A4;
    case 60u: goto L_08AD82B4;
    case 61u: goto L_08AD82BC;
    case 62u: goto L_08AD82D4;
    case 63u: goto L_08AD82DC;
    case 64u: goto L_08AD82EC;
    case 65u: goto L_08AD82F4;
    case 66u: goto L_08AD8308;
    case 67u: goto L_08AD8318;
    case 68u: goto L_08AD8330;
    case 69u: goto L_08AD8344;
    case 70u: goto L_08AD834C;
    case 71u: goto L_08AD835C;
    case 72u: goto L_08AD8364;
    case 73u: goto L_08AD8384;
    case 74u: goto L_08AD83BC;
    case 75u: goto L_08AD83CC;
    case 76u: goto L_08AD83DC;
    case 77u: goto L_08AD83FC;
    case 78u: goto L_08AD840C;
    case 79u: goto L_08AD841C;
    case 80u: goto L_08AD8434;
    case 81u: goto L_08AD8454;
    case 82u: goto L_08AD8478;
    case 83u: goto L_08AD8490;
    case 84u: goto L_08AD84A4;
    case 85u: goto L_08AD84B4;
    case 86u: goto L_08AD84C8;
    case 87u: goto L_08AD84D4;
    case 88u: goto L_08AD84DC;
    case 89u: goto L_08AD84EC;
    case 90u: goto L_08AD8500;
    case 91u: goto L_08AD8510;
    case 92u: goto L_08AD851C;
    case 93u: goto L_08AD8524;
    case 94u: goto L_08AD8534;
    case 95u: goto L_08AD853C;
    case 96u: goto L_08AD8544;
    case 97u: goto L_08AD854C;
    case 98u: goto L_08AD8564;
    case 99u: goto L_08AD8570;
    case 100u: goto L_08AD857C;
    case 101u: goto L_08AD8584;
    case 102u: goto L_08AD8588;
    case 103u: goto L_08AD85A0;
    case 104u: goto L_08AD85AC;
    case 105u: goto L_08AD85CC;
    case 106u: goto L_08AD85DC;
    case 107u: goto L_08AD85F0;
    case 108u: goto L_08AD8600;
    case 109u: goto L_08AD860C;
    case 110u: goto L_08AD8610;
    case 111u: goto L_08AD8628;
    case 112u: goto L_08AD8644;
    case 113u: goto L_08AD8658;
    case 114u: goto L_08AD865C;
    case 115u: goto L_08AD867C;
    case 116u: goto L_08AD86CC;
    case 117u: goto L_08AD86DC;
    case 118u: goto L_08AD86E8;
    case 119u: goto L_08AD8728;
    case 120u: goto L_08AD8730;
    case 121u: goto L_08AD8738;
    case 122u: goto L_08AD8740;
    case 123u: goto L_08AD8748;
    case 124u: goto L_08AD8774;
    case 125u: goto L_08AD8784;
    case 126u: goto L_08AD87A4;
    case 127u: goto L_08AD87C0;
    case 128u: goto L_08AD87D0;
    case 129u: goto L_08AD87E0;
    case 130u: goto L_08AD87F8;
    case 131u: goto L_08AD8810;
    case 132u: goto L_08AD8818;
    case 133u: goto L_08AD8830;
    case 134u: goto L_08AD8840;
    case 135u: goto L_08AD8844;
    case 136u: goto L_08AD884C;
    case 137u: goto L_08AD885C;
    case 138u: goto L_08AD887C;
    case 139u: goto L_08AD8890;
    case 140u: goto L_08AD8898;
    case 141u: goto L_08AD88B0;
    case 142u: goto L_08AD88B8;
    case 143u: goto L_08AD88D0;
    case 144u: goto L_08AD88D8;
    case 145u: goto L_08AD88E8;
    case 146u: goto L_08AD88F0;
    case 147u: goto L_08AD88F8;
    case 148u: goto L_08AD8900;
    case 149u: goto L_08AD8908;
    case 150u: goto L_08AD8914;
    case 151u: goto L_08AD891C;
    case 152u: goto L_08AD8924;
    case 153u: goto L_08AD892C;
    case 154u: goto L_08AD893C;
    case 155u: goto L_08AD8944;
    case 156u: goto L_08AD8950;
    case 157u: goto L_08AD8958;
    case 158u: goto L_08AD8960;
    case 159u: goto L_08AD8970;
    case 160u: goto L_08AD898C;
    case 161u: goto L_08AD899C;
    case 162u: goto L_08AD89A4;
    case 163u: goto L_08AD89B8;
    case 164u: goto L_08AD89D0;
    case 165u: goto L_08AD89D4;
    case 166u: goto L_08AD89E0;
    case 167u: goto L_08AD89F0;
    case 168u: goto L_08AD8A10;
    case 169u: goto L_08AD8A24;
    case 170u: goto L_08AD8A2C;
    case 171u: goto L_08AD8A44;
    case 172u: goto L_08AD8A4C;
    case 173u: goto L_08AD8A64;
    case 174u: goto L_08AD8A6C;
    case 175u: goto L_08AD8A7C;
    case 176u: goto L_08AD8A84;
    case 177u: goto L_08AD8A8C;
    case 178u: goto L_08AD8A94;
    case 179u: goto L_08AD8A9C;
    case 180u: goto L_08AD8AA8;
    case 181u: goto L_08AD8AB4;
    case 182u: goto L_08AD8ABC;
    case 183u: goto L_08AD8AC8;
    case 184u: goto L_08AD8AD0;
    case 185u: goto L_08AD8AD8;
    case 186u: goto L_08AD8AEC;
    case 187u: goto L_08AD8B0C;
    case 188u: goto L_08AD8B20;
    case 189u: goto L_08AD8B28;
    case 190u: goto L_08AD8B40;
    case 191u: goto L_08AD8B48;
    case 192u: goto L_08AD8B60;
    case 193u: goto L_08AD8B68;
    case 194u: goto L_08AD8B78;
    case 195u: goto L_08AD8B80;
    case 196u: goto L_08AD8B88;
    case 197u: goto L_08AD8B90;
    case 198u: goto L_08AD8B98;
    case 199u: goto L_08AD8BA4;
    case 200u: goto L_08AD8BAC;
    case 201u: goto L_08AD8BCC;
    case 202u: goto L_08AD8BDC;
    case 203u: goto L_08AD8BEC;
    case 204u: goto L_08AD8C04;
    case 205u: goto L_08AD8C1C;
    case 206u: goto L_08AD8C28;
    case 207u: goto L_08AD8C44;
    case 208u: goto L_08AD8C54;
    case 209u: goto L_08AD8C58;
    case 210u: goto L_08AD8C64;
    case 211u: goto L_08AD8C80;
    case 212u: goto L_08AD8C90;
    case 213u: goto L_08AD8C9C;
    case 214u: goto L_08AD8CB0;
    case 215u: goto L_08AD8CB8;
    case 216u: goto L_08AD8CD0;
    case 217u: goto L_08AD8CD8;
    case 218u: goto L_08AD8CF0;
    case 219u: goto L_08AD8CF8;
    case 220u: goto L_08AD8D08;
    case 221u: goto L_08AD8D10;
    case 222u: goto L_08AD8D18;
    case 223u: goto L_08AD8D20;
    case 224u: goto L_08AD8D28;
    case 225u: goto L_08AD8D34;
    case 226u: goto L_08AD8D3C;
    case 227u: goto L_08AD8D44;
    case 228u: goto L_08AD8D4C;
    case 229u: goto L_08AD8D5C;
    case 230u: goto L_08AD8D64;
    case 231u: goto L_08AD8D70;
    case 232u: goto L_08AD8D78;
    case 233u: goto L_08AD8D80;
    case 234u: goto L_08AD8D90;
    case 235u: goto L_08AD8DAC;
    case 236u: goto L_08AD8DBC;
    case 237u: goto L_08AD8DC8;
    case 238u: goto L_08AD8DDC;
    case 239u: goto L_08AD8DF4;
    case 240u: goto L_08AD8DFC;
    case 241u: goto L_08AD8E08;
    case 242u: goto L_08AD8E2C;
    case 243u: goto L_08AD8E3C;
    case 244u: goto L_08AD8E48;
    case 245u: goto L_08AD8E5C;
    case 246u: goto L_08AD8E64;
    case 247u: goto L_08AD8E7C;
    case 248u: goto L_08AD8E84;
    case 249u: goto L_08AD8E9C;
    case 250u: goto L_08AD8EA4;
    case 251u: goto L_08AD8EB4;
    case 252u: goto L_08AD8EBC;
    case 253u: goto L_08AD8EC4;
    case 254u: goto L_08AD8ECC;
    case 255u: goto L_08AD8ED4;
    case 256u: goto L_08AD8EE0;
    case 257u: goto L_08AD8EEC;
    case 258u: goto L_08AD8EF4;
    case 259u: goto L_08AD8F04;
    case 260u: goto L_08AD8F0C;
    case 261u: goto L_08AD8F14;
    case 262u: goto L_08AD8F30;
    case 263u: goto L_08AD8F40;
    case 264u: goto L_08AD8F4C;
    case 265u: goto L_08AD8F60;
    case 266u: goto L_08AD8F68;
    case 267u: goto L_08AD8F80;
    case 268u: goto L_08AD8F88;
    case 269u: goto L_08AD8FA0;
    case 270u: goto L_08AD8FA8;
    case 271u: goto L_08AD8FB8;
    case 272u: goto L_08AD8FC0;
    case 273u: goto L_08AD8FC8;
    case 274u: goto L_08AD8FD0;
    case 275u: goto L_08AD8FD8;
    case 276u: goto L_08AD8FE4;
    case 277u: goto L_08AD8FEC;
    case 278u: goto L_08AD8FFC;
    case 279u: goto L_08AD9008;
    case 280u: goto L_08AD9010;
    case 281u: goto L_08AD9018;
    case 282u: goto L_08AD9024;
    case 283u: goto L_08AD902C;
    case 284u: goto L_08AD9038;
    case 285u: goto L_08AD9040;
    case 286u: goto L_08AD9050;
    case 287u: goto L_08AD905C;
    case 288u: goto L_08AD9064;
    case 289u: goto L_08AD906C;
    case 290u: goto L_08AD9078;
    case 291u: goto L_08AD9080;
    case 292u: goto L_08AD9088;
    case 293u: goto L_08AD9098;
    case 294u: goto L_08AD90B0;
    case 295u: goto L_08AD90B8;
    case 296u: goto L_08AD90C0;
    case 297u: goto L_08AD90C8;
    case 298u: goto L_08AD90D8;
    case 299u: goto L_08AD90E0;
    case 300u: goto L_08AD90F4;
    case 301u: goto L_08AD90FC;
    case 302u: goto L_08AD9100;
    case 303u: goto L_08AD9108;
    case 304u: goto L_08AD9110;
    case 305u: goto L_08AD9118;
    case 306u: goto L_08AD9120;
    case 307u: goto L_08AD9130;
    case 308u: goto L_08AD9140;
    case 309u: goto L_08AD9150;
    case 310u: goto L_08AD915C;
    case 311u: goto L_08AD9164;
    case 312u: goto L_08AD9174;
    case 313u: goto L_08AD917C;
    case 314u: goto L_08AD9188;
    case 315u: goto L_08AD9190;
    case 316u: goto L_08AD9198;
    case 317u: goto L_08AD91A4;
    case 318u: goto L_08AD91AC;
    case 319u: goto L_08AD91B0;
    case 320u: goto L_08AD91C0;
    case 321u: goto L_08AD91C8;
    case 322u: goto L_08AD91D8;
    case 323u: goto L_08AD91F0;
    case 324u: goto L_08AD91F4;
    case 325u: goto L_08AD9200;
    case 326u: goto L_08AD9208;
    case 327u: goto L_08AD9218;
    case 328u: goto L_08AD9220;
    case 329u: goto L_08AD9230;
    case 330u: goto L_08AD9238;
    case 331u: goto L_08AD9240;
    case 332u: goto L_08AD925C;
    case 333u: goto L_08AD9268;
    case 334u: goto L_08AD927C;
    case 335u: goto L_08AD9284;
    case 336u: goto L_08AD9294;
    case 337u: goto L_08AD929C;
    case 338u: goto L_08AD92B0;
    case 339u: goto L_08AD92B8;
    case 340u: goto L_08AD92BC;
    case 341u: goto L_08AD92C4;
    case 342u: goto L_08AD92CC;
    case 343u: goto L_08AD92D4;
    case 344u: goto L_08AD92E0;
    case 345u: goto L_08AD92E8;
    case 346u: goto L_08AD92FC;
    case 347u: goto L_08AD9310;
    case 348u: goto L_08AD9318;
    case 349u: goto L_08AD9320;
    case 350u: goto L_08AD9328;
    case 351u: goto L_08AD9334;
    case 352u: goto L_08AD933C;
    case 353u: goto L_08AD9344;
    case 354u: goto L_08AD934C;
    case 355u: goto L_08AD935C;
    case 356u: goto L_08AD9368;
    case 357u: goto L_08AD937C;
    case 358u: goto L_08AD9380;
    case 359u: goto L_08AD938C;
    case 360u: goto L_08AD93A4;
    case 361u: goto L_08AD93B4;
    case 362u: goto L_08AD93BC;
    case 363u: goto L_08AD93C8;
    case 364u: goto L_08AD93D0;
    case 365u: goto L_08AD93E0;
    case 366u: goto L_08AD93E8;
    case 367u: goto L_08AD93F0;
    case 368u: goto L_08AD9400;
    case 369u: goto L_08AD9410;
    case 370u: goto L_08AD9420;
    case 371u: goto L_08AD9434;
    case 372u: goto L_08AD9438;
    case 373u: goto L_08AD9440;
    case 374u: goto L_08AD9450;
    case 375u: goto L_08AD9458;
    case 376u: goto L_08AD946C;
    case 377u: goto L_08AD9474;
    case 378u: goto L_08AD9478;
    case 379u: goto L_08AD9480;
    case 380u: goto L_08AD948C;
    case 381u: goto L_08AD9494;
    case 382u: goto L_08AD949C;
    case 383u: goto L_08AD94A0;
    case 384u: goto L_08AD94B4;
    case 385u: goto L_08AD94C0;
    case 386u: goto L_08AD94C8;
    case 387u: goto L_08AD94DC;
    case 388u: goto L_08AD94EC;
    case 389u: goto L_08AD94F8;
    case 390u: goto L_08AD951C;
    case 391u: goto L_08AD9524;
    case 392u: goto L_08AD9534;
    case 393u: goto L_08AD953C;
    case 394u: goto L_08AD9550;
    case 395u: goto L_08AD9558;
    case 396u: goto L_08AD955C;
    case 397u: goto L_08AD9568;
    case 398u: goto L_08AD9574;
    case 399u: goto L_08AD957C;
    case 400u: goto L_08AD9584;
    case 401u: goto L_08AD9590;
    case 402u: goto L_08AD9598;
    case 403u: goto L_08AD95B4;
    case 404u: goto L_08AD95C8;
    case 405u: goto L_08AD95D4;
    case 406u: goto L_08AD95DC;
    case 407u: goto L_08AD95E4;
    case 408u: goto L_08AD95EC;
    case 409u: goto L_08AD95F8;
    case 410u: goto L_08AD9600;
    case 411u: goto L_08AD9614;
    case 412u: goto L_08AD961C;
    case 413u: goto L_08AD9658;
    case 414u: goto L_08AD9678;
    case 415u: goto L_08AD9684;
    case 416u: goto L_08AD96A0;
    case 417u: goto L_08AD96B8;
    case 418u: goto L_08AD96C8;
    case 419u: goto L_08AD96D4;
    case 420u: goto L_08AD96E0;
    case 421u: goto L_08AD96FC;
    case 422u: goto L_08AD9718;
    case 423u: goto L_08AD9720;
    case 424u: goto L_08AD9774;
    case 425u: goto L_08AD9794;
    case 426u: goto L_08AD97C0;
    case 427u: goto L_08AD97D8;
    case 428u: goto L_08AD97E0;
    case 429u: goto L_08AD97F8;
    case 430u: goto L_08AD97FC;
    case 431u: goto L_08AD9804;
    case 432u: goto L_08AD9830;
    case 433u: goto L_08AD984C;
    case 434u: goto L_08AD9860;
    case 435u: goto L_08AD987C;
    case 436u: goto L_08AD9894;
    case 437u: goto L_08AD98B0;
    case 438u: goto L_08AD98BC;
    case 439u: goto L_08AD98E0;
    case 440u: goto L_08AD98EC;
    case 441u: goto L_08AD9924;
    case 442u: goto L_08AD9944;
    case 443u: goto L_08AD9968;
    case 444u: goto L_08AD996C;
    case 445u: goto L_08AD9974;
    case 446u: goto L_08AD997C;
    case 447u: goto L_08AD998C;
    case 448u: goto L_08AD9998;
    case 449u: goto L_08AD99A0;
    case 450u: goto L_08AD99A8;
    case 451u: goto L_08AD99B4;
    case 452u: goto L_08AD99B8;
    case 453u: goto L_08AD99C0;
    case 454u: goto L_08AD99C4;
    case 455u: goto L_08AD99CC;
    case 456u: goto L_08AD99E8;
    case 457u: goto L_08AD9A24;
    case 458u: goto L_08AD9A40;
    case 459u: goto L_08AD9A54;
    case 460u: goto L_08AD9A6C;
    case 461u: goto L_08AD9AA4;
    case 462u: goto L_08AD9ABC;
    case 463u: goto L_08AD9AD4;
    case 464u: goto L_08AD9B08;
    case 465u: goto L_08AD9B20;
    case 466u: goto L_08AD9B2C;
    case 467u: goto L_08AD9B48;
    case 468u: goto L_08AD9B50;
    case 469u: goto L_08AD9B54;
    case 470u: goto L_08AD9B60;
    case 471u: goto L_08AD9B68;
    case 472u: goto L_08AD9B70;
    case 473u: goto L_08AD9B80;
    case 474u: goto L_08AD9B88;
    case 475u: goto L_08AD9B90;
    case 476u: goto L_08AD9B98;
    case 477u: goto L_08AD9BA8;
    case 478u: goto L_08AD9BB0;
    case 479u: goto L_08AD9BD4;
    case 480u: goto L_08AD9BDC;
    case 481u: goto L_08AD9BF0;
    case 482u: goto L_08AD9C0C;
    case 483u: goto L_08AD9C20;
    case 484u: goto L_08AD9C78;
    case 485u: goto L_08AD9C8C;
    case 486u: goto L_08AD9CB4;
    case 487u: goto L_08AD9CC0;
    case 488u: goto L_08AD9CDC;
    case 489u: goto L_08AD9CF4;
    case 490u: goto L_08AD9CFC;
    case 491u: goto L_08AD9D08;
    case 492u: goto L_08AD9D18;
    case 493u: goto L_08AD9D28;
    case 494u: goto L_08AD9D38;
    case 495u: goto L_08AD9D44;
    case 496u: goto L_08AD9DA4;
    case 497u: goto L_08AD9DD8;
    case 498u: goto L_08AD9DEC;
    case 499u: goto L_08AD9E00;
    case 500u: goto L_08AD9E14;
    case 501u: goto L_08AD9E28;
    case 502u: goto L_08AD9E3C;
    case 503u: goto L_08AD9E48;
    case 504u: goto L_08AD9E50;
    case 505u: goto L_08AD9E68;
    case 506u: goto L_08AD9E70;
    case 507u: goto L_08AD9E7C;
    case 508u: goto L_08AD9E98;
    case 509u: goto L_08AD9EA4;
    case 510u: goto L_08AD9EC4;
    case 511u: goto L_08AD9EC8;
    case 512u: goto L_08AD9ED0;
    case 513u: goto L_08AD9ED8;
    case 514u: goto L_08AD9EE0;
    case 515u: goto L_08AD9EFC;
    case 516u: goto L_08AD9F2C;
    case 517u: goto L_08AD9F74;
    case 518u: goto L_08AD9F80;
    case 519u: goto L_08AD9F8C;
    case 520u: goto L_08AD9FA4;
    case 521u: goto L_08AD9FB4;
    case 522u: goto L_08AD9FD4;
    case 523u: goto L_08AD9FF8;
    case 524u: goto L_08ADA010;
    case 525u: goto L_08ADA018;
    case 526u: goto L_08ADA020;
    case 527u: goto L_08ADA044;
    case 528u: goto L_08ADA060;
    case 529u: goto L_08ADA078;
    case 530u: goto L_08ADA088;
    case 531u: goto L_08ADA098;
    case 532u: goto L_08ADA0B4;
    case 533u: goto L_08ADA0BC;
    case 534u: goto L_08ADA0CC;
    case 535u: goto L_08ADA0D4;
    case 536u: goto L_08ADA0E4;
    case 537u: goto L_08ADA0E8;
    case 538u: goto L_08ADA0F8;
    case 539u: goto L_08ADA110;
    case 540u: goto L_08ADA128;
    case 541u: goto L_08ADA140;
    case 542u: goto L_08ADA14C;
    case 543u: goto L_08ADA158;
    case 544u: goto L_08ADA164;
    case 545u: goto L_08ADA170;
    case 546u: goto L_08ADA178;
    case 547u: goto L_08ADA184;
    case 548u: goto L_08ADA198;
    case 549u: goto L_08ADA19C;
    case 550u: goto L_08ADA1AC;
    case 551u: goto L_08ADA1DC;
    case 552u: goto L_08ADA214;
    case 553u: goto L_08ADA220;
    case 554u: goto L_08ADA2B4;
    case 555u: goto L_08ADA2F8;
    case 556u: goto L_08ADA308;
    case 557u: goto L_08ADA338;
    case 558u: goto L_08ADA350;
    case 559u: goto L_08ADA368;
    case 560u: goto L_08ADA374;
    case 561u: goto L_08ADA37C;
    case 562u: goto L_08ADA390;
    case 563u: goto L_08ADA398;
    case 564u: goto L_08ADA3B8;
    case 565u: goto L_08ADA3C8;
    case 566u: goto L_08ADA3D0;
    case 567u: goto L_08ADA3E0;
    case 568u: goto L_08ADA3FC;
    case 569u: goto L_08ADA410;
    case 570u: goto L_08ADA420;
    case 571u: goto L_08ADA450;
    case 572u: goto L_08ADA458;
    case 573u: goto L_08ADA468;
    case 574u: goto L_08ADA470;
    case 575u: goto L_08ADA480;
    case 576u: goto L_08ADA498;
    case 577u: goto L_08ADA4A8;
    case 578u: goto L_08ADA4B4;
    case 579u: goto L_08ADA4DC;
    case 580u: goto L_08ADA4E8;
    case 581u: goto L_08ADA50C;
    case 582u: goto L_08ADA514;
    case 583u: goto L_08ADA51C;
    case 584u: goto L_08ADA540;
    case 585u: goto L_08ADA548;
    case 586u: goto L_08ADA56C;
    case 587u: goto L_08ADA574;
    case 588u: goto L_08ADA57C;
    case 589u: goto L_08ADA584;
    case 590u: goto L_08ADA58C;
    case 591u: goto L_08ADA598;
    case 592u: goto L_08ADA5C4;
    case 593u: goto L_08ADA644;
    case 594u: goto L_08ADA658;
    case 595u: goto L_08ADA668;
    case 596u: goto L_08ADA678;
    case 597u: goto L_08ADA680;
    case 598u: goto L_08ADA688;
    case 599u: goto L_08ADA6A8;
    case 600u: goto L_08ADA6B0;
    case 601u: goto L_08ADA6C0;
    case 602u: goto L_08ADA6E8;
    case 603u: goto L_08ADA6FC;
    case 604u: goto L_08ADA704;
    case 605u: goto L_08ADA70C;
    case 606u: goto L_08ADA718;
    case 607u: goto L_08ADA724;
    case 608u: goto L_08ADA738;
    case 609u: goto L_08ADA744;
    case 610u: goto L_08ADA774;
    case 611u: goto L_08ADA77C;
    case 612u: goto L_08ADA7A8;
    case 613u: goto L_08ADA7B0;
    case 614u: goto L_08ADA7D0;
    case 615u: goto L_08ADA7D4;
    case 616u: goto L_08ADA7DC;
    case 617u: goto L_08ADA804;
    case 618u: goto L_08ADA80C;
    case 619u: goto L_08ADA810;
    case 620u: goto L_08ADA818;
    case 621u: goto L_08ADA82C;
    case 622u: goto L_08ADA848;
    case 623u: goto L_08ADA85C;
    case 624u: goto L_08ADA870;
    case 625u: goto L_08ADA894;
    case 626u: goto L_08ADA8B8;
    case 627u: goto L_08ADA8C0;
    case 628u: goto L_08ADA8D4;
    case 629u: goto L_08ADA8E0;
    case 630u: goto L_08ADA8E4;
    case 631u: goto L_08ADA8F8;
    case 632u: goto L_08ADA900;
    case 633u: goto L_08ADA90C;
    case 634u: goto L_08ADA934;
    case 635u: goto L_08ADA938;
    case 636u: goto L_08ADA958;
    case 637u: goto L_08ADA97C;
    case 638u: goto L_08ADA988;
    case 639u: goto L_08ADA9A4;
    case 640u: goto L_08ADA9C0;
    case 641u: goto L_08ADA9CC;
    case 642u: goto L_08ADA9D4;
    case 643u: goto L_08ADA9DC;
    case 644u: goto L_08ADA9F8;
    case 645u: goto L_08ADAA04;
    case 646u: goto L_08ADAA08;
    case 647u: goto L_08ADAA10;
    case 648u: goto L_08ADAA50;
    case 649u: goto L_08ADAA54;
    case 650u: goto L_08ADAA5C;
    case 651u: goto L_08ADAA98;
    case 652u: goto L_08ADAAA0;
    case 653u: goto L_08ADAAB0;
    case 654u: goto L_08ADAAB8;
    case 655u: goto L_08ADAABC;
    case 656u: goto L_08ADAAD0;
    case 657u: goto L_08ADAAD8;
    case 658u: goto L_08ADAB18;
    case 659u: goto L_08ADAB20;
    case 660u: goto L_08ADAB34;
    case 661u: goto L_08ADAB54;
    case 662u: goto L_08ADAB5C;
    case 663u: goto L_08ADAB64;
    case 664u: goto L_08ADAB80;
    case 665u: goto L_08ADABA4;
    case 666u: goto L_08ADABE0;
    case 667u: goto L_08ADABFC;
    case 668u: goto L_08ADAC0C;
    case 669u: goto L_08ADAC2C;
    case 670u: goto L_08ADAC50;
    case 671u: goto L_08ADAC64;
    case 672u: goto L_08ADAC6C;
    case 673u: goto L_08ADAC7C;
    case 674u: goto L_08ADAC80;
    case 675u: goto L_08ADACA8;
    case 676u: goto L_08ADACC8;
    case 677u: goto L_08ADACD8;
    case 678u: goto L_08ADACE0;
    case 679u: goto L_08ADAD00;
    case 680u: goto L_08ADAD2C;
    case 681u: goto L_08ADAD34;
    case 682u: goto L_08ADAD44;
    case 683u: goto L_08ADAD48;
    case 684u: goto L_08ADAD68;
    case 685u: goto L_08ADAD74;
    case 686u: goto L_08ADADA0;
    case 687u: goto L_08ADADA4;
    case 688u: goto L_08ADADD8;
    case 689u: goto L_08ADADFC;
    case 690u: goto L_08ADAEAC;
    case 691u: goto L_08ADAEB8;
    case 692u: goto L_08ADAEC0;
    case 693u: goto L_08ADAEC4;
    case 694u: goto L_08ADAF14;
    case 695u: goto L_08ADAF20;
    case 696u: goto L_08ADAF28;
    case 697u: goto L_08ADAF2C;
    case 698u: goto L_08ADAF94;
    case 699u: goto L_08ADAFA0;
    case 700u: goto L_08ADAFA8;
    case 701u: goto L_08ADAFAC;
    case 702u: goto L_08ADAFF0;
    case 703u: goto L_08ADAFF8;
    case 704u: goto L_08ADB020;
    case 705u: goto L_08ADB02C;
    case 706u: goto L_08ADB034;
    case 707u: goto L_08ADB04C;
    case 708u: goto L_08ADB068;
    case 709u: goto L_08ADB094;
    case 710u: goto L_08ADB0A8;
    case 711u: goto L_08ADB0B4;
    case 712u: goto L_08ADB0BC;
    case 713u: goto L_08ADB0C4;
    case 714u: goto L_08ADB0D0;
    case 715u: goto L_08ADB0DC;
    case 716u: goto L_08ADB0E8;
    case 717u: goto L_08ADB0F4;
    case 718u: goto L_08ADB0FC;
    case 719u: goto L_08ADB104;
    case 720u: goto L_08ADB10C;
    case 721u: goto L_08ADB110;
    case 722u: goto L_08ADB118;
    case 723u: goto L_08ADB120;
    case 724u: goto L_08ADB130;
    case 725u: goto L_08ADB138;
    case 726u: goto L_08ADB140;
    case 727u: goto L_08ADB148;
    case 728u: goto L_08ADB150;
    case 729u: goto L_08ADB158;
    case 730u: goto L_08ADB164;
    case 731u: goto L_08ADB178;
    case 732u: goto L_08ADB19C;
    case 733u: goto L_08ADB1A4;
    case 734u: goto L_08ADB1B0;
    case 735u: goto L_08ADB1B8;
    case 736u: goto L_08ADB1C0;
    case 737u: goto L_08ADB1C8;
    case 738u: goto L_08ADB1D4;
    case 739u: goto L_08ADB1E8;
    case 740u: goto L_08ADB20C;
    case 741u: goto L_08ADB214;
    case 742u: goto L_08ADB220;
    case 743u: goto L_08ADB228;
    case 744u: goto L_08ADB230;
    case 745u: goto L_08ADB238;
    case 746u: goto L_08ADB240;
    case 747u: goto L_08ADB24C;
    case 748u: goto L_08ADB260;
    case 749u: goto L_08ADB284;
    case 750u: goto L_08ADB28C;
    case 751u: goto L_08ADB298;
    case 752u: goto L_08ADB2A0;
    case 753u: goto L_08ADB2A8;
    case 754u: goto L_08ADB2B0;
    case 755u: goto L_08ADB2BC;
    case 756u: goto L_08ADB2D0;
    case 757u: goto L_08ADB2F4;
    case 758u: goto L_08ADB2FC;
    case 759u: goto L_08ADB308;
    case 760u: goto L_08ADB310;
    case 761u: goto L_08ADB314;
    case 762u: goto L_08ADB31C;
    case 763u: goto L_08ADB324;
    case 764u: goto L_08ADB348;
    case 765u: goto L_08ADB364;
    case 766u: goto L_08ADB380;
    case 767u: goto L_08ADB384;
    case 768u: goto L_08ADB388;
    case 769u: goto L_08ADB390;
    case 770u: goto L_08ADB39C;
    case 771u: goto L_08ADB3A4;
    case 772u: goto L_08ADB3A8;
    case 773u: goto L_08ADB3B8;
    case 774u: goto L_08ADB3C8;
    case 775u: goto L_08ADB3D0;
    case 776u: goto L_08ADB3D8;
    case 777u: goto L_08ADB3E4;
    case 778u: goto L_08ADB400;
    case 779u: goto L_08ADB40C;
    case 780u: goto L_08ADB424;
    case 781u: goto L_08ADB46C;
    case 782u: goto L_08ADB474;
    case 783u: goto L_08ADB47C;
    case 784u: goto L_08ADB480;
    case 785u: goto L_08ADB4B4;
    case 786u: goto L_08ADB4C4;
    case 787u: goto L_08ADB4E8;
    case 788u: goto L_08ADB504;
    case 789u: goto L_08ADB508;
    case 790u: goto L_08ADB50C;
    case 791u: goto L_08ADB514;
    case 792u: goto L_08ADB520;
    case 793u: goto L_08ADB528;
    case 794u: goto L_08ADB52C;
    case 795u: goto L_08ADB53C;
    case 796u: goto L_08ADB54C;
    case 797u: goto L_08ADB554;
    case 798u: goto L_08ADB55C;
    case 799u: goto L_08ADB568;
    case 800u: goto L_08ADB584;
    case 801u: goto L_08ADB590;
    case 802u: goto L_08ADB5C8;
    case 803u: goto L_08ADB5FC;
    case 804u: goto L_08ADB604;
    case 805u: goto L_08ADB60C;
    case 806u: goto L_08ADB614;
    case 807u: goto L_08ADB61C;
    case 808u: goto L_08ADB624;
    case 809u: goto L_08ADB650;
    case 810u: goto L_08ADB660;
    case 811u: goto L_08ADB66C;
    case 812u: goto L_08ADB68C;
    case 813u: goto L_08ADB6AC;
    case 814u: goto L_08ADB6B4;
    case 815u: goto L_08ADB6BC;
    case 816u: goto L_08ADB6C8;
    case 817u: goto L_08ADB6E4;
    case 818u: goto L_08ADB6E8;
    case 819u: goto L_08ADB6EC;
    case 820u: goto L_08ADB6F4;
    case 821u: goto L_08ADB700;
    case 822u: goto L_08ADB708;
    case 823u: goto L_08ADB70C;
    case 824u: goto L_08ADB71C;
    case 825u: goto L_08ADB72C;
    case 826u: goto L_08ADB734;
    case 827u: goto L_08ADB73C;
    case 828u: goto L_08ADB748;
    case 829u: goto L_08ADB750;
    case 830u: goto L_08ADB758;
    case 831u: goto L_08ADB760;
    case 832u: goto L_08ADB770;
    case 833u: goto L_08ADB778;
    case 834u: goto L_08ADB780;
    case 835u: goto L_08ADB788;
    case 836u: goto L_08ADB794;
    case 837u: goto L_08ADB7B0;
    case 838u: goto L_08ADB7B4;
    case 839u: goto L_08ADB7B8;
    case 840u: goto L_08ADB7C0;
    case 841u: goto L_08ADB7CC;
    case 842u: goto L_08ADB7D4;
    case 843u: goto L_08ADB7D8;
    case 844u: goto L_08ADB7E8;
    case 845u: goto L_08ADB7F8;
    case 846u: goto L_08ADB800;
    case 847u: goto L_08ADB808;
    case 848u: goto L_08ADB810;
    case 849u: goto L_08ADB818;
    case 850u: goto L_08ADB824;
    case 851u: goto L_08ADB82C;
    case 852u: goto L_08ADB830;
    case 853u: goto L_08ADB85C;
    case 854u: goto L_08ADB868;
    case 855u: goto L_08ADB870;
    case 856u: goto L_08ADB874;
    case 857u: goto L_08ADB87C;
    case 858u: goto L_08ADB888;
    case 859u: goto L_08ADB890;
    case 860u: goto L_08ADB8A0;
    case 861u: goto L_08ADB8A8;
    case 862u: goto L_08ADB8B0;
    case 863u: goto L_08ADB8C0;
    case 864u: goto L_08ADB8D8;
    case 865u: goto L_08ADB8EC;
    case 866u: goto L_08ADB914;
    case 867u: goto L_08ADB91C;
    case 868u: goto L_08ADB934;
    case 869u: goto L_08ADB94C;
    case 870u: goto L_08ADB960;
    case 871u: goto L_08ADB968;
    case 872u: goto L_08ADB970;
    case 873u: goto L_08ADB978;
    case 874u: goto L_08ADB97C;
    case 875u: goto L_08ADB998;
    case 876u: goto L_08ADB9B4;
    case 877u: goto L_08ADB9B8;
    case 878u: goto L_08ADB9BC;
    case 879u: goto L_08ADB9C4;
    case 880u: goto L_08ADB9CC;
    case 881u: goto L_08ADB9DC;
    case 882u: goto L_08ADB9F8;
    case 883u: goto L_08ADBA00;
    case 884u: goto L_08ADBA08;
    case 885u: goto L_08ADBA10;
    case 886u: goto L_08ADBA20;
    case 887u: goto L_08ADBA28;
    case 888u: goto L_08ADBA30;
    case 889u: goto L_08ADBA40;
    case 890u: goto L_08ADBA78;
    case 891u: goto L_08ADBA84;
    case 892u: goto L_08ADBA8C;
    case 893u: goto L_08ADBACC;
    case 894u: goto L_08ADBAE0;
    case 895u: goto L_08ADBAEC;
    case 896u: goto L_08ADBAF4;
    case 897u: goto L_08ADBAFC;
    case 898u: goto L_08ADBB30;
    case 899u: goto L_08ADBB40;
    case 900u: goto L_08ADBB50;
    case 901u: goto L_08ADBB54;
    case 902u: goto L_08ADBB58;
    case 903u: goto L_08ADBB68;
    case 904u: goto L_08ADBB74;
    case 905u: goto L_08ADBB7C;
    case 906u: goto L_08ADBB88;
    case 907u: goto L_08ADBB98;
    case 908u: goto L_08ADBBA8;
    case 909u: goto L_08ADBBB8;
    case 910u: goto L_08ADBBBC;
    case 911u: goto L_08ADBBC0;
    case 912u: goto L_08ADBBD0;
    case 913u: goto L_08ADBBD8;
    case 914u: goto L_08ADBBE0;
    case 915u: goto L_08ADBBE8;
    case 916u: goto L_08ADBBF0;
    case 917u: goto L_08ADBBF8;
    case 918u: goto L_08ADBC44;
    case 919u: goto L_08ADBC4C;
    case 920u: goto L_08ADBC8C;
    case 921u: goto L_08ADBC9C;
    case 922u: goto L_08ADBCB0;
    case 923u: goto L_08ADBCB8;
    case 924u: goto L_08ADBCC0;
    case 925u: goto L_08ADBCC8;
    case 926u: goto L_08ADBCD4;
    case 927u: goto L_08ADBCE0;
    case 928u: goto L_08ADBCE8;
    case 929u: goto L_08ADBCEC;
    case 930u: goto L_08ADBCF4;
    case 931u: goto L_08ADBD24;
    case 932u: goto L_08ADBD30;
    case 933u: goto L_08ADBD40;
    case 934u: goto L_08ADBD48;
    case 935u: goto L_08ADBD6C;
    case 936u: goto L_08ADBD74;
    case 937u: goto L_08ADBD80;
    case 938u: goto L_08ADBD88;
    case 939u: goto L_08ADBD8C;
    case 940u: goto L_08ADBD94;
    case 941u: goto L_08ADBD98;
    case 942u: goto L_08ADBDA8;
    case 943u: goto L_08ADBDC8;
    case 944u: goto L_08ADBDCC;
    case 945u: goto L_08ADBDFC;
    case 946u: goto L_08ADBE28;
    case 947u: goto L_08ADBE30;
    case 948u: goto L_08ADBE40;
    case 949u: goto L_08ADBE98;
    case 950u: goto L_08ADBE9C;
    case 951u: goto L_08ADBEAC;
    case 952u: goto L_08ADBEB4;
    case 953u: goto L_08ADBEBC;
    case 954u: goto L_08ADBEC4;
    case 955u: goto L_08ADBECC;
    case 956u: goto L_08ADBED4;
    case 957u: goto L_08ADBEFC;
    case 958u: goto L_08ADBF04;
    case 959u: goto L_08ADBF0C;
    case 960u: goto L_08ADBF10;
    case 961u: goto L_08ADBF18;
    case 962u: goto L_08ADBF28;
    case 963u: goto L_08ADBF30;
    case 964u: goto L_08ADBF34;
    case 965u: goto L_08ADBF3C;
    case 966u: goto L_08ADBF44;
    case 967u: goto L_08ADBF54;
    case 968u: goto L_08ADBF5C;
    case 969u: goto L_08ADBF68;
    case 970u: goto L_08ADBF74;
    case 971u: goto L_08ADBF78;
    case 972u: goto L_08ADBF80;
    case 973u: goto L_08ADBFA8;
    case 974u: goto L_08ADBFB0;
    case 975u: goto L_08ADBFCC;
    case 976u: goto L_08ADBFF8;
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
L_08AD8000:
    aot_gpr_31 = (0x08AD8008u);
    aot_gpr_5 = (0u | 193u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8008u) goto L_08AD8008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8008:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD801C;
      }
      goto L_08AD8010;
    }
L_08AD8010:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD801Cu);
    aot_gpr_5 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD801Cu) goto L_08AD801C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD801C:
    aot_gpr_31 = (0x08AD8024u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8024u) goto L_08AD8024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8024:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD8088;
      }
      goto L_08AD802C;
    }
L_08AD802C:
    aot_gpr_31 = (0x08AD8034u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8034u) goto L_08AD8034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8034:
    aot_gpr_31 = (0x08AD803Cu);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 1029u, 0x08AB3FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD803Cu) goto L_08AD803C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD803C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD8088;
      }
      goto L_08AD8044;
    }
L_08AD8044:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-344));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 246u);
    aot_gpr_31 = (0x08AD8058u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8058u) goto L_08AD8058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8058:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-336));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 218u);
    aot_gpr_31 = (0x08AD806Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD806Cu) goto L_08AD806C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD806C:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-324));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 11u);
    aot_gpr_31 = (0x08AD8080u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8080u) goto L_08AD8080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8080:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD80D0;
      }
      goto L_08AD8088;
    }
L_08AD8088:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD8094u);
    aot_gpr_5 = (0u | 218u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8094u) goto L_08AD8094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8094:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD80A0u);
    aot_gpr_5 = (0u | 246u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD80A0u) goto L_08AD80A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD80A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD80ACu);
    aot_gpr_5 = (0u | 218u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD80ACu) goto L_08AD80AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD80AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08AD80D0;
      }
      goto L_08AD80B4;
    }
L_08AD80B4:
    aot_gpr_31 = (0x08AD80BCu);
    aot_gpr_5 = (0u | 246u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD80BCu) goto L_08AD80BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD80BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD80D0;
      }
      goto L_08AD80C4;
    }
L_08AD80C4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD80D0u);
    aot_gpr_5 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD80D0u) goto L_08AD80D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD80D0:
    aot_gpr_31 = (0x08AD80D8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD80D8u) goto L_08AD80D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD80D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD8114;
      }
      goto L_08AD80E0;
    }
L_08AD80E0:
    aot_gpr_31 = (0x08AD80E8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD80E8u) goto L_08AD80E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD80E8:
    aot_gpr_31 = (0x08AD80F0u);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 1u, 0x08AB4000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD80F0u) goto L_08AD80F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD80F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
      if (branch_taken) {
          goto L_08AD8114;
      }
      goto L_08AD80F8;
    }
L_08AD80F8:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-316));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 261u);
    aot_gpr_31 = (0x08AD810Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD810Cu) goto L_08AD810C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD810C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8120;
      }
      goto L_08AD8114;
    }
L_08AD8114:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD8120u);
    aot_gpr_5 = (0u | 261u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8120u) goto L_08AD8120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8120:
    aot_gpr_31 = (0x08AD8128u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8128u) goto L_08AD8128;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8128:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD81D0;
      }
      goto L_08AD8130;
    }
L_08AD8130:
    aot_gpr_31 = (0x08AD8138u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8138u) goto L_08AD8138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8138:
    aot_gpr_31 = (0x08AD8140u);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 1009u, 0x08AB3F00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8140u) goto L_08AD8140;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD81D0;
      }
      goto L_08AD8148;
    }
L_08AD8148:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD8154u);
    aot_gpr_5 = (0u | 117u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8154u) goto L_08AD8154;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8154:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD8160u);
    aot_gpr_5 = (0u | 118u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8160u) goto L_08AD8160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8160:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 204u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08AD8174u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8174u) goto L_08AD8174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8174:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11816)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD81F4;
      }
      goto L_08AD8180;
    }
L_08AD8180:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5472)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD81C8;
      }
      goto L_08AD818C;
    }
L_08AD818C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD81C8;
      }
      goto L_08AD8194;
    }
L_08AD8194:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-304));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 117u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08AD81ACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD81ACu) goto L_08AD81AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD81AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 118u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08AD81C0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD81C0u) goto L_08AD81C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD81C0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD81F4;
      }
      goto L_08AD81C8;
    }
L_08AD81C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD81F4;
      }
      goto L_08AD81D0;
    }
L_08AD81D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD81DCu);
    aot_gpr_5 = (0u | 204u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD81DCu) goto L_08AD81DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD81DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD81E8u);
    aot_gpr_5 = (0u | 117u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD81E8u) goto L_08AD81E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD81E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD81F4u);
    aot_gpr_5 = (0u | 118u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD81F4u) goto L_08AD81F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD81F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD8214;
      }
      goto L_08AD8200;
    }
L_08AD8200:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-408)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08AD821C;
      }
      goto L_08AD820C;
    }
L_08AD820C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD835C;
      }
      goto L_08AD8214;
    }
L_08AD8214:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8364;
      }
      goto L_08AD821C;
    }
L_08AD821C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD8364;
      }
      goto L_08AD8230;
    }
L_08AD8230:
    aot_gpr_31 = (0x08AD8238u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8238u) goto L_08AD8238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8238:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08AD8248u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8248u) goto L_08AD8248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8248:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5428)));
    ctx.gpr[20] = (2280u << 16u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(11952));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    goto L_08AD826C;
L_08AD826C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08AD82BC;
      }
      goto L_08AD8278;
    }
L_08AD8278:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
      if (branch_taken) {
          goto L_08AD82BC;
      }
      goto L_08AD8288;
    }
L_08AD8288:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AD829C;
      }
      goto L_08AD8290;
    }
L_08AD8290:
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) > 0;
      if (branch_taken) {
          goto L_08AD82B4;
      }
      goto L_08AD829C;
    }
L_08AD829C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_08AD82BC;
      }
      goto L_08AD82A4;
    }
L_08AD82A4:
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(18)));
    ctx.gpr[11] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
      if (branch_taken) {
          goto L_08AD82BC;
      }
      goto L_08AD82B4;
    }
L_08AD82B4:
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    goto L_08AD82BC;
L_08AD82BC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_5) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD826C;
      }
      goto L_08AD82D4;
    }
L_08AD82D4:
    aot_gpr_31 = (0x08AD82DCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 450u, 0x08B41DB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD82DCu) goto L_08AD82DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD82DC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD82ECu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD82ECu) goto L_08AD82EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD82EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD834C;
      }
      goto L_08AD82F4;
    }
L_08AD82F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
      if (branch_taken) {
          goto L_08AD8318;
      }
      goto L_08AD8308;
    }
L_08AD8308:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08AD8318;
L_08AD8318:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(630))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (ctx.gpr[17] << (aot_gpr_5 & 31u));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD834C;
      }
      goto L_08AD8330;
    }
L_08AD8330:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-296));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AD8344u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8344u) goto L_08AD8344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8344:
    aot_gpr_4 = (0u | 350u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-408), aot_gpr_4);
    goto L_08AD834C;
L_08AD834C:
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AD8364;
      }
      goto L_08AD835C;
    }
L_08AD835C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-408), aot_gpr_4);
    goto L_08AD8364;
L_08AD8364:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AD8384:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AD83CC;
      }
      goto L_08AD83BC;
    }
L_08AD83BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08AD83CC;
L_08AD83CC:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AD83DCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD83DCu) goto L_08AD83DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD83DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_gpr_4 << 11u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (109u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(25708));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (0u + aot_gpr_4);
      if (branch_taken) {
          goto L_08AD84D4;
      }
      goto L_08AD83FC;
    }
L_08AD83FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AD84D4;
      }
      goto L_08AD840C;
    }
L_08AD840C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AD84D4;
      }
      goto L_08AD841C;
    }
L_08AD841C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD84D4;
      }
      goto L_08AD8434;
    }
L_08AD8434:
    aot_gpr_4 = (109u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25708));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AD8454u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8454u) goto L_08AD8454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8454:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08AD8478u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8478u) goto L_08AD8478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8478:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AD8490u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8490u) goto L_08AD8490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8490:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD84DC;
      }
      goto L_08AD84A4;
    }
L_08AD84A4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AD84B4u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD84B4u) goto L_08AD84B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD84B4:
    aot_gpr_5 = (2221u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AD84C8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12504));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD84C8u) goto L_08AD84C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD84C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD8524;
      }
      goto L_08AD84D4;
    }
L_08AD84D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD865C;
      }
      goto L_08AD84DC;
    }
L_08AD84DC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AD84ECu);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD84ECu) goto L_08AD84EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD84EC:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD8524;
      }
      goto L_08AD8500;
    }
L_08AD8500:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AD8510u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8510u) goto L_08AD8510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8510:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AD851Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 521u, 0x08AD30D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD851Cu) goto L_08AD851C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD851C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    goto L_08AD8524;
L_08AD8524:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AD8534u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8534u) goto L_08AD8534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8534:
    aot_gpr_31 = (0x08AD853Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 463u, 0x088DF79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD853Cu) goto L_08AD853C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD853C:
    aot_gpr_31 = (0x08AD8544u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 463u, 0x088DF79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8544u) goto L_08AD8544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8544:
    aot_gpr_31 = (0x08AD854Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 471u, 0x088DF818u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD854Cu) goto L_08AD854C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD854C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(72));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AD8564u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8564u) goto L_08AD8564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8564:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AD85AC;
      }
      goto L_08AD8570;
    }
L_08AD8570:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
        goto L_08AD8588;
    }
    goto L_08AD857C;
L_08AD857C:
    aot_gpr_31 = (0x08AD8584u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8584u) goto L_08AD8584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8584:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    goto L_08AD8588;
L_08AD8588:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(72));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AD85A0u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD85A0u) goto L_08AD85A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD85A0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AD85ACu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 695u, 0x0893EDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD85ACu) goto L_08AD85AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD85AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    ctx.gpr[8] = (aot_gpr_16 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AD8628;
      }
      goto L_08AD85CC;
    }
L_08AD85CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_6 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (aot_gpr_16 + aot_gpr_6);
      if (branch_taken) {
          goto L_08AD860C;
      }
      goto L_08AD85DC;
    }
L_08AD85DC:
    ctx.gpr[9] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08AD860C;
      }
      goto L_08AD85F0;
    }
L_08AD85F0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
      if (branch_taken) {
          goto L_08AD860C;
      }
      goto L_08AD8600;
    }
L_08AD8600:
    aot_gpr_6 = (ctx.gpr[7] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AD8610;
      }
      goto L_08AD860C;
    }
L_08AD860C:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
    goto L_08AD8610;
L_08AD8610:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08AD85CC;
      }
      goto L_08AD8628;
    }
L_08AD8628:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD8644u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8644u) goto L_08AD8644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8644:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD8658u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8658u) goto L_08AD8658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8658:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AD865C;
L_08AD865C:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
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
L_08AD867C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-528));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(476), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(480), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(444), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_run_words); }
    { const std::uint32_t aot_run_words[8]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(484), aot_run_words); }
    aot_gpr_31 = (0x08AD86CCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD86CCu) goto L_08AD86CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD86CC:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31984));
    aot_gpr_31 = (0x08AD86DCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(460), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD86DCu) goto L_08AD86DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD86DC:
    aot_gpr_4 = (ctx.gpr[2] < aot_gpr_16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(440), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD8730;
      }
      goto L_08AD86E8;
    }
L_08AD86E8:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (17056u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_6 = (16880u << 16u);
    ctx.gpr[7] = (0u | 49u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AD8738;
      }
      goto L_08AD8728;
    }
L_08AD8728:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[23]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD8740;
      }
      goto L_08AD8730;
    }
L_08AD8730:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8738;
    }
L_08AD8738:
    ctx.gpr[23] = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[23]) < 0 ? 1u : 0u);
    goto L_08AD8740;
L_08AD8740:
    if (aot_gpr_6 != 0u) {
    ctx.gpr[23] = (0u | 0u);
        goto L_08AD8748;
    }
    goto L_08AD8748;
L_08AD8748:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_5 = (16840u << 16u);
    aot_gpr_6 = (0u | 49u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08AD8774;
    }
    goto L_08AD8774;
L_08AD8774:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_6 = (0u | 0u);
        goto L_08AD8784;
    }
    goto L_08AD8784;
L_08AD8784:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AD8BAC;
      }
      goto L_08AD87A4;
    }
L_08AD87A4:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-10));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[21] = (aot_gpr_5 | 0u);
        goto L_08AD87C0;
    }
    goto L_08AD87C0;
L_08AD87C0:
    ctx.gpr[18] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08AD87D0;
    }
    goto L_08AD87D0;
L_08AD87D0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AD8818;
      }
      goto L_08AD87E0;
    }
L_08AD87E0:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(-10));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_08AD87F8;
    }
    goto L_08AD87F8;
L_08AD87F8:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[22] = (aot_gpr_4 | 0u);
        goto L_08AD8810;
    }
    goto L_08AD8810;
L_08AD8810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD8844;
      }
      goto L_08AD8818;
    }
L_08AD8818:
    aot_gpr_5 = (ctx.gpr[23] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 49 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(10));
    if (aot_gpr_6 != 0u) {
    ctx.gpr[22] = (aot_gpr_5 | 0u);
        goto L_08AD8830;
    }
    goto L_08AD8830;
L_08AD8830:
    ctx.gpr[19] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[19] = (aot_gpr_4 | 0u);
        goto L_08AD8840;
    }
    goto L_08AD8840;
L_08AD8840:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD8844;
L_08AD8844:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
      if (branch_taken) {
          goto L_08AD8914;
      }
      goto L_08AD884C;
    }
L_08AD884C:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_08AD8908;
      }
      goto L_08AD885C;
    }
L_08AD885C:
    aot_gpr_4 = (ctx.gpr[21] << 4u);
    aot_gpr_5 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    goto L_08AD887C;
L_08AD887C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_31 = (0x08AD8890u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8890u) goto L_08AD8890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8890:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8900;
      }
      goto L_08AD8898;
    }
L_08AD8898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08AD88B0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD88B0u) goto L_08AD88B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD88B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD88F8;
      }
      goto L_08AD88B8;
    }
L_08AD88B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08AD88D0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD88D0u) goto L_08AD88D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD88D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD88F0;
      }
      goto L_08AD88D8;
    }
L_08AD88D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(2800));
      if (branch_taken) {
          goto L_08AD887C;
      }
      goto L_08AD88E8;
    }
L_08AD88E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8908;
      }
      goto L_08AD88F0;
    }
L_08AD88F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD88F8;
    }
L_08AD88F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8900;
    }
L_08AD8900:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8908;
    }
L_08AD8908:
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
      if (branch_taken) {
          goto L_08AD884C;
      }
      goto L_08AD8914;
    }
L_08AD8914:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(460)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    goto L_08AD891C;
L_08AD891C:
    aot_gpr_31 = (0x08AD8924u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 439u, 0x08AD5914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8924u) goto L_08AD8924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8924:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD8960;
      }
      goto L_08AD892C;
    }
L_08AD892C:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AD893Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD893Cu) goto L_08AD893C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD893C:
    aot_gpr_31 = (0x08AD8944u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8944u) goto L_08AD8944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8944:
    aot_gpr_4 = (ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD8958;
      }
      goto L_08AD8950;
    }
L_08AD8950:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD891C;
      }
      goto L_08AD8958;
    }
L_08AD8958:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8960;
    }
L_08AD8960:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AD89A4;
      }
      goto L_08AD8970;
    }
L_08AD8970:
    aot_gpr_5 = (ctx.gpr[23] + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(10));
    if (aot_gpr_6 != 0u) {
    ctx.gpr[22] = (aot_gpr_5 | 0u);
        goto L_08AD898C;
    }
    goto L_08AD898C;
L_08AD898C:
    ctx.gpr[23] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[23] = (aot_gpr_4 | 0u);
        goto L_08AD899C;
    }
    goto L_08AD899C;
L_08AD899C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD89D4;
      }
      goto L_08AD89A4;
    }
L_08AD89A4:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[22] = (aot_gpr_4 | 0u);
        goto L_08AD89B8;
    }
    goto L_08AD89B8;
L_08AD89B8:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(-10));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[23] = (aot_gpr_4 | 0u);
        goto L_08AD89D0;
    }
    goto L_08AD89D0;
L_08AD89D0:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD89D4;
L_08AD89D4:
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
      if (branch_taken) {
          goto L_08AD8AA8;
      }
      goto L_08AD89E0;
    }
L_08AD89E0:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_08AD8A9C;
      }
      goto L_08AD89F0;
    }
L_08AD89F0:
    aot_gpr_4 = (ctx.gpr[21] << 4u);
    aot_gpr_5 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    goto L_08AD8A10;
L_08AD8A10:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_31 = (0x08AD8A24u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8A24u) goto L_08AD8A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8A24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8A94;
      }
      goto L_08AD8A2C;
    }
L_08AD8A2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08AD8A44u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8A44u) goto L_08AD8A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8A44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8A8C;
      }
      goto L_08AD8A4C;
    }
L_08AD8A4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08AD8A64u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8A64u) goto L_08AD8A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8A64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8A84;
      }
      goto L_08AD8A6C;
    }
L_08AD8A6C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(2800));
      if (branch_taken) {
          goto L_08AD8A10;
      }
      goto L_08AD8A7C;
    }
L_08AD8A7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8A9C;
      }
      goto L_08AD8A84;
    }
L_08AD8A84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8A8C;
    }
L_08AD8A8C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8A94;
    }
L_08AD8A94:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8A9C;
    }
L_08AD8A9C:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
      if (branch_taken) {
          goto L_08AD89E0;
      }
      goto L_08AD8AA8;
    }
L_08AD8AA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_31 = (0x08AD8AB4u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 862u, 0x08AD72E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8AB4u) goto L_08AD8AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8AB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8AD0;
      }
      goto L_08AD8ABC;
    }
L_08AD8ABC:
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
      if (branch_taken) {
          goto L_08AD8AD8;
      }
      goto L_08AD8AC8;
    }
L_08AD8AC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8BA4;
      }
      goto L_08AD8AD0;
    }
L_08AD8AD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8AD8;
    }
L_08AD8AD8:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
      if (branch_taken) {
          goto L_08AD8B98;
      }
      goto L_08AD8AEC;
    }
L_08AD8AEC:
    aot_gpr_4 = (ctx.gpr[21] << 4u);
    aot_gpr_5 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    goto L_08AD8B0C;
L_08AD8B0C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_31 = (0x08AD8B20u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8B20u) goto L_08AD8B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8B20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8B90;
      }
      goto L_08AD8B28;
    }
L_08AD8B28:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08AD8B40u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8B40u) goto L_08AD8B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8B40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8B88;
      }
      goto L_08AD8B48;
    }
L_08AD8B48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08AD8B60u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8B60u) goto L_08AD8B60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8B60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8B80;
      }
      goto L_08AD8B68;
    }
L_08AD8B68:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(2800));
      if (branch_taken) {
          goto L_08AD8B0C;
      }
      goto L_08AD8B78;
    }
L_08AD8B78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8B98;
      }
      goto L_08AD8B80;
    }
L_08AD8B80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8B88;
    }
L_08AD8B88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8B90;
    }
L_08AD8B90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8B98;
    }
L_08AD8B98:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
      if (branch_taken) {
          goto L_08AD8AD8;
      }
      goto L_08AD8BA4;
    }
L_08AD8BA4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8FE4;
      }
      goto L_08AD8BAC;
    }
L_08AD8BAC:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-10));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[23] = (aot_gpr_5 | 0u);
        goto L_08AD8BCC;
    }
    goto L_08AD8BCC;
L_08AD8BCC:
    ctx.gpr[18] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[18] = (aot_gpr_4 | 0u);
        goto L_08AD8BDC;
    }
    goto L_08AD8BDC;
L_08AD8BDC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AD8C28;
      }
      goto L_08AD8BEC;
    }
L_08AD8BEC:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-10));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[21] = (aot_gpr_4 | 0u);
        goto L_08AD8C04;
    }
    goto L_08AD8C04;
L_08AD8C04:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[30] = (aot_gpr_4 | 0u);
        goto L_08AD8C1C;
    }
    goto L_08AD8C1C;
L_08AD8C1C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD8C58;
      }
      goto L_08AD8C28;
    }
L_08AD8C28:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(456), aot_gpr_6);
    ctx.gpr[30] = (0u | 49u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 49 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[30] = (aot_gpr_5 | 0u);
        goto L_08AD8C44;
    }
    goto L_08AD8C44;
L_08AD8C44:
    ctx.gpr[21] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[21] = (aot_gpr_4 | 0u);
        goto L_08AD8C54;
    }
    goto L_08AD8C54;
L_08AD8C54:
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD8C58;
L_08AD8C58:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[30];
    aot_gpr_4 = (ctx.gpr[21] << 4u);
      if (branch_taken) {
          goto L_08AD8D34;
      }
      goto L_08AD8C64;
    }
L_08AD8C64:
    ctx.gpr[19] = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[22] << 4u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[22] + aot_gpr_5);
    ctx.gpr[19] = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[21]);
    goto L_08AD8C80;
L_08AD8C80:
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD8D28;
      }
      goto L_08AD8C90;
    }
L_08AD8C90:
    aot_gpr_16 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    goto L_08AD8C9C;
L_08AD8C9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_31 = (0x08AD8CB0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8CB0u) goto L_08AD8CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8CB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8D20;
      }
      goto L_08AD8CB8;
    }
L_08AD8CB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08AD8CD0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8CD0u) goto L_08AD8CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8CD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8D18;
      }
      goto L_08AD8CD8;
    }
L_08AD8CD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08AD8CF0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8CF0u) goto L_08AD8CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8CF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8D10;
      }
      goto L_08AD8CF8;
    }
L_08AD8CF8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AD8C9C;
      }
      goto L_08AD8D08;
    }
L_08AD8D08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8D28;
      }
      goto L_08AD8D10;
    }
L_08AD8D10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8D18;
    }
L_08AD8D18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8D20;
    }
L_08AD8D20:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8D28;
    }
L_08AD8D28:
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[30];
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AD8C80;
      }
      goto L_08AD8D34;
    }
L_08AD8D34:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(460)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    goto L_08AD8D3C;
L_08AD8D3C:
    aot_gpr_31 = (0x08AD8D44u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 439u, 0x08AD5914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8D44u) goto L_08AD8D44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8D44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD8D80;
      }
      goto L_08AD8D4C;
    }
L_08AD8D4C:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AD8D5Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8D5Cu) goto L_08AD8D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8D5C:
    aot_gpr_31 = (0x08AD8D64u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8D64u) goto L_08AD8D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8D64:
    aot_gpr_4 = (ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD8D78;
      }
      goto L_08AD8D70;
    }
L_08AD8D70:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8D3C;
      }
      goto L_08AD8D78;
    }
L_08AD8D78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8D80;
    }
L_08AD8D80:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08AD8DC8;
      }
      goto L_08AD8D90;
    }
L_08AD8D90:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    ctx.gpr[30] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[30] = (aot_gpr_5 | 0u);
        goto L_08AD8DAC;
    }
    goto L_08AD8DAC;
L_08AD8DAC:
    ctx.gpr[22] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[22] = (aot_gpr_4 | 0u);
        goto L_08AD8DBC;
    }
    goto L_08AD8DBC;
L_08AD8DBC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD8DFC;
      }
      goto L_08AD8DC8;
    }
L_08AD8DC8:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    ctx.gpr[30] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[30] = (aot_gpr_4 | 0u);
        goto L_08AD8DDC;
    }
    goto L_08AD8DDC;
L_08AD8DDC:
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(-10));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[22] = (aot_gpr_4 | 0u);
        goto L_08AD8DF4;
    }
    goto L_08AD8DF4;
L_08AD8DF4:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD8DFC;
L_08AD8DFC:
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[30];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), aot_gpr_4);
      if (branch_taken) {
          goto L_08AD8EE0;
      }
      goto L_08AD8E08;
    }
L_08AD8E08:
    aot_gpr_5 = (aot_gpr_4 << 4u);
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(448), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[22] << 4u);
    ctx.gpr[21] = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    ctx.gpr[19] = (aot_gpr_5 + ctx.gpr[19]);
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[21]);
    goto L_08AD8E2C;
L_08AD8E2C:
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD8ED4;
      }
      goto L_08AD8E3C;
    }
L_08AD8E3C:
    aot_gpr_16 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    goto L_08AD8E48;
L_08AD8E48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_31 = (0x08AD8E5Cu);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8E5Cu) goto L_08AD8E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8E5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8ECC;
      }
      goto L_08AD8E64;
    }
L_08AD8E64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08AD8E7Cu);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8E7Cu) goto L_08AD8E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8E7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8EC4;
      }
      goto L_08AD8E84;
    }
L_08AD8E84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08AD8E9Cu);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8E9Cu) goto L_08AD8E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8E9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8EBC;
      }
      goto L_08AD8EA4;
    }
L_08AD8EA4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AD8E48;
      }
      goto L_08AD8EB4;
    }
L_08AD8EB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8ED4;
      }
      goto L_08AD8EBC;
    }
L_08AD8EBC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8EC4;
    }
L_08AD8EC4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8ECC;
    }
L_08AD8ECC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8ED4;
    }
L_08AD8ED4:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[30];
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AD8E2C;
      }
      goto L_08AD8EE0;
    }
L_08AD8EE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_31 = (0x08AD8EECu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 862u, 0x08AD72E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8EECu) goto L_08AD8EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8EEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8F0C;
      }
      goto L_08AD8EF4;
    }
L_08AD8EF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[30];
    aot_gpr_5 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_08AD8F14;
      }
      goto L_08AD8F04;
    }
L_08AD8F04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8FE4;
      }
      goto L_08AD8F0C;
    }
L_08AD8F0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8F14;
    }
L_08AD8F14:
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[22] << 4u);
    ctx.gpr[21] = (ctx.gpr[22] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    ctx.gpr[19] = (aot_gpr_5 + ctx.gpr[19]);
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[21]);
    goto L_08AD8F30;
L_08AD8F30:
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD8FD8;
      }
      goto L_08AD8F40;
    }
L_08AD8F40:
    aot_gpr_16 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    goto L_08AD8F4C;
L_08AD8F4C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_16);
    aot_gpr_31 = (0x08AD8F60u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8F60u) goto L_08AD8F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8F60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8FD0;
      }
      goto L_08AD8F68;
    }
L_08AD8F68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08AD8F80u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8F80u) goto L_08AD8F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8F80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8FC8;
      }
      goto L_08AD8F88;
    }
L_08AD8F88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_gpr_31 = (0x08AD8FA0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8FA0u) goto L_08AD8FA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8FA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD8FC0;
      }
      goto L_08AD8FA8;
    }
L_08AD8FA8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AD8F4C;
      }
      goto L_08AD8FB8;
    }
L_08AD8FB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8FD8;
      }
      goto L_08AD8FC0;
    }
L_08AD8FC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8FC8;
    }
L_08AD8FC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8FD0;
    }
L_08AD8FD0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8FD8;
    }
L_08AD8FD8:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[30];
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AD8F30;
      }
      goto L_08AD8FE4;
    }
L_08AD8FE4:
    aot_gpr_31 = (0x08AD8FECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(460)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD8FECu) goto L_08AD8FEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD8FEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_4 = (ctx.gpr[2] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD902C;
      }
      goto L_08AD8FFC;
    }
L_08AD8FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_31 = (0x08AD9008u);
    aot_gpr_5 = (0u | 131u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 382u, 0x08AD5658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9008u) goto L_08AD9008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9008:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD9018;
      }
      goto L_08AD9010;
    }
L_08AD9010:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD902C;
      }
      goto L_08AD9018;
    }
L_08AD9018:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_31 = (0x08AD9024u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9024u) goto L_08AD9024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9024:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD8FE4;
      }
      goto L_08AD902C;
    }
L_08AD902C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_31 = (0x08AD9038u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9038u) goto L_08AD9038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9038:
    aot_gpr_31 = (0x08AD9040u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(460)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9040u) goto L_08AD9040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9040:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_4 = (ctx.gpr[2] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD9080;
      }
      goto L_08AD9050;
    }
L_08AD9050:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_31 = (0x08AD905Cu);
    aot_gpr_5 = (0u | 131u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 382u, 0x08AD5658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD905Cu) goto L_08AD905C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD905C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD906C;
      }
      goto L_08AD9064;
    }
L_08AD9064:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD9080;
      }
      goto L_08AD906C;
    }
L_08AD906C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_31 = (0x08AD9078u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9078u) goto L_08AD9078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9078:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD9038;
      }
      goto L_08AD9080;
    }
L_08AD9080:
    aot_gpr_31 = (0x08AD9088u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(460)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9088u) goto L_08AD9088;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9088:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_4 = (ctx.gpr[2] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD933C;
      }
      goto L_08AD9098;
    }
L_08AD9098:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    goto L_08AD90B0;
L_08AD90B0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD90B8;
    }
L_08AD90B8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD90C0;
    }
L_08AD90C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
      if (branch_taken) {
          goto L_08AD90D8;
      }
      goto L_08AD90C8;
    }
L_08AD90C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08AD90E0;
    }
    goto L_08AD90D8;
L_08AD90D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9100;
      }
      goto L_08AD90E0;
    }
L_08AD90E0:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08AD90FC;
    }
    goto L_08AD90F4;
L_08AD90F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9100;
      }
      goto L_08AD90FC;
    }
L_08AD90FC:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[22]);
    goto L_08AD9100;
L_08AD9100:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08AD9118;
      }
      goto L_08AD9108;
    }
L_08AD9108:
    aot_gpr_31 = (0x08AD9110u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9110u) goto L_08AD9110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9110:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08AD9120;
      }
      goto L_08AD9118;
    }
L_08AD9118:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AD91B0;
      }
      goto L_08AD9120;
    }
L_08AD9120:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_31 = (0x08AD9130u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9130u) goto L_08AD9130;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9130:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    aot_gpr_4 = (aot_gpr_4 & 131u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD91AC;
      }
      goto L_08AD9140;
    }
L_08AD9140:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_08AD9174;
      }
      goto L_08AD9150;
    }
L_08AD9150:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08AD9164;
      }
      goto L_08AD915C;
    }
L_08AD915C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD9174;
      }
      goto L_08AD9164;
    }
L_08AD9164:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD9150;
      }
      goto L_08AD9174;
    }
L_08AD9174:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08AD9188;
      }
      goto L_08AD917C;
    }
L_08AD917C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(224), 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08AD9188;
L_08AD9188:
    aot_gpr_31 = (0x08AD9190u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9190u) goto L_08AD9190;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9190:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_08AD91A4;
      }
      goto L_08AD9198;
    }
L_08AD9198:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(224), aot_gpr_4);
      if (branch_taken) {
          goto L_08AD91AC;
      }
      goto L_08AD91A4;
    }
L_08AD91A4:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(224), aot_gpr_4);
    goto L_08AD91AC;
L_08AD91AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_08AD91B0;
L_08AD91B0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(3344));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD90B0;
      }
      goto L_08AD91C0;
    }
L_08AD91C0:
    aot_gpr_31 = (0x08AD91C8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(460)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD91C8u) goto L_08AD91C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD91C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_4 = (ctx.gpr[2] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD933C;
      }
      goto L_08AD91D8;
    }
L_08AD91D8:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (0u | 10000u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[22] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AD9230;
      }
      goto L_08AD91F0;
    }
L_08AD91F0:
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_08AD91F4;
L_08AD91F4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08AD9208;
      }
      goto L_08AD9200;
    }
L_08AD9200:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD9220;
      }
      goto L_08AD9208;
    }
L_08AD9208:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(224)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
      if (branch_taken) {
          goto L_08AD9220;
      }
      goto L_08AD9218;
    }
L_08AD9218:
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (aot_gpr_5 | 0u);
    goto L_08AD9220;
L_08AD9220:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD91F4;
      }
      goto L_08AD9230;
    }
L_08AD9230:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08AD9240;
      }
      goto L_08AD9238;
    }
L_08AD9238:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD933C;
      }
      goto L_08AD9240;
    }
L_08AD9240:
    ctx.gpr[22] = (ctx.gpr[22] << 2u);
    ctx.gpr[22] = (aot_gpr_29 + ctx.gpr[22]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AD925Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD925Cu) goto L_08AD925C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD925C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD9268u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 541u, 0x08AD6020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9268u) goto L_08AD9268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9268:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD92FC;
      }
      goto L_08AD927C;
    }
L_08AD927C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
      if (branch_taken) {
          goto L_08AD9294;
      }
      goto L_08AD9284;
    }
L_08AD9284:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08AD929C;
    }
    goto L_08AD9294;
L_08AD9294:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD92BC;
      }
      goto L_08AD929C;
    }
L_08AD929C:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08AD92B8;
    }
    goto L_08AD92B0;
L_08AD92B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD92BC;
      }
      goto L_08AD92B8;
    }
L_08AD92B8:
    aot_gpr_16 = (aot_gpr_16 + ctx.gpr[18]);
    goto L_08AD92BC;
L_08AD92BC:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AD92E8;
      }
      goto L_08AD92C4;
    }
L_08AD92C4:
    aot_gpr_31 = (0x08AD92CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD92CCu) goto L_08AD92CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD92CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD92E8;
      }
      goto L_08AD92D4;
    }
L_08AD92D4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08AD92E8;
      }
      goto L_08AD92E0;
    }
L_08AD92E0:
    aot_gpr_31 = (0x08AD92E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD92E8u) goto L_08AD92E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD92E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(3344));
      if (branch_taken) {
          goto L_08AD927C;
      }
      goto L_08AD92FC;
    }
L_08AD92FC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), aot_gpr_4);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_31 = (0x08AD9310u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 439u, 0x08AD5914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9310u) goto L_08AD9310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9310:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AD9328;
      }
      goto L_08AD9318;
    }
L_08AD9318:
    aot_gpr_31 = (0x08AD9320u);
    aot_gpr_5 = (0u | 131u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 382u, 0x08AD5658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9320u) goto L_08AD9320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD9334;
      }
      goto L_08AD9328;
    }
L_08AD9328:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_31 = (0x08AD9334u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9334u) goto L_08AD9334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9334:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD933C;
    }
L_08AD933C:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(452), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AD9344;
L_08AD9344:
    aot_gpr_31 = (0x08AD934Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(460)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD934Cu) goto L_08AD934C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD934C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_4 = (ctx.gpr[2] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD935C;
    }
L_08AD935C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(452)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD9368;
    }
L_08AD9368:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(356));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(436));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD938C;
      }
      goto L_08AD937C;
    }
L_08AD937C:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08AD9380;
L_08AD9380:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    if (aot_gpr_4 != aot_gpr_6) {
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
        goto L_08AD9380;
    }
    goto L_08AD938C;
L_08AD938C:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    ctx.gpr[30] = (0u | 10000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), aot_gpr_4);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (aot_gpr_29 | 0u);
    goto L_08AD93A4;
L_08AD93A4:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AD93BC;
      }
      goto L_08AD93B4;
    }
L_08AD93B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD93BC;
    }
L_08AD93BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD93D0;
      }
      goto L_08AD93C8;
    }
L_08AD93C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD93D0;
    }
L_08AD93D0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AD93E0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD93E0u) goto L_08AD93E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD93E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD93E8;
    }
L_08AD93E8:
    aot_gpr_31 = (0x08AD93F0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD93F0u) goto L_08AD93F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD93F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    aot_gpr_4 = (aot_gpr_4 & 131u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD9400;
    }
L_08AD9400:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9420;
      }
      goto L_08AD9410;
    }
L_08AD9410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08AD9420;
L_08AD9420:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
      if (branch_taken) {
          goto L_08AD94B4;
      }
      goto L_08AD9434;
    }
L_08AD9434:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AD9438;
L_08AD9438:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
      if (branch_taken) {
          goto L_08AD9450;
      }
      goto L_08AD9440;
    }
L_08AD9440:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08AD9458;
    }
    goto L_08AD9450;
L_08AD9450:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9478;
      }
      goto L_08AD9458;
    }
L_08AD9458:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AD9474;
    }
    goto L_08AD946C;
L_08AD946C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9478;
      }
      goto L_08AD9474;
    }
L_08AD9474:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    goto L_08AD9478;
L_08AD9478:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD94A0;
      }
      goto L_08AD9480;
    }
L_08AD9480:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08AD94A0;
      }
      goto L_08AD948C;
    }
L_08AD948C:
    aot_gpr_31 = (0x08AD9494u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9494u) goto L_08AD9494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9494:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD94A0;
      }
      goto L_08AD949C;
    }
L_08AD949C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5));
    goto L_08AD94A0;
L_08AD94A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08AD9438;
      }
      goto L_08AD94B4;
    }
L_08AD94B4:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD94C0;
    }
L_08AD94C0:
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), ctx.gpr[21]);
    goto L_08AD94C8;
L_08AD94C8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD93A4;
      }
      goto L_08AD94DC;
    }
L_08AD94DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(436)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AD94F8;
      }
      goto L_08AD94EC;
    }
L_08AD94EC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(452), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AD9614;
      }
      goto L_08AD94F8;
    }
L_08AD94F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    ctx.gpr[22] = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[22]);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD95C8;
      }
      goto L_08AD951C;
    }
L_08AD951C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
      if (branch_taken) {
          goto L_08AD9534;
      }
      goto L_08AD9524;
    }
L_08AD9524:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08AD953C;
    }
    goto L_08AD9534;
L_08AD9534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD955C;
      }
      goto L_08AD953C;
    }
L_08AD953C:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AD9558;
    }
    goto L_08AD9550;
L_08AD9550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD955C;
      }
      goto L_08AD9558;
    }
L_08AD9558:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    goto L_08AD955C;
L_08AD955C:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08AD95B4;
      }
      goto L_08AD9568;
    }
L_08AD9568:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
      if (branch_taken) {
          goto L_08AD95B4;
      }
      goto L_08AD9574;
    }
L_08AD9574:
    aot_gpr_31 = (0x08AD957Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD957Cu) goto L_08AD957C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD957C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD95B4;
      }
      goto L_08AD9584;
    }
L_08AD9584:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD9590u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9590u) goto L_08AD9590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9590:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AD95B4;
      }
      goto L_08AD9598;
    }
L_08AD9598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08AD95B4u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD95B4u) goto L_08AD95B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD95B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08AD951C;
      }
      goto L_08AD95C8;
    }
L_08AD95C8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(440)));
    aot_gpr_31 = (0x08AD95D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 503u, 0x08AD5DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD95D4u) goto L_08AD95D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD95D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08AD95EC;
      }
      goto L_08AD95DC;
    }
L_08AD95DC:
    aot_gpr_31 = (0x08AD95E4u);
    aot_gpr_5 = (0u | 131u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0180_entry, 180u, 382u, 0x08AD5658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD95E4u) goto L_08AD95E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD95E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08AD9600;
      }
      goto L_08AD95EC;
    }
L_08AD95EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(444)));
    aot_gpr_31 = (0x08AD95F8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD95F8u) goto L_08AD95F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD95F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD9614;
      }
      goto L_08AD9600;
    }
L_08AD9600:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_29 + ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(356), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD938C;
      }
      goto L_08AD9614;
    }
L_08AD9614:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD9344;
      }
      goto L_08AD961C;
    }
L_08AD961C:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AD9658:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AD9678u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
    goto L_08ADA1AC;
L_08AD9678:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AD9684:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AD96A0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 510u, 0x0881EEC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD96A0u) goto L_08AD96A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD96A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 & 1024u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 & 512u);
      if (branch_taken) {
          goto L_08AD96FC;
      }
      goto L_08AD96B8;
    }
L_08AD96B8:
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD96FC;
      }
      goto L_08AD96C8;
    }
L_08AD96C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD96FC;
      }
      goto L_08AD96D4;
    }
L_08AD96D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD96E0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890BE50, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD96E0u) goto L_08AD96E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD96E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(248));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08AD96FCu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD96FCu) goto L_08AD96FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD96FC:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
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
L_08AD9718:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AD9720:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-280)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-280), aot_gpr_4);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (aot_gpr_5 & 255u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_31 = (0x08AD9774u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 727u, 0x0881FF54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9774u) goto L_08AD9774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9774:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AD9794u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 55u, 0x08820384u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9794u) goto L_08AD9794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9794:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (ctx.gpr[19] << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD97E0;
      }
      goto L_08AD97C0;
    }
L_08AD97C0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AD97D8u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 4u, 0x0882001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD97D8u) goto L_08AD97D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD97D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD97FC;
      }
      goto L_08AD97E0;
    }
L_08AD97E0:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AD97F8u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 4u, 0x0882001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD97F8u) goto L_08AD97F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD97F8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08AD97FC;
L_08AD97FC:
    aot_gpr_31 = (0x08AD9804u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08AD9C78;
L_08AD9804:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_5 & 992u);
    aot_gpr_6 = (aot_gpr_6 >> 5u);
    aot_gpr_31 = (0x08AD9830u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9830u) goto L_08AD9830;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9830:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AD984Cu);
    ctx.gpr[9] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 115u, 0x08820850u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD984Cu) goto L_08AD984C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD984C:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD98B0;
      }
      goto L_08AD9860;
    }
L_08AD9860:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AD98B0;
      }
      goto L_08AD987C;
    }
L_08AD987C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(232));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AD9894u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9894u) goto L_08AD9894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9894:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08AD98B0u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD98B0u) goto L_08AD98B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD98B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    aot_gpr_31 = (0x08AD98BCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 388u, 0x088715BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD98BCu) goto L_08AD98BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD98BC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AD98E0u);
    ctx.gpr[10] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 468u, 0x0881EB44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD98E0u) goto L_08AD98E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD98E0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08AD98ECu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 203u, 0x08820E28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD98ECu) goto L_08AD98EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD98EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-280)));
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-280), aot_gpr_4);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AD9924:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_6 << 6u);
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AD99C0;
      }
      goto L_08AD9944;
    }
L_08AD9944:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 ^ 6u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 7u);
      if (branch_taken) {
          goto L_08AD996C;
      }
      goto L_08AD9968;
    }
L_08AD9968:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08AD996C;
L_08AD996C:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AD99C0;
      }
      goto L_08AD9974;
    }
L_08AD9974:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD99A8;
      }
      goto L_08AD997C;
    }
L_08AD997C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9998;
      }
      goto L_08AD998C;
    }
L_08AD998C:
    aot_gpr_6 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08AD99A0;
      }
      goto L_08AD9998;
    }
L_08AD9998:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08AD99A0;
L_08AD99A0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD99C0;
      }
      goto L_08AD99A8;
    }
L_08AD99A8:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AD99B8;
      }
      goto L_08AD99B4;
    }
L_08AD99B4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD99B8;
L_08AD99B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD99C4;
      }
      goto L_08AD99C0;
    }
L_08AD99C0:
    ctx.gpr[2] = (0u | 5u);
    goto L_08AD99C4;
L_08AD99C4:
    jump_target = aot_gpr_31;
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AD99CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AD99E8u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_08AD9C78;
L_08AD99E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_6 = (aot_gpr_5 & 992u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_6 >> 5u);
    aot_gpr_31 = (0x08AD9A24u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9A24u) goto L_08AD9A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9A24:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_31 = (0x08AD9A40u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 115u, 0x08820850u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9A40u) goto L_08AD9A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9A40:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    aot_gpr_31 = (0x08AD9A54u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 388u, 0x088715BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9A54u) goto L_08AD9A54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9A54:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
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
L_08AD9A6C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_6 & 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (ctx.gpr[18] << 6u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08AD9AA4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9AA4u) goto L_08AD9AA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9AA4:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AD9ABCu);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 12u, 0x088200E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9ABCu) goto L_08AD9ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9ABC:
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
L_08AD9AD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AD9B08u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9B08u) goto L_08AD9B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9B08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_5 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD9BB0;
      }
      goto L_08AD9B20;
    }
L_08AD9B20:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AD9B50;
      }
      goto L_08AD9B2C;
    }
L_08AD9B2C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 6u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08AD9B50;
      }
      goto L_08AD9B48;
    }
L_08AD9B48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AD9B54;
      }
      goto L_08AD9B50;
    }
L_08AD9B50:
    aot_gpr_6 = (0u | 0u);
    goto L_08AD9B54;
L_08AD9B54:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08AD9B90;
      }
      goto L_08AD9B60;
    }
L_08AD9B60:
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AD9B70;
      }
      goto L_08AD9B68;
    }
L_08AD9B68:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08AD9B88;
      }
      goto L_08AD9B70;
    }
L_08AD9B70:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AD9BB0;
      }
      goto L_08AD9B80;
    }
L_08AD9B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 13u);
      if (branch_taken) {
          goto L_08AD9BF0;
      }
      goto L_08AD9B88;
    }
L_08AD9B88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 13u);
      if (branch_taken) {
          goto L_08AD9BF0;
      }
      goto L_08AD9B90;
    }
L_08AD9B90:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AD9BB0;
      }
      goto L_08AD9B98;
    }
L_08AD9B98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          goto L_08AD9BB0;
      }
      goto L_08AD9BA8;
    }
L_08AD9BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 13u);
      if (branch_taken) {
          goto L_08AD9BF0;
      }
      goto L_08AD9BB0;
    }
L_08AD9BB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (30u << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(16))))));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 17u);
    aot_gpr_5 = (aot_gpr_5 & 15u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD9BDC;
      }
      goto L_08AD9BD4;
    }
L_08AD9BD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 15u);
      if (branch_taken) {
          goto L_08AD9BF0;
      }
      goto L_08AD9BDC;
    }
L_08AD9BDC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AD9BF0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 576u, 0x088230BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9BF0u) goto L_08AD9BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9BF0:
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
L_08AD9C0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AD9C20u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 424u, 0x0881E6E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9C20u) goto L_08AD9C20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9C20:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(43))))));
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32440));
    aot_gpr_4 = (aot_gpr_4 | 15u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_6 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(43))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-241));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AD9C78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AD9C8Cu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 726u, 0x0881FF4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9C8Cu) goto L_08AD9C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9C8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (65535u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32767));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_31 = (0x08AD9CB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 664u, 0x0881FA54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9CB4u) goto L_08AD9CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9CB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD9D08;
      }
      goto L_08AD9CC0;
    }
L_08AD9CC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AD9D08;
      }
      goto L_08AD9CDC;
    }
L_08AD9CDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(216));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AD9CF4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9CF4u) goto L_08AD9CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9CF4:
    aot_gpr_31 = (0x08AD9CFCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 563u, 0x0881F274u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9CFCu) goto L_08AD9CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9CFC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AD9D18;
      }
      goto L_08AD9D08;
    }
L_08AD9D08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_08AD9D18;
L_08AD9D18:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AD9D28:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AD9D38u);
    goto L_08AD9C78;
L_08AD9D38:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AD9D44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[10] = (17278u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_gpr_5 = (aot_gpr_6 & 255u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_31 = (0x08AD9DA4u);
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9DA4u) goto L_08AD9DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9DA4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(13)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(-2)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(-1)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[7] = (ctx.gpr[7] & 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD9E14;
      }
      goto L_08AD9DD8;
    }
L_08AD9DD8:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[7] = (ctx.gpr[7] & 32u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08AD9E00;
      }
      goto L_08AD9DEC;
    }
L_08AD9DEC:
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 & 16u);
      if (branch_taken) {
          goto L_08AD9E48;
      }
      goto L_08AD9E00;
    }
L_08AD9E00:
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 & 16u);
      if (branch_taken) {
          goto L_08AD9E48;
      }
      goto L_08AD9E14;
    }
L_08AD9E14:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AD9E3C;
      }
      goto L_08AD9E28;
    }
L_08AD9E28:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_4 & 16u);
      if (branch_taken) {
          goto L_08AD9E48;
      }
      goto L_08AD9E3C;
    }
L_08AD9E3C:
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    aot_gpr_5 = (aot_gpr_4 & 16u);
    goto L_08AD9E48;
L_08AD9E48:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AD9E70;
      }
      goto L_08AD9E50;
    }
L_08AD9E50:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 8u);
      if (branch_taken) {
          goto L_08AD9EC8;
      }
      goto L_08AD9E68;
    }
L_08AD9E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9EC8;
      }
      goto L_08AD9E70;
    }
L_08AD9E70:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AD9E7Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9E7Cu) goto L_08AD9E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AD9E98u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9E98u) goto L_08AD9E98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9E98:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    aot_gpr_4 = (aot_gpr_4 & 8u);
      if (branch_taken) {
          goto L_08AD9EC8;
      }
      goto L_08AD9EA4;
    }
L_08AD9EA4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 254u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[7] - aot_gpr_5);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AD9EC8;
      }
      goto L_08AD9EC4;
    }
L_08AD9EC4:
    ctx.gpr[23] = (0u | 0u);
    goto L_08AD9EC8;
L_08AD9EC8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AD9ED8;
      }
      goto L_08AD9ED0;
    }
L_08AD9ED0:
    { const bool branch_taken = ctx.gpr[23] != 0u;
      if (branch_taken) {
          goto L_08AD9EE0;
      }
      goto L_08AD9ED8;
    }
L_08AD9ED8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD9EFC;
      }
      goto L_08AD9EE0;
    }
L_08AD9EE0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(254));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AD9EFC;
L_08AD9EFC:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AD9F2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_31 = (0x08AD9F74u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 620u, 0x0881F7A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9F74u) goto L_08AD9F74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9F74:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AD9F80u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9F80u) goto L_08AD9F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9F80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08AD9F8Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 426u, 0x0881E7E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9F8Cu) goto L_08AD9F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9F8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AD9FA4u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9FA4u) goto L_08AD9FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9FA4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08AD9FB4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9FB4u) goto L_08AD9FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_31 = (0x08AD9FD4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9FD4u) goto L_08AD9FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9FD4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    jump_target = ctx.gpr[11];
    aot_gpr_31 = (0x08AD9FF8u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AD9FF8u) goto L_08AD9FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AD9FF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08ADA010u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA010u) goto L_08ADA010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA010:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
      if (branch_taken) {
          goto L_08ADA020;
      }
      goto L_08ADA018;
    }
L_08ADA018:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08ADA020;
L_08ADA020:
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADA044:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08ADA060u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA060u) goto L_08ADA060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA060:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(13)));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08ADA198;
      }
      goto L_08ADA078;
    }
L_08ADA078:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    goto L_08ADA088;
L_08ADA088:
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
      if (branch_taken) {
          goto L_08ADA184;
      }
      goto L_08ADA098;
    }
L_08ADA098:
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[9] << (ctx.gpr[11] & 31u));
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADA0BC;
      }
      goto L_08ADA0B4;
    }
L_08ADA0B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08ADA0E8;
      }
      goto L_08ADA0BC;
    }
L_08ADA0BC:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
      if (branch_taken) {
          goto L_08ADA0D4;
      }
      goto L_08ADA0CC;
    }
L_08ADA0CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08ADA0E8;
      }
      goto L_08ADA0D4;
    }
L_08ADA0D4:
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (ctx.gpr[3] & ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_08ADA0E8;
      }
      goto L_08ADA0E4;
    }
L_08ADA0E4:
    ctx.gpr[2] = (ctx.gpr[9] | 0u);
    goto L_08ADA0E8;
L_08ADA0E8:
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (ctx.gpr[10] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_08ADA184;
      }
      goto L_08ADA0F8;
    }
L_08ADA0F8:
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[10]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16384)));
    jump_target = ctx.gpr[1];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADA110:
    aot_gpr_4 = (ctx.gpr[2] ^ 1u);
    aot_gpr_5 = (ctx.gpr[2] ^ 5u);
    ctx.gpr[2] = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | aot_gpr_4);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA128;
    }
L_08ADA128:
    aot_gpr_4 = (ctx.gpr[2] ^ 7u);
    aot_gpr_5 = (ctx.gpr[2] ^ 5u);
    ctx.gpr[2] = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | aot_gpr_4);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA140;
    }
L_08ADA140:
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA14C;
    }
L_08ADA14C:
    ctx.gpr[2] = (ctx.gpr[2] ^ 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA158;
    }
L_08ADA158:
    ctx.gpr[2] = (ctx.gpr[2] ^ 5u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA164;
    }
L_08ADA164:
    ctx.gpr[2] = (ctx.gpr[2] ^ 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA170;
    }
L_08ADA170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA178;
    }
L_08ADA178:
    ctx.gpr[2] = (ctx.gpr[2] & 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA184;
    }
L_08ADA184:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ADA088;
      }
      goto L_08ADA198;
    }
L_08ADA198:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ADA19C;
L_08ADA19C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADA1AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_31 = (0x08ADA1DCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 388u, 0x088715BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA1DCu) goto L_08ADA1DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA1DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    aot_gpr_5 = (ctx.gpr[2] << 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 - ctx.gpr[2]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08ADA214u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA214u) goto L_08ADA214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA214:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08ADA220u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 330u, 0x0881E160u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA220u) goto L_08ADA220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA220:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (49024u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_6 = (ctx.gpr[2] << 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
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
L_08ADA2B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_31 = (0x08ADA2F8u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 438u, 0x0881E8FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA2F8u) goto L_08ADA2F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA2F8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ADA308u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 545u, 0x0881F0FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA308u) goto L_08ADA308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA308:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 << 6u);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADA368;
      }
      goto L_08ADA338;
    }
L_08ADA338:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADA368;
      }
      goto L_08ADA350;
    }
L_08ADA350:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 & 512u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADA37C;
      }
      goto L_08ADA368;
    }
L_08ADA368:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (0u | 255u);
      if (branch_taken) {
          goto L_08ADA398;
      }
      goto L_08ADA374;
    }
L_08ADA374:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADA458;
      }
      goto L_08ADA37C;
    }
L_08ADA37C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ADA390u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 613u, 0x0881F6CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA390u) goto L_08ADA390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA390:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADA598;
      }
      goto L_08ADA398;
    }
L_08ADA398:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADA3D0;
      }
      goto L_08ADA3B8;
    }
L_08ADA3B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ADA3C8u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA3C8u) goto L_08ADA3C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA3C8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADA3E0;
      }
      goto L_08ADA3D0;
    }
L_08ADA3D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
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
    goto L_08ADA3E0;
L_08ADA3E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08ADA3FCu);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA3FCu) goto L_08ADA3FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA3FC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ADA410u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 87u, 0x088205F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA410u) goto L_08ADA410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA410:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(43))))));
    aot_gpr_4 = (aot_gpr_4 & 240u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADA450;
      }
      goto L_08ADA420;
    }
L_08ADA420:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(43))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-241));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_4 & 240u);
    aot_gpr_5 = (aot_gpr_5 >> 4u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & 15u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08ADA450;
L_08ADA450:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADA480;
      }
      goto L_08ADA458;
    }
L_08ADA458:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08ADA470;
      }
      goto L_08ADA468;
    }
L_08ADA468:
    aot_gpr_31 = (0x08ADA470u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08909B60, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_16, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA470u) goto L_08ADA470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA470:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(43))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-241));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08ADA480;
L_08ADA480:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(42))))));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_5 & 992u);
    aot_gpr_6 = (aot_gpr_6 >> 5u);
    aot_gpr_31 = (0x08ADA498u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA498u) goto L_08ADA498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA498:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ADA4A8u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08ADA5C4;
L_08ADA4A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08ADA540;
      }
      goto L_08ADA4B4;
    }
L_08ADA4B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(41)));
    aot_gpr_5 = (17278u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08ADA540;
      }
      goto L_08ADA4DC;
    }
L_08ADA4DC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08ADA540;
      }
      goto L_08ADA4E8;
    }
L_08ADA4E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08ADA50Cu);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA50Cu) goto L_08ADA50C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA50C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08ADA51C;
      }
      goto L_08ADA514;
    }
L_08ADA514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADA540;
      }
      goto L_08ADA51C;
    }
L_08ADA51C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(43))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-241));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08ADA540u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_08ADA5C4;
L_08ADA540:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08ADA584;
      }
      goto L_08ADA548;
    }
L_08ADA548:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08ADA56Cu);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA56Cu) goto L_08ADA56C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA56C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08ADA57C;
      }
      goto L_08ADA574;
    }
L_08ADA574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADA584;
      }
      goto L_08ADA57C;
    }
L_08ADA57C:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08ADA584;
L_08ADA584:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08ADA598;
      }
      goto L_08ADA58C;
    }
L_08ADA58C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08ADA598u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_08AD9F2C;
L_08ADA598:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADA5C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-656));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(620), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(604), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(42)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(596), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(636), ctx.gpr[30]);
    ctx.gpr[30] = (aot_gpr_4 << 6u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_6 << 4u);
    aot_gpr_6 = (aot_gpr_4 - aot_gpr_6);
    ctx.gpr[30] = (aot_gpr_5 + ctx.gpr[30]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    aot_gpr_5 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(588), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(608), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(624), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), aot_gpr_31);
    aot_gpr_31 = (0x08ADA644u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 418u, 0x088717A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA644u) goto L_08ADA644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA644:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 255u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(584), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08ADA6B0;
      }
      goto L_08ADA658;
    }
L_08ADA658:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(43))))));
    aot_gpr_4 = (aot_gpr_4 & 240u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADA680;
      }
      goto L_08ADA668;
    }
L_08ADA668:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(43))))));
    aot_gpr_4 = (aot_gpr_4 & 15u);
    if (ctx.gpr[7] == aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
        goto L_08ADA688;
    }
    goto L_08ADA678;
L_08ADA678:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADA6B0;
      }
      goto L_08ADA680;
    }
L_08ADA680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADADA4;
      }
      goto L_08ADA688;
    }
L_08ADA688:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08ADA6A8u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA6A8u) goto L_08ADA6A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA6A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08ADA704;
      }
      goto L_08ADA6B0;
    }
L_08ADA6B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(576), aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08ADA6C0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 545u, 0x0881F0FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA6C0u) goto L_08ADA6C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA6C0:
    aot_gpr_4 = (17278u << 16u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08ADA6E8u);
    aot_gpr_16 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 344u, 0x0881E21Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA6E8u) goto L_08ADA6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA6E8:
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(580), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(592), static_cast<std::uint8_t>(aot_gpr_16));
      if (branch_taken) {
          goto L_08ADA70C;
      }
      goto L_08ADA6FC;
    }
L_08ADA6FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADAAD0;
      }
      goto L_08ADA704;
    }
L_08ADA704:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADADA4;
      }
      goto L_08ADA70C;
    }
L_08ADA70C:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08ADA718u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA718u) goto L_08ADA718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA718:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(576)));
      if (branch_taken) {
          goto L_08ADA77C;
      }
      goto L_08ADA724;
    }
L_08ADA724:
    aot_gpr_6 = (ctx.gpr[23] & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(596)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08ADA738u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    goto L_08ADA044;
L_08ADA738:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08ADA7A8;
      }
      goto L_08ADA744;
    }
L_08ADA744:
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[9] = (aot_gpr_29 + aot_gpr_4);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(5));
    aot_gpr_6 = (ctx.gpr[23] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(6));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08ADA774u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    goto L_08AD9D44;
L_08ADA774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ADA7A8;
      }
      goto L_08ADA77C;
    }
L_08ADA77C:
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(592)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (0u | 254u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[22] = (0u | 1u);
    goto L_08ADA7A8;
L_08ADA7A8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(576), aot_gpr_16);
      if (branch_taken) {
          goto L_08ADAABC;
      }
      goto L_08ADA7B0;
    }
L_08ADA7B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(30)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADA7D4;
      }
      goto L_08ADA7D0;
    }
L_08ADA7D0:
    ctx.gpr[22] = (0u | 0u);
    goto L_08ADA7D4;
L_08ADA7D4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(576), aot_gpr_16);
      if (branch_taken) {
          goto L_08ADA810;
      }
      goto L_08ADA7DC;
    }
L_08ADA7DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(576), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(56));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08ADA804u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA804u) goto L_08ADA804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA804:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08ADA810;
      }
      goto L_08ADA80C;
    }
L_08ADA80C:
    ctx.gpr[22] = (0u | 0u);
    goto L_08ADA810;
L_08ADA810:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08ADA8F8;
      }
      goto L_08ADA818;
    }
L_08ADA818:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADA8F8;
      }
      goto L_08ADA82C;
    }
L_08ADA82C:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    aot_gpr_31 = (0x08ADA848u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA848u) goto L_08ADA848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA848:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(13)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08ADA8E4;
      }
      goto L_08ADA85C;
    }
L_08ADA85C:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08ADA8D4;
      }
      goto L_08ADA870;
    }
L_08ADA870:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_gpr_5 << 2u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08ADA8B8;
      }
      goto L_08ADA894;
    }
L_08ADA894:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_gpr_5 << 2u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08ADA8C0;
      }
      goto L_08ADA8B8;
    }
L_08ADA8B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADA8D4;
      }
      goto L_08ADA8C0;
    }
L_08ADA8C0:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08ADA870;
      }
      goto L_08ADA8D4;
    }
L_08ADA8D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08ADA8E4;
      }
      goto L_08ADA8E0;
    }
L_08ADA8E0:
    ctx.gpr[22] = (0u | 0u);
    goto L_08ADA8E4;
L_08ADA8E4:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADA82C;
      }
      goto L_08ADA8F8;
    }
L_08ADA8F8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08ADAABC;
      }
      goto L_08ADA900;
    }
L_08ADA900:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(588)));
    aot_gpr_31 = (0x08ADA90Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 426u, 0x08871880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA90Cu) goto L_08ADA90C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA90C:
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADAAB0;
      }
      goto L_08ADA934;
    }
L_08ADA934:
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
    goto L_08ADA938;
L_08ADA938:
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(576)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08ADA958u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AD9A6C;
L_08ADA958:
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08ADA97Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AD9A6C;
L_08ADA97C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08ADAAA0;
      }
      goto L_08ADA988;
    }
L_08ADA988:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADA9DC;
      }
      goto L_08ADA9A4;
    }
L_08ADA9A4:
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    aot_gpr_31 = (0x08ADA9C0u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA9C0u) goto L_08ADA9C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA9C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_08ADA9D4;
      }
      goto L_08ADA9CC;
    }
L_08ADA9CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADAA08;
      }
      goto L_08ADA9D4;
    }
L_08ADA9D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_08ADAA08;
      }
      goto L_08ADA9DC;
    }
L_08ADA9DC:
    aot_gpr_4 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    aot_gpr_31 = (0x08ADA9F8u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADA9F8u) goto L_08ADA9F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADA9F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
      if (branch_taken) {
          goto L_08ADAA08;
      }
      goto L_08ADAA04;
    }
L_08ADAA04:
    aot_gpr_16 = (0u | 1u);
    goto L_08ADAA08;
L_08ADAA08:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08ADAA54;
      }
      goto L_08ADAA10;
    }
L_08ADAA10:
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(5)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADAA54;
      }
      goto L_08ADAA50;
    }
L_08ADAA50:
    ctx.gpr[19] = (0u | 1u);
    goto L_08ADAA54;
L_08ADAA54:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08ADAA98;
      }
      goto L_08ADAA5C;
    }
L_08ADAA5C:
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[18] + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08ADAA98;
L_08ADAA98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADAAB0;
      }
      goto L_08ADAAA0;
    }
L_08ADAAA0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08ADA938;
      }
      goto L_08ADAAB0;
    }
L_08ADAAB0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08ADAABC;
      }
      goto L_08ADAAB8;
    }
L_08ADAAB8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08ADAABC;
L_08ADAABC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(580)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADA70C;
      }
      goto L_08ADAAD0;
    }
L_08ADAAD0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08ADAB20;
      }
      goto L_08ADAAD8;
    }
L_08ADAAD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(584)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(43))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(43))))));
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 | 240u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADAB34;
      }
      goto L_08ADAB18;
    }
L_08ADAB18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADAC50;
      }
      goto L_08ADAB20;
    }
L_08ADAB20:
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADADA4;
      }
      goto L_08ADAB34;
    }
L_08ADAB34:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 255u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
      if (branch_taken) {
          goto L_08ADABA4;
      }
      goto L_08ADAB54;
    }
L_08ADAB54:
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADAB80;
      }
      goto L_08ADAB5C;
    }
L_08ADAB5C:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADAB80;
      }
      goto L_08ADAB64;
    }
L_08ADAB64:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08ADABE0;
      }
      goto L_08ADAB80;
    }
L_08ADAB80:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (14979u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 | 4719u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08ADABE0;
      }
      goto L_08ADABA4;
    }
L_08ADABA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(588)));
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(584)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08ADABE0;
L_08ADABE0:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    aot_gpr_31 = (0x08ADABFCu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADABFCu) goto L_08ADABFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADABFC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
      if (branch_taken) {
          goto L_08ADAC2C;
      }
      goto L_08ADAC0C;
    }
L_08ADAC0C:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (16576u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08ADAC2C;
L_08ADAC2C:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
      if (branch_taken) {
          goto L_08ADAB34;
      }
      goto L_08ADAC50;
    }
L_08ADAC50:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(aot_fpr_12)) && aot_fpr_20 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08ADAC6C;
      }
      goto L_08ADAC64;
    }
L_08ADAC64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADAD44;
      }
      goto L_08ADAC6C;
    }
L_08ADAC6C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ADACD8;
      }
      goto L_08ADAC7C;
    }
L_08ADAC7C:
    aot_gpr_5 = (17096u << 16u);
    goto L_08ADAC80;
L_08ADAC80:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_20;
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08ADACC8;
      }
      goto L_08ADACA8;
    }
L_08ADACA8:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(-12)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08ADACC8;
L_08ADACC8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (17096u << 16u);
      if (branch_taken) {
          goto L_08ADAC80;
      }
      goto L_08ADACD8;
    }
L_08ADACD8:
    aot_gpr_31 = (0x08ADACE0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADACE0u) goto L_08ADACE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADACE0:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_5 = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    aot_gpr_4 = (ctx.hi);
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
        goto L_08ADAD48;
    }
    goto L_08ADAD00;
L_08ADAD00:
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_29 + aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08ADAD34;
      }
      goto L_08ADAD2C;
    }
L_08ADAD2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
      if (branch_taken) {
          goto L_08ADAD48;
      }
      goto L_08ADAD34;
    }
L_08ADAD34:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08ADAD00;
      }
      goto L_08ADAD44;
    }
L_08ADAD44:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    goto L_08ADAD48;
L_08ADAD48:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
      if (branch_taken) {
          goto L_08ADAD74;
      }
      goto L_08ADAD68;
    }
L_08ADAD68:
    aot_gpr_4 = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08ADADA0;
      }
      goto L_08ADAD74;
    }
L_08ADAD74:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(592)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(5)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08ADADA0;
L_08ADADA0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ADADA4;
L_08ADADA4:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(600), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADADD8:
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADADFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (0u | 5000u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 200u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 246u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 275u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_gpr_4 = (0u | 30u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_4, aot_gpr_4, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_16 + static_cast<std::uint32_t>(92), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(104), 0u);
    aot_gpr_4 = (0u | 24u);
    aot_gpr_31 = (0x08ADAEACu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADAEACu) goto L_08ADAEAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADAEAC:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08ADAEC4;
      }
      goto L_08ADAEB8;
    }
L_08ADAEB8:
    aot_gpr_31 = (0x08ADAEC0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADAEC0u) goto L_08ADAEC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADAEC0:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_08ADAEC4;
L_08ADAEC4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(104), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(108), 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), 0u);
    aot_gpr_4 = (0u | 24u);
    aot_gpr_31 = (0x08ADAF14u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADAF14u) goto L_08ADAF14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADAF14:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08ADAF2C;
      }
      goto L_08ADAF20;
    }
L_08ADAF20:
    aot_gpr_31 = (0x08ADAF28u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADAF28u) goto L_08ADAF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADAF28:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_08ADAF2C;
L_08ADAF2C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(120), 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(124));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(160), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), 0u);
    aot_gpr_4 = (0u | 24u);
    aot_gpr_31 = (0x08ADAF94u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADAF94u) goto L_08ADAF94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADAF94:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ADAFAC;
      }
      goto L_08ADAFA0;
    }
L_08ADAFA0:
    aot_gpr_31 = (0x08ADAFA8u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADAFA8u) goto L_08ADAFA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADAFA8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08ADAFAC;
L_08ADAFAC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(164), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(168), 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(172));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08ADAFF0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0156_entry, 156u, 465u, 0x08A7620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADAFF0u) goto L_08ADAFF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADAFF0:
    aot_gpr_31 = (0x08ADAFF8u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(208));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 169u, 0x089414B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADAFF8u) goto L_08ADAFF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADAFF8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(224), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(236), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08ADB020u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB020u) goto L_08ADB020;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB020:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(252), ctx.gpr[17]);
        goto L_08ADB04C;
    }
    goto L_08ADB02C;
L_08ADB02C:
    aot_gpr_31 = (0x08ADB034u);
    aot_gpr_4 = (0u | 200u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB034u) goto L_08ADB034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB034:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_4 = (0u | 50u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(252), ctx.gpr[17]);
    goto L_08ADB04C;
L_08ADB04C:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADB068:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[7]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08ADB324;
      }
      goto L_08ADB094;
    }
L_08ADB094:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(164));
    ctx.gpr[20] = (aot_gpr_16 + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (aot_gpr_16 + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08ADB0C4;
      }
      goto L_08ADB0A8;
    }
L_08ADB0A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB0BC;
      }
      goto L_08ADB0B4;
    }
L_08ADB0B4:
    aot_gpr_31 = (0x08ADB0BCu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2E4, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB0BCu) goto L_08ADB0BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB0BC:
    aot_gpr_31 = (0x08ADB0C4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB0C4u) goto L_08ADB0C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB0C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08ADB0D0u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0160_entry, 160u, 585u, 0x08A87C3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB0D0u) goto L_08ADB0D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB0D0:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(208));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08ADB110;
      }
      goto L_08ADB0DC;
    }
L_08ADB0DC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(212));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ADB10C;
      }
      goto L_08ADB0E8;
    }
L_08ADB0E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB10C;
      }
      goto L_08ADB0F4;
    }
L_08ADB0F4:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(176));
        goto L_08ADB110;
    }
    goto L_08ADB0FC;
L_08ADB0FC:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(176));
        goto L_08ADB110;
    }
    goto L_08ADB104;
L_08ADB104:
    aot_gpr_31 = (0x08ADB10Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB10Cu) goto L_08ADB10C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB10C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(176));
    goto L_08ADB110;
L_08ADB110:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08ADB1B8;
      }
      goto L_08ADB118;
    }
L_08ADB118:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08ADB148;
      }
      goto L_08ADB120;
    }
L_08ADB120:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB148;
      }
      goto L_08ADB130;
    }
L_08ADB130:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB148;
      }
      goto L_08ADB138;
    }
L_08ADB138:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB148;
      }
      goto L_08ADB140;
    }
L_08ADB140:
    aot_gpr_31 = (0x08ADB148u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB148u) goto L_08ADB148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB148:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08ADB1B8;
      }
      goto L_08ADB150;
    }
L_08ADB150:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08ADB1B8;
      }
      goto L_08ADB158;
    }
L_08ADB158:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB19C;
      }
      goto L_08ADB164;
    }
L_08ADB164:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(180)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08ADB178u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 422u, 0x08B6DF1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB178u) goto L_08ADB178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB178:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(180)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(180)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(184), 0u);
    goto L_08ADB19C;
L_08ADB19C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08ADB1B8;
      }
      goto L_08ADB1A4;
    }
L_08ADB1A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB1B8;
      }
      goto L_08ADB1B0;
    }
L_08ADB1B0:
    aot_gpr_31 = (0x08ADB1B8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB1B8u) goto L_08ADB1B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB1B8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08ADB228;
      }
      goto L_08ADB1C0;
    }
L_08ADB1C0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08ADB228;
      }
      goto L_08ADB1C8;
    }
L_08ADB1C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB20C;
      }
      goto L_08ADB1D4;
    }
L_08ADB1D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08ADB1E8u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 250u, 0x08B714BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB1E8u) goto L_08ADB1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB1E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(168), 0u);
    goto L_08ADB20C;
L_08ADB20C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08ADB228;
      }
      goto L_08ADB214;
    }
L_08ADB214:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB228;
      }
      goto L_08ADB220;
    }
L_08ADB220:
    aot_gpr_31 = (0x08ADB228u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB228u) goto L_08ADB228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB228:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08ADB2A0;
      }
      goto L_08ADB230;
    }
L_08ADB230:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08ADB2A0;
      }
      goto L_08ADB238;
    }
L_08ADB238:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08ADB2A0;
      }
      goto L_08ADB240;
    }
L_08ADB240:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB284;
      }
      goto L_08ADB24C;
    }
L_08ADB24C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08ADB260u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 462u, 0x08B6AA64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB260u) goto L_08ADB260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB260:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(120), 0u);
    goto L_08ADB284;
L_08ADB284:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08ADB2A0;
      }
      goto L_08ADB28C;
    }
L_08ADB28C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB2A0;
      }
      goto L_08ADB298;
    }
L_08ADB298:
    aot_gpr_31 = (0x08ADB2A0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB2A0u) goto L_08ADB2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB2A0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08ADB314;
      }
      goto L_08ADB2A8;
    }
L_08ADB2A8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08ADB314;
      }
      goto L_08ADB2B0;
    }
L_08ADB2B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB2F4;
      }
      goto L_08ADB2BC;
    }
L_08ADB2BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08ADB2D0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 201u, 0x08B710D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB2D0u) goto L_08ADB2D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB2D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(108), 0u);
    goto L_08ADB2F4;
L_08ADB2F4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08ADB314;
      }
      goto L_08ADB2FC;
    }
L_08ADB2FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[17] & 1u);
        goto L_08ADB314;
    }
    goto L_08ADB308;
L_08ADB308:
    aot_gpr_31 = (0x08ADB310u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB310u) goto L_08ADB310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB310:
    aot_gpr_4 = (ctx.gpr[17] & 1u);
    goto L_08ADB314;
L_08ADB314:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB324;
      }
      goto L_08ADB31C;
    }
L_08ADB31C:
    aot_gpr_31 = (0x08ADB324u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB324u) goto L_08ADB324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB324:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADB348:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB384;
      }
      goto L_08ADB364;
    }
L_08ADB364:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08ADB388;
      }
      goto L_08ADB380;
    }
L_08ADB380:
    aot_gpr_4 = (0u | 1u);
    goto L_08ADB384;
L_08ADB384:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08ADB388;
L_08ADB388:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB390;
    }
L_08ADB390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADB3A8;
    }
    goto L_08ADB39C;
L_08ADB39C:
    aot_gpr_31 = (0x08ADB3A4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB3A4u) goto L_08ADB3A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB3A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADB3A8;
L_08ADB3A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB3C8;
      }
      goto L_08ADB3B8;
    }
L_08ADB3B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08ADB3D0;
      }
      goto L_08ADB3C8;
    }
L_08ADB3C8:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08ADB3D0;
L_08ADB3D0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB3D8;
    }
L_08ADB3D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB3E4;
    }
L_08ADB3E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB400;
    }
L_08ADB400:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB40C;
    }
L_08ADB40C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB424;
    }
L_08ADB424:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7684)));
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08ADB47C;
      }
      goto L_08ADB46C;
    }
L_08ADB46C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADB480;
      }
      goto L_08ADB474;
    }
L_08ADB474:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADB4B4;
      }
      goto L_08ADB47C;
    }
L_08ADB47C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08ADB480;
L_08ADB480:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(228)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(88))))));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_31 = (0x08ADB4B4u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 59u, 0x08A884A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB4B4u) goto L_08ADB4B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB4B4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADB4C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB508;
      }
      goto L_08ADB4E8;
    }
L_08ADB4E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08ADB50C;
      }
      goto L_08ADB504;
    }
L_08ADB504:
    aot_gpr_4 = (0u | 1u);
    goto L_08ADB508;
L_08ADB508:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08ADB50C;
L_08ADB50C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB514;
    }
L_08ADB514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADB52C;
    }
    goto L_08ADB520;
L_08ADB520:
    aot_gpr_31 = (0x08ADB528u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB528u) goto L_08ADB528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB528:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADB52C;
L_08ADB52C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB54C;
      }
      goto L_08ADB53C;
    }
L_08ADB53C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08ADB554;
      }
      goto L_08ADB54C;
    }
L_08ADB54C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08ADB554;
L_08ADB554:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB55C;
    }
L_08ADB55C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB568;
    }
L_08ADB568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB584;
    }
L_08ADB584:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB590;
    }
L_08ADB590:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(88));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(40))))));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ADB604;
      }
      goto L_08ADB5C8;
    }
L_08ADB5C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(236)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(228)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB614;
      }
      goto L_08ADB5FC;
    }
L_08ADB5FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADB61C;
      }
      goto L_08ADB604;
    }
L_08ADB604:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADB91C;
      }
      goto L_08ADB60C;
    }
L_08ADB60C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADB91C;
      }
      goto L_08ADB614;
    }
L_08ADB614:
    aot_gpr_31 = (0x08ADB61Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB61Cu) goto L_08ADB61C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB61C:
    aot_gpr_31 = (0x08ADB624u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 559u, 0x08A5306Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB624u) goto L_08ADB624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB624:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
      if (branch_taken) {
          goto L_08ADB6AC;
      }
      goto L_08ADB650;
    }
L_08ADB650:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08ADB660u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB660u) goto L_08ADB660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB660:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08ADB68C;
      }
      goto L_08ADB66C;
    }
L_08ADB66C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08ADB68Cu);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(96))))));
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB68Cu) goto L_08ADB68C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB68C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADB650;
      }
      goto L_08ADB6AC;
    }
L_08ADB6AC:
    aot_gpr_31 = (0x08ADB6B4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 565u, 0x08ADE16Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB6B4u) goto L_08ADB6B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB6B4:
    aot_gpr_31 = (0x08ADB6BCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 610u, 0x08ADE404u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB6BCu) goto L_08ADB6BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB6BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB6E8;
      }
      goto L_08ADB6C8;
    }
L_08ADB6C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08ADB6EC;
      }
      goto L_08ADB6E4;
    }
L_08ADB6E4:
    aot_gpr_4 = (0u | 1u);
    goto L_08ADB6E8;
L_08ADB6E8:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08ADB6EC;
L_08ADB6EC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB778;
      }
      goto L_08ADB6F4;
    }
L_08ADB6F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADB70C;
    }
    goto L_08ADB700;
L_08ADB700:
    aot_gpr_31 = (0x08ADB708u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB708u) goto L_08ADB708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB708:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADB70C;
L_08ADB70C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB72C;
      }
      goto L_08ADB71C;
    }
L_08ADB71C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08ADB734;
      }
      goto L_08ADB72C;
    }
L_08ADB72C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08ADB734;
L_08ADB734:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADB778;
      }
      goto L_08ADB73C;
    }
L_08ADB73C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB778;
      }
      goto L_08ADB748;
    }
L_08ADB748:
    aot_gpr_31 = (0x08ADB750u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(176));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0156_entry, 156u, 578u, 0x08A76CA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB750u) goto L_08ADB750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB750:
    aot_gpr_31 = (0x08ADB758u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(208));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 212u, 0x089417B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB758u) goto L_08ADB758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB758:
    aot_gpr_31 = (0x08ADB760u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 308u, 0x089754A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB760u) goto L_08ADB760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB760:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08ADB780;
      }
      goto L_08ADB770;
    }
L_08ADB770:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADB788;
      }
      goto L_08ADB778;
    }
L_08ADB778:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADB91C;
      }
      goto L_08ADB780;
    }
L_08ADB780:
    aot_gpr_31 = (0x08ADB788u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 126u, 0x08AE0790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB788u) goto L_08ADB788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB788:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB7B4;
      }
      goto L_08ADB794;
    }
L_08ADB794:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08ADB7B8;
      }
      goto L_08ADB7B0;
    }
L_08ADB7B0:
    aot_gpr_4 = (0u | 1u);
    goto L_08ADB7B4;
L_08ADB7B4:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08ADB7B8;
L_08ADB7B8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB808;
      }
      goto L_08ADB7C0;
    }
L_08ADB7C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADB7D8;
    }
    goto L_08ADB7CC;
L_08ADB7CC:
    aot_gpr_31 = (0x08ADB7D4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB7D4u) goto L_08ADB7D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB7D4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADB7D8;
L_08ADB7D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB7F8;
      }
      goto L_08ADB7E8;
    }
L_08ADB7E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08ADB800;
      }
      goto L_08ADB7F8;
    }
L_08ADB7F8:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08ADB800;
L_08ADB800:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB810;
      }
      goto L_08ADB808;
    }
L_08ADB808:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADB91C;
      }
      goto L_08ADB810;
    }
L_08ADB810:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(116));
    goto L_08ADB818;
L_08ADB818:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADB830;
    }
    goto L_08ADB824;
L_08ADB824:
    aot_gpr_31 = (0x08ADB82Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB82Cu) goto L_08ADB82C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB82C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADB830;
L_08ADB830:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (ctx.gpr[17] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB890;
      }
      goto L_08ADB85C;
    }
L_08ADB85C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADB874;
    }
    goto L_08ADB868;
L_08ADB868:
    aot_gpr_31 = (0x08ADB870u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB870u) goto L_08ADB870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB870:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADB874;
L_08ADB874:
    aot_gpr_31 = (0x08ADB87Cu);
    aot_gpr_5 = (ctx.gpr[17] & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB87Cu) goto L_08ADB87C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB87C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08ADB888u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 741u, 0x08933D7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB888u) goto L_08ADB888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADB818;
      }
      goto L_08ADB890;
    }
L_08ADB890:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08ADB8A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB8A0u) goto L_08ADB8A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB8A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08ADB8B0;
      }
      goto L_08ADB8A8;
    }
L_08ADB8A8:
    aot_gpr_31 = (0x08ADB8B0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 751u, 0x08933E38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB8B0u) goto L_08ADB8B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB8B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADB914;
      }
      goto L_08ADB8C0;
    }
L_08ADB8C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB914;
      }
      goto L_08ADB8D8;
    }
L_08ADB8D8:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
      if (branch_taken) {
          goto L_08ADB914;
      }
      goto L_08ADB8EC;
    }
L_08ADB8EC:
    aot_gpr_4 = (0u | 30u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10337)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08ADB914u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB914u) goto L_08ADB914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB914:
    aot_gpr_31 = (0x08ADB91Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 583u, 0x08A8AFE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB91Cu) goto L_08ADB91C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB91C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADB934:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ADB968;
      }
      goto L_08ADB94C;
    }
L_08ADB94C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB970;
      }
      goto L_08ADB960;
    }
L_08ADB960:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08ADB97C;
      }
      goto L_08ADB968;
    }
L_08ADB968:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADB9CC;
      }
      goto L_08ADB970;
    }
L_08ADB970:
    aot_gpr_31 = (0x08ADB978u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB978u) goto L_08ADB978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB978:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADB97C;
L_08ADB97C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(68));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB9B8;
      }
      goto L_08ADB998;
    }
L_08ADB998:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08ADB9BC;
      }
      goto L_08ADB9B4;
    }
L_08ADB9B4:
    aot_gpr_4 = (0u | 1u);
    goto L_08ADB9B8;
L_08ADB9B8:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08ADB9BC;
L_08ADB9BC:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADB9CC;
      }
      goto L_08ADB9C4;
    }
L_08ADB9C4:
    aot_gpr_31 = (0x08ADB9CCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 126u, 0x08AE0790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB9CCu) goto L_08ADB9CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB9CC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADB9DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08ADB9F8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 984u, 0x08ADFDB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADB9F8u) goto L_08ADB9F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADB9F8:
    aot_gpr_31 = (0x08ADBA00u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 600u, 0x08AD3634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBA00u) goto L_08ADBA00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBA00:
    aot_gpr_31 = (0x08ADBA08u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 575u, 0x08AD34BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBA08u) goto L_08ADBA08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBA08:
    aot_gpr_31 = (0x08ADBA10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 604u, 0x08AD3670u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBA10u) goto L_08ADBA10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBA10:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08ADBA20u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBA20u) goto L_08ADBA20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBA20:
    aot_gpr_31 = (0x08ADBA28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 898u, 0x08ADFA14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBA28u) goto L_08ADBA28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBA28:
    aot_gpr_31 = (0x08ADBA30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 517u, 0x08ADDF74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBA30u) goto L_08ADBA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBA30:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADBA40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-272));
    { const std::uint32_t aot_run_words[10]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[23] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ADBA8C;
      }
      goto L_08ADBA78;
    }
L_08ADBA78:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08ADBA84u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 126u, 0x08AE0790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBA84u) goto L_08ADBA84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBA84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADBDCC;
      }
      goto L_08ADBA8C;
    }
L_08ADBA8C:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (0u | 216u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10085)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (18766u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17999));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-21032));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08ADBACCu);
    aot_gpr_6 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBACCu) goto L_08ADBACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBACC:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(214));
    ctx.gpr[22] = (0u | 3u);
    ctx.gpr[20] = (0u | 0u);
    goto L_08ADBAE0;
L_08ADBAE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(260));
      if (branch_taken) {
          goto L_08ADBAFC;
      }
      goto L_08ADBAEC;
    }
L_08ADBAEC:
    aot_gpr_31 = (0x08ADBAF4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBAF4u) goto L_08ADBAF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBAF4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(260));
    goto L_08ADBAFC;
L_08ADBAFC:
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(10));
    aot_gpr_16 = (aot_gpr_16 + ctx.gpr[20]);
    aot_gpr_6 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(211), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(213), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADBB54;
      }
      goto L_08ADBB30;
    }
L_08ADBB30:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    aot_gpr_6 = (aot_gpr_6 & 255u);
        goto L_08ADBB58;
    }
    goto L_08ADBB40;
L_08ADBB40:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_6 = (aot_gpr_6 & 255u);
      if (branch_taken) {
          goto L_08ADBB58;
      }
      goto L_08ADBB50;
    }
L_08ADBB50:
    aot_gpr_6 = (0u | 1u);
    goto L_08ADBB54;
L_08ADBB54:
    aot_gpr_6 = (aot_gpr_6 & 255u);
    goto L_08ADBB58;
L_08ADBB58:
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08ADBC8C;
      }
      goto L_08ADBB68;
    }
L_08ADBB68:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08ADBB88;
      }
      goto L_08ADBB74;
    }
L_08ADBB74:
    aot_gpr_31 = (0x08ADBB7Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBB7Cu) goto L_08ADBB7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBB7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(260));
    aot_gpr_5 = (0u | 0u);
    goto L_08ADBB88;
L_08ADBB88:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08ADBBBC;
      }
      goto L_08ADBB98;
    }
L_08ADBB98:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    aot_gpr_4 = (aot_gpr_5 & 255u);
        goto L_08ADBBC0;
    }
    goto L_08ADBBA8;
L_08ADBBA8:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_4;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08ADBBC0;
      }
      goto L_08ADBBB8;
    }
L_08ADBBB8:
    aot_gpr_5 = (0u | 1u);
    goto L_08ADBBBC;
L_08ADBBBC:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08ADBBC0;
L_08ADBBC0:
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADBBD8;
      }
      goto L_08ADBBD0;
    }
L_08ADBBD0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08ADBBD8;
L_08ADBBD8:
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(12)));
        goto L_08ADBBF0;
    }
    goto L_08ADBBE0;
L_08ADBBE0:
    aot_gpr_31 = (0x08ADBBE8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBBE8u) goto L_08ADBBE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBBE8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    goto L_08ADBBF0;
L_08ADBBF0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08ADBC4C;
      }
      goto L_08ADBBF8;
    }
L_08ADBBF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(219), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(214), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(216), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(218), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(220), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08ADBC44u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 378u, 0x08A89B54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBC44u) goto L_08ADBC44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBC44:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08ADBC8C;
      }
      goto L_08ADBC4C;
    }
L_08ADBC4C:
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(18));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store_word_right(aot_gpr_4 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_direct_store_word_left(aot_gpr_4 + static_cast<std::uint32_t>(27), 0u);
    goto L_08ADBC8C;
L_08ADBC8C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08ADBAE0;
      }
      goto L_08ADBC9C;
    }
L_08ADBC9C:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[18] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08ADBCC0;
    }
    goto L_08ADBCB0;
L_08ADBCB0:
    aot_gpr_31 = (0x08ADBCB8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBCB8u) goto L_08ADBCB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBCB8:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08ADBCC0;
L_08ADBCC0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADBD74;
      }
      goto L_08ADBCC8;
    }
L_08ADBCC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08ADBCD4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 17u, 0x08A88164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBCD4u) goto L_08ADBCD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBCD4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_08ADBCEC;
      }
      goto L_08ADBCE0;
    }
L_08ADBCE0:
    aot_gpr_31 = (0x08ADBCE8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBCE8u) goto L_08ADBCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBCE8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADBCEC;
L_08ADBCEC:
    aot_gpr_31 = (0x08ADBCF4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 559u, 0x08A5306Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBCF4u) goto L_08ADBCF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBCF4:
    aot_gpr_16 = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ADBD6C;
      }
      goto L_08ADBD24;
    }
L_08ADBD24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ADBD40;
      }
      goto L_08ADBD30;
    }
L_08ADBD30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    goto L_08ADBD40;
L_08ADBD40:
    aot_gpr_31 = (0x08ADBD48u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBD48u) goto L_08ADBD48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBD48:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08ADBD24;
      }
      goto L_08ADBD6C;
    }
L_08ADBD6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08ADBD98;
      }
      goto L_08ADBD74;
    }
L_08ADBD74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADBD8C;
      }
      goto L_08ADBD80;
    }
L_08ADBD80:
    aot_gpr_31 = (0x08ADBD88u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBD88u) goto L_08ADBD88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBD88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADBD8C;
L_08ADBD8C:
    aot_gpr_31 = (0x08ADBD94u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 598u, 0x08A53344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBD94u) goto L_08ADBD94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBD94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    goto L_08ADBD98;
L_08ADBD98:
    aot_gpr_16 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08ADBDA8u);
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(116));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBDA8u) goto L_08ADBDA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBDA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10337)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08ADBDC8u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 139u, 0x08A88BC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBDC8u) goto L_08ADBDC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBDC8:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_08ADBDCC;
L_08ADBDCC:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08ADBDFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08ADBE30;
      }
      goto L_08ADBE28;
    }
L_08ADBE28:
    aot_gpr_31 = (0x08ADBE30u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBE30u) goto L_08ADBE30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBE30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08ADBE9C;
      }
      goto L_08ADBE40;
    }
L_08ADBE40:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(18));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_31 = (0x08ADBE98u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 417u, 0x08A89DCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBE98u) goto L_08ADBE98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBE98:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    goto L_08ADBE9C;
L_08ADBE9C:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_gpr_31 = (0x08ADBEACu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 59u, 0x08A884A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBEACu) goto L_08ADBEAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBEAC:
    aot_gpr_31 = (0x08ADBEB4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(100)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 583u, 0x08A8AFE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBEB4u) goto L_08ADBEB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBEB4:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADBEBC;
L_08ADBEBC:
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
        goto L_08ADBED4;
    }
    goto L_08ADBEC4;
L_08ADBEC4:
    aot_gpr_31 = (0x08ADBECCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBECCu) goto L_08ADBECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBECC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    goto L_08ADBED4;
L_08ADBED4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08ADBF74;
      }
      goto L_08ADBEFC;
    }
L_08ADBEFC:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADBF10;
      }
      goto L_08ADBF04;
    }
L_08ADBF04:
    aot_gpr_31 = (0x08ADBF0Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBF0Cu) goto L_08ADBF0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBF0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADBF10;
L_08ADBF10:
    aot_gpr_31 = (0x08ADBF18u);
    aot_gpr_5 = (ctx.gpr[18] & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBF18u) goto L_08ADBF18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBF18:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08ADBF34;
      }
      goto L_08ADBF28;
    }
L_08ADBF28:
    aot_gpr_31 = (0x08ADBF30u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBF30u) goto L_08ADBF30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBF30:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADBF34;
L_08ADBF34:
    aot_gpr_31 = (0x08ADBF3Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08ADBF3Cu) goto L_08ADBF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08ADBF3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08ADBF68;
      }
      goto L_08ADBF44;
    }
L_08ADBF44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), aot_gpr_4);
      if (branch_taken) {
          goto L_08ADBF5C;
      }
      goto L_08ADBF54;
    }
L_08ADBF54:
    aot_gpr_4 = (0u | 60u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), aot_gpr_4);
    goto L_08ADBF5C;
L_08ADBF5C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(233)));
      if (branch_taken) {
          goto L_08ADBF78;
      }
      goto L_08ADBF68;
    }
L_08ADBF68:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
      if (branch_taken) {
          goto L_08ADBEBC;
      }
      goto L_08ADBF74;
    }
L_08ADBF74:
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(233)));
    goto L_08ADBF78;
L_08ADBF78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08ADBFB0;
      }
      goto L_08ADBF80;
    }
L_08ADBF80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(240)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7684)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08ADBFB0;
      }
      goto L_08ADBFA8;
    }
L_08ADBFA8:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(233)));
    goto L_08ADBFB0;
L_08ADBFB0:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08ADBFCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    if (aot_gpr_6 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 2u, 0x08ADC00Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08ADBFF8;
L_08ADBFF8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.pc = 0x08ADC000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0181(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0181_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_181(Runtime &runtime) {
    runtime.register_generated_unit(181u, 0x08AD8000u, 16384u, &recomp_unit_0181, &recomp_unit_0181_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08AD8000u, &recomp_unit_0181, "recomp_unit_0181",
                                          kEntryMasks_recomp_unit_0181, 64u);
}
} // namespace psprecomp
