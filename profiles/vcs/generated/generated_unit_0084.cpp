#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include "vcs_tier2_superblocks.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0084[64] = {
    0x9515050520140001ull, 0x8A5C882AA5C8AA4Aull, 0x14B914AAA699525Cull, 0x1820008350042010ull,
    0x0200A8A208910452ull, 0x0000002010410410ull, 0x1401410080410205ull, 0x0004328043411482ull,
    0x0020080010800010ull, 0x4514514402900000ull, 0xA508544021158151ull, 0x58B1006204314C68ull,
    0x00200000100298B2ull, 0x0410000022402A00ull, 0xA010AA000208A801ull, 0x34215201020290A0ull,
    0x0001010200100104ull, 0x4800012601002040ull, 0x005458150114A896ull, 0xA4080A50228510C1ull,
    0x0900050020028062ull, 0xA0000024900AA040ull, 0x0030208A20000006ull, 0x240020000A420009ull,
    0x5000100010000008ull, 0x0000000100000001ull, 0x104A000000400000ull, 0x00A8001000200000ull,
    0x0000000000400000ull, 0xA409455144140800ull, 0x50010A4880400954ull, 0x44522A545400B454ull,
    0x1485400100094000ull, 0x801482A481019414ull, 0x2804008524400000ull, 0x480100A2002C244Aull,
    0x5510800455461505ull, 0x5528882154810895ull, 0x4150801104065551ull, 0x8401402E4D10020Aull,
    0x5521904104152A24ull, 0x212121209241020Aull, 0x52800115144A2001ull, 0x224040C12C524855ull,
    0x1004444808008022ull, 0x344C000405052124ull, 0x3044208088040208ull, 0x2A8A012E40050104ull,
    0x42A90041952A8A95ull, 0x954554A8A9516292ull, 0x040000000000041Aull, 0x4000148400120181ull,
    0x0856A88129422800ull, 0x0080100000000001ull, 0x9200400801002004ull, 0x0882400108288010ull,
    0x4240005210444143ull, 0x90002020104220A1ull, 0x20190A09410520A0ull, 0x0960480808514105ull,
    0x04281205000000E1ull, 0x2080500020042110ull, 0x455C8B1210855200ull, 0x909524882028822Eull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0084[64] = {
    1u, 16u, 42u, 70u, 81u, 96u, 102u, 113u, 127u, 132u, 145u, 164u, 184u, 194u, 202u, 215u,
    230u, 236u, 245u, 264u, 281u, 291u, 302u, 311u, 320u, 325u, 327u, 332u, 337u, 338u, 354u, 368u,
    389u, 399u, 415u, 424u, 438u, 457u, 477u, 494u, 510u, 529u, 544u, 559u, 578u, 588u, 603u, 614u,
    630u, 652u, 678u, 683u, 693u, 710u, 713u, 721u, 731u, 745u, 756u, 771u, 786u, 797u, 806u, 826u,
};

// PSPRECOMP_V813_HOT_DENSE_DISPATCH: one indexed load on the measured hot units;
// masks remain for exact registration/correctness proof.
alignas(64) static constexpr std::uint16_t kEntryIdsV813_recomp_unit_0084[4096] = {
    1u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 2u, 0u, 3u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 4u, 0u, 0u,
    5u, 0u, 6u, 0u, 0u, 0u, 0u, 0u, 7u, 0u, 8u, 0u, 0u, 0u, 0u, 0u, 9u, 0u, 10u, 0u, 11u, 0u, 0u, 0u, 12u, 0u, 13u, 0u, 14u, 0u, 0u, 15u,
    0u, 16u, 0u, 17u, 0u, 0u, 18u, 0u, 0u, 19u, 0u, 20u, 0u, 21u, 0u, 22u, 0u, 0u, 0u, 23u, 0u, 0u, 24u, 25u, 26u, 0u, 27u, 0u, 0u, 28u, 0u, 29u,
    0u, 30u, 0u, 31u, 0u, 32u, 0u, 0u, 0u, 0u, 0u, 33u, 0u, 0u, 0u, 34u, 0u, 0u, 35u, 36u, 37u, 0u, 38u, 0u, 0u, 39u, 0u, 40u, 0u, 0u, 0u, 41u,
    0u, 0u, 42u, 43u, 44u, 0u, 45u, 0u, 0u, 46u, 0u, 0u, 47u, 0u, 48u, 0u, 49u, 0u, 0u, 50u, 51u, 0u, 0u, 52u, 0u, 53u, 54u, 0u, 0u, 55u, 0u, 56u,
    0u, 57u, 0u, 58u, 0u, 59u, 0u, 60u, 0u, 0u, 61u, 0u, 62u, 0u, 0u, 0u, 63u, 0u, 0u, 64u, 65u, 66u, 0u, 67u, 0u, 0u, 68u, 0u, 69u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 70u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 71u, 0u, 0u, 0u, 0u, 72u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 73u, 0u, 74u, 0u,
    75u, 76u, 0u, 0u, 0u, 0u, 0u, 77u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 78u, 0u, 0u, 0u, 0u, 0u, 79u, 80u, 0u, 0u, 0u,
    0u, 81u, 0u, 0u, 82u, 0u, 83u, 0u, 0u, 0u, 84u, 0u, 0u, 0u, 0u, 0u, 85u, 0u, 0u, 0u, 86u, 0u, 0u, 87u, 0u, 0u, 0u, 88u, 0u, 0u, 0u, 0u,
    0u, 89u, 0u, 0u, 0u, 90u, 0u, 91u, 0u, 0u, 0u, 92u, 0u, 93u, 0u, 94u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 95u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 96u, 0u, 0u, 0u, 0u, 0u, 97u, 0u, 0u, 0u, 0u, 0u, 98u, 0u, 0u, 0u, 0u, 0u, 99u, 0u, 0u, 0u, 0u, 0u, 100u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 101u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    102u, 0u, 103u, 0u, 0u, 0u, 0u, 0u, 0u, 104u, 0u, 0u, 0u, 0u, 0u, 0u, 105u, 0u, 0u, 0u, 0u, 0u, 106u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 107u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 108u, 0u, 0u, 0u, 0u, 0u, 109u, 0u, 110u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 111u, 0u, 112u, 0u, 0u, 0u,
    0u, 113u, 0u, 0u, 0u, 0u, 0u, 114u, 0u, 0u, 115u, 0u, 116u, 0u, 0u, 0u, 117u, 0u, 0u, 0u, 0u, 0u, 118u, 0u, 119u, 120u, 0u, 0u, 0u, 0u, 121u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 122u, 0u, 123u, 0u, 0u, 124u, 125u, 0u, 0u, 0u, 0u, 126u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 127u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 128u, 0u, 0u, 0u, 0u, 129u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 130u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 131u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 132u, 0u, 0u, 133u, 0u, 134u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 135u, 0u, 0u, 0u, 136u, 0u, 137u, 0u, 0u, 0u, 138u, 0u, 139u, 0u, 0u, 0u, 140u, 0u, 141u, 0u, 0u, 0u, 142u, 0u, 143u, 0u, 0u, 0u, 144u, 0u,
    145u, 0u, 0u, 0u, 146u, 0u, 147u, 0u, 148u, 0u, 0u, 0u, 0u, 0u, 0u, 149u, 150u, 0u, 151u, 0u, 152u, 0u, 0u, 0u, 153u, 0u, 0u, 0u, 0u, 154u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 155u, 0u, 0u, 0u, 156u, 0u, 157u, 0u, 158u, 0u, 0u, 0u, 0u, 159u, 0u, 0u, 0u, 0u, 160u, 0u, 161u, 0u, 0u, 162u, 0u, 163u,
    0u, 0u, 0u, 164u, 0u, 165u, 166u, 0u, 0u, 0u, 167u, 168u, 0u, 0u, 169u, 0u, 170u, 0u, 0u, 0u, 171u, 172u, 0u, 0u, 0u, 0u, 173u, 0u, 0u, 0u, 0u, 0u,
    0u, 174u, 0u, 0u, 0u, 175u, 176u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 177u, 0u, 0u, 0u, 178u, 179u, 0u, 180u, 0u, 0u, 0u, 181u, 182u, 0u, 183u, 0u,
    0u, 184u, 0u, 0u, 185u, 186u, 0u, 187u, 0u, 0u, 0u, 188u, 189u, 0u, 0u, 190u, 0u, 191u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 192u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 193u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 194u, 0u, 195u, 0u, 196u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 197u, 0u, 0u, 198u, 0u, 0u, 0u, 199u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 200u, 0u, 0u, 0u, 0u, 0u, 201u, 0u, 0u, 0u, 0u, 0u,
    202u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 203u, 0u, 204u, 0u, 205u, 0u, 0u, 0u, 206u, 0u, 0u, 0u, 0u, 0u, 207u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 208u, 0u, 209u, 0u, 210u, 0u, 211u, 0u, 0u, 0u, 0u, 212u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 213u, 0u, 214u,
    0u, 0u, 0u, 0u, 0u, 215u, 0u, 216u, 0u, 0u, 0u, 0u, 217u, 0u, 0u, 218u, 0u, 219u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 220u, 0u, 0u, 0u, 0u, 0u, 0u,
    221u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 222u, 0u, 0u, 223u, 0u, 224u, 0u, 225u, 0u, 0u, 0u, 0u, 226u, 0u, 0u, 0u, 0u, 227u, 0u, 228u, 229u, 0u, 0u,
    0u, 0u, 230u, 0u, 0u, 0u, 0u, 0u, 231u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 232u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 233u, 0u, 0u, 0u, 0u, 0u, 0u, 234u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 235u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 236u, 0u, 0u, 0u, 0u, 0u, 0u, 237u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 238u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 239u, 240u, 0u, 0u, 241u, 0u, 0u, 242u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 243u, 0u, 0u, 244u, 0u,
    0u, 245u, 246u, 0u, 247u, 0u, 0u, 248u, 0u, 0u, 0u, 249u, 0u, 250u, 0u, 251u, 0u, 0u, 252u, 0u, 253u, 0u, 0u, 0u, 254u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    255u, 0u, 256u, 0u, 257u, 0u, 0u, 0u, 0u, 0u, 0u, 258u, 259u, 0u, 260u, 0u, 0u, 0u, 261u, 0u, 262u, 0u, 263u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    264u, 0u, 0u, 0u, 0u, 0u, 265u, 266u, 0u, 0u, 0u, 0u, 267u, 0u, 0u, 0u, 268u, 0u, 269u, 0u, 0u, 0u, 0u, 270u, 0u, 271u, 0u, 0u, 0u, 272u, 0u, 0u,
    0u, 0u, 0u, 0u, 273u, 0u, 274u, 0u, 0u, 275u, 0u, 276u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 277u, 0u, 0u, 0u, 0u, 0u, 0u, 278u, 0u, 0u, 279u, 0u, 280u,
    0u, 281u, 0u, 0u, 0u, 282u, 283u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 284u, 0u, 285u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 286u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 287u, 0u, 288u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 289u, 0u, 0u, 290u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 291u, 0u, 0u, 0u, 0u, 0u, 0u, 292u, 0u, 293u, 0u, 294u, 0u, 295u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 296u, 0u, 0u, 297u,
    0u, 0u, 298u, 0u, 0u, 299u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 300u, 0u, 301u,
    0u, 302u, 303u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 304u, 0u, 0u,
    0u, 305u, 0u, 306u, 0u, 0u, 0u, 307u, 0u, 0u, 0u, 0u, 0u, 308u, 0u, 0u, 0u, 0u, 0u, 0u, 309u, 310u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    311u, 0u, 0u, 312u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 313u, 0u, 0u, 0u, 0u, 314u, 0u, 0u, 315u, 0u, 316u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 317u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 318u, 0u, 0u, 319u, 0u, 0u,
    0u, 0u, 0u, 320u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 321u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 322u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 323u, 0u, 324u, 0u,
    325u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    326u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 327u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 328u, 0u, 329u, 0u, 0u, 330u, 0u, 0u, 0u, 0u, 0u, 331u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 332u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 333u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 334u, 0u, 335u, 0u, 336u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 337u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 338u, 0u, 0u, 0u, 0u, 0u, 0u, 339u, 0u, 340u, 0u, 0u, 0u, 0u, 0u, 341u, 0u, 0u, 0u, 342u, 0u,
    343u, 0u, 0u, 0u, 344u, 0u, 345u, 0u, 346u, 0u, 347u, 0u, 0u, 0u, 348u, 0u, 349u, 0u, 0u, 350u, 0u, 0u, 0u, 0u, 0u, 0u, 351u, 0u, 0u, 352u, 0u, 353u,
    0u, 0u, 354u, 0u, 355u, 0u, 356u, 0u, 357u, 0u, 0u, 358u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 359u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 360u,
    0u, 0u, 0u, 361u, 0u, 0u, 362u, 0u, 0u, 363u, 0u, 364u, 0u, 0u, 0u, 0u, 365u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 366u, 0u, 367u, 0u,
    0u, 0u, 368u, 0u, 369u, 0u, 370u, 0u, 0u, 0u, 371u, 0u, 372u, 373u, 0u, 374u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 375u, 0u, 376u, 0u, 377u, 0u,
    0u, 0u, 378u, 0u, 379u, 0u, 380u, 0u, 0u, 381u, 0u, 382u, 0u, 383u, 0u, 0u, 0u, 384u, 0u, 0u, 385u, 0u, 386u, 0u, 0u, 0u, 387u, 0u, 0u, 0u, 388u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 389u, 0u, 390u, 0u, 0u, 391u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    392u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 393u, 0u, 394u, 0u, 395u, 0u, 0u, 0u, 0u, 396u, 0u, 0u, 397u, 0u, 398u, 0u, 0u, 0u,
    0u, 0u, 399u, 0u, 400u, 0u, 0u, 0u, 0u, 0u, 401u, 0u, 402u, 0u, 0u, 403u, 404u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 405u, 0u, 0u, 0u, 0u, 0u, 0u, 406u,
    0u, 0u, 407u, 0u, 0u, 408u, 0u, 409u, 0u, 410u, 0u, 0u, 0u, 0u, 0u, 411u, 0u, 0u, 412u, 0u, 413u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 414u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 415u, 0u, 0u, 0u, 416u, 0u, 0u, 417u, 0u, 0u,
    418u, 0u, 419u, 0u, 0u, 0u, 0u, 420u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 421u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 422u, 0u, 423u, 0u, 0u,
    0u, 424u, 0u, 425u, 0u, 0u, 426u, 0u, 0u, 0u, 427u, 0u, 0u, 428u, 0u, 0u, 0u, 0u, 429u, 430u, 0u, 431u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 432u, 0u, 0u, 0u, 433u, 0u, 434u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 435u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 436u, 0u, 0u, 437u, 0u,
    438u, 0u, 439u, 0u, 0u, 0u, 0u, 0u, 440u, 0u, 441u, 0u, 442u, 0u, 0u, 0u, 0u, 443u, 444u, 0u, 0u, 0u, 445u, 0u, 446u, 0u, 447u, 0u, 448u, 0u, 449u, 0u,
    0u, 0u, 450u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 451u, 0u, 0u, 0u, 0u, 452u, 0u, 0u, 0u, 453u, 0u, 454u, 0u, 455u, 0u, 456u, 0u,
    457u, 0u, 458u, 0u, 459u, 0u, 0u, 460u, 0u, 0u, 0u, 461u, 0u, 0u, 0u, 0u, 462u, 0u, 0u, 0u, 0u, 0u, 0u, 463u, 0u, 0u, 464u, 0u, 465u, 0u, 466u, 0u,
    467u, 0u, 0u, 0u, 0u, 468u, 0u, 0u, 0u, 0u, 0u, 469u, 0u, 0u, 0u, 470u, 0u, 0u, 0u, 471u, 0u, 472u, 0u, 0u, 473u, 0u, 474u, 0u, 475u, 0u, 476u, 0u,
    477u, 0u, 0u, 0u, 478u, 0u, 479u, 0u, 480u, 0u, 481u, 0u, 482u, 0u, 483u, 0u, 0u, 484u, 485u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 486u, 0u, 0u, 0u, 0u, 0u,
    487u, 0u, 0u, 0u, 488u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 489u, 0u, 0u, 0u, 0u, 490u, 0u, 491u, 0u, 492u, 0u, 0u, 0u, 0u, 0u, 493u, 0u,
    0u, 494u, 0u, 495u, 0u, 0u, 0u, 0u, 0u, 496u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 497u, 0u, 0u, 0u, 498u, 0u, 499u, 500u, 0u, 0u, 501u, 0u,
    0u, 502u, 503u, 504u, 0u, 505u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 506u, 0u, 507u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 508u, 0u, 0u, 0u, 0u, 509u,
    0u, 0u, 510u, 0u, 0u, 511u, 0u, 0u, 0u, 512u, 0u, 513u, 0u, 514u, 0u, 0u, 515u, 0u, 516u, 0u, 517u, 0u, 0u, 0u, 0u, 0u, 518u, 0u, 0u, 0u, 0u, 0u,
    519u, 0u, 0u, 0u, 0u, 0u, 520u, 0u, 0u, 0u, 0u, 0u, 521u, 0u, 0u, 522u, 523u, 0u, 0u, 0u, 0u, 524u, 0u, 0u, 525u, 0u, 526u, 0u, 527u, 0u, 528u, 0u,
    0u, 529u, 0u, 530u, 0u, 0u, 0u, 0u, 0u, 531u, 0u, 0u, 0u, 0u, 0u, 0u, 532u, 0u, 0u, 0u, 0u, 0u, 533u, 0u, 0u, 534u, 0u, 0u, 535u, 0u, 0u, 536u,
    0u, 0u, 0u, 0u, 0u, 537u, 0u, 0u, 538u, 0u, 0u, 0u, 0u, 539u, 0u, 0u, 540u, 0u, 0u, 0u, 0u, 541u, 0u, 0u, 542u, 0u, 0u, 0u, 0u, 543u, 0u, 0u,
    544u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 545u, 0u, 0u, 0u, 546u, 0u, 547u, 0u, 0u, 548u, 0u, 0u, 0u, 549u, 0u, 550u, 0u, 0u, 0u,
    551u, 0u, 552u, 0u, 553u, 0u, 0u, 0u, 554u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 555u, 0u, 556u, 0u, 0u, 557u, 0u, 558u, 0u,
    559u, 0u, 560u, 0u, 561u, 0u, 562u, 0u, 0u, 0u, 0u, 563u, 0u, 0u, 564u, 0u, 0u, 565u, 0u, 0u, 566u, 0u, 567u, 0u, 0u, 0u, 568u, 569u, 0u, 570u, 0u, 0u,
    571u, 0u, 0u, 0u, 0u, 0u, 572u, 573u, 0u, 0u, 0u, 0u, 0u, 0u, 574u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 575u, 0u, 0u, 576u, 0u, 0u, 0u, 577u, 0u, 0u,
    0u, 578u, 0u, 0u, 0u, 579u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 580u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 581u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 582u, 0u, 0u, 583u, 0u, 0u, 0u, 584u, 0u, 0u, 0u, 585u, 0u, 0u, 0u, 586u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 587u, 0u, 0u, 0u,
    0u, 0u, 588u, 0u, 0u, 589u, 0u, 0u, 590u, 0u, 0u, 0u, 0u, 591u, 0u, 0u, 592u, 0u, 593u, 0u, 0u, 0u, 0u, 0u, 594u, 0u, 595u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 596u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 597u, 598u, 0u, 0u, 599u, 0u, 0u, 0u, 600u, 0u, 601u, 602u, 0u, 0u,
    0u, 0u, 0u, 603u, 0u, 0u, 0u, 0u, 0u, 604u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 605u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 606u, 0u, 0u, 0u, 607u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 608u, 0u, 0u, 0u, 0u, 0u, 609u, 0u, 0u, 0u, 0u, 610u, 0u, 0u, 0u, 611u, 0u, 0u, 0u, 0u, 0u, 612u, 613u, 0u, 0u,
    0u, 0u, 614u, 0u, 0u, 0u, 0u, 0u, 615u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 616u, 0u, 617u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 618u, 0u,
    0u, 619u, 620u, 621u, 0u, 622u, 0u, 0u, 623u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 624u, 0u, 625u, 0u, 0u, 0u, 626u, 0u, 627u, 0u, 628u, 0u, 629u, 0u, 0u,
    630u, 0u, 631u, 0u, 632u, 0u, 0u, 633u, 0u, 634u, 0u, 635u, 0u, 0u, 0u, 636u, 0u, 637u, 0u, 638u, 0u, 639u, 0u, 0u, 640u, 0u, 641u, 0u, 642u, 0u, 0u, 643u,
    644u, 0u, 0u, 0u, 0u, 0u, 645u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 646u, 0u, 0u, 647u, 0u, 648u, 0u, 649u, 0u, 650u, 0u, 0u, 0u, 0u, 651u, 0u,
    0u, 652u, 0u, 0u, 653u, 0u, 0u, 654u, 0u, 655u, 0u, 0u, 0u, 656u, 657u, 0u, 658u, 0u, 0u, 0u, 659u, 0u, 660u, 0u, 661u, 0u, 0u, 662u, 0u, 663u, 0u, 664u,
    0u, 0u, 0u, 665u, 0u, 666u, 0u, 667u, 0u, 0u, 668u, 0u, 669u, 0u, 670u, 0u, 671u, 0u, 672u, 0u, 0u, 0u, 673u, 0u, 674u, 0u, 675u, 0u, 676u, 0u, 0u, 677u,
    0u, 678u, 0u, 679u, 680u, 0u, 0u, 0u, 0u, 0u, 681u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 682u, 0u, 0u, 0u, 0u, 0u,
    683u, 0u, 0u, 0u, 0u, 0u, 0u, 684u, 685u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 686u, 0u, 0u, 687u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 688u, 0u, 0u, 0u, 0u, 689u, 0u, 0u, 690u, 0u, 691u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 692u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 693u, 0u, 694u, 0u, 0u, 0u, 695u, 0u, 0u, 0u, 0u, 696u, 0u, 697u, 0u, 0u, 698u, 0u, 699u, 0u, 0u,
    700u, 0u, 0u, 0u, 0u, 0u, 0u, 701u, 0u, 0u, 0u, 702u, 0u, 703u, 0u, 704u, 0u, 705u, 706u, 0u, 707u, 0u, 708u, 0u, 0u, 0u, 0u, 709u, 0u, 0u, 0u, 0u,
    710u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 711u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 712u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 713u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 714u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 715u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 716u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 717u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 718u, 0u, 0u, 719u, 0u, 0u, 720u,
    0u, 0u, 0u, 0u, 721u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 722u, 0u, 0u, 0u, 723u, 0u, 724u, 0u, 0u, 0u, 0u, 0u, 725u, 0u, 0u, 0u, 0u,
    726u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 727u, 0u, 0u, 728u, 0u, 0u, 0u, 0u, 0u, 729u, 0u, 0u, 0u, 730u, 0u, 0u, 0u, 0u,
    731u, 732u, 0u, 0u, 0u, 0u, 733u, 0u, 734u, 0u, 0u, 0u, 0u, 0u, 735u, 0u, 0u, 0u, 736u, 0u, 0u, 0u, 737u, 0u, 0u, 0u, 0u, 0u, 738u, 0u, 0u, 0u,
    0u, 739u, 0u, 0u, 740u, 0u, 741u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 742u, 0u, 0u, 743u, 0u, 0u, 0u, 0u, 744u, 0u,
    745u, 0u, 0u, 0u, 0u, 746u, 0u, 747u, 0u, 0u, 0u, 0u, 0u, 748u, 0u, 0u, 0u, 749u, 0u, 0u, 0u, 0u, 750u, 0u, 0u, 0u, 0u, 0u, 751u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 752u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 753u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 754u, 0u, 0u, 755u,
    0u, 0u, 0u, 0u, 0u, 756u, 0u, 757u, 0u, 0u, 0u, 0u, 0u, 758u, 0u, 0u, 759u, 0u, 760u, 0u, 0u, 0u, 0u, 0u, 761u, 0u, 0u, 0u, 0u, 0u, 762u, 0u,
    763u, 0u, 0u, 764u, 0u, 0u, 0u, 0u, 0u, 765u, 0u, 766u, 0u, 0u, 0u, 0u, 767u, 0u, 0u, 768u, 769u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 770u, 0u, 0u,
    771u, 0u, 772u, 0u, 0u, 0u, 0u, 0u, 773u, 0u, 0u, 0u, 0u, 0u, 774u, 0u, 775u, 0u, 0u, 0u, 776u, 0u, 777u, 0u, 0u, 0u, 0u, 778u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 779u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 780u, 0u, 0u, 781u, 0u, 0u, 0u, 0u, 0u, 0u, 782u, 783u, 0u, 784u, 0u, 0u, 785u, 0u, 0u, 0u, 0u,
    786u, 0u, 0u, 0u, 0u, 787u, 788u, 789u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    790u, 0u, 791u, 0u, 0u, 0u, 0u, 0u, 0u, 792u, 0u, 0u, 793u, 0u, 0u, 0u, 0u, 0u, 0u, 794u, 0u, 795u, 0u, 0u, 0u, 0u, 796u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 797u, 0u, 0u, 0u, 798u, 0u, 0u, 0u, 0u, 799u, 0u, 0u, 0u, 0u, 800u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 801u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 802u, 0u, 803u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 804u, 0u, 0u, 0u, 0u, 0u, 805u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 806u, 0u, 0u, 807u, 0u, 808u, 0u, 809u, 0u, 810u, 0u, 0u, 0u, 0u, 811u, 0u, 0u, 0u, 0u, 812u, 0u, 0u, 0u,
    0u, 813u, 0u, 0u, 814u, 0u, 0u, 0u, 815u, 816u, 0u, 817u, 0u, 0u, 0u, 818u, 0u, 0u, 819u, 820u, 821u, 0u, 822u, 0u, 823u, 0u, 824u, 0u, 0u, 0u, 825u, 0u,
    0u, 826u, 827u, 828u, 0u, 829u, 0u, 0u, 0u, 830u, 0u, 0u, 0u, 0u, 0u, 831u, 0u, 0u, 0u, 832u, 0u, 833u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 834u, 0u, 0u,
    0u, 0u, 0u, 835u, 0u, 0u, 0u, 836u, 0u, 0u, 837u, 0u, 0u, 838u, 0u, 0u, 839u, 0u, 840u, 0u, 841u, 0u, 0u, 842u, 0u, 0u, 0u, 0u, 843u, 0u, 0u, 844u,
};
void recomp_unit_0084_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,29,16,31 fprs=12,13,20,15 gpr_occ=4722 fpr_occ=150 gpr_total=6322 fpr_total=155
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[29] = aot_gpr_29; ctx.gpr[16] = aot_gpr_16; ctx.gpr[31] = aot_gpr_31; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_31 = ctx.gpr[31]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08954000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u)
            ? kEntryIdsV813_recomp_unit_0084[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08954000;
    case 2u: goto L_08954048;
    case 3u: goto L_08954050;
    case 4u: goto L_08954074;
    case 5u: goto L_08954080;
    case 6u: goto L_08954088;
    case 7u: goto L_089540A0;
    case 8u: goto L_089540A8;
    case 9u: goto L_089540C0;
    case 10u: goto L_089540C8;
    case 11u: goto L_089540D0;
    case 12u: goto L_089540E0;
    case 13u: goto L_089540E8;
    case 14u: goto L_089540F0;
    case 15u: goto L_089540FC;
    case 16u: goto L_08954104;
    case 17u: goto L_0895410C;
    case 18u: goto L_08954118;
    case 19u: goto L_08954124;
    case 20u: goto L_0895412C;
    case 21u: goto L_08954134;
    case 22u: goto L_0895413C;
    case 23u: goto L_0895414C;
    case 24u: goto L_08954158;
    case 25u: goto L_0895415C;
    case 26u: goto L_08954160;
    case 27u: goto L_08954168;
    case 28u: goto L_08954174;
    case 29u: goto L_0895417C;
    case 30u: goto L_08954184;
    case 31u: goto L_0895418C;
    case 32u: goto L_08954194;
    case 33u: goto L_089541AC;
    case 34u: goto L_089541BC;
    case 35u: goto L_089541C8;
    case 36u: goto L_089541CC;
    case 37u: goto L_089541D0;
    case 38u: goto L_089541D8;
    case 39u: goto L_089541E4;
    case 40u: goto L_089541EC;
    case 41u: goto L_089541FC;
    case 42u: goto L_08954208;
    case 43u: goto L_0895420C;
    case 44u: goto L_08954210;
    case 45u: goto L_08954218;
    case 46u: goto L_08954224;
    case 47u: goto L_08954230;
    case 48u: goto L_08954238;
    case 49u: goto L_08954240;
    case 50u: goto L_0895424C;
    case 51u: goto L_08954250;
    case 52u: goto L_0895425C;
    case 53u: goto L_08954264;
    case 54u: goto L_08954268;
    case 55u: goto L_08954274;
    case 56u: goto L_0895427C;
    case 57u: goto L_08954284;
    case 58u: goto L_0895428C;
    case 59u: goto L_08954294;
    case 60u: goto L_0895429C;
    case 61u: goto L_089542A8;
    case 62u: goto L_089542B0;
    case 63u: goto L_089542C0;
    case 64u: goto L_089542CC;
    case 65u: goto L_089542D0;
    case 66u: goto L_089542D4;
    case 67u: goto L_089542DC;
    case 68u: goto L_089542E8;
    case 69u: goto L_089542F0;
    case 70u: goto L_08954310;
    case 71u: goto L_08954334;
    case 72u: goto L_08954348;
    case 73u: goto L_08954370;
    case 74u: goto L_08954378;
    case 75u: goto L_08954380;
    case 76u: goto L_08954384;
    case 77u: goto L_0895439C;
    case 78u: goto L_089543D4;
    case 79u: goto L_089543EC;
    case 80u: goto L_089543F0;
    case 81u: goto L_08954404;
    case 82u: goto L_08954410;
    case 83u: goto L_08954418;
    case 84u: goto L_08954428;
    case 85u: goto L_08954440;
    case 86u: goto L_08954450;
    case 87u: goto L_0895445C;
    case 88u: goto L_0895446C;
    case 89u: goto L_08954484;
    case 90u: goto L_08954494;
    case 91u: goto L_0895449C;
    case 92u: goto L_089544AC;
    case 93u: goto L_089544B4;
    case 94u: goto L_089544BC;
    case 95u: goto L_089544E4;
    case 96u: goto L_08954510;
    case 97u: goto L_08954528;
    case 98u: goto L_08954540;
    case 99u: goto L_08954558;
    case 100u: goto L_08954570;
    case 101u: goto L_08954594;
    case 102u: goto L_08954600;
    case 103u: goto L_08954608;
    case 104u: goto L_08954624;
    case 105u: goto L_08954640;
    case 106u: goto L_08954658;
    case 107u: goto L_0895467C;
    case 108u: goto L_089546A0;
    case 109u: goto L_089546B8;
    case 110u: goto L_089546C0;
    case 111u: goto L_089546E8;
    case 112u: goto L_089546F0;
    case 113u: goto L_08954704;
    case 114u: goto L_0895471C;
    case 115u: goto L_08954728;
    case 116u: goto L_08954730;
    case 117u: goto L_08954740;
    case 118u: goto L_08954758;
    case 119u: goto L_08954760;
    case 120u: goto L_08954764;
    case 121u: goto L_08954778;
    case 122u: goto L_0895479C;
    case 123u: goto L_089547A4;
    case 124u: goto L_089547B0;
    case 125u: goto L_089547B4;
    case 126u: goto L_089547C8;
    case 127u: goto L_08954810;
    case 128u: goto L_0895485C;
    case 129u: goto L_08954870;
    case 130u: goto L_089548AC;
    case 131u: goto L_089548D4;
    case 132u: goto L_08954950;
    case 133u: goto L_0895495C;
    case 134u: goto L_08954964;
    case 135u: goto L_08954988;
    case 136u: goto L_08954998;
    case 137u: goto L_089549A0;
    case 138u: goto L_089549B0;
    case 139u: goto L_089549B8;
    case 140u: goto L_089549C8;
    case 141u: goto L_089549D0;
    case 142u: goto L_089549E0;
    case 143u: goto L_089549E8;
    case 144u: goto L_089549F8;
    case 145u: goto L_08954A00;
    case 146u: goto L_08954A10;
    case 147u: goto L_08954A18;
    case 148u: goto L_08954A20;
    case 149u: goto L_08954A3C;
    case 150u: goto L_08954A40;
    case 151u: goto L_08954A48;
    case 152u: goto L_08954A50;
    case 153u: goto L_08954A60;
    case 154u: goto L_08954A74;
    case 155u: goto L_08954A98;
    case 156u: goto L_08954AA8;
    case 157u: goto L_08954AB0;
    case 158u: goto L_08954AB8;
    case 159u: goto L_08954ACC;
    case 160u: goto L_08954AE0;
    case 161u: goto L_08954AE8;
    case 162u: goto L_08954AF4;
    case 163u: goto L_08954AFC;
    case 164u: goto L_08954B0C;
    case 165u: goto L_08954B14;
    case 166u: goto L_08954B18;
    case 167u: goto L_08954B28;
    case 168u: goto L_08954B2C;
    case 169u: goto L_08954B38;
    case 170u: goto L_08954B40;
    case 171u: goto L_08954B50;
    case 172u: goto L_08954B54;
    case 173u: goto L_08954B68;
    case 174u: goto L_08954B84;
    case 175u: goto L_08954B94;
    case 176u: goto L_08954B98;
    case 177u: goto L_08954BC0;
    case 178u: goto L_08954BD0;
    case 179u: goto L_08954BD4;
    case 180u: goto L_08954BDC;
    case 181u: goto L_08954BEC;
    case 182u: goto L_08954BF0;
    case 183u: goto L_08954BF8;
    case 184u: goto L_08954C04;
    case 185u: goto L_08954C10;
    case 186u: goto L_08954C14;
    case 187u: goto L_08954C1C;
    case 188u: goto L_08954C2C;
    case 189u: goto L_08954C30;
    case 190u: goto L_08954C3C;
    case 191u: goto L_08954C44;
    case 192u: goto L_08954C70;
    case 193u: goto L_08954CD4;
    case 194u: goto L_08954D24;
    case 195u: goto L_08954D2C;
    case 196u: goto L_08954D34;
    case 197u: goto L_08954D58;
    case 198u: goto L_08954D64;
    case 199u: goto L_08954D74;
    case 200u: goto L_08954DD0;
    case 201u: goto L_08954DE8;
    case 202u: goto L_08954E00;
    case 203u: goto L_08954E2C;
    case 204u: goto L_08954E34;
    case 205u: goto L_08954E3C;
    case 206u: goto L_08954E4C;
    case 207u: goto L_08954E64;
    case 208u: goto L_08954EA4;
    case 209u: goto L_08954EAC;
    case 210u: goto L_08954EB4;
    case 211u: goto L_08954EBC;
    case 212u: goto L_08954ED0;
    case 213u: goto L_08954EF4;
    case 214u: goto L_08954EFC;
    case 215u: goto L_08954F14;
    case 216u: goto L_08954F1C;
    case 217u: goto L_08954F30;
    case 218u: goto L_08954F3C;
    case 219u: goto L_08954F44;
    case 220u: goto L_08954F64;
    case 221u: goto L_08954F80;
    case 222u: goto L_08954FA4;
    case 223u: goto L_08954FB0;
    case 224u: goto L_08954FB8;
    case 225u: goto L_08954FC0;
    case 226u: goto L_08954FD4;
    case 227u: goto L_08954FE8;
    case 228u: goto L_08954FF0;
    case 229u: goto L_08954FF4;
    case 230u: goto L_08955008;
    case 231u: goto L_08955020;
    case 232u: goto L_08955050;
    case 233u: goto L_08955084;
    case 234u: goto L_089550A0;
    case 235u: goto L_089550C0;
    case 236u: goto L_08955118;
    case 237u: goto L_08955134;
    case 238u: goto L_08955160;
    case 239u: goto L_08955184;
    case 240u: goto L_08955188;
    case 241u: goto L_08955194;
    case 242u: goto L_089551A0;
    case 243u: goto L_089551EC;
    case 244u: goto L_089551F8;
    case 245u: goto L_08955204;
    case 246u: goto L_08955208;
    case 247u: goto L_08955210;
    case 248u: goto L_0895521C;
    case 249u: goto L_0895522C;
    case 250u: goto L_08955234;
    case 251u: goto L_0895523C;
    case 252u: goto L_08955248;
    case 253u: goto L_08955250;
    case 254u: goto L_08955260;
    case 255u: goto L_08955280;
    case 256u: goto L_08955288;
    case 257u: goto L_08955290;
    case 258u: goto L_089552AC;
    case 259u: goto L_089552B0;
    case 260u: goto L_089552B8;
    case 261u: goto L_089552C8;
    case 262u: goto L_089552D0;
    case 263u: goto L_089552D8;
    case 264u: goto L_08955300;
    case 265u: goto L_08955318;
    case 266u: goto L_0895531C;
    case 267u: goto L_08955330;
    case 268u: goto L_08955340;
    case 269u: goto L_08955348;
    case 270u: goto L_0895535C;
    case 271u: goto L_08955364;
    case 272u: goto L_08955374;
    case 273u: goto L_08955390;
    case 274u: goto L_08955398;
    case 275u: goto L_089553A4;
    case 276u: goto L_089553AC;
    case 277u: goto L_089553CC;
    case 278u: goto L_089553E8;
    case 279u: goto L_089553F4;
    case 280u: goto L_089553FC;
    case 281u: goto L_08955404;
    case 282u: goto L_08955414;
    case 283u: goto L_08955418;
    case 284u: goto L_0895543C;
    case 285u: goto L_08955444;
    case 286u: goto L_08955474;
    case 287u: goto L_089554A0;
    case 288u: goto L_089554A8;
    case 289u: goto L_089554E0;
    case 290u: goto L_089554EC;
    case 291u: goto L_08955518;
    case 292u: goto L_08955534;
    case 293u: goto L_0895553C;
    case 294u: goto L_08955544;
    case 295u: goto L_0895554C;
    case 296u: goto L_08955570;
    case 297u: goto L_0895557C;
    case 298u: goto L_08955588;
    case 299u: goto L_08955594;
    case 300u: goto L_089555F4;
    case 301u: goto L_089555FC;
    case 302u: goto L_08955604;
    case 303u: goto L_08955608;
    case 304u: goto L_08955674;
    case 305u: goto L_08955684;
    case 306u: goto L_0895568C;
    case 307u: goto L_0895569C;
    case 308u: goto L_089556B4;
    case 309u: goto L_089556D0;
    case 310u: goto L_089556D4;
    case 311u: goto L_08955700;
    case 312u: goto L_0895570C;
    case 313u: goto L_08955744;
    case 314u: goto L_08955758;
    case 315u: goto L_08955764;
    case 316u: goto L_0895576C;
    case 317u: goto L_089557B4;
    case 318u: goto L_089557E8;
    case 319u: goto L_089557F4;
    case 320u: goto L_0895580C;
    case 321u: goto L_08955870;
    case 322u: goto L_089558B0;
    case 323u: goto L_089558F0;
    case 324u: goto L_089558F8;
    case 325u: goto L_08955900;
    case 326u: goto L_08955980;
    case 327u: goto L_08955A58;
    case 328u: goto L_08955AC4;
    case 329u: goto L_08955ACC;
    case 330u: goto L_08955AD8;
    case 331u: goto L_08955AF0;
    case 332u: goto L_08955B54;
    case 333u: goto L_08955B90;
    case 334u: goto L_08955BCC;
    case 335u: goto L_08955BD4;
    case 336u: goto L_08955BDC;
    case 337u: goto L_08955C58;
    case 338u: goto L_08955D2C;
    case 339u: goto L_08955D48;
    case 340u: goto L_08955D50;
    case 341u: goto L_08955D68;
    case 342u: goto L_08955D78;
    case 343u: goto L_08955D80;
    case 344u: goto L_08955D90;
    case 345u: goto L_08955D98;
    case 346u: goto L_08955DA0;
    case 347u: goto L_08955DA8;
    case 348u: goto L_08955DB8;
    case 349u: goto L_08955DC0;
    case 350u: goto L_08955DCC;
    case 351u: goto L_08955DE8;
    case 352u: goto L_08955DF4;
    case 353u: goto L_08955DFC;
    case 354u: goto L_08955E08;
    case 355u: goto L_08955E10;
    case 356u: goto L_08955E18;
    case 357u: goto L_08955E20;
    case 358u: goto L_08955E2C;
    case 359u: goto L_08955E58;
    case 360u: goto L_08955E7C;
    case 361u: goto L_08955E8C;
    case 362u: goto L_08955E98;
    case 363u: goto L_08955EA4;
    case 364u: goto L_08955EAC;
    case 365u: goto L_08955EC0;
    case 366u: goto L_08955EF0;
    case 367u: goto L_08955EF8;
    case 368u: goto L_08955F08;
    case 369u: goto L_08955F10;
    case 370u: goto L_08955F18;
    case 371u: goto L_08955F28;
    case 372u: goto L_08955F30;
    case 373u: goto L_08955F34;
    case 374u: goto L_08955F3C;
    case 375u: goto L_08955F68;
    case 376u: goto L_08955F70;
    case 377u: goto L_08955F78;
    case 378u: goto L_08955F88;
    case 379u: goto L_08955F90;
    case 380u: goto L_08955F98;
    case 381u: goto L_08955FA4;
    case 382u: goto L_08955FAC;
    case 383u: goto L_08955FB4;
    case 384u: goto L_08955FC4;
    case 385u: goto L_08955FD0;
    case 386u: goto L_08955FD8;
    case 387u: goto L_08955FE8;
    case 388u: goto L_08955FF8;
    case 389u: goto L_08956038;
    case 390u: goto L_08956040;
    case 391u: goto L_0895604C;
    case 392u: goto L_08956080;
    case 393u: goto L_089560B8;
    case 394u: goto L_089560C0;
    case 395u: goto L_089560C8;
    case 396u: goto L_089560DC;
    case 397u: goto L_089560E8;
    case 398u: goto L_089560F0;
    case 399u: goto L_08956108;
    case 400u: goto L_08956110;
    case 401u: goto L_08956128;
    case 402u: goto L_08956130;
    case 403u: goto L_0895613C;
    case 404u: goto L_08956140;
    case 405u: goto L_08956160;
    case 406u: goto L_0895617C;
    case 407u: goto L_08956188;
    case 408u: goto L_08956194;
    case 409u: goto L_0895619C;
    case 410u: goto L_089561A4;
    case 411u: goto L_089561BC;
    case 412u: goto L_089561C8;
    case 413u: goto L_089561D0;
    case 414u: goto L_089561FC;
    case 415u: goto L_08956258;
    case 416u: goto L_08956268;
    case 417u: goto L_08956274;
    case 418u: goto L_08956280;
    case 419u: goto L_08956288;
    case 420u: goto L_0895629C;
    case 421u: goto L_089562C8;
    case 422u: goto L_089562EC;
    case 423u: goto L_089562F4;
    case 424u: goto L_08956304;
    case 425u: goto L_0895630C;
    case 426u: goto L_08956318;
    case 427u: goto L_08956328;
    case 428u: goto L_08956334;
    case 429u: goto L_08956348;
    case 430u: goto L_0895634C;
    case 431u: goto L_08956354;
    case 432u: goto L_08956384;
    case 433u: goto L_08956394;
    case 434u: goto L_0895639C;
    case 435u: goto L_089563C0;
    case 436u: goto L_089563EC;
    case 437u: goto L_089563F8;
    case 438u: goto L_08956400;
    case 439u: goto L_08956408;
    case 440u: goto L_08956420;
    case 441u: goto L_08956428;
    case 442u: goto L_08956430;
    case 443u: goto L_08956444;
    case 444u: goto L_08956448;
    case 445u: goto L_08956458;
    case 446u: goto L_08956460;
    case 447u: goto L_08956468;
    case 448u: goto L_08956470;
    case 449u: goto L_08956478;
    case 450u: goto L_08956488;
    case 451u: goto L_089564BC;
    case 452u: goto L_089564D0;
    case 453u: goto L_089564E0;
    case 454u: goto L_089564E8;
    case 455u: goto L_089564F0;
    case 456u: goto L_089564F8;
    case 457u: goto L_08956500;
    case 458u: goto L_08956508;
    case 459u: goto L_08956510;
    case 460u: goto L_0895651C;
    case 461u: goto L_0895652C;
    case 462u: goto L_08956540;
    case 463u: goto L_0895655C;
    case 464u: goto L_08956568;
    case 465u: goto L_08956570;
    case 466u: goto L_08956578;
    case 467u: goto L_08956580;
    case 468u: goto L_08956594;
    case 469u: goto L_089565AC;
    case 470u: goto L_089565BC;
    case 471u: goto L_089565CC;
    case 472u: goto L_089565D4;
    case 473u: goto L_089565E0;
    case 474u: goto L_089565E8;
    case 475u: goto L_089565F0;
    case 476u: goto L_089565F8;
    case 477u: goto L_08956600;
    case 478u: goto L_08956610;
    case 479u: goto L_08956618;
    case 480u: goto L_08956620;
    case 481u: goto L_08956628;
    case 482u: goto L_08956630;
    case 483u: goto L_08956638;
    case 484u: goto L_08956644;
    case 485u: goto L_08956648;
    case 486u: goto L_08956668;
    case 487u: goto L_08956680;
    case 488u: goto L_08956690;
    case 489u: goto L_089566BC;
    case 490u: goto L_089566D0;
    case 491u: goto L_089566D8;
    case 492u: goto L_089566E0;
    case 493u: goto L_089566F8;
    case 494u: goto L_08956704;
    case 495u: goto L_0895670C;
    case 496u: goto L_08956724;
    case 497u: goto L_08956750;
    case 498u: goto L_08956760;
    case 499u: goto L_08956768;
    case 500u: goto L_0895676C;
    case 501u: goto L_08956778;
    case 502u: goto L_08956784;
    case 503u: goto L_08956788;
    case 504u: goto L_0895678C;
    case 505u: goto L_08956794;
    case 506u: goto L_089567B8;
    case 507u: goto L_089567C0;
    case 508u: goto L_089567E8;
    case 509u: goto L_089567FC;
    case 510u: goto L_08956808;
    case 511u: goto L_08956814;
    case 512u: goto L_08956824;
    case 513u: goto L_0895682C;
    case 514u: goto L_08956834;
    case 515u: goto L_08956840;
    case 516u: goto L_08956848;
    case 517u: goto L_08956850;
    case 518u: goto L_08956868;
    case 519u: goto L_08956880;
    case 520u: goto L_08956898;
    case 521u: goto L_089568B0;
    case 522u: goto L_089568BC;
    case 523u: goto L_089568C0;
    case 524u: goto L_089568D4;
    case 525u: goto L_089568E0;
    case 526u: goto L_089568E8;
    case 527u: goto L_089568F0;
    case 528u: goto L_089568F8;
    case 529u: goto L_08956904;
    case 530u: goto L_0895690C;
    case 531u: goto L_08956924;
    case 532u: goto L_08956940;
    case 533u: goto L_08956958;
    case 534u: goto L_08956964;
    case 535u: goto L_08956970;
    case 536u: goto L_0895697C;
    case 537u: goto L_08956994;
    case 538u: goto L_089569A0;
    case 539u: goto L_089569B4;
    case 540u: goto L_089569C0;
    case 541u: goto L_089569D4;
    case 542u: goto L_089569E0;
    case 543u: goto L_089569F4;
    case 544u: goto L_08956A00;
    case 545u: goto L_08956A34;
    case 546u: goto L_08956A44;
    case 547u: goto L_08956A4C;
    case 548u: goto L_08956A58;
    case 549u: goto L_08956A68;
    case 550u: goto L_08956A70;
    case 551u: goto L_08956A80;
    case 552u: goto L_08956A88;
    case 553u: goto L_08956A90;
    case 554u: goto L_08956AA0;
    case 555u: goto L_08956ADC;
    case 556u: goto L_08956AE4;
    case 557u: goto L_08956AF0;
    case 558u: goto L_08956AF8;
    case 559u: goto L_08956B00;
    case 560u: goto L_08956B08;
    case 561u: goto L_08956B10;
    case 562u: goto L_08956B18;
    case 563u: goto L_08956B2C;
    case 564u: goto L_08956B38;
    case 565u: goto L_08956B44;
    case 566u: goto L_08956B50;
    case 567u: goto L_08956B58;
    case 568u: goto L_08956B68;
    case 569u: goto L_08956B6C;
    case 570u: goto L_08956B74;
    case 571u: goto L_08956B80;
    case 572u: goto L_08956B98;
    case 573u: goto L_08956B9C;
    case 574u: goto L_08956BB8;
    case 575u: goto L_08956BD8;
    case 576u: goto L_08956BE4;
    case 577u: goto L_08956BF4;
    case 578u: goto L_08956C04;
    case 579u: goto L_08956C14;
    case 580u: goto L_08956C3C;
    case 581u: goto L_08956C6C;
    case 582u: goto L_08956C8C;
    case 583u: goto L_08956C98;
    case 584u: goto L_08956CA8;
    case 585u: goto L_08956CB8;
    case 586u: goto L_08956CC8;
    case 587u: goto L_08956CF0;
    case 588u: goto L_08956D08;
    case 589u: goto L_08956D14;
    case 590u: goto L_08956D20;
    case 591u: goto L_08956D34;
    case 592u: goto L_08956D40;
    case 593u: goto L_08956D48;
    case 594u: goto L_08956D60;
    case 595u: goto L_08956D68;
    case 596u: goto L_08956D88;
    case 597u: goto L_08956DC8;
    case 598u: goto L_08956DCC;
    case 599u: goto L_08956DD8;
    case 600u: goto L_08956DE8;
    case 601u: goto L_08956DF0;
    case 602u: goto L_08956DF4;
    case 603u: goto L_08956E0C;
    case 604u: goto L_08956E24;
    case 605u: goto L_08956E48;
    case 606u: goto L_08956E6C;
    case 607u: goto L_08956E7C;
    case 608u: goto L_08956E9C;
    case 609u: goto L_08956EB4;
    case 610u: goto L_08956EC8;
    case 611u: goto L_08956ED8;
    case 612u: goto L_08956EF0;
    case 613u: goto L_08956EF4;
    case 614u: goto L_08956F08;
    case 615u: goto L_08956F20;
    case 616u: goto L_08956F40;
    case 617u: goto L_08956F48;
    case 618u: goto L_08956F78;
    case 619u: goto L_08956F84;
    case 620u: goto L_08956F88;
    case 621u: goto L_08956F8C;
    case 622u: goto L_08956F94;
    case 623u: goto L_08956FA0;
    case 624u: goto L_08956FC4;
    case 625u: goto L_08956FCC;
    case 626u: goto L_08956FDC;
    case 627u: goto L_08956FE4;
    case 628u: goto L_08956FEC;
    case 629u: goto L_08956FF4;
    case 630u: goto L_08957000;
    case 631u: goto L_08957008;
    case 632u: goto L_08957010;
    case 633u: goto L_0895701C;
    case 634u: goto L_08957024;
    case 635u: goto L_0895702C;
    case 636u: goto L_0895703C;
    case 637u: goto L_08957044;
    case 638u: goto L_0895704C;
    case 639u: goto L_08957054;
    case 640u: goto L_08957060;
    case 641u: goto L_08957068;
    case 642u: goto L_08957070;
    case 643u: goto L_0895707C;
    case 644u: goto L_08957080;
    case 645u: goto L_08957098;
    case 646u: goto L_089570C0;
    case 647u: goto L_089570CC;
    case 648u: goto L_089570D4;
    case 649u: goto L_089570DC;
    case 650u: goto L_089570E4;
    case 651u: goto L_089570F8;
    case 652u: goto L_08957104;
    case 653u: goto L_08957110;
    case 654u: goto L_0895711C;
    case 655u: goto L_08957124;
    case 656u: goto L_08957134;
    case 657u: goto L_08957138;
    case 658u: goto L_08957140;
    case 659u: goto L_08957150;
    case 660u: goto L_08957158;
    case 661u: goto L_08957160;
    case 662u: goto L_0895716C;
    case 663u: goto L_08957174;
    case 664u: goto L_0895717C;
    case 665u: goto L_0895718C;
    case 666u: goto L_08957194;
    case 667u: goto L_0895719C;
    case 668u: goto L_089571A8;
    case 669u: goto L_089571B0;
    case 670u: goto L_089571B8;
    case 671u: goto L_089571C0;
    case 672u: goto L_089571C8;
    case 673u: goto L_089571D8;
    case 674u: goto L_089571E0;
    case 675u: goto L_089571E8;
    case 676u: goto L_089571F0;
    case 677u: goto L_089571FC;
    case 678u: goto L_08957204;
    case 679u: goto L_0895720C;
    case 680u: goto L_08957210;
    case 681u: goto L_08957228;
    case 682u: goto L_089572E8;
    case 683u: goto L_08957300;
    case 684u: goto L_0895731C;
    case 685u: goto L_08957320;
    case 686u: goto L_08957344;
    case 687u: goto L_08957350;
    case 688u: goto L_08957388;
    case 689u: goto L_0895739C;
    case 690u: goto L_089573A8;
    case 691u: goto L_089573B0;
    case 692u: goto L_089573F8;
    case 693u: goto L_0895742C;
    case 694u: goto L_08957434;
    case 695u: goto L_08957444;
    case 696u: goto L_08957458;
    case 697u: goto L_08957460;
    case 698u: goto L_0895746C;
    case 699u: goto L_08957474;
    case 700u: goto L_08957480;
    case 701u: goto L_0895749C;
    case 702u: goto L_089574AC;
    case 703u: goto L_089574B4;
    case 704u: goto L_089574BC;
    case 705u: goto L_089574C4;
    case 706u: goto L_089574C8;
    case 707u: goto L_089574D0;
    case 708u: goto L_089574D8;
    case 709u: goto L_089574EC;
    case 710u: goto L_08957500;
    case 711u: goto L_089575B0;
    case 712u: goto L_089575DC;
    case 713u: goto L_08957608;
    case 714u: goto L_08957634;
    case 715u: goto L_08957660;
    case 716u: goto L_0895768C;
    case 717u: goto L_089576B8;
    case 718u: goto L_089576E4;
    case 719u: goto L_089576F0;
    case 720u: goto L_089576FC;
    case 721u: goto L_08957710;
    case 722u: goto L_0895773C;
    case 723u: goto L_0895774C;
    case 724u: goto L_08957754;
    case 725u: goto L_0895776C;
    case 726u: goto L_08957780;
    case 727u: goto L_089577B8;
    case 728u: goto L_089577C4;
    case 729u: goto L_089577DC;
    case 730u: goto L_089577EC;
    case 731u: goto L_08957800;
    case 732u: goto L_08957804;
    case 733u: goto L_08957818;
    case 734u: goto L_08957820;
    case 735u: goto L_08957838;
    case 736u: goto L_08957848;
    case 737u: goto L_08957858;
    case 738u: goto L_08957870;
    case 739u: goto L_08957884;
    case 740u: goto L_08957890;
    case 741u: goto L_08957898;
    case 742u: goto L_089578D8;
    case 743u: goto L_089578E4;
    case 744u: goto L_089578F8;
    case 745u: goto L_08957900;
    case 746u: goto L_08957914;
    case 747u: goto L_0895791C;
    case 748u: goto L_08957934;
    case 749u: goto L_08957944;
    case 750u: goto L_08957958;
    case 751u: goto L_08957970;
    case 752u: goto L_08957994;
    case 753u: goto L_089579B4;
    case 754u: goto L_089579F0;
    case 755u: goto L_089579FC;
    case 756u: goto L_08957A14;
    case 757u: goto L_08957A1C;
    case 758u: goto L_08957A34;
    case 759u: goto L_08957A40;
    case 760u: goto L_08957A48;
    case 761u: goto L_08957A60;
    case 762u: goto L_08957A78;
    case 763u: goto L_08957A80;
    case 764u: goto L_08957A8C;
    case 765u: goto L_08957AA4;
    case 766u: goto L_08957AAC;
    case 767u: goto L_08957AC0;
    case 768u: goto L_08957ACC;
    case 769u: goto L_08957AD0;
    case 770u: goto L_08957AF4;
    case 771u: goto L_08957B00;
    case 772u: goto L_08957B08;
    case 773u: goto L_08957B20;
    case 774u: goto L_08957B38;
    case 775u: goto L_08957B40;
    case 776u: goto L_08957B50;
    case 777u: goto L_08957B58;
    case 778u: goto L_08957B6C;
    case 779u: goto L_08957B8C;
    case 780u: goto L_08957BAC;
    case 781u: goto L_08957BB8;
    case 782u: goto L_08957BD4;
    case 783u: goto L_08957BD8;
    case 784u: goto L_08957BE0;
    case 785u: goto L_08957BEC;
    case 786u: goto L_08957C00;
    case 787u: goto L_08957C14;
    case 788u: goto L_08957C18;
    case 789u: goto L_08957C1C;
    case 790u: goto L_08957C80;
    case 791u: goto L_08957C88;
    case 792u: goto L_08957CA4;
    case 793u: goto L_08957CB0;
    case 794u: goto L_08957CCC;
    case 795u: goto L_08957CD4;
    case 796u: goto L_08957CE8;
    case 797u: goto L_08957D10;
    case 798u: goto L_08957D20;
    case 799u: goto L_08957D34;
    case 800u: goto L_08957D48;
    case 801u: goto L_08957D74;
    case 802u: goto L_08957DB0;
    case 803u: goto L_08957DB8;
    case 804u: goto L_08957DDC;
    case 805u: goto L_08957DF4;
    case 806u: goto L_08957E24;
    case 807u: goto L_08957E30;
    case 808u: goto L_08957E38;
    case 809u: goto L_08957E40;
    case 810u: goto L_08957E48;
    case 811u: goto L_08957E5C;
    case 812u: goto L_08957E70;
    case 813u: goto L_08957E84;
    case 814u: goto L_08957E90;
    case 815u: goto L_08957EA0;
    case 816u: goto L_08957EA4;
    case 817u: goto L_08957EAC;
    case 818u: goto L_08957EBC;
    case 819u: goto L_08957EC8;
    case 820u: goto L_08957ECC;
    case 821u: goto L_08957ED0;
    case 822u: goto L_08957ED8;
    case 823u: goto L_08957EE0;
    case 824u: goto L_08957EE8;
    case 825u: goto L_08957EF8;
    case 826u: goto L_08957F04;
    case 827u: goto L_08957F08;
    case 828u: goto L_08957F0C;
    case 829u: goto L_08957F14;
    case 830u: goto L_08957F24;
    case 831u: goto L_08957F3C;
    case 832u: goto L_08957F4C;
    case 833u: goto L_08957F54;
    case 834u: goto L_08957F74;
    case 835u: goto L_08957F8C;
    case 836u: goto L_08957F9C;
    case 837u: goto L_08957FA8;
    case 838u: goto L_08957FB4;
    case 839u: goto L_08957FC0;
    case 840u: goto L_08957FC8;
    case 841u: goto L_08957FD0;
    case 842u: goto L_08957FDC;
    case 843u: goto L_08957FF0;
    case 844u: goto L_08957FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08954000u;
        if (local_delta_v813 >= 16384u || (local_delta_v813 & 3u) != 0u) {
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
L_08954000:
    aot_fpr_13 = aot_fpr_15 - aot_fpr_13;
    aot_gpr_4 = (15363u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[17] & 1u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(604)));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08954050;
      }
      goto L_08954048;
    }
L_08954048:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    goto L_08954050;
L_08954050:
    aot_gpr_5 = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08954080;
      }
      goto L_08954074;
    }
L_08954074:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 36 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_08954088;
      }
      goto L_08954080;
    }
L_08954080:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089540C8;
      }
      goto L_08954088;
    }
L_08954088:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[18] - aot_gpr_5);
    if (static_cast<std::int32_t>(aot_gpr_5) >= 0) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
        goto L_089540A8;
    }
    goto L_089540A0;
L_089540A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089540C8;
      }
      goto L_089540A8;
    }
L_089540A8:
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089540C8;
      }
      goto L_089540C0;
    }
L_089540C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089540C8;
      }
      goto L_089540C8;
    }
L_089540C8:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089540E8;
      }
      goto L_089540D0;
    }
L_089540D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[18];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089540F0;
      }
      goto L_089540E0;
    }
L_089540E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08954104;
      }
      goto L_089540E8;
    }
L_089540E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089542F0;
      }
      goto L_089540F0;
    }
L_089540F0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[17];
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08954104;
      }
      goto L_089540FC;
    }
L_089540FC:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08954104;
L_08954104:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08954134;
      }
      goto L_0895410C;
    }
L_0895410C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08954134;
      }
      goto L_08954118;
    }
L_08954118:
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08954124u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    goto L_08957098;
L_08954124:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08954134;
      }
      goto L_0895412C;
    }
L_0895412C:
    aot_gpr_31 = (0x08954134u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08957D74;
L_08954134:
    aot_gpr_31 = (0x0895413Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956690;
L_0895413C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[18];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0895415C;
      }
      goto L_0895414C;
    }
L_0895414C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[17];
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08954160;
      }
      goto L_08954158;
    }
L_08954158:
    aot_gpr_5 = (0u | 1u);
    goto L_0895415C;
L_0895415C:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08954160;
L_08954160:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08954174;
      }
      goto L_08954168;
    }
L_08954168:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0895418C;
      }
      goto L_08954174;
    }
L_08954174:
    aot_gpr_31 = (0x0895417Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954778;
L_0895417C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08954194;
      }
      goto L_08954184;
    }
L_08954184:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0895424C;
      }
      goto L_0895418C;
    }
L_0895418C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089542F0;
      }
      goto L_08954194;
    }
L_08954194:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089541EC;
      }
      goto L_089541AC;
    }
L_089541AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[20];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089541CC;
      }
      goto L_089541BC;
    }
L_089541BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_089541D0;
      }
      goto L_089541C8;
    }
L_089541C8:
    aot_gpr_5 = (0u | 1u);
    goto L_089541CC;
L_089541CC:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_089541D0;
L_089541D0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08954230;
      }
      goto L_089541D8;
    }
L_089541D8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089541E4u);
    aot_gpr_5 = (0u | 0u);
    goto L_08956594;
L_089541E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08954230;
      }
      goto L_089541EC;
    }
L_089541EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[18];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0895420C;
      }
      goto L_089541FC;
    }
L_089541FC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[17];
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08954210;
      }
      goto L_08954208;
    }
L_08954208:
    aot_gpr_5 = (0u | 1u);
    goto L_0895420C;
L_0895420C:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08954210;
L_08954210:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08954224;
      }
      goto L_08954218;
    }
L_08954218:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08954230;
      }
      goto L_08954224;
    }
L_08954224:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08954230u);
    aot_gpr_5 = (0u | 0u);
    goto L_08956594;
L_08954230:
    aot_gpr_31 = (0x08954238u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954778;
L_08954238:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0895424C;
      }
      goto L_08954240;
    }
L_08954240:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0895424Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_089567C0;
L_0895424C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954250;
L_08954250:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0895425Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08956F48;
L_0895425C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089542B0;
      }
      goto L_08954264;
    }
L_08954264:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954268;
L_08954268:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08954274u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08955EC0;
L_08954274:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_0895428C;
      }
      goto L_0895427C;
    }
L_0895427C:
    aot_gpr_31 = (0x08954284u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954A20;
L_08954284:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08954268;
      }
      goto L_0895428C;
    }
L_0895428C:
    aot_gpr_31 = (0x08954294u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954778;
L_08954294:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_089542A8;
      }
      goto L_0895429C;
    }
L_0895429C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089542A8u);
    aot_gpr_5 = (0u | 1u);
    goto L_089567C0;
L_089542A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08954250;
      }
      goto L_089542B0;
    }
L_089542B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[18];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089542D0;
      }
      goto L_089542C0;
    }
L_089542C0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[17];
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_089542D4;
      }
      goto L_089542CC;
    }
L_089542CC:
    aot_gpr_5 = (0u | 1u);
    goto L_089542D0;
L_089542D0:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_089542D4;
L_089542D4:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089542E8;
      }
      goto L_089542DC;
    }
L_089542DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(588), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(596), aot_gpr_5);
    goto L_089542E8;
L_089542E8:
    aot_gpr_31 = (0x089542F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08957D74;
L_089542F0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954310:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08954334u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    goto L_0895742C;
L_08954334:
    aot_gpr_4 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1040)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_16;
      if (branch_taken) {
          goto L_08954380;
      }
      goto L_08954348;
    }
L_08954348:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1040), aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(580)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08954370u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08955398;
L_08954370:
    aot_gpr_31 = (0x08954378u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_0895742C;
L_08954378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08954384;
      }
      goto L_08954380;
    }
L_08954380:
    ctx.gpr[2] = (0u | 0u);
    goto L_08954384;
L_08954384:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0895439C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x089543D4u);
    ctx.gpr[19] = (0u | 0u);
    goto L_0895742C;
L_089543D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(688)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_089544AC;
      }
      goto L_089543EC;
    }
L_089543EC:
    ctx.gpr[21] = (0u | 0u);
    goto L_089543F0;
L_089543F0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(692)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[21]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_0895449C;
      }
      goto L_08954404;
    }
L_08954404:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[7];
      if (branch_taken) {
          goto L_08954494;
      }
      goto L_08954410;
    }
L_08954410:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08954450;
      }
      goto L_08954418;
    }
L_08954418:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08954428u);
    aot_gpr_6 = (0u | 0u);
    goto L_08954310;
L_08954428:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(692)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08954440u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 85u, 0x08954440u, 0x08A3CC2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 164u, 0x08A3CC2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954440u) goto L_08954440;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08954440:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(688)));
      if (branch_taken) {
          goto L_0895449C;
      }
      goto L_08954450;
    }
L_08954450:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[18];
      if (branch_taken) {
          goto L_0895449C;
      }
      goto L_0895445C;
    }
L_0895445C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0895446Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_08954310;
L_0895446C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(692)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08954484u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 89u, 0x08954484u, 0x08A3CC2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 164u, 0x08A3CC2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954484u) goto L_08954484;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08954484:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(688)));
      if (branch_taken) {
          goto L_0895449C;
      }
      goto L_08954494;
    }
L_08954494:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
      if (branch_taken) {
          goto L_089544B4;
      }
      goto L_0895449C;
    }
L_0895449C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089543F0;
      }
      goto L_089544AC;
    }
L_089544AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089544BC;
      }
      goto L_089544B4;
    }
L_089544B4:
    aot_gpr_31 = (0x089544BCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0895742C;
L_089544BC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089544E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    aot_gpr_31 = (0x08954510u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    goto L_0895742C;
L_08954510:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(688)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08954570;
      }
      goto L_08954528;
    }
L_08954528:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(692)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08954558;
      }
      goto L_08954540;
    }
L_08954540:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(692)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_6;
      if (branch_taken) {
          goto L_08954594;
      }
      goto L_08954558;
    }
L_08954558:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(688)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08954528;
      }
      goto L_08954570;
    }
L_08954570:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08954608;
      }
      goto L_08954594;
    }
L_08954594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(692)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08954600u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0083.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 102u, 0x08954600u, 0x08953954u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0083_entry(rt, ctx, 813u, aot_mem);
#else
        recomp_unit_0083_entry(rt, ctx, 813u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 813u, 0x08953954u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954600u) goto L_08954600;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08954600:
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
    goto L_08954608;
L_08954608:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954624:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08954640u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    goto L_0895742C;
L_08954640:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(688)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089546B8;
      }
      goto L_08954658;
    }
L_08954658:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(692)));
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089546A0;
      }
      goto L_0895467C;
    }
L_0895467C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(692)));
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_16 == aot_gpr_5;
      if (branch_taken) {
          goto L_089546C0;
      }
      goto L_089546A0;
    }
L_089546A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(688)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08954658;
      }
      goto L_089546B8;
    }
L_089546B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089546F0;
      }
      goto L_089546C0;
    }
L_089546C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(692)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089546E8u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 111u, 0x089546E8u, 0x08B6BC84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 748u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 748u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 748u, 0x08B6BC84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089546E8u) goto L_089546E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089546E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089546F0;
      }
      goto L_089546F0;
    }
L_089546F0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954704:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0895471Cu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_0895742C;
L_0895471C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08954730;
      }
      goto L_08954728;
    }
L_08954728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08954764;
      }
      goto L_08954730;
    }
L_08954730:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08954740u);
    aot_gpr_5 = (0u | 1u);
    goto L_08956594;
L_08954740:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08954758u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    goto L_08955EC0;
L_08954758:
    aot_gpr_31 = (0x08954760u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0895742C;
L_08954760:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08954764;
L_08954764:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954778:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(616)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0895479Cu);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B73484u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0895479C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_089547B4;
      }
      goto L_089547A4;
    }
L_089547A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089547B4;
      }
      goto L_089547B0;
    }
L_089547B0:
    aot_gpr_4 = (0u | 1u);
    goto L_089547B4;
L_089547B4:
    ctx.gpr[2] = (aot_gpr_4 & 255u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089547C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-240));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_31 = (0x08954810u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0083.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 127u, 0x08954810u, 0x08953A08u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0083_entry(rt, ctx, 823u, aot_mem);
#else
        recomp_unit_0083_entry(rt, ctx, 823u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954810u) goto L_08954810;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08954810:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 3u, 2u>();
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
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29552));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-56));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1464), aot_gpr_5);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0895485Cu);
    aot_gpr_6 = (0u | 56u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0054.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 128u, 0x0895485Cu, 0x088DF9D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0054_entry(rt, ctx, 498u, aot_mem);
#else
        recomp_unit_0054_entry(rt, ctx, 498u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 498u, 0x088DF9D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0895485Cu) goto L_0895485C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0895485C:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1408));
    aot_gpr_31 = (0x08954870u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 129u, 0x08954870u, 0x0885F828u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 912u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 912u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954870u) goto L_08954870;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08954870:
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 7u, 3u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    ctx.execute_vfpu_unary_ct<0u, 0u, 3u, 2u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x089548ACu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 130u, 0x089548ACu, 0x08860094u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089548ACu) goto L_089548AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089548AC:
    aot_gpr_4 = (15360u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (0u | 61u);
    aot_gpr_31 = (0x089548D4u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0083.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 131u, 0x089548D4u, 0x08953B30u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0083_entry(rt, ctx, 830u, aot_mem);
#else
        recomp_unit_0083_entry(rt, ctx, 830u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 830u, 0x08953B30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089548D4u) goto L_089548D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089548D4:
    aot_gpr_4 = (2816u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1464)));
    aot_gpr_5 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (15u << 16u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_gpr_6 = (4096u << 16u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29552), aot_gpr_5);
    aot_gpr_6 = (256u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_6 = (2560u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08954964;
      }
      goto L_08954950;
    }
L_08954950:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08954964;
      }
      goto L_0895495C;
    }
L_0895495C:
    aot_gpr_31 = (0x08954964u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(144)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0117.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 134u, 0x08954964u, 0x089D89E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0117_entry(rt, ctx, 129u, aot_mem);
#else
        recomp_unit_0117_entry(rt, ctx, 129u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954964u) goto L_08954964;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08954964:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(232)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954988:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(580)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089549A0;
      }
      goto L_08954998;
    }
L_08954998:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_089549A0;
L_089549A0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(588)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089549B8;
      }
      goto L_089549B0;
    }
L_089549B0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_089549B8;
L_089549B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089549D0;
      }
      goto L_089549C8;
    }
L_089549C8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_089549D0;
L_089549D0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(584)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089549E8;
      }
      goto L_089549E0;
    }
L_089549E0:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_089549E8;
L_089549E8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(592)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08954A00;
      }
      goto L_089549F8;
    }
L_089549F8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), aot_gpr_5);
    goto L_08954A00;
L_08954A00:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(600)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08954A18;
      }
      goto L_08954A10;
    }
L_08954A10:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_08954A18;
L_08954A18:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954A20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08954A3Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 149u, 0x08954A3Cu, 0x08A07508u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 787u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 787u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954A3Cu) goto L_08954A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08954A3C:
    ctx.gpr[17] = (0u | 0u);
    goto L_08954A40;
L_08954A40:
    aot_gpr_31 = (0x08954A48u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954988;
L_08954A48:
    aot_gpr_31 = (0x08954A50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954A74;
L_08954A50:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08954A40;
      }
      goto L_08954A60;
    }
L_08954A60:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954A74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(608)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08954AB0;
      }
      goto L_08954A98;
    }
L_08954A98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1444)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1448)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08954AB8;
      }
      goto L_08954AA8;
    }
L_08954AA8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08954B54;
      }
      goto L_08954AB0;
    }
L_08954AB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08954B68;
      }
      goto L_08954AB8;
    }
L_08954AB8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1440)));
    ctx.gpr[17] = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08954B18;
      }
      goto L_08954ACC;
    }
L_08954ACC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1460)));
    ctx.gpr[18] = (aot_gpr_5 << 2u);
    ctx.gpr[18] = (ctx.gpr[19] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
      if (branch_taken) {
          goto L_08954B14;
      }
      goto L_08954AE0;
    }
L_08954AE0:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(29232));
    goto L_08954AE8;
L_08954AE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08954AFC;
      }
      goto L_08954AF4;
    }
L_08954AF4:
    aot_gpr_31 = (0x08954AFCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954AFCu) goto L_08954AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08954AFC:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
      if (branch_taken) {
          goto L_08954AE8;
      }
      goto L_08954B0C;
    }
L_08954B0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1448)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1440)));
    goto L_08954B14;
L_08954B14:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08954B18;
L_08954B18:
    aot_gpr_5 = (aot_gpr_4 << 2u);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_5);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[18] = (2236u << 16u);
      if (branch_taken) {
          goto L_08954B54;
      }
      goto L_08954B28;
    }
L_08954B28:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29232));
    goto L_08954B2C;
L_08954B2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08954B40;
      }
      goto L_08954B38;
    }
L_08954B38:
    aot_gpr_31 = (0x08954B40u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954B40u) goto L_08954B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08954B40:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
      if (branch_taken) {
          goto L_08954B2C;
      }
      goto L_08954B50;
    }
L_08954B50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1448)));
    goto L_08954B54;
L_08954B54:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1452)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1444), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1456)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1448), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1452), aot_gpr_4);
    goto L_08954B68;
L_08954B68:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954B84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(712)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(716)));
      if (branch_taken) {
          goto L_08954BF8;
      }
      goto L_08954B94;
    }
L_08954B94:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    goto L_08954B98;
L_08954B98:
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[10] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_gpr_4 + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[8] != aot_gpr_5) {
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
        goto L_08954BD4;
    }
    goto L_08954BC0;
L_08954BC0:
    ctx.gpr[11] = (aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
      if (branch_taken) {
          goto L_08954BDC;
      }
      goto L_08954BD0;
    }
L_08954BD0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    goto L_08954BD4;
L_08954BD4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08954BEC;
      }
      goto L_08954BDC;
    }
L_08954BDC:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    aot_gpr_4 = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08954BF0;
      }
      goto L_08954BEC;
    }
L_08954BEC:
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    goto L_08954BF0;
L_08954BF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
      if (branch_taken) {
          goto L_08954B98;
      }
      goto L_08954BF8;
    }
L_08954BF8:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08954C14;
      }
      goto L_08954C04;
    }
L_08954C04:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08954C14;
      }
      goto L_08954C10;
    }
L_08954C10:
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    goto L_08954C14;
L_08954C14:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954C1C:
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(11748));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(11764));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08954C3C;
      }
      goto L_08954C2C;
    }
L_08954C2C:
    aot_mem.aot_direct_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    goto L_08954C30;
L_08954C30:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    if (ctx.gpr[7] != aot_gpr_5) {
    aot_mem.aot_direct_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
        goto L_08954C30;
    }
    goto L_08954C3C;
L_08954C3C:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8144), 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954C44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8144)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 300 ? 1u : 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08954D2C;
      }
      goto L_08954C70;
    }
L_08954C70:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8144)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[18] = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(14)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8148));
    aot_gpr_6 = (2236u << 16u);
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(29552));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-56));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_4 = (14848u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08954CD4u);
    ctx.gpr[8] = (0u | 59u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 193u, 0x08954CD4u, 0x0895BAA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 527u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 527u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 527u, 0x0895BAA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954CD4u) goto L_08954CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08954CD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (2816u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(29)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(11748))))));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8144));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(29)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[17] + aot_gpr_6);
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(11748), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(29)));
    aot_gpr_6 = (0u | 7u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_08954D34;
      }
      goto L_08954D24;
    }
L_08954D24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08954D58;
      }
      goto L_08954D2C;
    }
L_08954D2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08954DD0;
      }
      goto L_08954D34;
    }
L_08954D34:
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
    ctx.execute_vfpu_vec3_ct<27u, 27u, 0u, 3u, 1u>();
    ctx.execute_vfpu_vdot_ct<0u, 27u, 27u, 3u>();
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08954DD0;
      }
      goto L_08954D58;
    }
L_08954D58:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08954DD0;
      }
      goto L_08954D64;
    }
L_08954D64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8144)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 300 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08954DD0;
      }
      goto L_08954D74;
    }
L_08954D74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8144)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(8148));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(30)));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(11762))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (2236u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32304));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<27u, 27u, 0u, 3u, 1u>();
    ctx.execute_vfpu_vdot_ct<0u, 27u, 27u, 3u>();
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(11762), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_08954DD0;
L_08954DD0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954DE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08954E00u);
    aot_gpr_5 = (0u | 1u);
    goto L_08956594;
L_08954E00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08954E34;
      }
      goto L_08954E2C;
    }
L_08954E2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08954E3C;
      }
      goto L_08954E34;
    }
L_08954E34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08954E3C;
L_08954E3C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954E4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08954E64u);
    aot_gpr_5 = (0u | 1u);
    goto L_08956594;
L_08954E64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(584)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(592)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08954EBC;
      }
      goto L_08954EA4;
    }
L_08954EA4:
    aot_gpr_31 = (0x08954EACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956C14;
L_08954EAC:
    aot_gpr_31 = (0x08954EB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956690;
L_08954EB4:
    aot_gpr_31 = (0x08954EBCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956C6C;
L_08954EBC:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954ED0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08954EF4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956690;
L_08954EF4:
    aot_gpr_31 = (0x08954EFCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954A20;
L_08954EFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(300)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (2236u << 16u);
      if (branch_taken) {
          goto L_08954F64;
      }
      goto L_08954F14;
    }
L_08954F14:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29232));
    goto L_08954F1C;
L_08954F1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_08954F44;
    }
    goto L_08954F30;
L_08954F30:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08954F3Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954F3Cu) goto L_08954F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08954F3C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08954F44;
L_08954F44:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(300)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08954F1C;
      }
      goto L_08954F64;
    }
L_08954F64:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08954F80:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08954FB8;
      }
      goto L_08954FA4;
    }
L_08954FA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(692)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08954FC0;
      }
      goto L_08954FB0;
    }
L_08954FB0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955008;
      }
      goto L_08954FB8;
    }
L_08954FB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955008;
      }
      goto L_08954FC0;
    }
L_08954FC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(688)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08955008;
      }
      goto L_08954FD4;
    }
L_08954FD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(692)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08954FF4;
      }
      goto L_08954FE8;
    }
L_08954FE8:
    aot_gpr_31 = (0x08954FF0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 228u, 0x08954FF0u, 0x08A3CC80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 167u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 167u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 167u, 0x08A3CC80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08954FF0u) goto L_08954FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08954FF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    goto L_08954FF4;
L_08954FF4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(688)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08954FD4;
      }
      goto L_08955008;
    }
L_08955008:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955020:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1456)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1440)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1456)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1460)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1456), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955050:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(176), 0u);
    aot_gpr_5 = (ctx.gpr[7] & aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(184), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955084:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), 0u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089550A0:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), 0u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089550C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-27284));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (2197u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(28), 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 160u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    aot_gpr_31 = (0x08955118u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20640));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 236u, 0x08955118u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955118u) goto L_08955118;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955118:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(520));
    ctx.gpr[7] = (2197u << 16u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 20u);
    aot_gpr_31 = (0x08955134u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20612));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 237u, 0x08955134u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955134u) goto L_08955134;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955134:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(604), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(608), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (2197u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(628), 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1488));
    aot_gpr_5 = (0u | 32u);
    aot_gpr_6 = (0u | 208u);
    aot_gpr_31 = (0x08955160u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20560));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 238u, 0x08955160u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955160u) goto L_08955160;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955160:
    aot_gpr_4 = (0u | 8192u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1460), aot_gpr_4);
    ctx.gpr[20] = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1040));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(1440));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29232));
      if (branch_taken) {
          goto L_08955194;
      }
      goto L_08955184;
    }
L_08955184:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08955188;
L_08955188:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    if (aot_gpr_4 != aot_gpr_6) {
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
        goto L_08955188;
    }
    goto L_08955194;
L_08955194:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1036), 0u);
    aot_gpr_31 = (0x089551A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954C1C;
L_089551A0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(580), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(200));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(588), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(360));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(596), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(584), ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(540));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(592), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(560));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(600), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17824)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17820)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x089551ECu);
    aot_gpr_4 = (0u | 20u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 243u, 0x089551ECu, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089551ECu) goto L_089551EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089551EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08955208;
      }
      goto L_089551F8;
    }
L_089551F8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08955204u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 245u, 0x08955204u, 0x08B6BCA0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 749u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 749u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 749u, 0x08B6BCA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955204u) goto L_08955204;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955204:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08955208;
L_08955208:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895521C;
      }
      goto L_08955210;
    }
L_08955210:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_0895521C;
L_0895521C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08955260;
      }
      goto L_0895522C;
    }
L_0895522C:
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08955250;
      }
      goto L_08955234;
    }
L_08955234:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08955248;
      }
      goto L_0895523C;
    }
L_0895523C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08955248;
L_08955248:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    goto L_08955250;
L_08955250:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(308), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(301)));
      if (branch_taken) {
          goto L_08955288;
      }
      goto L_08955260;
    }
L_08955260:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(304));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08955280u);
    ctx.gpr[9] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0083.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 255u, 0x08955280u, 0x08953BD4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0083_entry(rt, ctx, 831u, aot_mem);
#else
        recomp_unit_0083_entry(rt, ctx, 831u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 831u, 0x08953BD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955280u) goto L_08955280;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955280:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(301)));
    goto L_08955288;
L_08955288:
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_089552B0;
      }
      goto L_08955290;
    }
L_08955290:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x089552ACu);
    aot_gpr_4 = (ctx.gpr[19] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089552ACu) goto L_089552AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089552AC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_089552B0;
L_089552B0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_089552D0;
      }
      goto L_089552B8;
    }
L_089552B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_089552D0;
      }
      goto L_089552C8;
    }
L_089552C8:
    aot_gpr_31 = (0x089552D0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089552D0u) goto L_089552D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089552D0:
    aot_gpr_31 = (0x089552D8u);
    aot_gpr_4 = (0u | 12288u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 263u, 0x089552D8u, 0x08ABE29Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 468u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 468u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089552D8u) goto L_089552D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089552D8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(11764), ctx.gpr[2]);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955300:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(688)));
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
      if (branch_taken) {
          goto L_08955390;
      }
      goto L_08955318;
    }
L_08955318:
    ctx.gpr[7] = (0u | 0u);
    goto L_0895531C;
L_0895531C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(692)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
      if (branch_taken) {
          goto L_08955340;
      }
      goto L_08955330;
    }
L_08955330:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
        goto L_08955348;
    }
    goto L_08955340;
L_08955340:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08955374;
      }
      goto L_08955348;
    }
L_08955348:
    ctx.gpr[10] = (ctx.gpr[10] + aot_gpr_5);
    ctx.gpr[10] = (aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 128u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_gpr_5 = (aot_gpr_5 << 5u);
      if (branch_taken) {
          goto L_08955364;
      }
      goto L_0895535C;
    }
L_0895535C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08955374;
      }
      goto L_08955364;
    }
L_08955364:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[11]);
    aot_gpr_5 = (ctx.gpr[10] + aot_gpr_5);
    goto L_08955374;
L_08955374:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(688)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0895531C;
      }
      goto L_08955390;
    }
L_08955390:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955398:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[9] != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(604), 0u);
        goto L_089553AC;
    }
    goto L_089553A4;
L_089553A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0895543C;
      }
      goto L_089553AC;
    }
L_089553AC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(708)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(704)));
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_6;
      if (branch_taken) {
          goto L_0895543C;
      }
      goto L_089553CC;
    }
L_089553CC:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (aot_gpr_6 << 2u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(1040)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[8];
      if (branch_taken) {
          goto L_08955418;
      }
      goto L_089553E8;
    }
L_089553E8:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_089553FC;
      }
      goto L_089553F4;
    }
L_089553F4:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08955418;
      }
      goto L_089553FC;
    }
L_089553FC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
      if (branch_taken) {
          goto L_08955414;
      }
      goto L_08955404;
    }
L_08955404:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(1040), 0u);
    goto L_08955414;
L_08955414:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(604), ctx.gpr[7]);
    goto L_08955418;
L_08955418:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(704)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(708)));
    ctx.gpr[10] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[10]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6));
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_6;
      if (branch_taken) {
          goto L_089553CC;
      }
      goto L_0895543C;
    }
L_0895543C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955444:
// TIER2_SUPERBLOCK_V2_HOOK_BEGIN
    if (vcs::tier2_cluster_enabled(vcs::Tier2ClusterId::Geometry) && rt.memory().direct_fastmem_enabled()) {
        AOT_REGCACHE_SYNC_OUT(); aot_regcache_valid = false;
        vcs::tier2_superblock_geometry(rt, ctx, aot_mem, 0x08955444u);
        AOT_REGCACHE_SYNC_OUT(); return;
    }
// TIER2_SUPERBLOCK_V2_HOOK_END
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11768)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17792));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f_ct<21u, 12u, 2u>();
    ctx.execute_vfpu_vec3_ct<117u, 117u, 76u, 1u, 2u>();
    ctx.execute_vfpu_vtfm_ct<14u, 36u, 21u, 4u, 3u>();
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
      if (branch_taken) {
          goto L_089554A0;
      }
      goto L_08955474;
    }
L_08955474:
    ctx.execute_vfpu_vec3_ct<13u, 13u, 27u, 3u, 1u>();
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11768)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(11768), aot_gpr_5);
    goto L_089554A0;
L_089554A0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089554A8:
// TIER2_SUPERBLOCK_V2_HOOK_BEGIN
    if (vcs::tier2_cluster_enabled(vcs::Tier2ClusterId::Geometry) && rt.memory().direct_fastmem_enabled()) {
        AOT_REGCACHE_SYNC_OUT(); aot_regcache_valid = false;
        vcs::tier2_superblock_geometry(rt, ctx, aot_mem, 0x089554A8u);
        AOT_REGCACHE_SYNC_OUT(); return;
    }
// TIER2_SUPERBLOCK_V2_HOOK_END
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08955544;
      }
      goto L_089554E0;
    }
L_089554E0:
    ctx.gpr[20] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_08955544;
      }
      goto L_089554EC;
    }
L_089554EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (ctx.gpr[20] + ctx.gpr[20]);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_6);
    ctx.gpr[20] = (aot_gpr_6 << 2u);
    ctx.gpr[20] = (aot_gpr_4 + ctx.gpr[20]);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29552));
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0895553C;
      }
      goto L_08955518;
    }
L_08955518:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8408)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[21] = (aot_gpr_5 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0895554C;
      }
      goto L_08955534;
    }
L_08955534:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08955608;
      }
      goto L_0895553C;
    }
L_0895553C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_08955544;
    }
L_08955544:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_0895554C;
    }
L_0895554C:
    ctx.execute_vfpu_vtfm_ct<14u, 40u, 21u, 4u, 3u>();
    ctx.vfpu_ctrl[0u] = 0x00000FE4u;
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    // vflush: architectural no-op that retains VFPU prefixes
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<131u>());
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08955604;
      }
      goto L_08955570;
    }
L_08955570:
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x0895557Cu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    goto L_08957500;
L_0895557C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089555FC;
      }
      goto L_08955588;
    }
L_08955588:
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08955604;
      }
      goto L_08955594;
    }
L_08955594:
    aot_gpr_4 = (ctx.gpr[21] >> 8u);
    aot_gpr_5 = (15u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_5 = (4096u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (256u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (ctx.gpr[21] & aot_gpr_5);
    aot_gpr_6 = (2560u << 16u);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089555F4u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 300u, 0x089555F4u, 0x0895A760u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 362u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 362u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 362u, 0x0895A760u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089555F4u) goto L_089555F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089555F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_089555FC;
    }
L_089555FC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_08955604;
    }
L_08955604:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08955608;
L_08955608:
    aot_gpr_4 = (ctx.gpr[21] >> 8u);
    ctx.gpr[30] = (15u << 16u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[30]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), aot_gpr_4);
    ctx.gpr[23] = (4096u << 16u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[23]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[22] = (256u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (ctx.gpr[21] & ctx.gpr[22]);
    ctx.gpr[21] = (2560u << 16u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0895568C;
      }
      goto L_08955674;
    }
L_08955674:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08955684u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 305u, 0x08955684u, 0x0895A760u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 362u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 362u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 362u, 0x0895A760u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955684u) goto L_08955684;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955684:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_0895568C;
    }
L_0895568C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08955764;
      }
      goto L_0895569C;
    }
L_0895569C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 >> 4u);
    aot_gpr_5 = (aot_gpr_5 << 4u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089556D4;
      }
      goto L_089556B4;
    }
L_089556B4:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_4 >> 4u);
    aot_gpr_5 = (aot_gpr_5 << 4u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_089556B4;
      }
      goto L_089556D0;
    }
L_089556D0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_089556D4;
L_089556D4:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8412)));
    aot_gpr_4 = (14929u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 46871u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8412), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08955700u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 311u, 0x08955700u, 0x0895A760u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 362u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 362u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 362u, 0x0895A760u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955700u) goto L_08955700;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955700:
    aot_gpr_4 = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8412), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08955764;
      }
      goto L_0895570C;
    }
L_0895570C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2816u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_gpr_4 - ctx.gpr[17]);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_31 = (0x08955744u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 313u, 0x08955744u, 0x08ABE57Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955744u) goto L_08955744;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955744:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08955758u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 314u, 0x08955758u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955758u) goto L_08955758;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    goto L_08955764;
L_08955764:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089557B4;
      }
      goto L_0895576C;
    }
L_0895576C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_4 & ctx.gpr[22]);
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[30]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[23]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), aot_gpr_4);
    goto L_089557B4;
L_089557B4:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089557E8:
    ctx.gpr[7] = (aot_gpr_6 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_089557F4;
    }
L_089557F4:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8760)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0895580C:
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (7424u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (49280u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (18176u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_08955870;
    }
L_08955870:
    aot_gpr_6 = (49280u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (18176u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_089558B0;
    }
L_089558B0:
    aot_gpr_6 = (49152u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (18176u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_089558F0;
    }
L_089558F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_089558F8;
    }
L_089558F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_08955900;
    }
L_08955900:
    aot_gpr_6 = (59136u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    ctx.gpr[7] = (18176u << 16u);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (7424u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_08955980;
    }
L_08955980:
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (7424u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (56319u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (57088u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(162));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (57856u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (18176u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (59136u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955AC4;
      }
      goto L_08955A58;
    }
L_08955A58:
    aot_gpr_6 = (57088u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(50));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (7424u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08955AC4;
L_08955AC4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955ACC:
    ctx.gpr[7] = (aot_gpr_6 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955AD8;
    }
L_08955AD8:
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_6);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8728)));
    jump_target = ctx.gpr[1];
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955AF0:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (0u & 255u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (7424u << 16u);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (18176u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955B54;
    }
L_08955B54:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (18176u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955B90;
    }
L_08955B90:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (18176u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955BCC;
    }
L_08955BCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955BD4;
    }
L_08955BD4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955BDC;
    }
L_08955BDC:
    aot_gpr_6 = (59136u << 16u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_6 >> 8u);
    ctx.gpr[7] = (18176u << 16u);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_6 = (7424u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955C58;
    }
L_08955C58:
    aot_gpr_6 = (56319u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4103));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (57088u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (0u & 255u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[7] = (7424u << 16u);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_6 = (18176u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_6 = (59136u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955D48;
      }
      goto L_08955D2C;
    }
L_08955D2C:
    aot_gpr_4 = (56319u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4103));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08955D48;
L_08955D48:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955D50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08955D98;
      }
      goto L_08955D68;
    }
L_08955D68:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 2 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 3 ? 1u : 0u);
        goto L_08955DA0;
    }
    goto L_08955D78;
L_08955D78:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
      if (branch_taken) {
          goto L_08955DC0;
      }
      goto L_08955D80;
    }
L_08955D80:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08955D90u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08956160;
L_08955D90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955DC0;
      }
      goto L_08955D98;
    }
L_08955D98:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955DC0;
      }
      goto L_08955DA0;
    }
L_08955DA0:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08955DC0;
      }
      goto L_08955DA8;
    }
L_08955DA8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08955DB8u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_08955DCC;
L_08955DB8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955DC0;
      }
      goto L_08955DC0;
    }
L_08955DC0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955DCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08955E18;
      }
      goto L_08955DE8;
    }
L_08955DE8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08955E10;
      }
      goto L_08955DF4;
    }
L_08955DF4:
    aot_gpr_31 = (0x08955DFCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0895697C;
L_08955DFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08955E20;
      }
      goto L_08955E08;
    }
L_08955E08:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955E2C;
      }
      goto L_08955E10;
    }
L_08955E10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955EAC;
      }
      goto L_08955E18;
    }
L_08955E18:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08955EAC;
      }
      goto L_08955E20;
    }
L_08955E20:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08955E2Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_089567C0;
L_08955E2C:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(636), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(644), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(648), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(624)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(644)));
    aot_gpr_31 = (0x08955E58u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 359u, 0x08955E58u, 0x08938F7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 258u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 258u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955E58u) goto L_08955E58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955E58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(624)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
    ctx.gpr[8] = (2197u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(14736));
    ctx.gpr[7] = (0u | 500u);
    aot_gpr_31 = (0x08955E7Cu);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 360u, 0x08955E7Cu, 0x089390ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 274u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 274u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955E7Cu) goto L_08955E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955E7C:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(628), ctx.gpr[2]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17760));
    aot_gpr_31 = (0x08955E8Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 361u, 0x08955E8Cu, 0x08939328u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 314u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 314u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955E8Cu) goto L_08955E8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955E8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(616)));
    aot_gpr_31 = (0x08955E98u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B734FCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08955E98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(616)));
    aot_gpr_31 = (0x08955EA4u);
    aot_gpr_5 = (0u | 4u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08955EA4:
    aot_gpr_31 = (0x08955EACu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089569A0;
L_08955EAC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08955EC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08955EF0u);
    goto L_08956F48;
L_08955EF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08955F10;
      }
      goto L_08955EF8;
    }
L_08955EF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[19] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08955F18;
      }
      goto L_08955F08;
    }
L_08955F08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08955F34;
      }
      goto L_08955F10;
    }
L_08955F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08956140;
      }
      goto L_08955F18;
    }
L_08955F18:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08955F28u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 371u, 0x08955F28u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955F28u) goto L_08955F28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955F28:
    aot_gpr_31 = (0x08955F30u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17788));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955F30u) goto L_08955F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08955F30:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_08955F34;
L_08955F34:
    aot_gpr_31 = (0x08955F3Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 374u, 0x08955F3Cu, 0x0882DFD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 424u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 424u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 424u, 0x0882DFD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08955F3Cu) goto L_08955F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08955F3C:
    aot_gpr_4 = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.lo);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08955F68u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    goto L_08956A00;
L_08955F68:
    aot_gpr_31 = (0x08955F70u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954778;
L_08955F70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08955F90;
      }
      goto L_08955F78;
    }
L_08955F78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[19];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08955F98;
      }
      goto L_08955F88;
    }
L_08955F88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08955FAC;
      }
      goto L_08955F90;
    }
L_08955F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08956140;
      }
      goto L_08955F98;
    }
L_08955F98:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[20];
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08955FAC;
      }
      goto L_08955FA4;
    }
L_08955FA4:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_08955FAC;
L_08955FAC:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08955FD8;
      }
      goto L_08955FB4;
    }
L_08955FB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(592)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08955FD0;
      }
      goto L_08955FC4;
    }
L_08955FC4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(592), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(600), aot_gpr_5);
      if (branch_taken) {
          goto L_08955FD8;
      }
      goto L_08955FD0;
    }
L_08955FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08956140;
      }
      goto L_08955FD8;
    }
L_08955FD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08956040;
      }
      goto L_08955FE8;
    }
L_08955FE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08956038;
      }
      goto L_08955FF8;
    }
L_08955FF8:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_08956040;
      }
      goto L_08956038;
    }
L_08956038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08956140;
      }
      goto L_08956040;
    }
L_08956040:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089560C0;
      }
      goto L_0895604C;
    }
L_0895604C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(632), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1036), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_089560C8;
      }
      goto L_08956080;
    }
L_08956080:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(604)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(604)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_31 = (0x089560B8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956160;
L_089560B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0895613C;
      }
      goto L_089560C0;
    }
L_089560C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08956140;
      }
      goto L_089560C8;
    }
L_089560C8:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089560E8;
      }
      goto L_089560DC;
    }
L_089560DC:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < 36 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (ctx.gpr[18] << 3u);
      if (branch_taken) {
          goto L_089560F0;
      }
      goto L_089560E8;
    }
L_089560E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08956130;
      }
      goto L_089560F0;
    }
L_089560F0:
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] - aot_gpr_4);
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08956110;
    }
    goto L_08956108;
L_08956108:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08956130;
      }
      goto L_08956110;
    }
L_08956110:
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08956130;
      }
      goto L_08956128;
    }
L_08956128:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08956130;
      }
      goto L_08956130;
    }
L_08956130:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0895613Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956160;
L_0895613C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08956140;
L_08956140:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956160:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089561A4;
      }
      goto L_0895617C;
    }
L_0895617C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0895619C;
      }
      goto L_08956188;
    }
L_08956188:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089561BC;
      }
      goto L_08956194;
    }
L_08956194:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089561C8;
      }
      goto L_0895619C;
    }
L_0895619C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956288;
      }
      goto L_089561A4;
    }
L_089561A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956288;
      }
      goto L_089561BC;
    }
L_089561BC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089561C8u);
    aot_gpr_5 = (0u | 1u);
    goto L_089567C0;
L_089561C8:
    aot_gpr_31 = (0x089561D0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0895697C;
L_089561D0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(636), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(644), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(648), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(624)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(644)));
    aot_gpr_31 = (0x089561FCu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 414u, 0x089561FCu, 0x08938F7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 258u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 258u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089561FCu) goto L_089561FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089561FC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(632)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(632)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(15));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(632), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(624)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(648)));
    ctx.gpr[8] = (2197u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(14796));
    ctx.gpr[7] = (0u | 500u);
    aot_gpr_31 = (0x08956258u);
    ctx.gpr[9] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 415u, 0x08956258u, 0x089390ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 274u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 274u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956258u) goto L_08956258;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956258:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(628), ctx.gpr[2]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17748));
    aot_gpr_31 = (0x08956268u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 416u, 0x08956268u, 0x08939328u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 314u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 314u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956268u) goto L_08956268;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956268:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(616)));
    aot_gpr_31 = (0x08956274u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B734FCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08956274:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(616)));
    aot_gpr_31 = (0x08956280u);
    aot_gpr_5 = (0u | 4u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08956280:
    aot_gpr_31 = (0x08956288u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089569A0;
L_08956288:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0895629C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089562C8u);
    goto L_0895742C;
L_089562C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[21] + aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08956394;
      }
      goto L_089562EC;
    }
L_089562EC:
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[17] = (0u | 1u);
    goto L_089562F4;
L_089562F4:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[18];
      if (branch_taken) {
          goto L_0895630C;
      }
      goto L_08956304;
    }
L_08956304:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0895634C;
      }
      goto L_0895630C;
    }
L_0895630C:
    ctx.gpr[7] = (aot_gpr_5 & 128u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08956334;
      }
      goto L_08956318;
    }
L_08956318:
    aot_gpr_5 = (aot_gpr_5 & 127u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_31 = (0x08956328u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0079.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 427u, 0x08956328u, 0x08941B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0079_entry(rt, ctx, 248u, aot_mem);
#else
        recomp_unit_0079_entry(rt, ctx, 248u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 248u, 0x08941B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956328u) goto L_08956328;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956328:
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0895634C;
      }
      goto L_08956334;
    }
L_08956334:
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1040)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0895634C;
      }
      goto L_08956348;
    }
L_08956348:
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_0895634C;
L_0895634C:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08956384;
      }
      goto L_08956354;
    }
L_08956354:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1036)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[7] << 5u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(656), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1036), aot_gpr_4);
    goto L_08956384;
L_08956384:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089562F4;
      }
      goto L_08956394;
    }
L_08956394:
    aot_gpr_31 = (0x0895639Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0895742C;
L_0895639C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089563C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089563ECu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 436u, 0x089563ECu, 0x08939174u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 282u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 282u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 282u, 0x08939174u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089563ECu) goto L_089563EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089563EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08956428;
      }
      goto L_089563F8;
    }
L_089563F8:
    aot_gpr_31 = (0x08956400u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954778;
L_08956400:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08956428;
      }
      goto L_08956408;
    }
L_08956408:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(628), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(648)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(636)));
    ctx.gpr[17] = (0u | 1u);
    if (aot_gpr_4 == ctx.gpr[17]) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(640)));
        goto L_08956430;
    }
    goto L_08956420;
L_08956420:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956448;
      }
      goto L_08956428;
    }
L_08956428:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956580;
      }
      goto L_08956430;
    }
L_08956430:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (116u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08956448;
      }
      goto L_08956444;
    }
L_08956444:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32));
    goto L_08956448;
L_08956448:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08956468;
      }
      goto L_08956458;
    }
L_08956458:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_08956478;
      }
      goto L_08956460;
    }
L_08956460:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956510;
      }
      goto L_08956468;
    }
L_08956468:
    aot_gpr_31 = (0x08956470u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089569C0;
L_08956470:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956580;
      }
      goto L_08956478;
    }
L_08956478:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089564F8;
      }
      goto L_08956488;
    }
L_08956488:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(640)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x089564BCu);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 451u, 0x089564BCu, 0x08A313ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 291u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 291u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 291u, 0x08A313ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089564BCu) goto L_089564BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089564BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089564E8;
      }
      goto L_089564D0;
    }
L_089564D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_08956500;
      }
      goto L_089564E0;
    }
L_089564E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956508;
      }
      goto L_089564E8;
    }
L_089564E8:
    aot_gpr_31 = (0x089564F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089569C0;
L_089564F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956580;
      }
      goto L_089564F8;
    }
L_089564F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956580;
      }
      goto L_08956500;
    }
L_08956500:
    aot_gpr_31 = (0x08956508u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0895629C;
L_08956508:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0895652C;
      }
      goto L_08956510;
    }
L_08956510:
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0895652C;
      }
      goto L_0895651C;
    }
L_0895651C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x0895652Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956E48;
L_0895652C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(636), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(640), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1036)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08956578;
      }
      goto L_08956540;
    }
L_08956540:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1036), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(652));
    aot_gpr_31 = (0x0895655Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08955D50;
L_0895655C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08956570;
      }
      goto L_08956568;
    }
L_08956568:
    aot_gpr_31 = (0x08956570u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089569C0;
L_08956570:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956580;
      }
      goto L_08956578;
    }
L_08956578:
    aot_gpr_31 = (0x08956580u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089569E0;
L_08956580:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956594:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089565E8;
      }
      goto L_089565AC;
    }
L_089565AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089565CC;
      }
      goto L_089565BC;
    }
L_089565BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089565D4;
      }
      goto L_089565CC;
    }
L_089565CC:
    aot_gpr_31 = (0x089565D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954A20;
L_089565D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089565E8;
      }
      goto L_089565E0;
    }
L_089565E0:
    aot_gpr_31 = (0x089565E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956690;
L_089565E8:
    aot_gpr_31 = (0x089565F0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954778;
L_089565F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08956668;
      }
      goto L_089565F8;
    }
L_089565F8:
    aot_gpr_31 = (0x08956600u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0895697C;
L_08956600:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08956610u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(628)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 478u, 0x08956610u, 0x08939138u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 278u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 278u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 278u, 0x08939138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956610u) goto L_08956610;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956610:
    aot_gpr_31 = (0x08956618u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089569A0;
L_08956618:
    aot_gpr_31 = (0x08956620u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0205.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 480u, 0x08956620u, 0x08B3AAE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0205_entry(rt, ctx, 733u, aot_mem);
#else
        recomp_unit_0205_entry(rt, ctx, 733u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956620u) goto L_08956620;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08956638;
      }
      goto L_08956628;
    }
L_08956628:
    aot_gpr_31 = (0x08956630u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 482u, 0x08956630u, 0x089392F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 310u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 310u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 310u, 0x089392F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956630u) goto L_08956630;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956630:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_08956648;
      }
      goto L_08956638;
    }
L_08956638:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08956644u);
    aot_gpr_5 = (0u | 1u);
    goto L_089567C0;
L_08956644:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    goto L_08956648;
L_08956648:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(636), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08956668;
L_08956668:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(636), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(640), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1036), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(616)));
    aot_gpr_31 = (0x08956680u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B734FCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08956680:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956690:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089566D8;
      }
      goto L_089566BC;
    }
L_089566BC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(608), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089566E0;
      }
      goto L_089566D0;
    }
L_089566D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0895678C;
      }
      goto L_089566D8;
    }
L_089566D8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956794;
      }
      goto L_089566E0;
    }
L_089566E0:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_gpr_5 << 2u);
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
      if (branch_taken) {
          goto L_08956788;
      }
      goto L_089566F8;
    }
L_089566F8:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
      if (branch_taken) {
          goto L_0895670C;
      }
      goto L_08956704;
    }
L_08956704:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956778;
      }
      goto L_0895670C;
    }
L_0895670C:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_gpr_4 << 3u);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
      if (branch_taken) {
          goto L_08956778;
      }
      goto L_08956724;
    }
L_08956724:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_0895676C;
      }
      goto L_08956750;
    }
L_08956750:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0895676C;
      }
      goto L_08956760;
    }
L_08956760:
    aot_gpr_31 = (0x08956768u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08955020;
L_08956768:
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    goto L_0895676C;
L_0895676C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
      if (branch_taken) {
          goto L_08956724;
      }
      goto L_08956778;
    }
L_08956778:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
      if (branch_taken) {
          goto L_089566F8;
      }
      goto L_08956784;
    }
L_08956784:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    goto L_08956788;
L_08956788:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0895678C;
L_0895678C:
    aot_gpr_31 = (0x08956794u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956BB8;
L_08956794:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089567B8:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089567C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[17] = (32770u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(431));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08956834;
      }
      goto L_089567E8;
    }
L_089567E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(616)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 17u);
    aot_gpr_31 = (0x089567FCu);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B73484u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089567FC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
      if (branch_taken) {
          goto L_0895682C;
      }
      goto L_08956808;
    }
L_08956808:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(616)));
    aot_gpr_31 = (0x08956814u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B734FCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08956814:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613)));
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08956904;
      }
      goto L_08956824;
    }
L_08956824:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089568F8;
      }
      goto L_0895682C;
    }
L_0895682C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0895690C;
      }
      goto L_08956834;
    }
L_08956834:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8707), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08956840u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 515u, 0x08956840u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956840u) goto L_08956840;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956840:
    aot_gpr_31 = (0x08956848u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 516u, 0x08956848u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956848u) goto L_08956848;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956848:
    aot_gpr_31 = (0x08956850u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 517u, 0x08956850u, 0x08934DB0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 206u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 206u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956850u) goto L_08956850;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(616)));
      if (branch_taken) {
          goto L_08956880;
      }
      goto L_08956868;
    }
L_08956868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089568B0;
      }
      goto L_08956880;
    }
L_08956880:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089568C0;
      }
      goto L_08956898;
    }
L_08956898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089568C0;
      }
      goto L_089568B0;
    }
L_089568B0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089568BCu);
    aot_gpr_5 = (0u | 2u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089568BC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(616)));
    goto L_089568C0;
L_089568C0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (0u | 17u);
    aot_gpr_31 = (0x089568D4u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B73484u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089568D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
      if (branch_taken) {
          goto L_089568E8;
      }
      goto L_089568E0;
    }
L_089568E0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956808;
      }
      goto L_089568E8;
    }
L_089568E8:
    aot_gpr_31 = (0x089568F0u);
    aot_gpr_4 = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089568F0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956840;
      }
      goto L_089568F8;
    }
L_089568F8:
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0895690C;
      }
      goto L_08956904;
    }
L_08956904:
    aot_gpr_31 = (0x0895690Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956924;
L_0895690C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956924:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1036), 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(596)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08956958;
      }
      goto L_08956940;
    }
L_08956940:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(632), aot_gpr_5);
      if (branch_taken) {
          goto L_08956964;
      }
      goto L_08956958;
    }
L_08956958:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(600)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08956964;
L_08956964:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(636), 0u);
    aot_gpr_31 = (0x08956970u);
    goto L_089567B8;
L_08956970:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0895697C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(620)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08956994u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08956994:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089569A0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(620)));
    aot_gpr_31 = (0x089569B4u);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089569B4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089569C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(616)));
    aot_gpr_31 = (0x089569D4u);
    aot_gpr_5 = (0u | 2u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089569D4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089569E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(616)));
    aot_gpr_31 = (0x089569F4u);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B73424u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089569F4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956A00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28416));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08956A4C;
      }
      goto L_08956A34;
    }
L_08956A34:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08956A44u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 546u, 0x08956A44u, 0x0882D794u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 286u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 286u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956A44u) goto L_08956A44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956A44:
    aot_gpr_31 = (0x08956A4Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17788));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956A4Cu) goto L_08956A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08956A4C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08956A58u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0010.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 548u, 0x08956A58u, 0x0882DFD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0010_entry(rt, ctx, 424u, aot_mem);
#else
        recomp_unit_0010_entry(rt, ctx, 424u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 424u, 0x0882DFD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956A58u) goto L_08956A58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956A58:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08956A68u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_08957098;
L_08956A68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08956A88;
      }
      goto L_08956A70;
    }
L_08956A70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08956A90;
      }
      goto L_08956A80;
    }
L_08956A80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08956AE4;
      }
      goto L_08956A88;
    }
L_08956A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08956B9C;
      }
      goto L_08956A90;
    }
L_08956A90:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08956ADC;
      }
      goto L_08956AA0;
    }
L_08956AA0:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08956AE4;
      }
      goto L_08956ADC;
    }
L_08956ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08956B9C;
      }
      goto L_08956AE4;
    }
L_08956AE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08956B98;
      }
      goto L_08956AF0;
    }
L_08956AF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_08956AF8;
    }
L_08956AF8:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_08956B00;
    }
L_08956B00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_08956B08;
    }
L_08956B08:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08956B18;
      }
      goto L_08956B10;
    }
L_08956B10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08956B6C;
      }
      goto L_08956B18;
    }
L_08956B18:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(720)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08956B68;
      }
      goto L_08956B2C;
    }
L_08956B2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(724)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    goto L_08956B38;
L_08956B38:
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[17]) {
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
        goto L_08956B58;
    }
    goto L_08956B44;
L_08956B44:
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[18];
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08956B58;
      }
      goto L_08956B50;
    }
L_08956B50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08956B6C;
      }
      goto L_08956B58;
    }
L_08956B58:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08956B38;
      }
      goto L_08956B68;
    }
L_08956B68:
    aot_gpr_4 = (0u | 0u);
    goto L_08956B6C;
L_08956B6C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08956B98;
      }
      goto L_08956B74;
    }
L_08956B74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08956B98;
      }
      goto L_08956B80;
    }
L_08956B80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_gpr_31 = (0x08956B98u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08955DCC;
L_08956B98:
    ctx.gpr[2] = (0u | 1u);
    goto L_08956B9C;
L_08956B9C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956BB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(592)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08956C04;
      }
      goto L_08956BD8;
    }
L_08956BD8:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08956C04;
      }
      goto L_08956BE4;
    }
L_08956BE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08956BF4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956CC8;
L_08956BF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(592)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08956C04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0895742C;
L_08956C04:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956C14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(580), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(588), aot_gpr_4);
    aot_gpr_31 = (0x08956C3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956690;
L_08956C3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(580), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(588), aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956C6C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(584)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08956CB8;
      }
      goto L_08956C8C;
    }
L_08956C8C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08956CB8;
      }
      goto L_08956C98;
    }
L_08956C98:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08956CA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956CC8;
L_08956CA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(584)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08956CB8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0895742C;
L_08956CB8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956CC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08956D60;
      }
      goto L_08956CF0;
    }
L_08956CF0:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08956D60;
      }
      goto L_08956D08;
    }
L_08956D08:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08956D14u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08956F20;
L_08956D14:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08956D20u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_08956F40;
L_08956D20:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08956D48;
      }
      goto L_08956D34;
    }
L_08956D34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08956D40u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08955020;
L_08956D40:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08956D48;
L_08956D48:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08956D08;
      }
      goto L_08956D60;
    }
L_08956D60:
    aot_gpr_31 = (0x08956D68u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0895742C;
L_08956D68:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956D88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (32768u << 16u);
      if (branch_taken) {
          goto L_08956E24;
      }
      goto L_08956DC8;
    }
L_08956DC8:
    ctx.gpr[18] = (aot_gpr_6 | ctx.gpr[18]);
    goto L_08956DCC;
L_08956DCC:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08956DD8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08956F20;
L_08956DD8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08956DF4;
      }
      goto L_08956DE8;
    }
L_08956DE8:
    aot_gpr_31 = (0x08956DF0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08955020;
L_08956DF0:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    goto L_08956DF4;
L_08956DF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08956E0Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08956F40;
L_08956E0C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08956DCC;
      }
      goto L_08956E24;
    }
L_08956E24:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956E48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (16722u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17729));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x08956E6Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 606u, 0x08956E6Cu, 0x08A3137Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 285u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 285u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956E6Cu) goto L_08956E6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956E6C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956E7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08956E9Cu);
    goto L_0895742C;
L_08956E9C:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(688)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08956F08;
      }
      goto L_08956EB4;
    }
L_08956EB4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(692)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[17]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08956EF4;
      }
      goto L_08956EC8;
    }
L_08956EC8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08956ED8u);
    aot_gpr_6 = (0u | 0u);
    goto L_08954310;
L_08956ED8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(692)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08956EF0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0142.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 612u, 0x08956EF0u, 0x08A3CC2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0142_entry(rt, ctx, 164u, aot_mem);
#else
        recomp_unit_0142_entry(rt, ctx, 164u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 164u, 0x08A3CC2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08956EF0u) goto L_08956EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08956EF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    goto L_08956EF4;
L_08956EF4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(688)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08956EB4;
      }
      goto L_08956F08;
    }
L_08956F08:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956F20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + aot_gpr_4);
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956F40:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_5 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08956F48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(580)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08956F88;
      }
      goto L_08956F78;
    }
L_08956F78:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_16;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08956F8C;
      }
      goto L_08956F84;
    }
L_08956F84:
    aot_gpr_4 = (0u | 1u);
    goto L_08956F88;
L_08956F88:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08956F8C;
L_08956F8C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08956FA0;
      }
      goto L_08956F94;
    }
L_08956F94:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08956FEC;
      }
      goto L_08956FA0;
    }
L_08956FA0:
    aot_gpr_4 = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_16); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_gpr_31 = (0x08956FC4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08957098;
L_08956FC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08956FE4;
      }
      goto L_08956FCC;
    }
L_08956FCC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(588)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[17];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08956FF4;
      }
      goto L_08956FDC;
    }
L_08956FDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08957008;
      }
      goto L_08956FE4;
    }
L_08956FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08957080;
      }
      goto L_08956FEC;
    }
L_08956FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957080;
      }
      goto L_08956FF4;
    }
L_08956FF4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_16;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08957008;
      }
      goto L_08957000;
    }
L_08957000:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08957008;
L_08957008:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0895701C;
      }
      goto L_08957010;
    }
L_08957010:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0895704C;
      }
      goto L_0895701C;
    }
L_0895701C:
    aot_gpr_31 = (0x08957024u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_08954778;
L_08957024:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08957044;
      }
      goto L_0895702C;
    }
L_0895702C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[17];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08957054;
      }
      goto L_0895703C;
    }
L_0895703C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08957068;
      }
      goto L_08957044;
    }
L_08957044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08957080;
      }
      goto L_0895704C;
    }
L_0895704C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957080;
      }
      goto L_08957054;
    }
L_08957054:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_16;
    aot_gpr_5 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08957068;
      }
      goto L_08957060;
    }
L_08957060:
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[18] & 255u);
    goto L_08957068;
L_08957068:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08957044;
      }
      goto L_08957070;
    }
L_08957070:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957044;
      }
      goto L_0895707C;
    }
L_0895707C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08957080;
L_08957080:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08957098:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_089570DC;
      }
      goto L_089570C0;
    }
L_089570C0:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089570DC;
      }
      goto L_089570CC;
    }
L_089570CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_089570DC;
      }
      goto L_089570D4;
    }
L_089570D4:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089570E4;
      }
      goto L_089570DC;
    }
L_089570DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08957138;
      }
      goto L_089570E4;
    }
L_089570E4:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(720)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_08957134;
      }
      goto L_089570F8;
    }
L_089570F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(724)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    goto L_08957104;
L_08957104:
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[17]) {
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
        goto L_08957124;
    }
    goto L_08957110;
L_08957110:
    ctx.gpr[9] = (aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[18];
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08957124;
      }
      goto L_0895711C;
    }
L_0895711C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08957138;
      }
      goto L_08957124;
    }
L_08957124:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08957104;
      }
      goto L_08957134;
    }
L_08957134:
    aot_gpr_4 = (0u | 0u);
    goto L_08957138;
L_08957138:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957158;
      }
      goto L_08957140;
    }
L_08957140:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(584)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[17];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08957160;
      }
      goto L_08957150;
    }
L_08957150:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08957174;
      }
      goto L_08957158;
    }
L_08957158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957210;
      }
      goto L_08957160;
    }
L_08957160:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08957174;
      }
      goto L_0895716C;
    }
L_0895716C:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08957174;
L_08957174:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08957194;
      }
      goto L_0895717C;
    }
L_0895717C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(592)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[17];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0895719C;
      }
      goto L_0895718C;
    }
L_0895718C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_089571B0;
      }
      goto L_08957194;
    }
L_08957194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957210;
      }
      goto L_0895719C;
    }
L_0895719C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_089571B0;
      }
      goto L_089571A8;
    }
L_089571A8:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_089571B0;
L_089571B0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089571E8;
      }
      goto L_089571B8;
    }
L_089571B8:
    aot_gpr_31 = (0x089571C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954778;
L_089571C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089571E0;
      }
      goto L_089571C8;
    }
L_089571C8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[17];
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_089571F0;
      }
      goto L_089571D8;
    }
L_089571D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08957204;
      }
      goto L_089571E0;
    }
L_089571E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08957210;
      }
      goto L_089571E8;
    }
L_089571E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957210;
      }
      goto L_089571F0;
    }
L_089571F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[18];
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08957204;
      }
      goto L_089571FC;
    }
L_089571FC:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08957204;
L_08957204:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089571E0;
      }
      goto L_0895720C;
    }
L_0895720C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08957210;
L_08957210:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08957228:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_6);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_5 >> 8u);
    ctx.gpr[7] = (15u << 16u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_6);
    ctx.gpr[30] = (4096u << 16u);
    aot_gpr_6 = (aot_gpr_6 | ctx.gpr[30]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[23] = (256u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[23]);
    ctx.gpr[22] = (2560u << 16u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[20] = (0u | 255u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_16 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089573A8;
      }
      goto L_089572E8;
    }
L_089572E8:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 >> 4u);
    aot_gpr_6 = (aot_gpr_6 << 4u);
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08957320;
      }
      goto L_08957300;
    }
L_08957300:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_5 >> 4u);
    aot_gpr_6 = (aot_gpr_6 << 4u);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_5);
      if (branch_taken) {
          goto L_08957300;
      }
      goto L_0895731C;
    }
L_0895731C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08957320;
L_08957320:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8412)));
    aot_gpr_5 = (14929u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 46871u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8412), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08957344u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 686u, 0x08957344u, 0x0895A760u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 362u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 362u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 362u, 0x0895A760u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957344u) goto L_08957344;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957344:
    aot_gpr_5 = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8412), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_089573A8;
      }
      goto L_08957350;
    }
L_08957350:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (2816u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_gpr_4 - ctx.gpr[18]);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29232));
    aot_gpr_31 = (0x08957388u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 688u, 0x08957388u, 0x08ABE57Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957388u) goto L_08957388;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957388:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0895739Cu);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 689u, 0x0895739Cu, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0895739Cu) goto L_0895739C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0895739C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    goto L_089573A8;
L_089573A8:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089573F8;
      }
      goto L_089573B0;
    }
L_089573B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (15u << 16u);
    aot_gpr_6 = (aot_gpr_4 & ctx.gpr[23]);
    aot_gpr_4 = (aot_gpr_4 >> 8u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[30]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_6 | ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    goto L_089573F8;
L_089573F8:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0895742C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08957434:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2235u << 16u);
      if (branch_taken) {
          goto L_08957474;
      }
      goto L_08957444;
    }
L_08957444:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-27300));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5864), 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_6 = (2235u << 16u);
      if (branch_taken) {
          goto L_08957460;
      }
      goto L_08957458;
    }
L_08957458:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    goto L_08957460;
L_08957460:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08957474;
      }
      goto L_0895746C;
    }
L_0895746C:
    aot_gpr_31 = (0x08957474u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957474u) goto L_08957474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08957474:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08957480:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089574D8;
      }
      goto L_0895749C;
    }
L_0895749C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    if (ctx.gpr[17] == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_089574C8;
    }
    goto L_089574AC;
L_089574AC:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_089574C8;
    }
    goto L_089574B4;
L_089574B4:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_089574C8;
    }
    goto L_089574BC;
L_089574BC:
    aot_gpr_31 = (0x089574C4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089574C4u) goto L_089574C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089574C4:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_089574C8;
L_089574C8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089574D8;
      }
      goto L_089574D0;
    }
L_089574D0:
    aot_gpr_31 = (0x089574D8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089574D8u) goto L_089574D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089574D8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089574EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08957500:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(2), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(6), ctx.gpr[9]));
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(10), ctx.gpr[10]));
    ctx.gpr[11] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(14), ctx.gpr[11]));
    ctx.gpr[12] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(18), ctx.gpr[12]));
    ctx.gpr[13] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(22), ctx.gpr[13]));
    ctx.gpr[14] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(26), ctx.gpr[14]));
    ctx.gpr[15] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(30), ctx.gpr[15]));
    ctx.gpr[24] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(34), ctx.gpr[24]));
    ctx.gpr[25] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(38), ctx.gpr[25]));
    ctx.gpr[2] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(42), ctx.gpr[2]));
    ctx.gpr[3] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(46), ctx.gpr[3]));
    ctx.set_vfpu_scalar_bits_ct<24u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<56u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<88u>(ctx.gpr[10]);
    ctx.set_vfpu_scalar_bits_ct<25u>(ctx.gpr[11]);
    ctx.set_vfpu_scalar_bits_ct<57u>(ctx.gpr[12]);
    ctx.set_vfpu_scalar_bits_ct<89u>(ctx.gpr[13]);
    ctx.set_vfpu_scalar_bits_ct<26u>(ctx.gpr[14]);
    ctx.set_vfpu_scalar_bits_ct<58u>(ctx.gpr[15]);
    ctx.set_vfpu_scalar_bits_ct<90u>(ctx.gpr[24]);
    ctx.set_vfpu_scalar_bits_ct<27u>(ctx.gpr[25]);
    ctx.set_vfpu_scalar_bits_ct<59u>(ctx.gpr[2]);
    ctx.set_vfpu_scalar_bits_ct<91u>(ctx.gpr[3]);
    ctx.execute_vfpu_vec3_ct<27u, 27u, 15u, 3u, 1u>();
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<59u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 2u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<12u, 12u, 3u, 2u>();
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix_ct<36u, 4u>(vfpu_s);
      ctx.read_vfpu_matrix_ct<24u, 4u>(vfpu_t);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix_ct<20u, 4u>(vfpu_d);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix_ct<40u, 4u>(vfpu_s);
      ctx.read_vfpu_matrix_ct<24u, 4u>(vfpu_t);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix_ct<16u, 4u>(vfpu_d);
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vcmp_ct<52u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp_ct<34u, 1u, 52u, 4u>();
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_089575B0;
    }
L_089575B0:
    ctx.execute_vfpu_vcmp_ct<53u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp_ct<34u, 1u, 53u, 4u>();
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_089575DC;
    }
L_089575DC:
    ctx.execute_vfpu_vcmp_ct<54u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp_ct<34u, 1u, 54u, 4u>();
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_08957608;
    }
L_08957608:
    ctx.execute_vfpu_vcmp_ct<55u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp_ct<34u, 1u, 55u, 4u>();
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_08957634;
    }
L_08957634:
    ctx.execute_vfpu_vcmp_ct<48u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp_ct<2u, 0u, 48u, 4u>();
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
      if (branch_taken) {
          goto L_089576FC;
      }
      goto L_08957660;
    }
L_08957660:
    ctx.execute_vfpu_vcmp_ct<49u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp_ct<2u, 0u, 49u, 4u>();
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
      if (branch_taken) {
          goto L_089576FC;
      }
      goto L_0895768C;
    }
L_0895768C:
    ctx.execute_vfpu_vcmp_ct<50u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp_ct<2u, 0u, 50u, 4u>();
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
      if (branch_taken) {
          goto L_089576FC;
      }
      goto L_089576B8;
    }
L_089576B8:
    ctx.execute_vfpu_vcmp_ct<51u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp_ct<2u, 0u, 51u, 4u>();
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
      if (branch_taken) {
          goto L_089576FC;
      }
      goto L_089576E4;
    }
L_089576E4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089576F0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089576FC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08957710:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x0895773Cu);
    ctx.pc = 0x08B7326Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0895773C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
      if (branch_taken) {
          goto L_08957754;
      }
      goto L_0895774C;
    }
L_0895774C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_08957884;
      }
      goto L_08957754;
    }
L_08957754:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29232));
    aot_gpr_5 = (47u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(15808));
    aot_gpr_31 = (0x0895776Cu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 725u, 0x0895776Cu, 0x08ABE57Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0895776Cu) goto L_0895776C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0895776C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089577B8;
      }
      goto L_08957780;
    }
L_08957780:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_5 = (12u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-12432));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(216), aot_gpr_5);
    aot_gpr_5 = (24u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24864));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(376), aot_gpr_5);
    aot_gpr_5 = (35u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28240));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(556), aot_gpr_4);
    goto L_089577B8;
L_089577B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957848;
      }
      goto L_089577C4;
    }
L_089577C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(584)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08957804;
      }
      goto L_089577DC;
    }
L_089577DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    ctx.gpr[7] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08957804;
      }
      goto L_089577EC;
    }
L_089577EC:
    aot_gpr_6 = (12u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-12432));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08957800u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 731u, 0x08957800u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957800u) goto L_08957800;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957800:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
    goto L_08957804;
L_08957804:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957848;
      }
      goto L_08957818;
    }
L_08957818:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
      if (branch_taken) {
          goto L_08957848;
      }
      goto L_08957820;
    }
L_08957820:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (12u << 16u);
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(-12432));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08957838u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 735u, 0x08957838u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957838u) goto L_08957838;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957838:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08957848u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957848u) goto L_08957848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08957848:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1460)));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_31 = (0x08957858u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 737u, 0x08957858u, 0x08ABE57Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957858u) goto L_08957858;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957858:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1440), ctx.gpr[2]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1460)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08957870u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B5814C, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957870u) goto L_08957870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08957870:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1444), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1448), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1452), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1456), 0u);
      if (branch_taken) {
          goto L_08957994;
      }
      goto L_08957884;
    }
L_08957884:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08957890u);
    aot_gpr_5 = (0u | 1u);
    goto L_08956594;
L_08957890:
    aot_gpr_31 = (0x08957898u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956690;
L_08957898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(592)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957994;
      }
      goto L_089578D8;
    }
L_089578D8:
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
      if (branch_taken) {
          goto L_08957900;
      }
      goto L_089578E4;
    }
L_089578E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (12u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-12432));
    aot_gpr_31 = (0x089578F8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 744u, 0x089578F8u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089578F8u) goto L_089578F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089578F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0895791C;
      }
      goto L_08957900;
    }
L_08957900:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0895791C;
      }
      goto L_08957914;
    }
L_08957914:
    aot_gpr_31 = (0x0895791Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08956C14;
L_0895791C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(584)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08957958;
      }
      goto L_08957934;
    }
L_08957934:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[7] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08957958;
      }
      goto L_08957944;
    }
L_08957944:
    aot_gpr_6 = (12u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-12432));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08957958u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 750u, 0x08957958u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957958u) goto L_08957958;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957958:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(300)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08957994;
      }
      goto L_08957970;
    }
L_08957970:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(300)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08957970;
      }
      goto L_08957994;
    }
L_08957994:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089579B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_31);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_6 & 255u);
    aot_gpr_31 = (0x089579F0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08956594;
L_089579F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_08957D48;
      }
      goto L_089579FC;
    }
L_089579FC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08957A34;
      }
      goto L_08957A14;
    }
L_08957A14:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957A1C;
    }
L_08957A1C:
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-9016));
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8972));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957A34;
    }
L_08957A34:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08957A60;
      }
      goto L_08957A40;
    }
L_08957A40:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957A48;
    }
L_08957A48:
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8840));
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8800));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957A60;
    }
L_08957A60:
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8928));
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8884));
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08957A78;
      }
      goto L_08957A78;
    }
L_08957A78:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08957B00;
      }
      goto L_08957A80;
    }
L_08957A80:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(608), 0u);
    aot_gpr_31 = (0x08957A8Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08954A20;
L_08957A8C:
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(300)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[23] = (2236u << 16u);
      if (branch_taken) {
          goto L_08957AF4;
      }
      goto L_08957AA4;
    }
L_08957AA4:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(29232));
    ctx.gpr[22] = (0u | 0u);
    goto L_08957AAC;
L_08957AAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[22]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957AD0;
      }
      goto L_08957AC0;
    }
L_08957AC0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08957ACCu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE8F4, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957ACCu) goto L_08957ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08957ACC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    goto L_08957AD0;
L_08957AD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(300)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08957AAC;
      }
      goto L_08957AF4;
    }
L_08957AF4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), 0u);
    aot_gpr_31 = (0x08957B00u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(624)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 771u, 0x08957B00u, 0x08938F40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 254u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 254u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957B00u) goto L_08957B00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957B00:
    aot_gpr_31 = (0x08957B08u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 772u, 0x08957B08u, 0x08938F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 250u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 250u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957B08u) goto L_08957B08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957B08:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x08957B20u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 773u, 0x08957B20u, 0x08938FD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 262u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 262u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957B20u) goto L_08957B20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957B20:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    ctx.gpr[21] = (ctx.gpr[21] - aot_gpr_4);
    aot_gpr_31 = (0x08957B38u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 774u, 0x08957B38u, 0x08938FD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 262u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 262u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957B38u) goto L_08957B38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957B38:
    aot_gpr_31 = (0x08957B40u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 775u, 0x08957B40u, 0x08938FD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 262u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 262u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957B40u) goto L_08957B40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957B40:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08957B50u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 776u, 0x08957B50u, 0x08939050u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 270u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 270u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957B50u) goto L_08957B50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957B50:
    aot_gpr_31 = (0x08957B58u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 777u, 0x08957B58u, 0x08938F40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 254u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 254u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957B58u) goto L_08957B58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957B58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x08957B6Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0076.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 778u, 0x08957B6Cu, 0x0893681Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0076_entry(rt, ctx, 694u, aot_mem);
#else
        recomp_unit_0076_entry(rt, ctx, 694u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0076_entry, 76u, 694u, 0x0893681Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957B6Cu) goto L_08957B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957B6C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_4 = (22354u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(19524));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x08957B8Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 779u, 0x08957B8Cu, 0x08A3137Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 285u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 285u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957B8Cu) goto L_08957B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957B8C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(300)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
        goto L_08957BD8;
    }
    goto L_08957BAC;
L_08957BAC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08957BB8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08956F40;
L_08957BB8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(300)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08957BAC;
      }
      goto L_08957BD4;
    }
L_08957BD4:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08957BD8;
L_08957BD8:
    aot_gpr_31 = (0x08957BE0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0077.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 784u, 0x08957BE0u, 0x08938F04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0077_entry(rt, ctx, 250u, aot_mem);
#else
        recomp_unit_0077_entry(rt, ctx, 250u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957BE0u) goto L_08957BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957BE0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(624), ctx.gpr[2]);
    aot_gpr_31 = (0x08957BECu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08955300;
L_08957BEC:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(580)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08957C18;
      }
      goto L_08957C00;
    }
L_08957C00:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08957C1C;
      }
      goto L_08957C14;
    }
L_08957C14:
    ctx.gpr[20] = (0u | 1u);
    goto L_08957C18;
L_08957C18:
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08957C1C;
L_08957C1C:
    ctx.gpr[19] = (ctx.gpr[20] & 255u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(608), 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(584)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(588)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(592)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(596)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(600)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08957C80u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08955398;
L_08957C80:
    { const bool branch_taken = ctx.gpr[19] == 0u;
      if (branch_taken) {
          goto L_08957CB0;
      }
      goto L_08957C88;
    }
L_08957C88:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_31 = (0x08957CA4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0083.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 792u, 0x08957CA4u, 0x08953A08u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0083_entry(rt, ctx, 823u, aot_mem);
#else
        recomp_unit_0083_entry(rt, ctx, 823u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957CA4u) goto L_08957CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957CA4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08957CB0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0083.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 793u, 0x08957CB0u, 0x08953F94u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0083_entry(rt, ctx, 887u, aot_mem);
#else
        recomp_unit_0083_entry(rt, ctx, 887u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 887u, 0x08953F94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957CB0u) goto L_08957CB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957CB0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(300)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08957D48;
      }
      goto L_08957CCC;
    }
L_08957CCC:
    ctx.gpr[10] = (0u | 4u);
    aot_gpr_6 = (0u | 0u);
    goto L_08957CD4;
L_08957CD4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_6);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[11] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08957D34;
      }
      goto L_08957CE8;
    }
L_08957CE8:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (ctx.gpr[9] & 15u);
    ctx.gpr[7] = (ctx.gpr[8] << (ctx.gpr[7] & 31u));
    ctx.gpr[9] = (ctx.gpr[9] & 240u);
    ctx.gpr[9] = (ctx.gpr[9] >> 4u);
    ctx.gpr[9] = (ctx.gpr[8] << (ctx.gpr[9] & 31u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (ctx.gpr[11] & 7u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
      if (branch_taken) {
          goto L_08957D20;
      }
      goto L_08957D10;
    }
L_08957D10:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[11] = (ctx.gpr[11] >> 31u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    goto L_08957D20;
L_08957D20:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_08957D34;
L_08957D34:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(300)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08957CD4;
      }
      goto L_08957D48;
    }
L_08957D48:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08957D74:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-272));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), aot_gpr_31);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08957DB0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 802u, 0x08957DB0u, 0x08A0721Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 747u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 747u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 747u, 0x08A0721Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957DB0u) goto L_08957DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957DB0:
    aot_gpr_31 = (0x08957DB8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    goto L_0895742C;
L_08957DB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_31 = (0x08957DDCu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0083.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 804u, 0x08957DDCu, 0x08953A08u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0083_entry(rt, ctx, 823u, aot_mem);
#else
        recomp_unit_0083_entry(rt, ctx, 823u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957DDCu) goto L_08957DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957DDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(580), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(588), aot_gpr_4);
    aot_gpr_31 = (0x08957DF4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    goto L_089567B8;
L_08957DF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[23] = (ctx.lo);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[22] = (ctx.lo);
    ctx.gpr[30] = (0u | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08957E40;
      }
      goto L_08957E24;
    }
L_08957E24:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[23]) < 11 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08957E40;
      }
      goto L_08957E30;
    }
L_08957E30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[22]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_08957E40;
      }
      goto L_08957E38;
    }
L_08957E38:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08957E48;
      }
      goto L_08957E40;
    }
L_08957E40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08957EA4;
      }
      goto L_08957E48;
    }
L_08957E48:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(720)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08957EA0;
      }
      goto L_08957E5C;
    }
L_08957E5C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(724)));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[23]) {
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
        goto L_08957E90;
    }
    goto L_08957E70;
L_08957E70:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(724)));
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[22];
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08957E90;
      }
      goto L_08957E84;
    }
L_08957E84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(724)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
      if (branch_taken) {
          goto L_08957EA4;
      }
      goto L_08957E90;
    }
L_08957E90:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(720)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08957E5C;
      }
      goto L_08957EA0;
    }
L_08957EA0:
    aot_gpr_4 = (0u | 0u);
    goto L_08957EA4;
L_08957EA4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957F54;
      }
      goto L_08957EAC;
    }
L_08957EAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[23];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08957ECC;
      }
      goto L_08957EBC;
    }
L_08957EBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08957ED0;
      }
      goto L_08957EC8;
    }
L_08957EC8:
    aot_gpr_5 = (0u | 1u);
    goto L_08957ECC;
L_08957ECC:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08957ED0;
L_08957ED0:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08957F3C;
      }
      goto L_08957ED8;
    }
L_08957ED8:
    aot_gpr_31 = (0x08957EE0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    goto L_08954778;
L_08957EE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08957F24;
      }
      goto L_08957EE8;
    }
L_08957EE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(600)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[23];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08957F08;
      }
      goto L_08957EF8;
    }
L_08957EF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[22];
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08957F0C;
      }
      goto L_08957F04;
    }
L_08957F04:
    aot_gpr_5 = (0u | 1u);
    goto L_08957F08;
L_08957F08:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08957F0C;
L_08957F0C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957F24;
      }
      goto L_08957F14;
    }
L_08957F14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(592)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(592), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(600), aot_gpr_4);
    goto L_08957F24;
L_08957F24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(584), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(592), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08957F74;
      }
      goto L_08957F3C;
    }
L_08957F3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08957F74;
      }
      goto L_08957F4C;
    }
L_08957F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08957F74;
      }
      goto L_08957F54;
    }
L_08957F54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(584), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(592), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08957F74;
L_08957F74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957FFC;
      }
      goto L_08957F8C;
    }
L_08957F8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08957FFC;
      }
      goto L_08957F9C;
    }
L_08957F9C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (2236u << 16u);
      if (branch_taken) {
          goto L_08957FFC;
      }
      goto L_08957FA8;
    }
L_08957FA8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x08957FB4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 838u, 0x08957FB4u, 0x08A1C770u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 74u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 74u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957FB4u) goto L_08957FB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957FB4:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
      if (branch_taken) {
          goto L_08957FFC;
      }
      goto L_08957FC0;
    }
L_08957FC0:
    aot_gpr_31 = (0x08957FC8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0084->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0084_entry, 840u, 0x08957FC8u, 0x08A1C650u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 55u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 55u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 55u, 0x08A1C650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08957FC8u) goto L_08957FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08957FC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08957FFC;
      }
      goto L_08957FD0;
    }
L_08957FD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08957FF0;
      }
      goto L_08957FDC;
    }
L_08957FDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(608)));
    aot_gpr_5 = (0u | 510u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(608), aot_gpr_4);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 1u, 0x08958004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08957FF0;
    }
L_08957FF0:
    aot_gpr_4 = (0u | 479u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(608), aot_gpr_4);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 1u, 0x08958004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08957FFC;
    }
L_08957FFC:
    aot_gpr_31 = (0x08958004u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    goto L_08956690;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0084(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0084_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_84(Runtime &runtime) {
    runtime.register_generated_unit(84u, 0x08954000u, 16384u, &recomp_unit_0084, &recomp_unit_0084_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08954000u, &recomp_unit_0084, "recomp_unit_0084",
                                          kEntryMasks_recomp_unit_0084, 64u);
}
} // namespace psprecomp
