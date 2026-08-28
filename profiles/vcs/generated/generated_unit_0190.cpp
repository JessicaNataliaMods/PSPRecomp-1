#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0190[64] = {
    0x0020400008000009ull, 0x00000000C0000201ull, 0x0000000000000000ull, 0x0000000000000000ull,
    0x2084420000000000ull, 0x0000000000084201ull, 0x0000800000000000ull, 0x7226880889110000ull,
    0x0808520AA9202E45ull, 0x49044A8085505080ull, 0x121202B2A2A93001ull, 0xAA295154AAD11250ull,
    0x2A4AD040A2055454ull, 0x0001800288810011ull, 0x5145181248250040ull, 0xB52A602AAA8AA5A9ull,
    0x2020550000200554ull, 0x08AA000000404000ull, 0x0000001820422812ull, 0x0100C14108200000ull,
    0x4450000000115010ull, 0x0200090000100800ull, 0x2494282249249220ull, 0x0004480554000149ull,
    0x5040D21280215249ull, 0x0D52505559142C52ull, 0x0000254421150801ull, 0xAAA1008010012500ull,
    0x040D55AA5240088Aull, 0xD010A95148A02000ull, 0x0000020620400100ull, 0x2A14AA2511502A2Aull,
    0x50512A08000D4151ull, 0x880402550A810A81ull, 0x804444A515004180ull, 0x5AAA492C9252AA52ull,
    0xA8000002002A4934ull, 0xA152AA9525149144ull, 0x4809215555551484ull, 0x2B4AAAAAAAA2A491ull,
    0x04100094AA949290ull, 0x0408104108100404ull, 0x8412252102405415ull, 0x1244A23AA2850814ull,
    0xA142400801004020ull, 0x0800555022040110ull, 0x000000120120AA81ull, 0x0852A010A5440110ull,
    0x82AA4522AA455510ull, 0x420AAA45548AA290ull, 0x2122042915522A8Aull, 0x5294A8C226948101ull,
    0x101020A5A4811022ull, 0x452A550889549004ull, 0x406AAA8A8228AA91ull, 0xA508345404001555ull,
    0x0A450952528052A4ull, 0x00000000002AAAA0ull, 0x40044C4A4410D280ull, 0x102A2505458A22A4ull,
    0x41282A48920AA94Aull, 0x00A210D429004021ull, 0xA00A818502008091ull, 0x02C0842889090040ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0190[64] = {
    1u, 6u, 10u, 10u, 10u, 15u, 19u, 20u, 35u, 54u, 70u, 89u, 114u, 135u, 144u, 160u,
    188u, 200u, 207u, 216u, 224u, 233u, 238u, 256u, 268u, 286u, 310u, 322u, 335u, 355u, 371u, 377u,
    399u, 416u, 432u, 447u, 474u, 487u, 511u, 533u, 561u, 578u, 587u, 604u, 624u, 634u, 646u, 656u,
    671u, 694u, 716u, 736u, 757u, 772u, 792u, 815u, 834u, 854u, 863u, 879u, 899u, 920u, 934u, 948u,
};

// PSPRECOMP_V813_HOT_DENSE_DISPATCH: one indexed load on the measured hot units;
// masks remain for exact registration/correctness proof.
alignas(64) static constexpr std::uint16_t kEntryIdsV813_recomp_unit_0190[4090] = {
    1u, 0u, 0u, 2u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 3u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 4u, 0u, 0u, 0u, 0u, 0u, 0u, 5u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    6u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 7u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 8u, 9u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 10u, 0u, 0u, 0u, 0u, 11u, 0u, 0u, 0u, 12u, 0u, 0u, 0u, 0u, 13u, 0u, 0u, 0u, 0u, 0u, 14u, 0u, 0u,
    15u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 16u, 0u, 0u, 0u, 0u, 17u, 0u, 0u, 0u, 0u, 18u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 19u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 20u, 0u, 0u, 0u, 21u, 0u, 0u, 0u, 22u, 0u, 0u, 23u, 0u, 0u, 0u, 24u,
    0u, 0u, 0u, 25u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 26u, 0u, 0u, 0u, 27u, 0u, 28u, 29u, 0u, 0u, 30u, 0u, 0u, 0u, 31u, 0u, 0u, 32u, 33u, 34u, 0u,
    35u, 0u, 36u, 0u, 0u, 0u, 37u, 0u, 0u, 38u, 39u, 40u, 0u, 41u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 42u, 0u, 0u, 43u, 0u, 0u, 44u, 0u, 45u, 0u, 46u,
    0u, 47u, 0u, 48u, 0u, 0u, 0u, 0u, 0u, 49u, 0u, 0u, 50u, 0u, 51u, 0u, 0u, 0u, 0u, 52u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 53u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 54u, 0u, 0u, 0u, 0u, 55u, 0u, 56u, 0u, 0u, 0u, 0u, 0u, 57u, 0u, 58u, 0u, 59u, 0u, 60u, 0u, 0u, 0u, 0u, 61u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 62u, 0u, 63u, 0u, 64u, 0u, 0u, 65u, 0u, 0u, 0u, 66u, 0u, 0u, 0u, 0u, 0u, 67u, 0u, 0u, 68u, 0u, 0u, 69u, 0u,
    70u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 71u, 72u, 0u, 0u, 73u, 0u, 0u, 74u, 0u, 75u, 0u, 76u, 0u, 77u, 0u, 0u, 0u, 78u, 0u, 79u,
    0u, 80u, 0u, 0u, 81u, 82u, 0u, 83u, 0u, 84u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 85u, 0u, 0u, 86u, 0u, 0u, 0u, 0u, 87u, 0u, 0u, 88u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 89u, 0u, 90u, 0u, 0u, 91u, 0u, 0u, 92u, 0u, 0u, 0u, 93u, 0u, 0u, 0u, 94u, 0u, 95u, 96u, 0u, 97u, 0u, 98u, 0u, 99u, 0u, 100u,
    0u, 0u, 101u, 0u, 102u, 0u, 103u, 0u, 104u, 0u, 0u, 0u, 105u, 0u, 106u, 0u, 107u, 0u, 0u, 108u, 0u, 109u, 0u, 0u, 0u, 110u, 0u, 111u, 0u, 112u, 0u, 113u,
    0u, 0u, 114u, 0u, 115u, 0u, 116u, 0u, 0u, 0u, 117u, 0u, 118u, 0u, 119u, 0u, 120u, 0u, 121u, 0u, 0u, 0u, 0u, 0u, 0u, 122u, 0u, 0u, 0u, 123u, 0u, 124u,
    0u, 0u, 0u, 0u, 0u, 0u, 125u, 0u, 0u, 0u, 0u, 0u, 126u, 0u, 127u, 128u, 0u, 129u, 0u, 130u, 0u, 0u, 131u, 0u, 0u, 132u, 0u, 133u, 0u, 134u, 0u, 0u,
    135u, 0u, 0u, 0u, 136u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 137u, 0u, 0u, 0u, 0u, 0u, 0u, 138u, 0u, 0u, 0u, 139u, 0u, 0u, 0u, 140u,
    0u, 141u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 142u, 143u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 144u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 145u, 0u, 146u, 0u, 0u, 147u, 0u, 0u, 0u, 0u, 0u, 148u, 0u, 0u, 149u, 0u,
    0u, 150u, 0u, 0u, 151u, 0u, 0u, 0u, 0u, 0u, 0u, 152u, 153u, 0u, 0u, 0u, 154u, 0u, 155u, 0u, 0u, 0u, 156u, 0u, 157u, 0u, 0u, 0u, 158u, 0u, 159u, 0u,
    160u, 0u, 0u, 161u, 0u, 162u, 0u, 163u, 164u, 0u, 165u, 0u, 0u, 166u, 0u, 167u, 0u, 168u, 0u, 169u, 0u, 0u, 0u, 170u, 0u, 171u, 0u, 172u, 0u, 173u, 0u, 174u,
    0u, 175u, 0u, 176u, 0u, 177u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 178u, 179u, 0u, 0u, 180u, 0u, 181u, 0u, 182u, 0u, 0u, 183u, 0u, 184u, 0u, 185u, 186u, 0u, 187u,
    0u, 0u, 188u, 0u, 189u, 0u, 190u, 0u, 191u, 0u, 192u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 193u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 194u, 0u, 195u, 0u, 196u, 0u, 197u, 0u, 0u, 0u, 0u, 0u, 0u, 198u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 199u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 200u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 201u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 202u, 0u, 203u, 0u, 204u, 0u, 205u, 0u, 0u, 0u, 206u, 0u, 0u, 0u, 0u,
    0u, 207u, 0u, 0u, 208u, 0u, 0u, 0u, 0u, 0u, 0u, 209u, 0u, 210u, 0u, 0u, 0u, 211u, 0u, 0u, 0u, 0u, 212u, 0u, 0u, 0u, 0u, 0u, 0u, 213u, 0u, 0u,
    0u, 0u, 0u, 214u, 215u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 216u, 0u, 0u, 0u, 0u, 0u, 217u, 0u, 0u, 0u, 0u,
    218u, 0u, 0u, 0u, 0u, 0u, 219u, 0u, 220u, 0u, 0u, 0u, 0u, 0u, 221u, 222u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 223u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 224u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 225u, 0u, 226u, 0u, 227u, 0u, 0u, 0u, 228u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 229u, 0u, 230u, 0u, 0u, 0u, 231u, 0u, 0u, 0u, 232u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 233u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 234u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 235u, 0u, 0u, 236u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 237u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 238u, 0u, 0u, 0u, 239u, 0u, 0u, 240u, 0u, 0u, 241u, 0u, 0u, 242u, 0u, 0u, 243u, 0u, 0u, 244u, 0u, 0u, 245u, 0u, 0u, 246u, 0u,
    0u, 247u, 0u, 0u, 0u, 248u, 0u, 0u, 0u, 0u, 0u, 249u, 0u, 250u, 0u, 0u, 0u, 0u, 251u, 0u, 252u, 0u, 0u, 253u, 0u, 0u, 254u, 0u, 0u, 255u, 0u, 0u,
    256u, 0u, 0u, 257u, 0u, 0u, 258u, 0u, 259u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 260u, 0u, 261u, 0u, 262u, 0u,
    263u, 0u, 264u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 265u, 0u, 0u, 266u, 0u, 0u, 0u, 267u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    268u, 0u, 0u, 269u, 0u, 0u, 270u, 0u, 0u, 271u, 0u, 0u, 272u, 0u, 273u, 0u, 274u, 0u, 0u, 0u, 0u, 275u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 276u,
    0u, 277u, 0u, 0u, 278u, 0u, 0u, 0u, 0u, 279u, 0u, 0u, 280u, 0u, 281u, 282u, 0u, 0u, 0u, 0u, 0u, 0u, 283u, 0u, 0u, 0u, 0u, 0u, 284u, 0u, 285u, 0u,
    0u, 286u, 0u, 0u, 287u, 0u, 288u, 0u, 0u, 0u, 289u, 290u, 0u, 291u, 0u, 0u, 0u, 0u, 292u, 0u, 293u, 0u, 0u, 0u, 294u, 0u, 0u, 295u, 296u, 0u, 297u, 0u,
    298u, 0u, 299u, 0u, 300u, 0u, 301u, 0u, 0u, 0u, 0u, 0u, 302u, 0u, 303u, 0u, 0u, 304u, 0u, 0u, 305u, 0u, 306u, 0u, 307u, 0u, 308u, 309u, 0u, 0u, 0u, 0u,
    310u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 311u, 0u, 0u, 0u, 0u, 312u, 0u, 313u, 0u, 314u, 0u, 0u, 0u, 315u, 0u, 0u, 0u, 0u, 316u, 0u, 0u,
    0u, 0u, 317u, 0u, 0u, 0u, 318u, 0u, 319u, 0u, 320u, 0u, 0u, 321u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 322u, 0u, 323u, 0u, 0u, 324u, 0u, 0u, 325u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 326u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 327u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 328u, 0u, 0u, 0u, 0u, 329u, 0u, 330u, 0u, 331u, 0u, 332u, 0u, 333u, 0u, 334u,
    0u, 335u, 0u, 336u, 0u, 0u, 0u, 337u, 0u, 0u, 0u, 338u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 339u, 0u, 0u, 340u, 0u, 0u, 341u, 0u, 342u, 0u,
    0u, 343u, 0u, 344u, 0u, 345u, 0u, 346u, 347u, 0u, 348u, 0u, 349u, 0u, 350u, 0u, 351u, 0u, 352u, 353u, 0u, 0u, 0u, 0u, 0u, 0u, 354u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 355u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 356u, 0u, 357u, 0u, 0u, 0u, 358u, 0u, 0u, 359u, 0u,
    360u, 0u, 0u, 0u, 361u, 0u, 362u, 0u, 363u, 0u, 0u, 364u, 0u, 365u, 0u, 366u, 0u, 0u, 0u, 0u, 367u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 368u, 0u, 369u, 370u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 371u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 372u, 0u, 0u, 0u, 0u, 0u, 0u, 373u, 0u, 0u,
    0u, 374u, 375u, 0u, 0u, 0u, 0u, 0u, 0u, 376u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 377u, 0u, 378u, 0u, 379u, 0u, 0u, 0u, 380u, 0u, 381u, 0u, 382u, 0u, 0u, 0u, 0u, 0u, 0u, 383u, 0u, 384u, 0u, 385u, 0u, 0u, 0u, 386u, 0u, 0u, 0u,
    387u, 0u, 388u, 0u, 0u, 389u, 0u, 0u, 0u, 390u, 0u, 391u, 0u, 392u, 0u, 393u, 0u, 0u, 394u, 0u, 395u, 0u, 0u, 0u, 0u, 396u, 0u, 397u, 0u, 398u, 0u, 0u,
    399u, 0u, 0u, 0u, 400u, 0u, 401u, 0u, 402u, 0u, 0u, 0u, 0u, 0u, 403u, 0u, 404u, 0u, 405u, 406u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 407u, 0u, 0u, 0u, 0u, 0u, 408u, 0u, 409u, 0u, 410u, 0u, 0u, 411u, 0u, 0u, 0u, 412u, 0u, 413u, 0u, 0u, 0u, 0u, 0u, 414u, 0u, 415u, 0u,
    416u, 0u, 0u, 0u, 0u, 0u, 0u, 417u, 0u, 418u, 0u, 419u, 0u, 0u, 0u, 0u, 420u, 0u, 0u, 0u, 0u, 0u, 0u, 421u, 0u, 422u, 0u, 423u, 0u, 0u, 0u, 0u,
    424u, 0u, 425u, 0u, 426u, 0u, 427u, 0u, 0u, 428u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 429u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 430u, 0u, 0u, 0u, 431u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 432u, 433u, 0u, 0u, 0u, 0u, 0u, 434u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 435u, 0u, 436u, 0u, 437u, 0u, 0u, 0u,
    438u, 0u, 439u, 0u, 0u, 440u, 0u, 441u, 0u, 0u, 442u, 0u, 0u, 0u, 443u, 0u, 0u, 0u, 444u, 0u, 0u, 0u, 445u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 446u,
    0u, 447u, 0u, 0u, 448u, 0u, 449u, 0u, 0u, 450u, 0u, 451u, 0u, 452u, 0u, 453u, 0u, 454u, 0u, 0u, 455u, 0u, 456u, 0u, 0u, 457u, 0u, 0u, 458u, 0u, 0u, 459u,
    0u, 0u, 460u, 461u, 0u, 462u, 0u, 0u, 463u, 0u, 0u, 464u, 0u, 0u, 465u, 0u, 0u, 466u, 0u, 467u, 0u, 468u, 0u, 469u, 0u, 470u, 0u, 471u, 472u, 0u, 473u, 0u,
    0u, 0u, 474u, 0u, 475u, 476u, 0u, 0u, 477u, 0u, 0u, 478u, 0u, 0u, 479u, 0u, 0u, 480u, 0u, 481u, 0u, 482u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 483u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 484u, 0u, 485u, 0u, 486u,
    0u, 0u, 487u, 0u, 0u, 0u, 488u, 0u, 489u, 0u, 0u, 0u, 490u, 0u, 0u, 491u, 0u, 0u, 492u, 0u, 493u, 0u, 0u, 0u, 494u, 0u, 495u, 0u, 0u, 496u, 0u, 0u,
    497u, 0u, 498u, 0u, 499u, 0u, 0u, 500u, 0u, 501u, 0u, 502u, 0u, 503u, 0u, 504u, 0u, 505u, 0u, 0u, 506u, 0u, 507u, 0u, 508u, 0u, 0u, 0u, 0u, 509u, 0u, 510u,
    0u, 0u, 511u, 0u, 0u, 0u, 0u, 512u, 0u, 0u, 513u, 0u, 514u, 0u, 0u, 0u, 515u, 0u, 516u, 0u, 517u, 0u, 518u, 0u, 519u, 0u, 520u, 0u, 521u, 0u, 522u, 0u,
    523u, 0u, 524u, 0u, 525u, 0u, 526u, 0u, 527u, 0u, 0u, 0u, 0u, 528u, 0u, 0u, 529u, 0u, 0u, 530u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 531u, 0u, 0u, 532u, 0u,
    533u, 0u, 0u, 0u, 534u, 0u, 0u, 535u, 0u, 0u, 536u, 0u, 0u, 537u, 0u, 538u, 0u, 539u, 0u, 0u, 0u, 540u, 0u, 541u, 0u, 542u, 0u, 543u, 0u, 544u, 0u, 545u,
    0u, 546u, 0u, 547u, 0u, 548u, 0u, 549u, 0u, 550u, 0u, 551u, 0u, 552u, 0u, 553u, 0u, 554u, 0u, 555u, 0u, 0u, 556u, 0u, 557u, 558u, 0u, 559u, 0u, 560u, 0u, 0u,
    0u, 0u, 0u, 0u, 561u, 0u, 0u, 562u, 0u, 563u, 0u, 0u, 564u, 0u, 0u, 565u, 0u, 0u, 566u, 0u, 567u, 0u, 0u, 568u, 0u, 569u, 0u, 570u, 0u, 571u, 0u, 572u,
    0u, 0u, 573u, 0u, 574u, 0u, 0u, 575u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 576u, 0u, 0u, 0u, 0u, 0u, 577u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 578u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 579u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 580u, 0u, 0u, 0u, 0u, 0u, 0u, 581u, 0u, 0u, 0u, 0u,
    582u, 0u, 0u, 0u, 0u, 0u, 583u, 0u, 0u, 0u, 0u, 0u, 584u, 0u, 0u, 0u, 0u, 0u, 0u, 585u, 0u, 0u, 0u, 0u, 0u, 0u, 586u, 0u, 0u, 0u, 0u, 0u,
    587u, 0u, 588u, 0u, 589u, 0u, 0u, 0u, 0u, 0u, 590u, 0u, 591u, 0u, 592u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 593u, 0u, 0u, 594u, 0u, 0u, 0u, 0u, 0u, 0u,
    595u, 0u, 0u, 0u, 0u, 596u, 0u, 0u, 597u, 0u, 598u, 0u, 0u, 599u, 0u, 0u, 0u, 600u, 0u, 0u, 601u, 0u, 0u, 0u, 0u, 0u, 602u, 0u, 0u, 0u, 0u, 603u,
    0u, 0u, 604u, 0u, 605u, 0u, 0u, 0u, 0u, 0u, 0u, 606u, 0u, 0u, 0u, 0u, 607u, 0u, 608u, 0u, 0u, 0u, 0u, 609u, 0u, 610u, 0u, 0u, 0u, 611u, 0u, 612u,
    0u, 613u, 0u, 614u, 615u, 616u, 0u, 0u, 0u, 617u, 0u, 0u, 0u, 618u, 0u, 619u, 0u, 0u, 620u, 0u, 0u, 0u, 621u, 0u, 0u, 622u, 0u, 0u, 623u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 624u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 625u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 626u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 627u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 628u, 0u, 0u, 629u, 0u, 0u, 0u, 0u, 630u, 0u, 631u, 0u, 0u, 0u, 0u, 632u, 0u, 633u,
    0u, 0u, 0u, 0u, 634u, 0u, 0u, 0u, 635u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 636u, 0u, 0u, 0u, 0u, 0u, 0u, 637u, 0u, 0u, 0u, 638u, 0u, 0u,
    0u, 0u, 0u, 0u, 639u, 0u, 640u, 0u, 641u, 0u, 642u, 0u, 643u, 0u, 644u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 645u, 0u, 0u, 0u, 0u,
    646u, 0u, 0u, 0u, 0u, 0u, 0u, 647u, 0u, 648u, 0u, 649u, 0u, 650u, 0u, 651u, 0u, 0u, 0u, 0u, 0u, 652u, 0u, 0u, 653u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 654u, 0u, 0u, 655u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 656u, 0u, 0u, 0u, 657u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 658u, 0u, 0u, 0u, 659u, 0u, 660u, 0u, 661u, 0u, 0u, 662u, 0u, 663u,
    0u, 0u, 0u, 0u, 664u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 665u, 0u, 666u, 0u, 667u, 0u, 0u, 668u, 0u, 669u, 0u, 0u, 0u, 0u, 670u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 671u, 0u, 0u, 0u, 672u, 0u, 673u, 0u, 674u, 0u, 675u, 0u, 676u, 0u, 677u, 0u, 0u, 0u, 678u, 0u, 0u, 679u, 0u, 680u, 0u, 681u, 0u, 682u,
    0u, 683u, 0u, 0u, 0u, 684u, 0u, 0u, 685u, 0u, 686u, 0u, 0u, 0u, 687u, 0u, 0u, 688u, 0u, 689u, 0u, 690u, 0u, 691u, 0u, 692u, 0u, 0u, 0u, 0u, 0u, 693u,
    0u, 0u, 0u, 0u, 694u, 0u, 0u, 695u, 0u, 696u, 0u, 0u, 0u, 697u, 0u, 698u, 0u, 699u, 0u, 700u, 0u, 0u, 0u, 701u, 0u, 0u, 702u, 0u, 703u, 0u, 704u, 0u,
    705u, 0u, 706u, 0u, 0u, 0u, 707u, 0u, 0u, 708u, 0u, 709u, 0u, 710u, 0u, 711u, 0u, 712u, 0u, 713u, 0u, 0u, 0u, 0u, 0u, 714u, 0u, 0u, 0u, 0u, 715u, 0u,
    0u, 716u, 0u, 717u, 0u, 0u, 0u, 718u, 0u, 719u, 0u, 720u, 0u, 721u, 0u, 0u, 0u, 722u, 0u, 0u, 723u, 0u, 724u, 0u, 725u, 0u, 726u, 0u, 727u, 0u, 0u, 0u,
    728u, 0u, 0u, 729u, 0u, 730u, 0u, 0u, 0u, 0u, 731u, 0u, 0u, 0u, 0u, 0u, 0u, 732u, 0u, 0u, 0u, 733u, 0u, 0u, 734u, 0u, 0u, 0u, 0u, 735u, 0u, 0u,
    736u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 737u, 0u, 0u, 0u, 0u, 0u, 0u, 738u, 0u, 0u, 739u, 0u, 740u, 0u, 0u, 741u, 0u, 742u, 743u, 0u, 0u, 744u, 0u, 0u,
    0u, 745u, 0u, 0u, 0u, 0u, 746u, 747u, 0u, 0u, 0u, 748u, 0u, 749u, 0u, 750u, 0u, 0u, 751u, 0u, 752u, 0u, 0u, 753u, 0u, 754u, 0u, 0u, 755u, 0u, 756u, 0u,
    0u, 757u, 0u, 0u, 0u, 758u, 0u, 0u, 0u, 0u, 0u, 0u, 759u, 0u, 0u, 0u, 760u, 0u, 0u, 0u, 0u, 0u, 0u, 761u, 0u, 0u, 762u, 0u, 0u, 763u, 0u, 764u,
    765u, 0u, 766u, 0u, 0u, 767u, 0u, 768u, 0u, 0u, 0u, 0u, 0u, 769u, 0u, 0u, 0u, 0u, 0u, 0u, 770u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 771u, 0u, 0u, 0u,
    0u, 0u, 772u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 773u, 0u, 0u, 774u, 0u, 0u, 775u, 0u, 776u, 0u, 777u, 0u, 778u, 0u, 0u, 779u, 0u, 0u, 0u, 780u,
    0u, 0u, 0u, 781u, 0u, 0u, 0u, 0u, 782u, 0u, 783u, 0u, 784u, 0u, 785u, 0u, 0u, 786u, 0u, 787u, 0u, 788u, 0u, 0u, 789u, 0u, 790u, 0u, 0u, 0u, 791u, 0u,
    792u, 0u, 0u, 0u, 793u, 0u, 0u, 794u, 0u, 795u, 0u, 796u, 0u, 797u, 0u, 798u, 0u, 0u, 0u, 799u, 0u, 800u, 0u, 0u, 0u, 801u, 0u, 0u, 0u, 0u, 0u, 802u,
    0u, 803u, 0u, 804u, 0u, 0u, 0u, 805u, 0u, 806u, 0u, 807u, 0u, 808u, 0u, 809u, 0u, 810u, 0u, 811u, 0u, 812u, 813u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 814u, 0u,
    815u, 0u, 816u, 0u, 817u, 0u, 818u, 0u, 819u, 0u, 820u, 0u, 821u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 822u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 823u, 0u, 824u, 0u, 825u, 0u, 0u, 0u, 826u, 0u, 827u, 828u, 0u, 0u, 0u, 0u, 0u, 829u, 0u, 0u, 0u, 0u, 830u, 0u, 831u, 0u, 0u, 832u, 0u, 833u,
    0u, 0u, 834u, 0u, 0u, 835u, 0u, 836u, 0u, 837u, 0u, 0u, 838u, 0u, 839u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 840u, 0u, 841u, 0u, 0u, 842u, 0u, 843u, 0u,
    0u, 844u, 0u, 0u, 845u, 0u, 846u, 0u, 847u, 0u, 0u, 848u, 0u, 0u, 0u, 0u, 849u, 0u, 850u, 0u, 0u, 0u, 851u, 0u, 0u, 852u, 0u, 853u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 854u, 0u, 855u, 0u, 856u, 0u, 857u, 0u, 858u, 0u, 859u, 0u, 860u, 0u, 861u, 0u, 862u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 863u, 0u, 864u, 0u, 0u, 865u, 0u, 866u, 867u, 0u, 0u, 0u, 0u, 868u, 0u, 0u, 0u, 0u, 0u, 869u, 0u, 0u, 0u, 870u, 0u,
    0u, 871u, 0u, 872u, 0u, 0u, 873u, 0u, 0u, 0u, 874u, 875u, 0u, 0u, 876u, 0u, 0u, 0u, 877u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 878u, 0u,
    0u, 0u, 879u, 0u, 0u, 880u, 0u, 881u, 0u, 882u, 0u, 0u, 0u, 883u, 0u, 0u, 0u, 884u, 0u, 885u, 0u, 0u, 0u, 886u, 887u, 0u, 888u, 0u, 0u, 0u, 889u, 0u,
    890u, 0u, 891u, 0u, 0u, 0u, 0u, 0u, 892u, 0u, 893u, 0u, 0u, 894u, 0u, 0u, 0u, 895u, 0u, 896u, 0u, 897u, 0u, 0u, 0u, 0u, 0u, 0u, 898u, 0u, 0u, 0u,
    0u, 899u, 0u, 900u, 0u, 0u, 901u, 0u, 902u, 0u, 0u, 903u, 0u, 904u, 0u, 905u, 0u, 906u, 0u, 907u, 0u, 0u, 0u, 0u, 0u, 908u, 0u, 0u, 909u, 0u, 0u, 910u,
    0u, 0u, 0u, 911u, 0u, 0u, 912u, 0u, 0u, 913u, 0u, 914u, 0u, 915u, 0u, 0u, 0u, 0u, 0u, 916u, 0u, 917u, 0u, 0u, 918u, 0u, 0u, 0u, 0u, 0u, 919u, 0u,
    920u, 0u, 0u, 0u, 0u, 921u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 922u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 923u, 0u, 0u, 924u, 0u, 925u, 0u, 0u,
    0u, 0u, 926u, 0u, 927u, 0u, 928u, 929u, 0u, 0u, 0u, 0u, 930u, 0u, 0u, 0u, 0u, 931u, 0u, 0u, 0u, 932u, 0u, 933u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    934u, 0u, 0u, 0u, 935u, 0u, 0u, 936u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 937u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 938u, 0u, 0u, 0u, 0u, 0u, 0u,
    939u, 0u, 940u, 0u, 0u, 0u, 0u, 941u, 942u, 0u, 0u, 0u, 0u, 0u, 0u, 943u, 0u, 944u, 0u, 945u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 946u, 0u, 947u,
    0u, 0u, 0u, 0u, 0u, 0u, 948u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 949u, 0u, 0u, 950u, 0u, 0u, 0u, 0u, 951u, 0u, 0u, 952u, 0u, 0u, 0u, 953u,
    0u, 0u, 0u, 954u, 0u, 955u, 0u, 0u, 0u, 0u, 956u, 0u, 0u, 0u, 0u, 957u, 0u, 0u, 0u, 0u, 0u, 0u, 958u, 959u, 0u, 960u,
};
void recomp_unit_0190_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,6,2 fprs=12,13,15,14 gpr_occ=3682 fpr_occ=751 gpr_total=5275 fpr_total=1098
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_15 = ctx.fpr[15];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[15] = aot_fpr_15; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_15 = ctx.fpr[15]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AFC000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u)
            ? kEntryIdsV813_recomp_unit_0190[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AFC000;
    case 2u: goto L_08AFC00C;
    case 3u: goto L_08AFC06C;
    case 4u: goto L_08AFC0B8;
    case 5u: goto L_08AFC0D4;
    case 6u: goto L_08AFC100;
    case 7u: goto L_08AFC124;
    case 8u: goto L_08AFC178;
    case 9u: goto L_08AFC17C;
    case 10u: goto L_08AFC4A4;
    case 11u: goto L_08AFC4B8;
    case 12u: goto L_08AFC4C8;
    case 13u: goto L_08AFC4DC;
    case 14u: goto L_08AFC4F4;
    case 15u: goto L_08AFC500;
    case 16u: goto L_08AFC524;
    case 17u: goto L_08AFC538;
    case 18u: goto L_08AFC54C;
    case 19u: goto L_08AFC6BC;
    case 20u: goto L_08AFC740;
    case 21u: goto L_08AFC750;
    case 22u: goto L_08AFC760;
    case 23u: goto L_08AFC76C;
    case 24u: goto L_08AFC77C;
    case 25u: goto L_08AFC78C;
    case 26u: goto L_08AFC7AC;
    case 27u: goto L_08AFC7BC;
    case 28u: goto L_08AFC7C4;
    case 29u: goto L_08AFC7C8;
    case 30u: goto L_08AFC7D4;
    case 31u: goto L_08AFC7E4;
    case 32u: goto L_08AFC7F0;
    case 33u: goto L_08AFC7F4;
    case 34u: goto L_08AFC7F8;
    case 35u: goto L_08AFC800;
    case 36u: goto L_08AFC808;
    case 37u: goto L_08AFC818;
    case 38u: goto L_08AFC824;
    case 39u: goto L_08AFC828;
    case 40u: goto L_08AFC82C;
    case 41u: goto L_08AFC834;
    case 42u: goto L_08AFC854;
    case 43u: goto L_08AFC860;
    case 44u: goto L_08AFC86C;
    case 45u: goto L_08AFC874;
    case 46u: goto L_08AFC87C;
    case 47u: goto L_08AFC884;
    case 48u: goto L_08AFC88C;
    case 49u: goto L_08AFC8A4;
    case 50u: goto L_08AFC8B0;
    case 51u: goto L_08AFC8B8;
    case 52u: goto L_08AFC8CC;
    case 53u: goto L_08AFC8EC;
    case 54u: goto L_08AFC91C;
    case 55u: goto L_08AFC930;
    case 56u: goto L_08AFC938;
    case 57u: goto L_08AFC950;
    case 58u: goto L_08AFC958;
    case 59u: goto L_08AFC960;
    case 60u: goto L_08AFC968;
    case 61u: goto L_08AFC97C;
    case 62u: goto L_08AFC99C;
    case 63u: goto L_08AFC9A4;
    case 64u: goto L_08AFC9AC;
    case 65u: goto L_08AFC9B8;
    case 66u: goto L_08AFC9C8;
    case 67u: goto L_08AFC9E0;
    case 68u: goto L_08AFC9EC;
    case 69u: goto L_08AFC9F8;
    case 70u: goto L_08AFCA00;
    case 71u: goto L_08AFCA30;
    case 72u: goto L_08AFCA34;
    case 73u: goto L_08AFCA40;
    case 74u: goto L_08AFCA4C;
    case 75u: goto L_08AFCA54;
    case 76u: goto L_08AFCA5C;
    case 77u: goto L_08AFCA64;
    case 78u: goto L_08AFCA74;
    case 79u: goto L_08AFCA7C;
    case 80u: goto L_08AFCA84;
    case 81u: goto L_08AFCA90;
    case 82u: goto L_08AFCA94;
    case 83u: goto L_08AFCA9C;
    case 84u: goto L_08AFCAA4;
    case 85u: goto L_08AFCAC4;
    case 86u: goto L_08AFCAD0;
    case 87u: goto L_08AFCAE4;
    case 88u: goto L_08AFCAF0;
    case 89u: goto L_08AFCB10;
    case 90u: goto L_08AFCB18;
    case 91u: goto L_08AFCB24;
    case 92u: goto L_08AFCB30;
    case 93u: goto L_08AFCB40;
    case 94u: goto L_08AFCB50;
    case 95u: goto L_08AFCB58;
    case 96u: goto L_08AFCB5C;
    case 97u: goto L_08AFCB64;
    case 98u: goto L_08AFCB6C;
    case 99u: goto L_08AFCB74;
    case 100u: goto L_08AFCB7C;
    case 101u: goto L_08AFCB88;
    case 102u: goto L_08AFCB90;
    case 103u: goto L_08AFCB98;
    case 104u: goto L_08AFCBA0;
    case 105u: goto L_08AFCBB0;
    case 106u: goto L_08AFCBB8;
    case 107u: goto L_08AFCBC0;
    case 108u: goto L_08AFCBCC;
    case 109u: goto L_08AFCBD4;
    case 110u: goto L_08AFCBE4;
    case 111u: goto L_08AFCBEC;
    case 112u: goto L_08AFCBF4;
    case 113u: goto L_08AFCBFC;
    case 114u: goto L_08AFCC08;
    case 115u: goto L_08AFCC10;
    case 116u: goto L_08AFCC18;
    case 117u: goto L_08AFCC28;
    case 118u: goto L_08AFCC30;
    case 119u: goto L_08AFCC38;
    case 120u: goto L_08AFCC40;
    case 121u: goto L_08AFCC48;
    case 122u: goto L_08AFCC64;
    case 123u: goto L_08AFCC74;
    case 124u: goto L_08AFCC7C;
    case 125u: goto L_08AFCC98;
    case 126u: goto L_08AFCCB0;
    case 127u: goto L_08AFCCB8;
    case 128u: goto L_08AFCCBC;
    case 129u: goto L_08AFCCC4;
    case 130u: goto L_08AFCCCC;
    case 131u: goto L_08AFCCD8;
    case 132u: goto L_08AFCCE4;
    case 133u: goto L_08AFCCEC;
    case 134u: goto L_08AFCCF4;
    case 135u: goto L_08AFCD00;
    case 136u: goto L_08AFCD10;
    case 137u: goto L_08AFCD40;
    case 138u: goto L_08AFCD5C;
    case 139u: goto L_08AFCD6C;
    case 140u: goto L_08AFCD7C;
    case 141u: goto L_08AFCD84;
    case 142u: goto L_08AFCDBC;
    case 143u: goto L_08AFCDC0;
    case 144u: goto L_08AFCE18;
    case 145u: goto L_08AFCE40;
    case 146u: goto L_08AFCE48;
    case 147u: goto L_08AFCE54;
    case 148u: goto L_08AFCE6C;
    case 149u: goto L_08AFCE78;
    case 150u: goto L_08AFCE84;
    case 151u: goto L_08AFCE90;
    case 152u: goto L_08AFCEAC;
    case 153u: goto L_08AFCEB0;
    case 154u: goto L_08AFCEC0;
    case 155u: goto L_08AFCEC8;
    case 156u: goto L_08AFCED8;
    case 157u: goto L_08AFCEE0;
    case 158u: goto L_08AFCEF0;
    case 159u: goto L_08AFCEF8;
    case 160u: goto L_08AFCF00;
    case 161u: goto L_08AFCF0C;
    case 162u: goto L_08AFCF14;
    case 163u: goto L_08AFCF1C;
    case 164u: goto L_08AFCF20;
    case 165u: goto L_08AFCF28;
    case 166u: goto L_08AFCF34;
    case 167u: goto L_08AFCF3C;
    case 168u: goto L_08AFCF44;
    case 169u: goto L_08AFCF4C;
    case 170u: goto L_08AFCF5C;
    case 171u: goto L_08AFCF64;
    case 172u: goto L_08AFCF6C;
    case 173u: goto L_08AFCF74;
    case 174u: goto L_08AFCF7C;
    case 175u: goto L_08AFCF84;
    case 176u: goto L_08AFCF8C;
    case 177u: goto L_08AFCF94;
    case 178u: goto L_08AFCFB4;
    case 179u: goto L_08AFCFB8;
    case 180u: goto L_08AFCFC4;
    case 181u: goto L_08AFCFCC;
    case 182u: goto L_08AFCFD4;
    case 183u: goto L_08AFCFE0;
    case 184u: goto L_08AFCFE8;
    case 185u: goto L_08AFCFF0;
    case 186u: goto L_08AFCFF4;
    case 187u: goto L_08AFCFFC;
    case 188u: goto L_08AFD008;
    case 189u: goto L_08AFD010;
    case 190u: goto L_08AFD018;
    case 191u: goto L_08AFD020;
    case 192u: goto L_08AFD028;
    case 193u: goto L_08AFD054;
    case 194u: goto L_08AFD0A0;
    case 195u: goto L_08AFD0A8;
    case 196u: goto L_08AFD0B0;
    case 197u: goto L_08AFD0B8;
    case 198u: goto L_08AFD0D4;
    case 199u: goto L_08AFD0F4;
    case 200u: goto L_08AFD138;
    case 201u: goto L_08AFD158;
    case 202u: goto L_08AFD1C4;
    case 203u: goto L_08AFD1CC;
    case 204u: goto L_08AFD1D4;
    case 205u: goto L_08AFD1DC;
    case 206u: goto L_08AFD1EC;
    case 207u: goto L_08AFD204;
    case 208u: goto L_08AFD210;
    case 209u: goto L_08AFD22C;
    case 210u: goto L_08AFD234;
    case 211u: goto L_08AFD244;
    case 212u: goto L_08AFD258;
    case 213u: goto L_08AFD274;
    case 214u: goto L_08AFD28C;
    case 215u: goto L_08AFD290;
    case 216u: goto L_08AFD354;
    case 217u: goto L_08AFD36C;
    case 218u: goto L_08AFD380;
    case 219u: goto L_08AFD398;
    case 220u: goto L_08AFD3A0;
    case 221u: goto L_08AFD3B8;
    case 222u: goto L_08AFD3BC;
    case 223u: goto L_08AFD3E0;
    case 224u: goto L_08AFD410;
    case 225u: goto L_08AFD430;
    case 226u: goto L_08AFD438;
    case 227u: goto L_08AFD440;
    case 228u: goto L_08AFD450;
    case 229u: goto L_08AFD4D0;
    case 230u: goto L_08AFD4D8;
    case 231u: goto L_08AFD4E8;
    case 232u: goto L_08AFD4F8;
    case 233u: goto L_08AFD52C;
    case 234u: goto L_08AFD550;
    case 235u: goto L_08AFD5A0;
    case 236u: goto L_08AFD5AC;
    case 237u: goto L_08AFD5E4;
    case 238u: goto L_08AFD614;
    case 239u: goto L_08AFD624;
    case 240u: goto L_08AFD630;
    case 241u: goto L_08AFD63C;
    case 242u: goto L_08AFD648;
    case 243u: goto L_08AFD654;
    case 244u: goto L_08AFD660;
    case 245u: goto L_08AFD66C;
    case 246u: goto L_08AFD678;
    case 247u: goto L_08AFD684;
    case 248u: goto L_08AFD694;
    case 249u: goto L_08AFD6AC;
    case 250u: goto L_08AFD6B4;
    case 251u: goto L_08AFD6C8;
    case 252u: goto L_08AFD6D0;
    case 253u: goto L_08AFD6DC;
    case 254u: goto L_08AFD6E8;
    case 255u: goto L_08AFD6F4;
    case 256u: goto L_08AFD700;
    case 257u: goto L_08AFD70C;
    case 258u: goto L_08AFD718;
    case 259u: goto L_08AFD720;
    case 260u: goto L_08AFD768;
    case 261u: goto L_08AFD770;
    case 262u: goto L_08AFD778;
    case 263u: goto L_08AFD780;
    case 264u: goto L_08AFD788;
    case 265u: goto L_08AFD7AC;
    case 266u: goto L_08AFD7B8;
    case 267u: goto L_08AFD7C8;
    case 268u: goto L_08AFD800;
    case 269u: goto L_08AFD80C;
    case 270u: goto L_08AFD818;
    case 271u: goto L_08AFD824;
    case 272u: goto L_08AFD830;
    case 273u: goto L_08AFD838;
    case 274u: goto L_08AFD840;
    case 275u: goto L_08AFD854;
    case 276u: goto L_08AFD87C;
    case 277u: goto L_08AFD884;
    case 278u: goto L_08AFD890;
    case 279u: goto L_08AFD8A4;
    case 280u: goto L_08AFD8B0;
    case 281u: goto L_08AFD8B8;
    case 282u: goto L_08AFD8BC;
    case 283u: goto L_08AFD8D8;
    case 284u: goto L_08AFD8F0;
    case 285u: goto L_08AFD8F8;
    case 286u: goto L_08AFD904;
    case 287u: goto L_08AFD910;
    case 288u: goto L_08AFD918;
    case 289u: goto L_08AFD928;
    case 290u: goto L_08AFD92C;
    case 291u: goto L_08AFD934;
    case 292u: goto L_08AFD948;
    case 293u: goto L_08AFD950;
    case 294u: goto L_08AFD960;
    case 295u: goto L_08AFD96C;
    case 296u: goto L_08AFD970;
    case 297u: goto L_08AFD978;
    case 298u: goto L_08AFD980;
    case 299u: goto L_08AFD988;
    case 300u: goto L_08AFD990;
    case 301u: goto L_08AFD998;
    case 302u: goto L_08AFD9B0;
    case 303u: goto L_08AFD9B8;
    case 304u: goto L_08AFD9C4;
    case 305u: goto L_08AFD9D0;
    case 306u: goto L_08AFD9D8;
    case 307u: goto L_08AFD9E0;
    case 308u: goto L_08AFD9E8;
    case 309u: goto L_08AFD9EC;
    case 310u: goto L_08AFDA00;
    case 311u: goto L_08AFDA2C;
    case 312u: goto L_08AFDA40;
    case 313u: goto L_08AFDA48;
    case 314u: goto L_08AFDA50;
    case 315u: goto L_08AFDA60;
    case 316u: goto L_08AFDA74;
    case 317u: goto L_08AFDA88;
    case 318u: goto L_08AFDA98;
    case 319u: goto L_08AFDAA0;
    case 320u: goto L_08AFDAA8;
    case 321u: goto L_08AFDAB4;
    case 322u: goto L_08AFDB20;
    case 323u: goto L_08AFDB28;
    case 324u: goto L_08AFDB34;
    case 325u: goto L_08AFDB40;
    case 326u: goto L_08AFDB70;
    case 327u: goto L_08AFDB9C;
    case 328u: goto L_08AFDBC0;
    case 329u: goto L_08AFDBD4;
    case 330u: goto L_08AFDBDC;
    case 331u: goto L_08AFDBE4;
    case 332u: goto L_08AFDBEC;
    case 333u: goto L_08AFDBF4;
    case 334u: goto L_08AFDBFC;
    case 335u: goto L_08AFDC04;
    case 336u: goto L_08AFDC0C;
    case 337u: goto L_08AFDC1C;
    case 338u: goto L_08AFDC2C;
    case 339u: goto L_08AFDC58;
    case 340u: goto L_08AFDC64;
    case 341u: goto L_08AFDC70;
    case 342u: goto L_08AFDC78;
    case 343u: goto L_08AFDC84;
    case 344u: goto L_08AFDC8C;
    case 345u: goto L_08AFDC94;
    case 346u: goto L_08AFDC9C;
    case 347u: goto L_08AFDCA0;
    case 348u: goto L_08AFDCA8;
    case 349u: goto L_08AFDCB0;
    case 350u: goto L_08AFDCB8;
    case 351u: goto L_08AFDCC0;
    case 352u: goto L_08AFDCC8;
    case 353u: goto L_08AFDCCC;
    case 354u: goto L_08AFDCE8;
    case 355u: goto L_08AFDD34;
    case 356u: goto L_08AFDD54;
    case 357u: goto L_08AFDD5C;
    case 358u: goto L_08AFDD6C;
    case 359u: goto L_08AFDD78;
    case 360u: goto L_08AFDD80;
    case 361u: goto L_08AFDD90;
    case 362u: goto L_08AFDD98;
    case 363u: goto L_08AFDDA0;
    case 364u: goto L_08AFDDAC;
    case 365u: goto L_08AFDDB4;
    case 366u: goto L_08AFDDBC;
    case 367u: goto L_08AFDDD0;
    case 368u: goto L_08AFDDF0;
    case 369u: goto L_08AFDDF8;
    case 370u: goto L_08AFDDFC;
    case 371u: goto L_08AFDE20;
    case 372u: goto L_08AFDE58;
    case 373u: goto L_08AFDE74;
    case 374u: goto L_08AFDE84;
    case 375u: goto L_08AFDE88;
    case 376u: goto L_08AFDEA4;
    case 377u: goto L_08AFDF04;
    case 378u: goto L_08AFDF0C;
    case 379u: goto L_08AFDF14;
    case 380u: goto L_08AFDF24;
    case 381u: goto L_08AFDF2C;
    case 382u: goto L_08AFDF34;
    case 383u: goto L_08AFDF50;
    case 384u: goto L_08AFDF58;
    case 385u: goto L_08AFDF60;
    case 386u: goto L_08AFDF70;
    case 387u: goto L_08AFDF80;
    case 388u: goto L_08AFDF88;
    case 389u: goto L_08AFDF94;
    case 390u: goto L_08AFDFA4;
    case 391u: goto L_08AFDFAC;
    case 392u: goto L_08AFDFB4;
    case 393u: goto L_08AFDFBC;
    case 394u: goto L_08AFDFC8;
    case 395u: goto L_08AFDFD0;
    case 396u: goto L_08AFDFE4;
    case 397u: goto L_08AFDFEC;
    case 398u: goto L_08AFDFF4;
    case 399u: goto L_08AFE000;
    case 400u: goto L_08AFE010;
    case 401u: goto L_08AFE018;
    case 402u: goto L_08AFE020;
    case 403u: goto L_08AFE038;
    case 404u: goto L_08AFE040;
    case 405u: goto L_08AFE048;
    case 406u: goto L_08AFE04C;
    case 407u: goto L_08AFE08C;
    case 408u: goto L_08AFE0A4;
    case 409u: goto L_08AFE0AC;
    case 410u: goto L_08AFE0B4;
    case 411u: goto L_08AFE0C0;
    case 412u: goto L_08AFE0D0;
    case 413u: goto L_08AFE0D8;
    case 414u: goto L_08AFE0F0;
    case 415u: goto L_08AFE0F8;
    case 416u: goto L_08AFE100;
    case 417u: goto L_08AFE11C;
    case 418u: goto L_08AFE124;
    case 419u: goto L_08AFE12C;
    case 420u: goto L_08AFE140;
    case 421u: goto L_08AFE15C;
    case 422u: goto L_08AFE164;
    case 423u: goto L_08AFE16C;
    case 424u: goto L_08AFE180;
    case 425u: goto L_08AFE188;
    case 426u: goto L_08AFE190;
    case 427u: goto L_08AFE198;
    case 428u: goto L_08AFE1A4;
    case 429u: goto L_08AFE1C8;
    case 430u: goto L_08AFE1EC;
    case 431u: goto L_08AFE1FC;
    case 432u: goto L_08AFE21C;
    case 433u: goto L_08AFE220;
    case 434u: goto L_08AFE238;
    case 435u: goto L_08AFE260;
    case 436u: goto L_08AFE268;
    case 437u: goto L_08AFE270;
    case 438u: goto L_08AFE280;
    case 439u: goto L_08AFE288;
    case 440u: goto L_08AFE294;
    case 441u: goto L_08AFE29C;
    case 442u: goto L_08AFE2A8;
    case 443u: goto L_08AFE2B8;
    case 444u: goto L_08AFE2C8;
    case 445u: goto L_08AFE2D8;
    case 446u: goto L_08AFE2FC;
    case 447u: goto L_08AFE304;
    case 448u: goto L_08AFE310;
    case 449u: goto L_08AFE318;
    case 450u: goto L_08AFE324;
    case 451u: goto L_08AFE32C;
    case 452u: goto L_08AFE334;
    case 453u: goto L_08AFE33C;
    case 454u: goto L_08AFE344;
    case 455u: goto L_08AFE350;
    case 456u: goto L_08AFE358;
    case 457u: goto L_08AFE364;
    case 458u: goto L_08AFE370;
    case 459u: goto L_08AFE37C;
    case 460u: goto L_08AFE388;
    case 461u: goto L_08AFE38C;
    case 462u: goto L_08AFE394;
    case 463u: goto L_08AFE3A0;
    case 464u: goto L_08AFE3AC;
    case 465u: goto L_08AFE3B8;
    case 466u: goto L_08AFE3C4;
    case 467u: goto L_08AFE3CC;
    case 468u: goto L_08AFE3D4;
    case 469u: goto L_08AFE3DC;
    case 470u: goto L_08AFE3E4;
    case 471u: goto L_08AFE3EC;
    case 472u: goto L_08AFE3F0;
    case 473u: goto L_08AFE3F8;
    case 474u: goto L_08AFE408;
    case 475u: goto L_08AFE410;
    case 476u: goto L_08AFE414;
    case 477u: goto L_08AFE420;
    case 478u: goto L_08AFE42C;
    case 479u: goto L_08AFE438;
    case 480u: goto L_08AFE444;
    case 481u: goto L_08AFE44C;
    case 482u: goto L_08AFE454;
    case 483u: goto L_08AFE484;
    case 484u: goto L_08AFE4EC;
    case 485u: goto L_08AFE4F4;
    case 486u: goto L_08AFE4FC;
    case 487u: goto L_08AFE508;
    case 488u: goto L_08AFE518;
    case 489u: goto L_08AFE520;
    case 490u: goto L_08AFE530;
    case 491u: goto L_08AFE53C;
    case 492u: goto L_08AFE548;
    case 493u: goto L_08AFE550;
    case 494u: goto L_08AFE560;
    case 495u: goto L_08AFE568;
    case 496u: goto L_08AFE574;
    case 497u: goto L_08AFE580;
    case 498u: goto L_08AFE588;
    case 499u: goto L_08AFE590;
    case 500u: goto L_08AFE59C;
    case 501u: goto L_08AFE5A4;
    case 502u: goto L_08AFE5AC;
    case 503u: goto L_08AFE5B4;
    case 504u: goto L_08AFE5BC;
    case 505u: goto L_08AFE5C4;
    case 506u: goto L_08AFE5D0;
    case 507u: goto L_08AFE5D8;
    case 508u: goto L_08AFE5E0;
    case 509u: goto L_08AFE5F4;
    case 510u: goto L_08AFE5FC;
    case 511u: goto L_08AFE608;
    case 512u: goto L_08AFE61C;
    case 513u: goto L_08AFE628;
    case 514u: goto L_08AFE630;
    case 515u: goto L_08AFE640;
    case 516u: goto L_08AFE648;
    case 517u: goto L_08AFE650;
    case 518u: goto L_08AFE658;
    case 519u: goto L_08AFE660;
    case 520u: goto L_08AFE668;
    case 521u: goto L_08AFE670;
    case 522u: goto L_08AFE678;
    case 523u: goto L_08AFE680;
    case 524u: goto L_08AFE688;
    case 525u: goto L_08AFE690;
    case 526u: goto L_08AFE698;
    case 527u: goto L_08AFE6A0;
    case 528u: goto L_08AFE6B4;
    case 529u: goto L_08AFE6C0;
    case 530u: goto L_08AFE6CC;
    case 531u: goto L_08AFE6EC;
    case 532u: goto L_08AFE6F8;
    case 533u: goto L_08AFE700;
    case 534u: goto L_08AFE710;
    case 535u: goto L_08AFE71C;
    case 536u: goto L_08AFE728;
    case 537u: goto L_08AFE734;
    case 538u: goto L_08AFE73C;
    case 539u: goto L_08AFE744;
    case 540u: goto L_08AFE754;
    case 541u: goto L_08AFE75C;
    case 542u: goto L_08AFE764;
    case 543u: goto L_08AFE76C;
    case 544u: goto L_08AFE774;
    case 545u: goto L_08AFE77C;
    case 546u: goto L_08AFE784;
    case 547u: goto L_08AFE78C;
    case 548u: goto L_08AFE794;
    case 549u: goto L_08AFE79C;
    case 550u: goto L_08AFE7A4;
    case 551u: goto L_08AFE7AC;
    case 552u: goto L_08AFE7B4;
    case 553u: goto L_08AFE7BC;
    case 554u: goto L_08AFE7C4;
    case 555u: goto L_08AFE7CC;
    case 556u: goto L_08AFE7D8;
    case 557u: goto L_08AFE7E0;
    case 558u: goto L_08AFE7E4;
    case 559u: goto L_08AFE7EC;
    case 560u: goto L_08AFE7F4;
    case 561u: goto L_08AFE810;
    case 562u: goto L_08AFE81C;
    case 563u: goto L_08AFE824;
    case 564u: goto L_08AFE830;
    case 565u: goto L_08AFE83C;
    case 566u: goto L_08AFE848;
    case 567u: goto L_08AFE850;
    case 568u: goto L_08AFE85C;
    case 569u: goto L_08AFE864;
    case 570u: goto L_08AFE86C;
    case 571u: goto L_08AFE874;
    case 572u: goto L_08AFE87C;
    case 573u: goto L_08AFE888;
    case 574u: goto L_08AFE890;
    case 575u: goto L_08AFE89C;
    case 576u: goto L_08AFE8D0;
    case 577u: goto L_08AFE8E8;
    case 578u: goto L_08AFE908;
    case 579u: goto L_08AFE928;
    case 580u: goto L_08AFE950;
    case 581u: goto L_08AFE96C;
    case 582u: goto L_08AFE980;
    case 583u: goto L_08AFE998;
    case 584u: goto L_08AFE9B0;
    case 585u: goto L_08AFE9CC;
    case 586u: goto L_08AFE9E8;
    case 587u: goto L_08AFEA00;
    case 588u: goto L_08AFEA08;
    case 589u: goto L_08AFEA10;
    case 590u: goto L_08AFEA28;
    case 591u: goto L_08AFEA30;
    case 592u: goto L_08AFEA38;
    case 593u: goto L_08AFEA58;
    case 594u: goto L_08AFEA64;
    case 595u: goto L_08AFEA80;
    case 596u: goto L_08AFEA94;
    case 597u: goto L_08AFEAA0;
    case 598u: goto L_08AFEAA8;
    case 599u: goto L_08AFEAB4;
    case 600u: goto L_08AFEAC4;
    case 601u: goto L_08AFEAD0;
    case 602u: goto L_08AFEAE8;
    case 603u: goto L_08AFEAFC;
    case 604u: goto L_08AFEB08;
    case 605u: goto L_08AFEB10;
    case 606u: goto L_08AFEB2C;
    case 607u: goto L_08AFEB40;
    case 608u: goto L_08AFEB48;
    case 609u: goto L_08AFEB5C;
    case 610u: goto L_08AFEB64;
    case 611u: goto L_08AFEB74;
    case 612u: goto L_08AFEB7C;
    case 613u: goto L_08AFEB84;
    case 614u: goto L_08AFEB8C;
    case 615u: goto L_08AFEB90;
    case 616u: goto L_08AFEB94;
    case 617u: goto L_08AFEBA4;
    case 618u: goto L_08AFEBB4;
    case 619u: goto L_08AFEBBC;
    case 620u: goto L_08AFEBC8;
    case 621u: goto L_08AFEBD8;
    case 622u: goto L_08AFEBE4;
    case 623u: goto L_08AFEBF0;
    case 624u: goto L_08AFEC14;
    case 625u: goto L_08AFEC38;
    case 626u: goto L_08AFEC60;
    case 627u: goto L_08AFEC8C;
    case 628u: goto L_08AFECB8;
    case 629u: goto L_08AFECC4;
    case 630u: goto L_08AFECD8;
    case 631u: goto L_08AFECE0;
    case 632u: goto L_08AFECF4;
    case 633u: goto L_08AFECFC;
    case 634u: goto L_08AFED10;
    case 635u: goto L_08AFED20;
    case 636u: goto L_08AFED48;
    case 637u: goto L_08AFED64;
    case 638u: goto L_08AFED74;
    case 639u: goto L_08AFED90;
    case 640u: goto L_08AFED98;
    case 641u: goto L_08AFEDA0;
    case 642u: goto L_08AFEDA8;
    case 643u: goto L_08AFEDB0;
    case 644u: goto L_08AFEDB8;
    case 645u: goto L_08AFEDEC;
    case 646u: goto L_08AFEE00;
    case 647u: goto L_08AFEE1C;
    case 648u: goto L_08AFEE24;
    case 649u: goto L_08AFEE2C;
    case 650u: goto L_08AFEE34;
    case 651u: goto L_08AFEE3C;
    case 652u: goto L_08AFEE54;
    case 653u: goto L_08AFEE60;
    case 654u: goto L_08AFEE84;
    case 655u: goto L_08AFEE90;
    case 656u: goto L_08AFEF10;
    case 657u: goto L_08AFEF20;
    case 658u: goto L_08AFEF48;
    case 659u: goto L_08AFEF58;
    case 660u: goto L_08AFEF60;
    case 661u: goto L_08AFEF68;
    case 662u: goto L_08AFEF74;
    case 663u: goto L_08AFEF7C;
    case 664u: goto L_08AFEF90;
    case 665u: goto L_08AFEFB4;
    case 666u: goto L_08AFEFBC;
    case 667u: goto L_08AFEFC4;
    case 668u: goto L_08AFEFD0;
    case 669u: goto L_08AFEFD8;
    case 670u: goto L_08AFEFEC;
    case 671u: goto L_08AFF010;
    case 672u: goto L_08AFF020;
    case 673u: goto L_08AFF028;
    case 674u: goto L_08AFF030;
    case 675u: goto L_08AFF038;
    case 676u: goto L_08AFF040;
    case 677u: goto L_08AFF048;
    case 678u: goto L_08AFF058;
    case 679u: goto L_08AFF064;
    case 680u: goto L_08AFF06C;
    case 681u: goto L_08AFF074;
    case 682u: goto L_08AFF07C;
    case 683u: goto L_08AFF084;
    case 684u: goto L_08AFF094;
    case 685u: goto L_08AFF0A0;
    case 686u: goto L_08AFF0A8;
    case 687u: goto L_08AFF0B8;
    case 688u: goto L_08AFF0C4;
    case 689u: goto L_08AFF0CC;
    case 690u: goto L_08AFF0D4;
    case 691u: goto L_08AFF0DC;
    case 692u: goto L_08AFF0E4;
    case 693u: goto L_08AFF0FC;
    case 694u: goto L_08AFF110;
    case 695u: goto L_08AFF11C;
    case 696u: goto L_08AFF124;
    case 697u: goto L_08AFF134;
    case 698u: goto L_08AFF13C;
    case 699u: goto L_08AFF144;
    case 700u: goto L_08AFF14C;
    case 701u: goto L_08AFF15C;
    case 702u: goto L_08AFF168;
    case 703u: goto L_08AFF170;
    case 704u: goto L_08AFF178;
    case 705u: goto L_08AFF180;
    case 706u: goto L_08AFF188;
    case 707u: goto L_08AFF198;
    case 708u: goto L_08AFF1A4;
    case 709u: goto L_08AFF1AC;
    case 710u: goto L_08AFF1B4;
    case 711u: goto L_08AFF1BC;
    case 712u: goto L_08AFF1C4;
    case 713u: goto L_08AFF1CC;
    case 714u: goto L_08AFF1E4;
    case 715u: goto L_08AFF1F8;
    case 716u: goto L_08AFF204;
    case 717u: goto L_08AFF20C;
    case 718u: goto L_08AFF21C;
    case 719u: goto L_08AFF224;
    case 720u: goto L_08AFF22C;
    case 721u: goto L_08AFF234;
    case 722u: goto L_08AFF244;
    case 723u: goto L_08AFF250;
    case 724u: goto L_08AFF258;
    case 725u: goto L_08AFF260;
    case 726u: goto L_08AFF268;
    case 727u: goto L_08AFF270;
    case 728u: goto L_08AFF280;
    case 729u: goto L_08AFF28C;
    case 730u: goto L_08AFF294;
    case 731u: goto L_08AFF2A8;
    case 732u: goto L_08AFF2C4;
    case 733u: goto L_08AFF2D4;
    case 734u: goto L_08AFF2E0;
    case 735u: goto L_08AFF2F4;
    case 736u: goto L_08AFF300;
    case 737u: goto L_08AFF320;
    case 738u: goto L_08AFF33C;
    case 739u: goto L_08AFF348;
    case 740u: goto L_08AFF350;
    case 741u: goto L_08AFF35C;
    case 742u: goto L_08AFF364;
    case 743u: goto L_08AFF368;
    case 744u: goto L_08AFF374;
    case 745u: goto L_08AFF384;
    case 746u: goto L_08AFF398;
    case 747u: goto L_08AFF39C;
    case 748u: goto L_08AFF3AC;
    case 749u: goto L_08AFF3B4;
    case 750u: goto L_08AFF3BC;
    case 751u: goto L_08AFF3C8;
    case 752u: goto L_08AFF3D0;
    case 753u: goto L_08AFF3DC;
    case 754u: goto L_08AFF3E4;
    case 755u: goto L_08AFF3F0;
    case 756u: goto L_08AFF3F8;
    case 757u: goto L_08AFF404;
    case 758u: goto L_08AFF414;
    case 759u: goto L_08AFF430;
    case 760u: goto L_08AFF440;
    case 761u: goto L_08AFF45C;
    case 762u: goto L_08AFF468;
    case 763u: goto L_08AFF474;
    case 764u: goto L_08AFF47C;
    case 765u: goto L_08AFF480;
    case 766u: goto L_08AFF488;
    case 767u: goto L_08AFF494;
    case 768u: goto L_08AFF49C;
    case 769u: goto L_08AFF4B4;
    case 770u: goto L_08AFF4D0;
    case 771u: goto L_08AFF4F0;
    case 772u: goto L_08AFF508;
    case 773u: goto L_08AFF530;
    case 774u: goto L_08AFF53C;
    case 775u: goto L_08AFF548;
    case 776u: goto L_08AFF550;
    case 777u: goto L_08AFF558;
    case 778u: goto L_08AFF560;
    case 779u: goto L_08AFF56C;
    case 780u: goto L_08AFF57C;
    case 781u: goto L_08AFF58C;
    case 782u: goto L_08AFF5A0;
    case 783u: goto L_08AFF5A8;
    case 784u: goto L_08AFF5B0;
    case 785u: goto L_08AFF5B8;
    case 786u: goto L_08AFF5C4;
    case 787u: goto L_08AFF5CC;
    case 788u: goto L_08AFF5D4;
    case 789u: goto L_08AFF5E0;
    case 790u: goto L_08AFF5E8;
    case 791u: goto L_08AFF5F8;
    case 792u: goto L_08AFF600;
    case 793u: goto L_08AFF610;
    case 794u: goto L_08AFF61C;
    case 795u: goto L_08AFF624;
    case 796u: goto L_08AFF62C;
    case 797u: goto L_08AFF634;
    case 798u: goto L_08AFF63C;
    case 799u: goto L_08AFF64C;
    case 800u: goto L_08AFF654;
    case 801u: goto L_08AFF664;
    case 802u: goto L_08AFF67C;
    case 803u: goto L_08AFF684;
    case 804u: goto L_08AFF68C;
    case 805u: goto L_08AFF69C;
    case 806u: goto L_08AFF6A4;
    case 807u: goto L_08AFF6AC;
    case 808u: goto L_08AFF6B4;
    case 809u: goto L_08AFF6BC;
    case 810u: goto L_08AFF6C4;
    case 811u: goto L_08AFF6CC;
    case 812u: goto L_08AFF6D4;
    case 813u: goto L_08AFF6D8;
    case 814u: goto L_08AFF6F8;
    case 815u: goto L_08AFF700;
    case 816u: goto L_08AFF708;
    case 817u: goto L_08AFF710;
    case 818u: goto L_08AFF718;
    case 819u: goto L_08AFF720;
    case 820u: goto L_08AFF728;
    case 821u: goto L_08AFF730;
    case 822u: goto L_08AFF768;
    case 823u: goto L_08AFF788;
    case 824u: goto L_08AFF790;
    case 825u: goto L_08AFF798;
    case 826u: goto L_08AFF7A8;
    case 827u: goto L_08AFF7B0;
    case 828u: goto L_08AFF7B4;
    case 829u: goto L_08AFF7CC;
    case 830u: goto L_08AFF7E0;
    case 831u: goto L_08AFF7E8;
    case 832u: goto L_08AFF7F4;
    case 833u: goto L_08AFF7FC;
    case 834u: goto L_08AFF808;
    case 835u: goto L_08AFF814;
    case 836u: goto L_08AFF81C;
    case 837u: goto L_08AFF824;
    case 838u: goto L_08AFF830;
    case 839u: goto L_08AFF838;
    case 840u: goto L_08AFF85C;
    case 841u: goto L_08AFF864;
    case 842u: goto L_08AFF870;
    case 843u: goto L_08AFF878;
    case 844u: goto L_08AFF884;
    case 845u: goto L_08AFF890;
    case 846u: goto L_08AFF898;
    case 847u: goto L_08AFF8A0;
    case 848u: goto L_08AFF8AC;
    case 849u: goto L_08AFF8C0;
    case 850u: goto L_08AFF8C8;
    case 851u: goto L_08AFF8D8;
    case 852u: goto L_08AFF8E4;
    case 853u: goto L_08AFF8EC;
    case 854u: goto L_08AFF914;
    case 855u: goto L_08AFF91C;
    case 856u: goto L_08AFF924;
    case 857u: goto L_08AFF92C;
    case 858u: goto L_08AFF934;
    case 859u: goto L_08AFF93C;
    case 860u: goto L_08AFF944;
    case 861u: goto L_08AFF94C;
    case 862u: goto L_08AFF954;
    case 863u: goto L_08AFFA1C;
    case 864u: goto L_08AFFA24;
    case 865u: goto L_08AFFA30;
    case 866u: goto L_08AFFA38;
    case 867u: goto L_08AFFA3C;
    case 868u: goto L_08AFFA50;
    case 869u: goto L_08AFFA68;
    case 870u: goto L_08AFFA78;
    case 871u: goto L_08AFFA84;
    case 872u: goto L_08AFFA8C;
    case 873u: goto L_08AFFA98;
    case 874u: goto L_08AFFAA8;
    case 875u: goto L_08AFFAAC;
    case 876u: goto L_08AFFAB8;
    case 877u: goto L_08AFFAC8;
    case 878u: goto L_08AFFAF8;
    case 879u: goto L_08AFFB08;
    case 880u: goto L_08AFFB14;
    case 881u: goto L_08AFFB1C;
    case 882u: goto L_08AFFB24;
    case 883u: goto L_08AFFB34;
    case 884u: goto L_08AFFB44;
    case 885u: goto L_08AFFB4C;
    case 886u: goto L_08AFFB5C;
    case 887u: goto L_08AFFB60;
    case 888u: goto L_08AFFB68;
    case 889u: goto L_08AFFB78;
    case 890u: goto L_08AFFB80;
    case 891u: goto L_08AFFB88;
    case 892u: goto L_08AFFBA0;
    case 893u: goto L_08AFFBA8;
    case 894u: goto L_08AFFBB4;
    case 895u: goto L_08AFFBC4;
    case 896u: goto L_08AFFBCC;
    case 897u: goto L_08AFFBD4;
    case 898u: goto L_08AFFBF0;
    case 899u: goto L_08AFFC04;
    case 900u: goto L_08AFFC0C;
    case 901u: goto L_08AFFC18;
    case 902u: goto L_08AFFC20;
    case 903u: goto L_08AFFC2C;
    case 904u: goto L_08AFFC34;
    case 905u: goto L_08AFFC3C;
    case 906u: goto L_08AFFC44;
    case 907u: goto L_08AFFC4C;
    case 908u: goto L_08AFFC64;
    case 909u: goto L_08AFFC70;
    case 910u: goto L_08AFFC7C;
    case 911u: goto L_08AFFC8C;
    case 912u: goto L_08AFFC98;
    case 913u: goto L_08AFFCA4;
    case 914u: goto L_08AFFCAC;
    case 915u: goto L_08AFFCB4;
    case 916u: goto L_08AFFCCC;
    case 917u: goto L_08AFFCD4;
    case 918u: goto L_08AFFCE0;
    case 919u: goto L_08AFFCF8;
    case 920u: goto L_08AFFD00;
    case 921u: goto L_08AFFD14;
    case 922u: goto L_08AFFD38;
    case 923u: goto L_08AFFD60;
    case 924u: goto L_08AFFD6C;
    case 925u: goto L_08AFFD74;
    case 926u: goto L_08AFFD88;
    case 927u: goto L_08AFFD90;
    case 928u: goto L_08AFFD98;
    case 929u: goto L_08AFFD9C;
    case 930u: goto L_08AFFDB0;
    case 931u: goto L_08AFFDC4;
    case 932u: goto L_08AFFDD4;
    case 933u: goto L_08AFFDDC;
    case 934u: goto L_08AFFE00;
    case 935u: goto L_08AFFE10;
    case 936u: goto L_08AFFE1C;
    case 937u: goto L_08AFFE3C;
    case 938u: goto L_08AFFE64;
    case 939u: goto L_08AFFE80;
    case 940u: goto L_08AFFE88;
    case 941u: goto L_08AFFE9C;
    case 942u: goto L_08AFFEA0;
    case 943u: goto L_08AFFEBC;
    case 944u: goto L_08AFFEC4;
    case 945u: goto L_08AFFECC;
    case 946u: goto L_08AFFEF4;
    case 947u: goto L_08AFFEFC;
    case 948u: goto L_08AFFF18;
    case 949u: goto L_08AFFF40;
    case 950u: goto L_08AFFF4C;
    case 951u: goto L_08AFFF60;
    case 952u: goto L_08AFFF6C;
    case 953u: goto L_08AFFF7C;
    case 954u: goto L_08AFFF8C;
    case 955u: goto L_08AFFF94;
    case 956u: goto L_08AFFFA8;
    case 957u: goto L_08AFFFBC;
    case 958u: goto L_08AFFFD8;
    case 959u: goto L_08AFFFDC;
    case 960u: goto L_08AFFFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08AFC000u;
        if (local_delta_v813 >= 16360u || (local_delta_v813 & 3u) != 0u) {
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
L_08AFC000:
    aot_gpr_4 = (aot_gpr_4 & 1023u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_08AFC00C;
      }
      goto L_08AFC00C;
    }
L_08AFC00C:
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8224));
    aot_gpr_6 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-12320));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (16624u << 16u);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_gpr_5 = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + aot_fpr_15;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_31 = (0x08AFC06Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFC06Cu) goto L_08AFC06C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFC06C:
    aot_fpr_13 = ctx.fpr[24] - ctx.fpr[22];
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (0u | 84u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_fpr_13 = ctx.fpr[22] + aot_fpr_13;
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08AFC0B8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_13));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0062.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 4u, 0x08AFC0B8u, 0x088FF060u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0062_entry(rt, ctx, 716u, aot_mem);
#else
        recomp_unit_0062_entry(rt, ctx, 716u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFC0B8u) goto L_08AFC0B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFC0B8:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.gpr[16] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFC0D4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10424), static_cast<std::uint16_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10426), static_cast<std::uint16_t>(aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10428), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10432), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (0u | 1u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10436), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFC100:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10424))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10426))))));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10428)));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10432)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8664), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7896), std::bit_cast<std::uint32_t>(aot_fpr_13));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFC124:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (16480u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_2 = (16640u << 16u);
    ctx.gpr[10] = (2238u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[11] = (ctx.gpr[7] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-272));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(24));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[10] + static_cast<std::uint32_t>(72));
    aot_gpr_5 = (ctx.gpr[10] + static_cast<std::uint32_t>(96));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_2);
    ctx.gpr[3] = (static_cast<std::int32_t>(aot_gpr_6) < 256 ? 1u : 0u);
    aot_gpr_2 = (16128u << 16u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_2);
      if (branch_taken) {
          goto L_08AFC17C;
      }
      goto L_08AFC178;
    }
L_08AFC178:
    aot_gpr_6 = (0u | 255u);
    goto L_08AFC17C;
L_08AFC17C:
    aot_gpr_2 = (2236u << 16u);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(32304));
    { const std::uint32_t vfpu_address = aot_gpr_2 + static_cast<std::uint32_t>(0);
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
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_2 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_2 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_2 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[3] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[12] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[12]);
    ctx.gpr[13] = (2238u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(12016));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[13] = (ctx.gpr[3] + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[14] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[14]));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[15] = (ctx.gpr[3] + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[15]));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[13]));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[14]));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[13]));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[15]));
    aot_mem.aot_direct_store16(ctx.gpr[12] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.gpr[3] = (16656u << 16u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[3]);
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[3] = (16688u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[3]);
    { const std::uint32_t vfpu_address = aot_gpr_2 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_2 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_2 = (aot_gpr_2 << 3u);
    ctx.gpr[3] = (aot_gpr_2 + aot_gpr_2);
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[3]);
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[10]);
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_2 = (aot_gpr_2 << 3u);
    ctx.gpr[3] = (aot_gpr_2 + aot_gpr_2);
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[3]);
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[10]);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_15), std::bit_cast<std::uint32_t>(ctx.fpr[17]), std::bit_cast<std::uint32_t>(ctx.fpr[19])};
      aot_mem.aot_direct_store32_block(aot_gpr_2 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_2 = (aot_gpr_2 << 3u);
    ctx.gpr[3] = (aot_gpr_2 + aot_gpr_2);
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[3]);
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[9]);
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[3] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_2 = (aot_gpr_2 << 3u);
    ctx.gpr[3] = (aot_gpr_2 + aot_gpr_2);
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[3]);
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[9]);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = aot_fpr_15 - ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[0];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_15), std::bit_cast<std::uint32_t>(ctx.fpr[17]), std::bit_cast<std::uint32_t>(ctx.fpr[19])};
      aot_mem.aot_direct_store32_block(aot_gpr_2 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_2 = (aot_gpr_2 << 3u);
    ctx.gpr[3] = (aot_gpr_2 + aot_gpr_2);
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[3]);
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[8]);
    ctx.gpr[3] = (aot_gpr_6 << 5u);
    ctx.gpr[3] = (aot_gpr_6 + ctx.gpr[3]);
    ctx.gpr[3] = (aot_gpr_6 + ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[3] << 2u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.gpr[12] = (ctx.gpr[12] >> 24u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    ctx.gpr[12] = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_2 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_2 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_2);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_15 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_15), std::bit_cast<std::uint32_t>(ctx.fpr[16]), std::bit_cast<std::uint32_t>(ctx.fpr[17])};
      aot_mem.aot_direct_store32_block(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_2 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_2);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_2 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_2 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_2 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_2 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_2 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_2);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_15), std::bit_cast<std::uint32_t>(ctx.fpr[17]), std::bit_cast<std::uint32_t>(ctx.fpr[19])};
      aot_mem.aot_direct_store32_block(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_2 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_2);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_2 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_2 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_2 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_2 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_2 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_2);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_15 = aot_fpr_15 - ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[0];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_15), std::bit_cast<std::uint32_t>(ctx.fpr[17]), std::bit_cast<std::uint32_t>(ctx.fpr[19])};
      aot_mem.aot_direct_store32_block(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_4 = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16784u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = ctx.gpr[11] == 0u;
      if (branch_taken) {
          goto L_08AFC4B8;
      }
      goto L_08AFC4A4;
    }
L_08AFC4A4:
    aot_gpr_4 = (16285u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 28836u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    goto L_08AFC4B8;
L_08AFC4B8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFC4DC;
      }
      goto L_08AFC4C8;
    }
L_08AFC4C8:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08AFC524;
      }
      goto L_08AFC4DC;
    }
L_08AFC4DC:
    aot_gpr_4 = (16768u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[17])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
        goto L_08AFC500;
    }
    goto L_08AFC4F4;
L_08AFC4F4:
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08AFC524;
      }
      goto L_08AFC500;
    }
L_08AFC500:
    aot_gpr_4 = (15872u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[18] - aot_fpr_12;
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08AFC524;
L_08AFC524:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    if (aot_gpr_4 != 0u) {
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
        goto L_08AFC54C;
    }
    goto L_08AFC538;
L_08AFC538:
    aot_fpr_15 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_15), std::bit_cast<std::uint32_t>(aot_fpr_15), std::bit_cast<std::uint32_t>(aot_fpr_15)};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(7504), aot_run_words); }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    goto L_08AFC54C;
L_08AFC54C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7504)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7508)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.fpr[16] = aot_fpr_15 - ctx.fpr[16];
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (48896u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[10]);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7512)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7508)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7512)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7508)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    ctx.fpr[16] = aot_fpr_15 + ctx.fpr[16];
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7512)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7508)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_fpr_13 = ctx.fpr[16] + aot_fpr_13;
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7512)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7504)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_fpr_13 = aot_fpr_15 + aot_fpr_13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7508)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7512)));
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(5));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), aot_gpr_4);
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFC6BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7650)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[20];
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[20];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_5 = (16256u << 16u);
    ctx.gpr[16] = (0u | 4u);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_31);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08AFC7C8;
      }
      goto L_08AFC740;
    }
L_08AFC740:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AFC760;
      }
      goto L_08AFC750;
    }
L_08AFC750:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AFC7C8;
      }
      goto L_08AFC760;
    }
L_08AFC760:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10284))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08AFC7C4;
      }
      goto L_08AFC76C;
    }
L_08AFC76C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10288)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 255u);
        goto L_08AFC78C;
    }
    goto L_08AFC77C;
L_08AFC77C:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_08AFC78C;
      }
      goto L_08AFC78C;
    }
L_08AFC78C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10288), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1548)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8076)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08AFC7C8;
      }
      goto L_08AFC7AC;
    }
L_08AFC7AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFC7C8;
      }
      goto L_08AFC7BC;
    }
L_08AFC7BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AFC7C8;
      }
      goto L_08AFC7C4;
    }
L_08AFC7C4:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08AFC7C8;
L_08AFC7C8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8664), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08AFC7D4u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFC7D4u) goto L_08AFC7D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFC7D4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC7F4;
      }
      goto L_08AFC7E4;
    }
L_08AFC7E4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(98))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08AFC7F8;
      }
      goto L_08AFC7F0;
    }
L_08AFC7F0:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08AFC7F4;
L_08AFC7F4:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08AFC7F8;
L_08AFC7F8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFC854;
      }
      goto L_08AFC800;
    }
L_08AFC800:
    aot_gpr_31 = (0x08AFC808u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFC808u) goto L_08AFC808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFC808:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC828;
      }
      goto L_08AFC818;
    }
L_08AFC818:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08AFC82C;
      }
      goto L_08AFC824;
    }
L_08AFC824:
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08AFC828;
L_08AFC828:
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_08AFC82C;
L_08AFC82C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFC854;
      }
      goto L_08AFC834;
    }
L_08AFC834:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_gpr_5 = (0u | 5u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.hi);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08AFC854;
L_08AFC854:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08AFC9A4;
      }
      goto L_08AFC860;
    }
L_08AFC860:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_08AFC9A4;
      }
      goto L_08AFC86C;
    }
L_08AFC86C:
    aot_gpr_31 = (0x08AFC874u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 45u, 0x08AFC874u, 0x08AAE9C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFC874u) goto L_08AFC874;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFC874:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFC9A4;
      }
      goto L_08AFC87C;
    }
L_08AFC87C:
    aot_gpr_31 = (0x08AFC884u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 47u, 0x08AFC884u, 0x08AAE9E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 542u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 542u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFC884u) goto L_08AFC884;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFC884:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFC9A4;
      }
      goto L_08AFC88C;
    }
L_08AFC88C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11240)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFC9A4;
      }
      goto L_08AFC8A4;
    }
L_08AFC8A4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10404)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFC960;
      }
      goto L_08AFC8B0;
    }
L_08AFC8B0:
    aot_gpr_31 = (0x08AFC8B8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFC8B8u) goto L_08AFC8B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFC8B8:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
      if (branch_taken) {
          goto L_08AFC91C;
      }
      goto L_08AFC8CC;
    }
L_08AFC8CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10408)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10404), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (ctx.gpr[7] < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 20u);
        goto L_08AFC8EC;
    }
    goto L_08AFC8EC;
L_08AFC8EC:
    aot_gpr_6 = (0u | 20u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_6 << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10412), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10416), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8592), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC9AC;
      }
      goto L_08AFC91C;
    }
L_08AFC91C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10420)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(51) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFC9AC;
      }
      goto L_08AFC930;
    }
L_08AFC930:
    aot_gpr_31 = (0x08AFC938u);
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8592)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFC938u) goto L_08AFC938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFC938:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8592), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8592)));
    { const bool branch_taken = ctx.gpr[20] == aot_gpr_4;
      if (branch_taken) {
          goto L_08AFC958;
      }
      goto L_08AFC950;
    }
L_08AFC950:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10420), aot_gpr_4);
    goto L_08AFC958;
L_08AFC958:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFC9AC;
      }
      goto L_08AFC960;
    }
L_08AFC960:
    aot_gpr_31 = (0x08AFC968u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFC968u) goto L_08AFC968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFC968:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 200 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFC99C;
      }
      goto L_08AFC97C;
    }
L_08AFC97C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10404), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10408), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8592), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10420), aot_gpr_5);
      if (branch_taken) {
          goto L_08AFC9AC;
      }
      goto L_08AFC99C;
    }
L_08AFC99C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8592), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC9AC;
      }
      goto L_08AFC9A4;
    }
L_08AFC9A4:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8592), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10404), static_cast<std::uint8_t>(0u));
    goto L_08AFC9AC;
L_08AFC9AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10416)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFCA34;
      }
      goto L_08AFC9B8;
    }
L_08AFC9B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFCA34;
      }
      goto L_08AFC9C8;
    }
L_08AFC9C8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10412)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1552)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08AFC9EC;
      }
      goto L_08AFC9E0;
    }
L_08AFC9E0:
    aot_gpr_6 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08AFC9EC;
L_08AFC9EC:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08AFC9F8u);
    aot_gpr_6 = (0u | 184u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 69u, 0x08AFC9F8u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFC9F8u) goto L_08AFC9F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFC9F8:
    aot_gpr_31 = (0x08AFCA00u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCA00u) goto L_08AFCA00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFCA00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10412)));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(100));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_31 = (0x08AFCA30u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0097.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 71u, 0x08AFCA30u, 0x0898BB3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0097_entry(rt, ctx, 954u, aot_mem);
#else
        recomp_unit_0097_entry(rt, ctx, 954u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCA30u) goto L_08AFCA30;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFCA30:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10416), 0u);
    goto L_08AFCA34;
L_08AFCA34:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
      if (branch_taken) {
          goto L_08AFCA4C;
      }
      goto L_08AFCA40;
    }
L_08AFCA40:
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCA74;
      }
      goto L_08AFCA4C;
    }
L_08AFCA4C:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[17];
    aot_gpr_5 = (0u | 5u);
      if (branch_taken) {
          goto L_08AFCA5C;
      }
      goto L_08AFCA54;
    }
L_08AFCA54:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCA64;
      }
      goto L_08AFCA5C;
    }
L_08AFCA5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7888), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFCA94;
      }
      goto L_08AFCA64;
    }
L_08AFCA64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7888), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFCA94;
      }
      goto L_08AFCA74;
    }
L_08AFCA74:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[17];
      if (branch_taken) {
          goto L_08AFCA84;
      }
      goto L_08AFCA7C;
    }
L_08AFCA7C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCA90;
      }
      goto L_08AFCA84;
    }
L_08AFCA84:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7888), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFCA94;
      }
      goto L_08AFCA90;
    }
L_08AFCA90:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7888), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AFCA94;
L_08AFCA94:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[17];
    aot_gpr_5 = (0u | 5u);
      if (branch_taken) {
          goto L_08AFCAA4;
      }
      goto L_08AFCA9C;
    }
L_08AFCA9C:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCB58;
      }
      goto L_08AFCAA4;
    }
L_08AFCAA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (16128u << 16u);
    aot_gpr_5 = (aot_gpr_5 >> 14u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08AFCAD0;
      }
      goto L_08AFCAC4;
    }
L_08AFCAC4:
    ctx.gpr[7] = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_08AFCAD0;
L_08AFCAD0:
    ctx.gpr[7] = (16040u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 62915u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08AFCB40;
      }
      goto L_08AFCAE4;
    }
L_08AFCAE4:
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08AFCB40;
      }
      goto L_08AFCAF0;
    }
L_08AFCAF0:
    ctx.gpr[7] = (16076u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFCB18;
      }
      goto L_08AFCB10;
    }
L_08AFCB10:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08AFCB40;
      }
      goto L_08AFCB18;
    }
L_08AFCB18:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08AFCB30;
      }
      goto L_08AFCB24;
    }
L_08AFCB24:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_08AFCB30;
L_08AFCB30:
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_08AFCB40;
L_08AFCB40:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFCB5C;
      }
      goto L_08AFCB50;
    }
L_08AFCB50:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08AFCB5C;
      }
      goto L_08AFCB58;
    }
L_08AFCB58:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AFCB5C;
L_08AFCB5C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7896), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFCB74;
      }
      goto L_08AFCB64;
    }
L_08AFCB64:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCB74;
      }
      goto L_08AFCB6C;
    }
L_08AFCB6C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCB7C;
      }
      goto L_08AFCB74;
    }
L_08AFCB74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8396), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCB88;
      }
      goto L_08AFCB7C;
    }
L_08AFCB7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8396), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFCB88;
L_08AFCB88:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AFCBB0;
      }
      goto L_08AFCB90;
    }
L_08AFCB90:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[16];
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCBB0;
      }
      goto L_08AFCB98;
    }
L_08AFCB98:
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCBB0;
      }
      goto L_08AFCBA0;
    }
L_08AFCBA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8396)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8396), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFCBB0;
L_08AFCBB0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08AFCBC0;
      }
      goto L_08AFCBB8;
    }
L_08AFCBB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7900), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCBCC;
      }
      goto L_08AFCBC0;
    }
L_08AFCBC0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7900), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFCBCC;
L_08AFCBCC:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_08AFCBE4;
      }
      goto L_08AFCBD4;
    }
L_08AFCBD4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7900), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFCBE4;
L_08AFCBE4:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCBFC;
      }
      goto L_08AFCBEC;
    }
L_08AFCBEC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCBFC;
      }
      goto L_08AFCBF4;
    }
L_08AFCBF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8400), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCC08;
      }
      goto L_08AFCBFC;
    }
L_08AFCBFC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8400), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFCC08;
L_08AFCC08:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[16];
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCC18;
      }
      goto L_08AFCC10;
    }
L_08AFCC10:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCC28;
      }
      goto L_08AFCC18;
    }
L_08AFCC18:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8400)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8400), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFCC28;
L_08AFCC28:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08AFCCB8;
      }
      goto L_08AFCC30;
    }
L_08AFCC30:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AFCC48;
      }
      goto L_08AFCC38;
    }
L_08AFCC38:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[16];
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCC48;
      }
      goto L_08AFCC40;
    }
L_08AFCC40:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCCB8;
      }
      goto L_08AFCC48;
    }
L_08AFCC48:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFCCB0;
      }
      goto L_08AFCC64;
    }
L_08AFCC64:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFCCB0;
      }
      goto L_08AFCC74;
    }
L_08AFCC74:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AFCCB0;
      }
      goto L_08AFCC7C;
    }
L_08AFCC7C:
    aot_gpr_5 = (16000u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08AFCC98;
    }
    goto L_08AFCC98;
L_08AFCC98:
    aot_gpr_5 = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10400), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFCCBC;
      }
      goto L_08AFCCB0;
    }
L_08AFCCB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10400), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCCBC;
      }
      goto L_08AFCCB8;
    }
L_08AFCCB8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10400), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AFCCBC;
L_08AFCCBC:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCCD8;
      }
      goto L_08AFCCC4;
    }
L_08AFCCC4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCCD8;
      }
      goto L_08AFCCCC;
    }
L_08AFCCCC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCCE4;
      }
      goto L_08AFCCD8;
    }
L_08AFCCD8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFCCE4;
L_08AFCCE4:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[16];
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCCF4;
      }
      goto L_08AFCCEC;
    }
L_08AFCCEC:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCD00;
      }
      goto L_08AFCCF4;
    }
L_08AFCCF4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFCD00;
L_08AFCD00:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (2234u << 16u);
      if (branch_taken) {
          goto L_08AFCDC0;
      }
      goto L_08AFCD10;
    }
L_08AFCD10:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(11224)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (16608u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08AFCD40;
    }
    goto L_08AFCD40;
L_08AFCD40:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08AFCD5C;
    }
    goto L_08AFCD5C;
L_08AFCD5C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08AFCD6C;
    }
    goto L_08AFCD6C;
L_08AFCD6C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24896)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AFCDBC;
      }
      goto L_08AFCD7C;
    }
L_08AFCD7C:
    aot_gpr_31 = (0x08AFCD84u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCD84u) goto L_08AFCD84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFCD84:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 31u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15333u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 24642u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9268)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9268), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFCDBC;
L_08AFCDBC:
    aot_gpr_5 = (2234u << 16u);
    goto L_08AFCDC0;
L_08AFCDC0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(13288));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8664)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_fpr_15 = ctx.fpr[24] - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    aot_fpr_15 = aot_fpr_15 + ctx.fpr[17];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8348), std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_15)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
        goto L_08AFCE18;
    }
    goto L_08AFCE18;
L_08AFCE18:
    aot_gpr_5 = (16179u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 13107u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7760), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10392), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 21 ? 1u : 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10384), std::bit_cast<std::uint32_t>(aot_fpr_15));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10388), std::bit_cast<std::uint32_t>(aot_fpr_15));
      if (branch_taken) {
          goto L_08AFCE48;
      }
      goto L_08AFCE40;
    }
L_08AFCE40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFCEB0;
      }
      goto L_08AFCE48;
    }
L_08AFCE48:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AFCE6C;
      }
      goto L_08AFCE54;
    }
L_08AFCE54:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFCEB0;
      }
      goto L_08AFCE6C;
    }
L_08AFCE6C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AFCE84;
      }
      goto L_08AFCE78;
    }
L_08AFCE78:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08AFCEB0;
      }
      goto L_08AFCE84;
    }
L_08AFCE84:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFCEAC;
      }
      goto L_08AFCE90;
    }
L_08AFCE90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_fpr_15 = aot_fpr_15 / ctx.fpr[20];
    ctx.fpr[24] = ctx.fpr[24] - aot_fpr_15;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFCEB0;
      }
      goto L_08AFCEAC;
    }
L_08AFCEAC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AFCEB0;
L_08AFCEB0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFCEC8;
      }
      goto L_08AFCEC0;
    }
L_08AFCEC0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFCEC8;
      }
      goto L_08AFCEC8;
    }
L_08AFCEC8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFCEE0;
      }
      goto L_08AFCED8;
    }
L_08AFCED8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFCEE0;
      }
      goto L_08AFCEE0;
    }
L_08AFCEE0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08AFCEF8;
      }
      goto L_08AFCEF0;
    }
L_08AFCEF0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08AFCEF8;
      }
      goto L_08AFCEF8;
    }
L_08AFCEF8:
    aot_gpr_31 = (0x08AFCF00u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9748), std::bit_cast<std::uint32_t>(aot_fpr_13));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 160u, 0x08AFCF00u, 0x08AFBA80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 518u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 518u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 518u, 0x08AFBA80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCF00u) goto L_08AFCF00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFCF00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
        goto L_08AFCF20;
    }
    goto L_08AFCF0C;
L_08AFCF0C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCF1C;
      }
      goto L_08AFCF14;
    }
L_08AFCF14:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCF1C;
    }
L_08AFCF1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    goto L_08AFCF20;
L_08AFCF20:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCF28;
    }
L_08AFCF28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
        goto L_08AFCF44;
    }
    goto L_08AFCF34;
L_08AFCF34:
    aot_gpr_31 = (0x08AFCF3Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCF3Cu) goto L_08AFCF3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFCF3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
    goto L_08AFCF44;
L_08AFCF44:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCF4C;
    }
L_08AFCF4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCF5C;
    }
L_08AFCF5C:
    aot_gpr_31 = (0x08AFCF64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCF64u) goto L_08AFCF64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFCF64:
    aot_gpr_31 = (0x08AFCF6Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 172u, 0x08AFCF6Cu, 0x08909D3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 491u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 491u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 491u, 0x08909D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCF6Cu) goto L_08AFCF6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFCF6C:
    if (aot_gpr_2 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
        goto L_08AFCFB8;
    }
    goto L_08AFCF74;
L_08AFCF74:
    aot_gpr_31 = (0x08AFCF7Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCF7Cu) goto L_08AFCF7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFCF7C:
    aot_gpr_31 = (0x08AFCF84u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 175u, 0x08AFCF84u, 0x08909D3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 491u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 491u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 491u, 0x08909D3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCF84u) goto L_08AFCF84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFCF84:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCF8C;
    }
L_08AFCF8C:
    aot_gpr_31 = (0x08AFCF94u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCF94u) goto L_08AFCF94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFCF94:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16624u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCFB4;
    }
L_08AFCFB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    goto L_08AFCFB8;
L_08AFCFB8:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 18 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCFC4;
    }
L_08AFCFC4:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFCFD4;
      }
      goto L_08AFCFCC;
    }
L_08AFCFCC:
    aot_gpr_31 = (0x08AFCFD4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 182u, 0x08AFCFD4u, 0x08AFBF40u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 566u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 566u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 566u, 0x08AFBF40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFCFD4u) goto L_08AFCFD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFCFD4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
        goto L_08AFCFF4;
    }
    goto L_08AFCFE0;
L_08AFCFE0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
    aot_gpr_5 = (0u | 7u);
      if (branch_taken) {
          goto L_08AFCFF0;
      }
      goto L_08AFCFE8;
    }
L_08AFCFE8:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFD028;
      }
      goto L_08AFCFF0;
    }
L_08AFCFF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    goto L_08AFCFF4;
L_08AFCFF4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFD028;
      }
      goto L_08AFCFFC;
    }
L_08AFCFFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
        goto L_08AFD018;
    }
    goto L_08AFD008;
L_08AFD008:
    aot_gpr_31 = (0x08AFD010u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD010u) goto L_08AFD010;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD010:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
    goto L_08AFD018;
L_08AFD018:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFD028;
      }
      goto L_08AFD020;
    }
L_08AFD020:
    aot_gpr_31 = (0x08AFD028u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 192u, 0x08AFD028u, 0x08AFBF48u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 567u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 567u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 567u, 0x08AFBF48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD028u) goto L_08AFD028;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFD028:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
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
L_08AFD054:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words); }
    aot_gpr_31 = (0x08AFD0A0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 194u, 0x08AFD0A0u, 0x08AAE9C4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 538u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 538u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD0A0u) goto L_08AFD0A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFD0A0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFD1D4;
      }
      goto L_08AFD0A8;
    }
L_08AFD0A8:
    aot_gpr_31 = (0x08AFD0B0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 196u, 0x08AFD0B0u, 0x08AAE9E8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 542u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 542u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD0B0u) goto L_08AFD0B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFD0B0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFD1D4;
      }
      goto L_08AFD0B8;
    }
L_08AFD0B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11240)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFD1D4;
      }
      goto L_08AFD0D4;
    }
L_08AFD0D4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFD1CC;
      }
      goto L_08AFD0F4;
    }
L_08AFD0F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[16]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11228)));
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (17024u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15488u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AFD1C4;
      }
      goto L_08AFD138;
    }
L_08AFD138:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2168)));
    aot_gpr_4 = (16352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFD1C4;
      }
      goto L_08AFD158;
    }
L_08AFD158:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[16]);
    aot_gpr_4 = (16000u << 16u);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    { const float fs = ctx.fpr[30]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16800u << 16u);
    aot_gpr_4 = (16576u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[30]));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_4);
    aot_gpr_4 = (2280u << 16u);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(12624));
      if (branch_taken) {
          goto L_08AFD1DC;
      }
      goto L_08AFD1C4;
    }
L_08AFD1C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFD720;
      }
      goto L_08AFD1CC;
    }
L_08AFD1CC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFD720;
      }
      goto L_08AFD1D4;
    }
L_08AFD1D4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFD720;
      }
      goto L_08AFD1DC;
    }
L_08AFD1DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (16512u << 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08AFD438;
      }
      goto L_08AFD1EC;
    }
L_08AFD1EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AFD210;
      }
      goto L_08AFD204;
    }
L_08AFD204:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[20] = ctx.fpr[20] + aot_fpr_13;
    goto L_08AFD210;
L_08AFD210:
    aot_gpr_4 = (14976u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFD234;
      }
      goto L_08AFD22C;
    }
L_08AFD22C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_08AFD614;
      }
      goto L_08AFD234;
    }
L_08AFD234:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < ctx.fpr[28])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFD258;
      }
      goto L_08AFD244;
    }
L_08AFD244:
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[28];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFD290;
      }
      goto L_08AFD258;
    }
L_08AFD258:
    aot_gpr_4 = (16492u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFD28C;
      }
      goto L_08AFD274;
    }
L_08AFD274:
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[20];
    { const float fs = ctx.fpr[30]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[28];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFD290;
      }
      goto L_08AFD28C;
    }
L_08AFD28C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    goto L_08AFD290;
L_08AFD290:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[16] + static_cast<std::uint32_t>(12), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08AFD354u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AFC124;
L_08AFD354:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16448u << 16u);
      if (branch_taken) {
          goto L_08AFD430;
      }
      goto L_08AFD36C;
    }
L_08AFD36C:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFD430;
      }
      goto L_08AFD380;
    }
L_08AFD380:
    aot_gpr_4 = (16320u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFD3A0;
      }
      goto L_08AFD398;
    }
L_08AFD398:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFD3BC;
      }
      goto L_08AFD3A0;
    }
L_08AFD3A0:
    aot_gpr_4 = (16416u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08AFD3BC;
    }
    goto L_08AFD3B8;
L_08AFD3B8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AFD3BC;
L_08AFD3BC:
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
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08AFD3E0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD3E0u) goto L_08AFD3E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD3E0:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_5 = (15523u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 55050u);
    aot_gpr_4 = (aot_gpr_4 & 31u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08AFD410u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD410u) goto L_08AFD410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD410:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 31u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    goto L_08AFD430;
L_08AFD430:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFD614;
      }
      goto L_08AFD438;
    }
L_08AFD438:
    aot_gpr_31 = (0x08AFD440u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD440u) goto L_08AFD440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD440:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 3840u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFD614;
      }
      goto L_08AFD450;
    }
L_08AFD450:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16358u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_gpr_4 = (49472u << 16u);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[16];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_gpr_4 = (16640u << 16u);
    aot_fpr_14 = ctx.fpr[18] + aot_fpr_14;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[17];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_15;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFD4D8;
      }
      goto L_08AFD4D0;
    }
L_08AFD4D0:
    aot_gpr_31 = (0x08AFD4D8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD4D8u) goto L_08AFD4D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD4D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(18)));
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AFD550;
    }
    goto L_08AFD4E8;
L_08AFD4E8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08AFD4F8u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 232u, 0x08AFD4F8u, 0x08960240u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 22u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 22u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD4F8u) goto L_08AFD4F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFD4F8:
    aot_gpr_4 = (16230u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17008u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_gpr_31 = (0x08AFD52Cu);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0087.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 233u, 0x08AFD52Cu, 0x08960240u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0087_entry(rt, ctx, 22u, aot_mem);
#else
        recomp_unit_0087_entry(rt, ctx, 22u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD52Cu) goto L_08AFD52C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFD52C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(108)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08AFD5A0;
      }
      goto L_08AFD550;
    }
L_08AFD550:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2000)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2004)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_15;
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2008)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = ctx.fpr[19] + aot_fpr_15;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFD5A0;
L_08AFD5A0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08AFD5ACu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD5ACu) goto L_08AFD5AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD5AC:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-128));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_gpr_31 = (0x08AFD5E4u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD5E4u) goto L_08AFD5E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD5E4:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-128));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    goto L_08AFD614;
L_08AFD614:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 35 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AFD1DC;
      }
      goto L_08AFD624;
    }
L_08AFD624:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFD718;
      }
      goto L_08AFD630;
    }
L_08AFD630:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AFD63Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD63Cu) goto L_08AFD63C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD63C:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AFD648u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD648u) goto L_08AFD648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD648:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_31 = (0x08AFD654u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD654u) goto L_08AFD654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD654:
    aot_gpr_4 = (0u | 13u);
    aot_gpr_31 = (0x08AFD660u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD660u) goto L_08AFD660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD660:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08AFD66Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD66Cu) goto L_08AFD66C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD66C:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08AFD678u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD678u) goto L_08AFD678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD678:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08AFD684u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD684u) goto L_08AFD684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD684:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8764)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x08AFD694u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD694u) goto L_08AFD694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD694:
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x08AFD6ACu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-272));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0186.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 249u, 0x08AFD6ACu, 0x08AEE610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0186_entry(rt, ctx, 515u, aot_mem);
#else
        recomp_unit_0186_entry(rt, ctx, 515u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD6ACu) goto L_08AFD6AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFD6AC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFD6D0;
      }
      goto L_08AFD6B4;
    }
L_08AFD6B4:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    aot_gpr_4 = (0u | 3u);
    aot_gpr_31 = (0x08AFD6C8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12016));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0186.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 251u, 0x08AFD6C8u, 0x08AEE8E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0186_entry(rt, ctx, 536u, aot_mem);
#else
        recomp_unit_0186_entry(rt, ctx, 536u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD6C8u) goto L_08AFD6C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFD6C8:
    aot_gpr_31 = (0x08AFD6D0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0186.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 252u, 0x08AFD6D0u, 0x08AEE8D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0186_entry(rt, ctx, 535u, aot_mem);
#else
        recomp_unit_0186_entry(rt, ctx, 535u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD6D0u) goto L_08AFD6D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFD6D0:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x08AFD6DCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD6DCu) goto L_08AFD6DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD6DC:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x08AFD6E8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD6E8u) goto L_08AFD6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD6E8:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x08AFD6F4u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD6F4u) goto L_08AFD6F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD6F4:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x08AFD700u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD700u) goto L_08AFD700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD700:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_31 = (0x08AFD70Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD70Cu) goto L_08AFD70C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD70C:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x08AFD718u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFD718u) goto L_08AFD718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFD718:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    goto L_08AFD720;
L_08AFD720:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFD768:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFD770:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFD778:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFD780:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(6)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFD788:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(16))))));
    aot_gpr_6 = (0u | 2u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AFD7B8;
      }
      goto L_08AFD7AC;
    }
L_08AFD7AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFD7B8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08AFD950;
L_08AFD7B8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08AFD7C8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AFD768;
L_08AFD7C8:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_2 << 4u);
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_2);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_2);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_5);
    aot_gpr_2 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(-448));
    aot_gpr_6 = (aot_gpr_2 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AFD80C;
      }
      goto L_08AFD800;
    }
L_08AFD800:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AFD840;
      }
      goto L_08AFD80C;
    }
L_08AFD80C:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
      if (branch_taken) {
          goto L_08AFD830;
      }
      goto L_08AFD818;
    }
L_08AFD818:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_6 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AFD838;
      }
      goto L_08AFD824;
    }
L_08AFD824:
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(14));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AFD818;
      }
      goto L_08AFD830;
    }
L_08AFD830:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFD840;
      }
      goto L_08AFD838;
    }
L_08AFD838:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFD840;
      }
      goto L_08AFD840;
    }
L_08AFD840:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFD854:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 & 65535u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08AFD87C;
L_08AFD87C:
    aot_gpr_31 = (0x08AFD884u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AFD770;
L_08AFD884:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFD8B8;
      }
      goto L_08AFD890;
    }
L_08AFD890:
    aot_gpr_2 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_2 = (aot_gpr_2 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_08AFD8B0;
      }
      goto L_08AFD8A4;
    }
L_08AFD8A4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_08AFD87C;
      }
      goto L_08AFD8B0;
    }
L_08AFD8B0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFD8BC;
      }
      goto L_08AFD8B8;
    }
L_08AFD8B8:
    aot_gpr_2 = (0u | 0u);
    goto L_08AFD8BC;
L_08AFD8BC:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFD8D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    goto L_08AFD8F0;
L_08AFD8F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AFD934;
      }
      goto L_08AFD8F8;
    }
L_08AFD8F8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFD934;
      }
      goto L_08AFD904;
    }
L_08AFD904:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AFD910u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AFD788;
L_08AFD910:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFD92C;
      }
      goto L_08AFD918;
    }
L_08AFD918:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    aot_gpr_4 = (0u | 65408u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (0u | 63u);
        goto L_08AFD928;
    }
    goto L_08AFD928;
L_08AFD928:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08AFD92C;
L_08AFD92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AFD8F0;
      }
      goto L_08AFD934;
    }
L_08AFD934:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFD948:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFD950:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 224 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD970;
      }
      goto L_08AFD960;
    }
L_08AFD960:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 123 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08AFD988;
      }
      goto L_08AFD96C;
    }
L_08AFD96C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 224 ? 1u : 0u);
    goto L_08AFD970;
L_08AFD970:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD990;
      }
      goto L_08AFD978;
    }
L_08AFD978:
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (0u | 247u);
      if (branch_taken) {
          goto L_08AFD990;
      }
      goto L_08AFD980;
    }
L_08AFD980:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          goto L_08AFD990;
      }
      goto L_08AFD988;
    }
L_08AFD988:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08AFD990;
L_08AFD990:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFD998:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    goto L_08AFD9B0;
L_08AFD9B0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AFD9E8;
      }
      goto L_08AFD9B8;
    }
L_08AFD9B8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFD9E8;
      }
      goto L_08AFD9C4;
    }
L_08AFD9C4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AFD9D0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08AFD788;
L_08AFD9D0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFD9E0;
      }
      goto L_08AFD9D8;
    }
L_08AFD9D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AFD9B0;
      }
      goto L_08AFD9E0;
    }
L_08AFD9E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AFD9EC;
      }
      goto L_08AFD9E8;
    }
L_08AFD9E8:
    aot_gpr_2 = (0u | 0u);
    goto L_08AFD9EC;
L_08AFD9EC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFDA00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 << 11u);
    ctx.gpr[8] = (0u + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[16] = (0u | 2048u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AFDA2Cu);
    aot_gpr_6 = (ctx.gpr[8] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0025.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 311u, 0x08AFDA2Cu, 0x0886A614u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0025_entry(rt, ctx, 517u, aot_mem);
#else
        recomp_unit_0025_entry(rt, ctx, 517u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 517u, 0x0886A614u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDA2Cu) goto L_08AFDA2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDA2C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.hi);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AFDA48;
      }
      goto L_08AFDA40;
    }
L_08AFDA40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDA50;
      }
      goto L_08AFDA48;
    }
L_08AFDA48:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_2 = (ctx.lo);
    goto L_08AFDA50;
L_08AFDA50:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFDA60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AFDA74u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08AFDAB4;
L_08AFDA74:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFDA88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 1u);
      if (branch_taken) {
          goto L_08AFDAA8;
      }
      goto L_08AFDA98;
    }
L_08AFDA98:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AFDAA8;
      }
      goto L_08AFDAA0;
    }
L_08AFDAA0:
    aot_gpr_31 = (0x08AFDAA8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDAA8u) goto L_08AFDAA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDAA8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFDAB4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 20u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (90u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20112), 0u);
    aot_gpr_4 = (90u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20112));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(1616));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_31);
    aot_gpr_31 = (0x08AFDB20u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 783u, 0x08B1B4DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDB20u) goto L_08AFDB20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDB20:
    aot_gpr_31 = (0x08AFDB28u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.pc = 0x08B73184u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDB28:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), aot_gpr_2);
    aot_gpr_31 = (0x08AFDB34u);
    aot_gpr_4 = (0u | 640u);
    ctx.pc = 0x08B731D4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDB34:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(312), aot_gpr_2);
    aot_gpr_31 = (0x08AFDB40u);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B731C4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDB40:
    aot_gpr_4 = (68u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(316), aot_gpr_2);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(16928));
    ctx.gpr[8] = (2224u << 16u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    aot_gpr_6 = (ctx.gpr[16] + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(296));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 640u);
    aot_gpr_31 = (0x08AFDB70u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9728));
    ctx.pc = 0x08B7315Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDB70:
    aot_gpr_5 = (89u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), aot_gpr_2);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17956));
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 512u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08AFDB9Cu);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = 0x08B731DCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDB9C:
    aot_gpr_4 = (68u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), aot_gpr_2);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(16852), static_cast<std::uint8_t>(0u));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFDBC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AFDBD4u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 329u, 0x08AFDBD4u, 0x08B63230u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 686u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 686u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 686u, 0x08B63230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDBD4u) goto L_08AFDBD4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDBD4:
    aot_gpr_31 = (0x08AFDBDCu);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.pc = 0x08B73174u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDBDC:
    aot_gpr_31 = (0x08AFDBE4u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B73144u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDBE4:
    aot_gpr_31 = (0x08AFDBECu);
    ctx.pc = 0x08B731A4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDBEC:
    aot_gpr_31 = (0x08AFDBF4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B7351Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDBF4:
    aot_gpr_31 = (0x08AFDBFCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B7351Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDBFC:
    aot_gpr_31 = (0x08AFDC04u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08B7351Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDC04:
    aot_gpr_31 = (0x08AFDC0Cu);
    aot_gpr_4 = (0u | 1u);
    ctx.pc = 0x08B7322Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDC0C:
    aot_gpr_4 = (90u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20112));
    aot_gpr_31 = (0x08AFDC1Cu);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 808u, 0x08B1B654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDC1Cu) goto L_08AFDC1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDC1C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFDC2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AFDC58u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 339u, 0x08AFDC58u, 0x08A19F84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 248u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 248u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 248u, 0x08A19F84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDC58u) goto L_08AFDC58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDC58:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AFDC64u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 340u, 0x08AFDC64u, 0x08AAF6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 753u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 753u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDC64u) goto L_08AFDC64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDC64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08AFDCA8;
      }
      goto L_08AFDC70;
    }
L_08AFDC70:
    aot_gpr_31 = (0x08AFDC78u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 342u, 0x08AFDC78u, 0x088E1B3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 41u, 0x088E1B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDC78u) goto L_08AFDC78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDC78:
    aot_gpr_4 = (ctx.gpr[18] | aot_gpr_2);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFDC9C;
      }
      goto L_08AFDC84;
    }
L_08AFDC84:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AFDC9C;
      }
      goto L_08AFDC8C;
    }
L_08AFDC8C:
    aot_gpr_31 = (0x08AFDC94u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 345u, 0x08AFDC94u, 0x08A115C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 180u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 180u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 180u, 0x08A115C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDC94u) goto L_08AFDC94;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDC94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFDCA0;
      }
      goto L_08AFDC9C;
    }
L_08AFDC9C:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AFDCA0;
L_08AFDCA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFDCCC;
      }
      goto L_08AFDCA8;
    }
L_08AFDCA8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_08AFDCC8;
      }
      goto L_08AFDCB0;
    }
L_08AFDCB0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08AFDCC8;
      }
      goto L_08AFDCB8;
    }
L_08AFDCB8:
    aot_gpr_31 = (0x08AFDCC0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 351u, 0x08AFDCC0u, 0x08A115C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 180u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 180u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 180u, 0x08A115C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDCC0u) goto L_08AFDCC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDCC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFDCCC;
      }
      goto L_08AFDCC8;
    }
L_08AFDCC8:
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AFDCCC;
L_08AFDCCC:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFDCE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-2080));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2068), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1636)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2064), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1632)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2052), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2056), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2048), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2060), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2072), aot_gpr_31);
    aot_gpr_31 = (0x08AFDD34u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0025.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 355u, 0x08AFDD34u, 0x0886A630u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0025_entry(rt, ctx, 519u, aot_mem);
#else
        recomp_unit_0025_entry(rt, ctx, 519u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 519u, 0x0886A630u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDD34u) goto L_08AFDD34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDD34:
    aot_gpr_4 = (ctx.gpr[3] ^ ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_2 < ctx.gpr[20] ? 1u : 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFDD5C;
      }
      goto L_08AFDD54;
    }
L_08AFDD54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDDFC;
      }
      goto L_08AFDD5C;
    }
L_08AFDD5C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AFDD6Cu);
    aot_gpr_6 = (0u | 2048u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0025.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 358u, 0x08AFDD6Cu, 0x0886A614u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0025_entry(rt, ctx, 517u, aot_mem);
#else
        recomp_unit_0025_entry(rt, ctx, 517u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 517u, 0x0886A614u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDD6Cu) goto L_08AFDD6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDD6C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 2048 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFDD80;
      }
      goto L_08AFDD78;
    }
L_08AFDD78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDDFC;
      }
      goto L_08AFDD80;
    }
L_08AFDD80:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AFDD90u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B73154u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDD90:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFDDA0;
      }
      goto L_08AFDD98;
    }
L_08AFDD98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDDFC;
      }
      goto L_08AFDDA0;
    }
L_08AFDDA0:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AFDDACu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B7317Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDDAC:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFDDBC;
      }
      goto L_08AFDDB4;
    }
L_08AFDDB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDDFC;
      }
      goto L_08AFDDBC;
    }
L_08AFDDBC:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08AFDDD0u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0025.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 367u, 0x08AFDDD0u, 0x0886A630u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0025_entry(rt, ctx, 519u, aot_mem);
#else
        recomp_unit_0025_entry(rt, ctx, 519u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 519u, 0x0886A630u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDDD0u) goto L_08AFDDD0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDDD0:
    aot_gpr_4 = (ctx.gpr[3] ^ ctx.gpr[21]);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_2 < ctx.gpr[20] ? 1u : 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFDDF8;
      }
      goto L_08AFDDF0;
    }
L_08AFDDF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDDFC;
      }
      goto L_08AFDDF8;
    }
L_08AFDDF8:
    aot_gpr_2 = (0u | 0u);
    goto L_08AFDDFC;
L_08AFDDFC:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(2048), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(2080));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFDE20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (90u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20100)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7516));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AFDE58u);
    aot_gpr_5 = (0u | 1u);
    ctx.pc = 0x08B73234u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDE58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7520)));
    aot_gpr_5 = (aot_gpr_4 ^ ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20100), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 16384u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFDE84;
      }
      goto L_08AFDE74;
    }
L_08AFDE74:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AFDE88;
      }
      goto L_08AFDE84;
    }
L_08AFDE84:
    aot_gpr_2 = (0u | 0u);
    goto L_08AFDE88;
L_08AFDE88:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFDEA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (90u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(20104), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (90u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20108), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(296));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_31 = (0x08AFDF04u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0025.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 377u, 0x08AFDF04u, 0x0886A540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0025_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0025_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 501u, 0x0886A540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDF04u) goto L_08AFDF04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDF04:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08AFDF14;
      }
      goto L_08AFDF0C;
    }
L_08AFDF0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE444;
      }
      goto L_08AFDF14;
    }
L_08AFDF14:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AFDF24u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0025.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 380u, 0x08AFDF24u, 0x0886A548u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0025_entry(rt, ctx, 502u, aot_mem);
#else
        recomp_unit_0025_entry(rt, ctx, 502u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 502u, 0x0886A548u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFDF24u) goto L_08AFDF24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFDF24:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08AFDF34;
      }
      goto L_08AFDF2C;
    }
L_08AFDF2C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE444;
      }
      goto L_08AFDF34;
    }
L_08AFDF34:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AFDF50u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08AFDCE8;
L_08AFDF50:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFDF60;
      }
      goto L_08AFDF58;
    }
L_08AFDF58:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE444;
      }
      goto L_08AFDF60;
    }
L_08AFDF60:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08AFDF70u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B73164u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDF70:
    ctx.gpr[20] = (68u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), aot_gpr_2);
    { const bool branch_taken = aot_gpr_2 != 0u;
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFDF88;
      }
      goto L_08AFDF80;
    }
L_08AFDF80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFDF88;
    }
L_08AFDF88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFDFB4;
      }
      goto L_08AFDF94;
    }
L_08AFDF94:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AFDFA4u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = 0x08B73164u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDFA4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), aot_gpr_2);
      if (branch_taken) {
          goto L_08AFDFB4;
      }
      goto L_08AFDFAC;
    }
L_08AFDFAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFDFB4;
    }
L_08AFDFB4:
    aot_gpr_31 = (0x08AFDFBCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B731ACu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDFBC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16920), aot_gpr_2);
      if (branch_taken) {
          goto L_08AFDFD0;
      }
      goto L_08AFDFC8;
    }
L_08AFDFC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFDFD0;
    }
L_08AFDFD0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(168));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08AFDFE4u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B7314Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFDFE4:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), aot_gpr_2);
      if (branch_taken) {
          goto L_08AFDFF4;
      }
      goto L_08AFDFEC;
    }
L_08AFDFEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFDFF4;
    }
L_08AFDFF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
        goto L_08AFE04C;
    }
    goto L_08AFE000;
L_08AFE000:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(324));
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr_31 = (0x08AFE010u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B731ECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE010:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), aot_gpr_2);
      if (branch_taken) {
          goto L_08AFE020;
      }
      goto L_08AFE018;
    }
L_08AFE018:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFE020;
    }
L_08AFE020:
    aot_gpr_4 = (90u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(17984));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(232));
    aot_gpr_31 = (0x08AFE038u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7314Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE038:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), aot_gpr_2);
      if (branch_taken) {
          goto L_08AFE048;
      }
      goto L_08AFE040;
    }
L_08AFE040:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFE048;
    }
L_08AFE048:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    goto L_08AFE04C;
L_08AFE04C:
    aot_gpr_5 = (68u << 16u);
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16904), aot_gpr_4);
    aot_gpr_4 = (68u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16912), aot_gpr_6);
    aot_gpr_4 = (68u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16908), ctx.gpr[21]);
    aot_gpr_5 = (68u << 16u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(232));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16916), aot_gpr_4);
    aot_gpr_31 = (0x08AFE08Cu);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B7322Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE08C:
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(352));
    aot_gpr_5 = (9u << 16u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x08AFE0A4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32768));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 408u, 0x08AFE0A4u, 0x08A19C80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 225u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 225u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 225u, 0x08A19C80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE0A4u) goto L_08AFE0A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE0A4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08AFE0B4;
      }
      goto L_08AFE0AC;
    }
L_08AFE0AC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE408;
      }
      goto L_08AFE0B4;
    }
L_08AFE0B4:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08AFE100;
      }
      goto L_08AFE0C0;
    }
L_08AFE0C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8193 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AFE0D8;
      }
      goto L_08AFE0D0;
    }
L_08AFE0D0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE3F0;
      }
      goto L_08AFE0D8;
    }
L_08AFE0D8:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (68u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(416));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_31 = (0x08AFE0F0u);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 414u, 0x08AFE0F0u, 0x088E18B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 13u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 13u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 13u, 0x088E18B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE0F0u) goto L_08AFE0F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE0F0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08AFE100;
      }
      goto L_08AFE0F8;
    }
L_08AFE0F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFE3F0;
      }
      goto L_08AFE100;
    }
L_08AFE100:
    aot_gpr_4 = (68u << 16u);
    ctx.gpr[22] = (aot_gpr_4 + static_cast<std::uint32_t>(400));
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[22]);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AFE11Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 417u, 0x08AFE11Cu, 0x08AAF568u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 735u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 735u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 735u, 0x08AAF568u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE11Cu) goto L_08AFE11C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE11C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08AFE12C;
      }
      goto L_08AFE124;
    }
L_08AFE124:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE3E4;
      }
      goto L_08AFE12C;
    }
L_08AFE12C:
    aot_gpr_5 = (68u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (aot_gpr_5 + static_cast<std::uint32_t>(16864));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (ctx.gpr[16] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08AFE16C;
      }
      goto L_08AFE140;
    }
L_08AFE140:
    aot_gpr_4 = (68u << 16u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(416));
    aot_gpr_6 = (ctx.gpr[16] + aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AFE15Cu);
    ctx.gpr[7] = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 421u, 0x08AFE15Cu, 0x08A1158Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 176u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 176u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 176u, 0x08A1158Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE15Cu) goto L_08AFE15C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE15C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08AFE190;
      }
      goto L_08AFE164;
    }
L_08AFE164:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE3DC;
      }
      goto L_08AFE16C;
    }
L_08AFE16C:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AFE180u);
    ctx.gpr[7] = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 424u, 0x08AFE180u, 0x08A1158Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 176u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 176u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 176u, 0x08A1158Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE180u) goto L_08AFE180;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE180:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) >= 0;
      if (branch_taken) {
          goto L_08AFE190;
      }
      goto L_08AFE188;
    }
L_08AFE188:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE3DC;
      }
      goto L_08AFE190;
    }
L_08AFE190:
    aot_gpr_31 = (0x08AFE198u);
    ctx.pc = 0x08B7347Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE198:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AFE1A4u);
    aot_gpr_5 = (0u | 19u);
    ctx.pc = 0x08B734ECu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE1A4:
    aot_gpr_4 = (2232u << 16u);
    aot_gpr_5 = (2210u << 16u);
    aot_gpr_6 = (0u | 17u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30504));
    aot_gpr_31 = (0x08AFE1C8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-24560));
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE1C8:
    aot_gpr_5 = (2219u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_2);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1640));
    aot_gpr_6 = (0u | 18u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08AFE1ECu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2260));
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE1EC:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE220;
      }
      goto L_08AFE1FC;
    }
L_08AFE1FC:
    aot_gpr_5 = (2190u << 16u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1656));
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08AFE21Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(7072));
    ctx.pc = 0x08B734B4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE21C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), aot_gpr_2);
    goto L_08AFE220;
L_08AFE220:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(332)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AFE238u);
    ctx.gpr[8] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0025.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 434u, 0x08AFE238u, 0x0886A630u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0025_entry(rt, ctx, 519u, aot_mem);
#else
        recomp_unit_0025_entry(rt, ctx, 519u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 519u, 0x0886A630u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE238u) goto L_08AFE238;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE238:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1636)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1632)));
    aot_gpr_5 = (ctx.gpr[3] ^ ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_2 < aot_gpr_6 ? 1u : 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[8]);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFE268;
      }
      goto L_08AFE260;
    }
L_08AFE260:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE38C;
      }
      goto L_08AFE268;
    }
L_08AFE268:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE280;
      }
      goto L_08AFE270;
    }
L_08AFE270:
    aot_gpr_4 = (68u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(416));
    aot_gpr_31 = (0x08AFE280u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 438u, 0x08AFE280u, 0x088E1994u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 24u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 24u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 24u, 0x088E1994u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE280u) goto L_08AFE280;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE280:
    aot_gpr_31 = (0x08AFE288u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 439u, 0x08AFE288u, 0x08A19D68u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 229u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 229u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 229u, 0x08A19D68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE288u) goto L_08AFE288;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE288:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr_31 = (0x08AFE294u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 440u, 0x08AFE294u, 0x08AAF5B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 737u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 737u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 737u, 0x08AAF5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE294u) goto L_08AFE294;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE294:
    aot_gpr_31 = (0x08AFE29Cu);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 441u, 0x08AFE29Cu, 0x08A115A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 177u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 177u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 177u, 0x08A115A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE29Cu) goto L_08AFE29C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE29C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE2B8;
      }
      goto L_08AFE2A8;
    }
L_08AFE2A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (0u | 40u);
    aot_gpr_31 = (0x08AFE2B8u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE2B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 40u);
    aot_gpr_31 = (0x08AFE2C8u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE2C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08AFE2D8u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08B73464u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE2D8:
    aot_gpr_4 = (68u << 16u);
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(16904));
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AFE2FCu);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    goto L_08AFE484;
L_08AFE2FC:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), aot_gpr_2);
      if (branch_taken) {
          goto L_08AFE358;
      }
      goto L_08AFE304;
    }
L_08AFE304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08AFE318;
      }
      goto L_08AFE310;
    }
L_08AFE310:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFE38C;
      }
      goto L_08AFE318;
    }
L_08AFE318:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08AFE344;
      }
      goto L_08AFE324;
    }
L_08AFE324:
    aot_gpr_31 = (0x08AFE32Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7318Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE32C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFE33C;
      }
      goto L_08AFE334;
    }
L_08AFE334:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFE38C;
      }
      goto L_08AFE33C;
    }
L_08AFE33C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08AFE358;
      }
      goto L_08AFE344;
    }
L_08AFE344:
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFE358;
      }
      goto L_08AFE350;
    }
L_08AFE350:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFE38C;
      }
      goto L_08AFE358;
    }
L_08AFE358:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE370;
      }
      goto L_08AFE364;
    }
L_08AFE364:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08AFE370u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE370:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08AFE37Cu);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE37C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08AFE388u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE388:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFE38C;
L_08AFE38C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE3A0;
      }
      goto L_08AFE394;
    }
L_08AFE394:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08AFE3A0u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE3A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08AFE3ACu);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE3AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (0x08AFE3B8u);
    aot_gpr_5 = (0u | 0u);
    ctx.pc = 0x08B7346Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE3B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE3CC;
      }
      goto L_08AFE3C4;
    }
L_08AFE3C4:
    aot_gpr_31 = (0x08AFE3CCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B7349Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE3CC:
    aot_gpr_31 = (0x08AFE3D4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B7349Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE3D4:
    aot_gpr_31 = (0x08AFE3DCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08B7349Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE3DC:
    aot_gpr_31 = (0x08AFE3E4u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 470u, 0x08AFE3E4u, 0x08A115C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 179u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 179u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 179u, 0x08A115C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE3E4u) goto L_08AFE3E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE3E4:
    aot_gpr_31 = (0x08AFE3ECu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 471u, 0x08AFE3ECu, 0x08AAF5D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 739u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 739u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 739u, 0x08AAF5D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE3ECu) goto L_08AFE3EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE3EC:
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFE3F0;
L_08AFE3F0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
      if (branch_taken) {
          goto L_08AFE408;
      }
      goto L_08AFE3F8;
    }
L_08AFE3F8:
    aot_gpr_4 = (68u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(416));
    aot_gpr_31 = (0x08AFE408u);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 474u, 0x08AFE408u, 0x088E19ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 26u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 26u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 26u, 0x088E19ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE408u) goto L_08AFE408;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE408:
    aot_gpr_31 = (0x08AFE410u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 475u, 0x08AFE410u, 0x08A19DFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 234u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 234u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 234u, 0x08A19DFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE410u) goto L_08AFE410;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16920)));
    goto L_08AFE414;
L_08AFE414:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AFE420u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B731CCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE420:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr_31 = (0x08AFE42Cu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7316Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE42C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE444;
      }
      goto L_08AFE438;
    }
L_08AFE438:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    aot_gpr_31 = (0x08AFE444u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B7316Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE444:
    aot_gpr_31 = (0x08AFE44Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0025.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 481u, 0x08AFE44Cu, 0x0886A5E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0025_entry(rt, ctx, 514u, aot_mem);
#else
        recomp_unit_0025_entry(rt, ctx, 514u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 514u, 0x0886A5E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE44Cu) goto L_08AFE44C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE44C:
    aot_gpr_31 = (0x08AFE454u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0025.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 482u, 0x08AFE454u, 0x0886A60Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0025_entry(rt, ctx, 516u, aot_mem);
#else
        recomp_unit_0025_entry(rt, ctx, 516u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0025_entry, 25u, 516u, 0x0886A60Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE454u) goto L_08AFE454;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE454:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE484:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (90u << 16u);
    ctx.gpr[11] = (aot_gpr_4 + ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    ctx.gpr[30] = (90u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    { const std::uint32_t aot_run_words[7]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[30] = (aot_gpr_4 + ctx.gpr[30]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    ctx.gpr[22] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_31);
    goto L_08AFE4EC;
L_08AFE4EC:
    aot_gpr_31 = (0x08AFE4F4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 485u, 0x08AFE4F4u, 0x08A07260u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 751u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 751u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE4F4u) goto L_08AFE4F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE4F4:
    aot_gpr_31 = (0x08AFE4FCu);
    aot_gpr_4 = (0u | 0u);
    ctx.pc = 0x08B73594u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE4FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE520;
      }
      goto L_08AFE508;
    }
L_08AFE508:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AFE518u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    goto L_08AFDC2C;
L_08AFE518:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_2);
      if (branch_taken) {
          goto L_08AFE580;
      }
      goto L_08AFE520;
    }
L_08AFE520:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(20104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE550;
      }
      goto L_08AFE530;
    }
L_08AFE530:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AFE53Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    goto L_08AFDE20;
L_08AFE53C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AFE580;
      }
      goto L_08AFE548;
    }
L_08AFE548:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE7BC;
      }
      goto L_08AFE550;
    }
L_08AFE550:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20108)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AFE580;
      }
      goto L_08AFE560;
    }
L_08AFE560:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08AFE574;
      }
      goto L_08AFE568;
    }
L_08AFE568:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20108), aot_gpr_4);
      if (branch_taken) {
          goto L_08AFE580;
      }
      goto L_08AFE574;
    }
L_08AFE574:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(20104), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08AFE580;
L_08AFE580:
    aot_gpr_31 = (0x08AFE588u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 498u, 0x08AFE588u, 0x08AAF6A0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 752u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 752u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 752u, 0x08AAF6A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE588u) goto L_08AFE588;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE588:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08AFE5AC;
      }
      goto L_08AFE590;
    }
L_08AFE590:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x08AFE59Cu);
    ctx.gpr[16] = (0u | 640u);
    ctx.pc = 0x08B731BCu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE59C:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[16];
      if (branch_taken) {
          goto L_08AFE5AC;
      }
      goto L_08AFE5A4;
    }
L_08AFE5A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFE7BC;
      }
      goto L_08AFE5AC;
    }
L_08AFE5AC:
    aot_gpr_31 = (0x08AFE5B4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 503u, 0x08AFE5B4u, 0x08AAF5CCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 738u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 738u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 738u, 0x08AAF5CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE5B4u) goto L_08AFE5B4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE5B4:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08AFE5C4;
      }
      goto L_08AFE5BC;
    }
L_08AFE5BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFE874;
      }
      goto L_08AFE5C4;
    }
L_08AFE5C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08AFE678;
      }
      goto L_08AFE5D0;
    }
L_08AFE5D0:
    aot_gpr_31 = (0x08AFE5D8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 507u, 0x08AFE5D8u, 0x088E1B3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 41u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 41u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 41u, 0x088E1B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE5D8u) goto L_08AFE5D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE5D8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_08AFE678;
      }
      goto L_08AFE5E0;
    }
L_08AFE5E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AFE5F4u);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.pc = 0x08B731E4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE5F4:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFE658;
      }
      goto L_08AFE5FC;
    }
L_08AFE5FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08AFE608u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 511u, 0x08AFE608u, 0x088E1A20u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 29u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 29u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 29u, 0x088E1A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE608u) goto L_08AFE608;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE608:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AFE61Cu);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B7319Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE61C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AFE630;
      }
      goto L_08AFE628;
    }
L_08AFE628:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE874;
      }
      goto L_08AFE630;
    }
L_08AFE630:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08AFE640u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 515u, 0x08AFE640u, 0x088E1A7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 34u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 34u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 34u, 0x088E1A7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE640u) goto L_08AFE640;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE640:
    { const bool branch_taken = ctx.gpr[23] != 0u;
      if (branch_taken) {
          goto L_08AFE650;
      }
      goto L_08AFE648;
    }
L_08AFE648:
    aot_gpr_31 = (0x08AFE650u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 517u, 0x08AFE650u, 0x088E1ACCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 38u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 38u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 38u, 0x088E1ACCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE650u) goto L_08AFE650;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFE690;
      }
      goto L_08AFE658;
    }
L_08AFE658:
    aot_gpr_31 = (0x08AFE660u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 519u, 0x08AFE660u, 0x08AAF6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 753u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 753u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE660u) goto L_08AFE660;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE660:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFE690;
      }
      goto L_08AFE668;
    }
L_08AFE668:
    aot_gpr_31 = (0x08AFE670u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 521u, 0x08AFE670u, 0x08AAF5F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 741u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 741u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 741u, 0x08AAF5F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE670u) goto L_08AFE670;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE670:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE690;
      }
      goto L_08AFE678;
    }
L_08AFE678:
    aot_gpr_31 = (0x08AFE680u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 523u, 0x08AFE680u, 0x08AAF6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 753u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 753u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE680u) goto L_08AFE680;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE680:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFE690;
      }
      goto L_08AFE688;
    }
L_08AFE688:
    aot_gpr_31 = (0x08AFE690u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 525u, 0x08AFE690u, 0x08AAF5F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 741u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 741u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 741u, 0x08AAF5F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE690u) goto L_08AFE690;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE690:
    aot_gpr_31 = (0x08AFE698u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 526u, 0x08AFE698u, 0x08A19F84u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 248u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 248u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 248u, 0x08A19F84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE698u) goto L_08AFE698;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE698:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_08AFE77C;
      }
      goto L_08AFE6A0;
    }
L_08AFE6A0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08AFE6B4u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.pc = 0x08B731F4u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE6B4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFE744;
      }
      goto L_08AFE6C0;
    }
L_08AFE6C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AFE6CCu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 530u, 0x08AFE6CCu, 0x08A19E38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 238u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 238u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 238u, 0x08A19E38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE6CCu) goto L_08AFE6CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE6CC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_6 = (0u | 512u);
    aot_gpr_31 = (0x08AFE6ECu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B7313Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE6EC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AFE700;
      }
      goto L_08AFE6F8;
    }
L_08AFE6F8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE874;
      }
      goto L_08AFE700;
    }
L_08AFE700:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AFE710u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 534u, 0x08AFE710u, 0x08A1161Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 185u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 185u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 185u, 0x08A1161Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE710u) goto L_08AFE710;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE710:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[20];
      if (branch_taken) {
          goto L_08AFE794;
      }
      goto L_08AFE71C;
    }
L_08AFE71C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AFE728u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 536u, 0x08AFE728u, 0x08A11668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 188u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 188u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 188u, 0x08A11668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE728u) goto L_08AFE728;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE728:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AFE734u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 537u, 0x08AFE734u, 0x08A19EA0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 243u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 243u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 243u, 0x08A19EA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE734u) goto L_08AFE734;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE734:
    aot_gpr_31 = (0x08AFE73Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 538u, 0x08AFE73Cu, 0x08A19EFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 245u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 245u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 245u, 0x08A19EFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE73Cu) goto L_08AFE73C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE73C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE794;
      }
      goto L_08AFE744;
    }
L_08AFE744:
    aot_gpr_5 = (32866u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-32767));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AFE75C;
      }
      goto L_08AFE754;
    }
L_08AFE754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFE874;
      }
      goto L_08AFE75C;
    }
L_08AFE75C:
    aot_gpr_31 = (0x08AFE764u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 542u, 0x08AFE764u, 0x08AAF6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 753u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 753u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE764u) goto L_08AFE764;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE764:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFE794;
      }
      goto L_08AFE76C;
    }
L_08AFE76C:
    aot_gpr_31 = (0x08AFE774u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 544u, 0x08AFE774u, 0x08AAF5F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 741u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 741u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 741u, 0x08AAF5F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE774u) goto L_08AFE774;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE774:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE794;
      }
      goto L_08AFE77C;
    }
L_08AFE77C:
    aot_gpr_31 = (0x08AFE784u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 546u, 0x08AFE784u, 0x08AAF6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 753u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 753u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE784u) goto L_08AFE784;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE784:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFE794;
      }
      goto L_08AFE78C;
    }
L_08AFE78C:
    aot_gpr_31 = (0x08AFE794u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 548u, 0x08AFE794u, 0x08AAF5F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 741u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 741u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 741u, 0x08AAF5F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE794u) goto L_08AFE794;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE794:
    aot_gpr_31 = (0x08AFE79Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 549u, 0x08AFE79Cu, 0x08AAF6B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 753u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 753u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 753u, 0x08AAF6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE79Cu) goto L_08AFE79C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE79C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFE7AC;
      }
      goto L_08AFE7A4;
    }
L_08AFE7A4:
    aot_gpr_31 = (0x08AFE7ACu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 551u, 0x08AFE7ACu, 0x08AAF5F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 741u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 741u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 741u, 0x08AAF5F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE7ACu) goto L_08AFE7AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE7AC:
    aot_gpr_31 = (0x08AFE7B4u);
    ctx.pc = 0x08B7348Cu;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE7B4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE4EC;
      }
      goto L_08AFE7BC;
    }
L_08AFE7BC:
    aot_gpr_31 = (0x08AFE7C4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 554u, 0x08AFE7C4u, 0x08A115C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 180u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 180u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 180u, 0x08A115C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE7C4u) goto L_08AFE7C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE7C4:
    aot_gpr_31 = (0x08AFE7CCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 555u, 0x08AFE7CCu, 0x08AAF6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 758u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 758u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 758u, 0x08AAF6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE7CCu) goto L_08AFE7CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE7CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE7E0;
      }
      goto L_08AFE7D8;
    }
L_08AFE7D8:
    aot_gpr_31 = (0x08AFE7E0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 557u, 0x08AFE7E0u, 0x088E1B60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 43u, 0x088E1B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE7E0u) goto L_08AFE7E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE7E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AFE7E4;
L_08AFE7E4:
    aot_gpr_31 = (0x08AFE7ECu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 559u, 0x08AFE7ECu, 0x08A19E38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 238u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 238u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 238u, 0x08A19E38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE7ECu) goto L_08AFE7EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE7EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_2) <= 0;
      if (branch_taken) {
          goto L_08AFE864;
      }
      goto L_08AFE7F4;
    }
L_08AFE7F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (0u | 512u);
    aot_gpr_31 = (0x08AFE810u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B73194u;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFE810:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE824;
      }
      goto L_08AFE81C;
    }
L_08AFE81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AFE874;
      }
      goto L_08AFE824;
    }
L_08AFE824:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08AFE850;
      }
      goto L_08AFE830;
    }
L_08AFE830:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AFE83Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 565u, 0x08AFE83Cu, 0x08A11668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 188u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 188u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 188u, 0x08A11668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE83Cu) goto L_08AFE83C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE83C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AFE848u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 566u, 0x08AFE848u, 0x08A19EA0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 243u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 243u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 243u, 0x08A19EA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE848u) goto L_08AFE848;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE848:
    aot_gpr_31 = (0x08AFE850u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 567u, 0x08AFE850u, 0x08A19EFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 245u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 245u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 245u, 0x08A19EFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE850u) goto L_08AFE850;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE850:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AFE85Cu);
    aot_gpr_5 = (0u | 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 568u, 0x08AFE85Cu, 0x08A19FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 252u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 252u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 252u, 0x08A19FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE85Cu) goto L_08AFE85C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE85C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFE89C;
      }
      goto L_08AFE864;
    }
L_08AFE864:
    aot_gpr_31 = (0x08AFE86Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 570u, 0x08AFE86Cu, 0x08A1A1F8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 288u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 288u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 288u, 0x08A1A1F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE86Cu) goto L_08AFE86C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE86C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE7E4;
      }
      goto L_08AFE874;
    }
L_08AFE874:
    aot_gpr_31 = (0x08AFE87Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 572u, 0x08AFE87Cu, 0x08AAF6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 758u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 758u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 758u, 0x08AAF6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE87Cu) goto L_08AFE87C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE87C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFE890;
      }
      goto L_08AFE888;
    }
L_08AFE888:
    aot_gpr_31 = (0x08AFE890u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0055.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 574u, 0x08AFE890u, 0x088E1B60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0055_entry(rt, ctx, 43u, aot_mem);
#else
        recomp_unit_0055_entry(rt, ctx, 43u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 43u, 0x088E1B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE890u) goto L_08AFE890;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE890:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08AFE89Cu);
    aot_gpr_5 = (0u | 255u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 575u, 0x08AFE89Cu, 0x08A19FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 252u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 252u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 252u, 0x08A19FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFE89Cu) goto L_08AFE89C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFE89C:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE8D0:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE8E8:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 7u, 3u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE908:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 4u, 8u, 3u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE928:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE950:
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE96C:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE980:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE998:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE9B0:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE9CC:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFE9E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFEA08;
      }
      goto L_08AFEA00;
    }
L_08AFEA00:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFEA08;
      }
      goto L_08AFEA08;
    }
L_08AFEA08:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEA10:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFEA30;
      }
      goto L_08AFEA28;
    }
L_08AFEA28:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFEA30;
      }
      goto L_08AFEA30;
    }
L_08AFEA30:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEA38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFEA80;
      }
      goto L_08AFEA58;
    }
L_08AFEA58:
    aot_gpr_5 = (0u | 48u);
    aot_gpr_31 = (0x08AFEA64u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 594u, 0x08AFEA64u, 0x08A360ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 510u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 510u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 510u, 0x08A360ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEA64u) goto L_08AFEA64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFEA64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(160));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08AFEA80u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEA80u) goto L_08AFEA80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFEA80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFEAFC;
      }
      goto L_08AFEA94;
    }
L_08AFEA94:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFEAA0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFEAA0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFEAE8;
      }
      goto L_08AFEAA8;
    }
L_08AFEAA8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFEAB4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFEAB4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 48u);
    aot_gpr_31 = (0x08AFEAC4u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 600u, 0x08AFEAC4u, 0x08A360ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 510u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 510u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 510u, 0x08A360ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEAC4u) goto L_08AFEAC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFEAC4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFEAD0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFEAD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AFEAE8u);
    aot_gpr_4 = (aot_gpr_2 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEAE8u) goto L_08AFEAE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFEAE8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFEA94;
      }
      goto L_08AFEAFC;
    }
L_08AFEAFC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFEB08u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 604u, 0x08AFEB08u, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEB08u) goto L_08AFEB08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFEB08:
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_08AFEB2C;
      }
      goto L_08AFEB10;
    }
L_08AFEB10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08AFEB2Cu);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEB2Cu) goto L_08AFEB2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFEB2C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEB40:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEB48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AFEB5Cu);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08AFEBA4;
L_08AFEB5C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFEB7C;
      }
      goto L_08AFEB64;
    }
L_08AFEB64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    aot_gpr_6 = (0u | 5u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFEB8C;
      }
      goto L_08AFEB74;
    }
L_08AFEB74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_08AFEB84;
      }
      goto L_08AFEB7C;
    }
L_08AFEB7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFEB94;
      }
      goto L_08AFEB84;
    }
L_08AFEB84:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AFEB90;
      }
      goto L_08AFEB8C;
    }
L_08AFEB8C:
    aot_gpr_4 = (0u | 1u);
    goto L_08AFEB90;
L_08AFEB90:
    aot_gpr_2 = (aot_gpr_4 & 255u);
    goto L_08AFEB94;
L_08AFEB94:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEBA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFEBBC;
      }
      goto L_08AFEBB4;
    }
L_08AFEBB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFEBD8;
      }
      goto L_08AFEBBC;
    }
L_08AFEBBC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AFEBC8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 489u, 0x08B727ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEBC8u) goto L_08AFEBC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFEBC8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 0 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 ^ 1u);
    aot_gpr_2 = (static_cast<std::int32_t>(aot_gpr_2) < 41 ? 1u : 0u);
    aot_gpr_2 = (aot_gpr_4 & aot_gpr_2);
    goto L_08AFEBD8;
L_08AFEBD8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEBE4:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEBF0:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEC14:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEC38:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 23u>();
    ctx.execute_vfpu_vec3_ct<0u, 64u, 32u, 1u, 2u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEC60:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 23u>();
    ctx.execute_vfpu_vec3_ct<0u, 64u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<64u, 32u, 0u, 1u, 1u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEC8C:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_5);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFECB8:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFECC4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08AFECD8;
    }
    goto L_08AFECD8;
L_08AFECD8:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFECE0:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08AFECF4;
    }
    goto L_08AFECF4;
L_08AFECF4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFECFC:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFED10:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFED20:
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
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFED48:
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
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFED64:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFED74:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_5);
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
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFED90:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFED98:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEDA0:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEDA8:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEDB0:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEDB8:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = aot_fpr_15 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFEE00;
      }
      goto L_08AFEDEC;
    }
L_08AFEDEC:
    aot_fpr_12 = aot_fpr_15 / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFEE1C;
      }
      goto L_08AFEE00;
    }
L_08AFEE00:
    aot_fpr_14 = aot_fpr_15 / aot_fpr_14;
    aot_gpr_2 = (32768u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_2 = (aot_gpr_4 + aot_gpr_2);
    goto L_08AFEE1C;
L_08AFEE1C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEE24:
    jump_target = aot_gpr_31;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEE2C:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEE34:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(320));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEE3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AFEE54u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 652u, 0x08AFEE54u, 0x08A66CD8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 600u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 600u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEE54u) goto L_08AFEE54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFEE54:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEE60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AFEE84u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 654u, 0x08AFEE84u, 0x08A66E08u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 611u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 611u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEE84u) goto L_08AFEE84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFEE84:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEE90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(128));
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEF10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(636)));
    aot_gpr_2 = (aot_gpr_4 & aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEF20:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[7]{0u, std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEF48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 1u);
      if (branch_taken) {
          goto L_08AFEF68;
      }
      goto L_08AFEF58;
    }
L_08AFEF58:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AFEF68;
      }
      goto L_08AFEF60;
    }
L_08AFEF60:
    aot_gpr_31 = (0x08AFEF68u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEF68u) goto L_08AFEF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFEF68:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEF74:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEF7C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(904));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEF90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 << 2u);
    ctx.gpr[17] = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(904)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08AFEFBC;
      }
      goto L_08AFEFB4;
    }
L_08AFEFB4:
    aot_gpr_31 = (0x08AFEFBCu);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(904));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEFBCu) goto L_08AFEFBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFEFBC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(904), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AFEFD8;
      }
      goto L_08AFEFC4;
    }
L_08AFEFC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(904)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFEFD8;
      }
      goto L_08AFEFD0;
    }
L_08AFEFD0:
    aot_gpr_31 = (0x08AFEFD8u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(904));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A92F78, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFEFD8u) goto L_08AFEFD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFEFD8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFEFEC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08AFF010u);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 671u, 0x08AFF010u, 0x08B02090u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 542u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 542u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 542u, 0x08B02090u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF010u) goto L_08AFF010;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF010:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    aot_gpr_4 = (0u | 10u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08AFF0A8;
      }
      goto L_08AFF020;
    }
L_08AFF020:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_gpr_4 = (0u | 11u);
      if (branch_taken) {
          goto L_08AFF030;
      }
      goto L_08AFF028;
    }
L_08AFF028:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AFF06C;
      }
      goto L_08AFF030;
    }
L_08AFF030:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF048;
    }
    goto L_08AFF038;
L_08AFF038:
    aot_gpr_31 = (0x08AFF040u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF040u) goto L_08AFF040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF040:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF048;
L_08AFF048:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AFF058u);
    ctx.gpr[7] = (0u | 78u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 678u, 0x08AFF058u, 0x0893E914u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 635u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 635u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF058u) goto L_08AFF058;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF058:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF064u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF064u) goto L_08AFF064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF064:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF06C;
    }
L_08AFF06C:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF084;
    }
    goto L_08AFF074;
L_08AFF074:
    aot_gpr_31 = (0x08AFF07Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF07Cu) goto L_08AFF07C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF07C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF084;
L_08AFF084:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AFF094u);
    ctx.gpr[7] = (0u | 79u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 684u, 0x08AFF094u, 0x0893E914u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 635u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 635u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF094u) goto L_08AFF094;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF094:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF0A0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF0A0u) goto L_08AFF0A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF0A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF0A8;
    }
L_08AFF0A8:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
    aot_gpr_4 = (0u | 2u);
      if (branch_taken) {
          goto L_08AFF0C4;
      }
      goto L_08AFF0B8;
    }
L_08AFF0B8:
    ctx.gpr[7] = (0u | 11u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08AFF1AC;
      }
      goto L_08AFF0C4;
    }
L_08AFF0C4:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AFF124;
      }
      goto L_08AFF0CC;
    }
L_08AFF0CC:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
        goto L_08AFF0E4;
    }
    goto L_08AFF0D4;
L_08AFF0D4:
    aot_gpr_31 = (0x08AFF0DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF0DCu) goto L_08AFF0DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF0DC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_08AFF0E4;
L_08AFF0E4:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(376));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AFF0FCu);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF0FCu) goto L_08AFF0FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF0FC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AFF110u);
    ctx.gpr[7] = (0u | 208u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 694u, 0x08AFF110u, 0x0893E914u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 635u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 635u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF110u) goto L_08AFF110;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF110:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF11Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF11Cu) goto L_08AFF11C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF11C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF124;
    }
L_08AFF124:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF170;
      }
      goto L_08AFF134;
    }
L_08AFF134:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF14C;
    }
    goto L_08AFF13C;
L_08AFF13C:
    aot_gpr_31 = (0x08AFF144u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF144u) goto L_08AFF144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF144:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF14C;
L_08AFF14C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AFF15Cu);
    ctx.gpr[7] = (0u | 72u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 701u, 0x08AFF15Cu, 0x0893E914u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 635u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 635u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF15Cu) goto L_08AFF15C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF15C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF168u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF168u) goto L_08AFF168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF168:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF170;
    }
L_08AFF170:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF188;
    }
    goto L_08AFF178;
L_08AFF178:
    aot_gpr_31 = (0x08AFF180u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF180u) goto L_08AFF180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF180:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF188;
L_08AFF188:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AFF198u);
    ctx.gpr[7] = (0u | 71u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 707u, 0x08AFF198u, 0x0893E914u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 635u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 635u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF198u) goto L_08AFF198;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF198:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF1A4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF1A4u) goto L_08AFF1A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF1A4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF1AC;
    }
L_08AFF1AC:
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
      if (branch_taken) {
          goto L_08AFF20C;
      }
      goto L_08AFF1B4;
    }
L_08AFF1B4:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
        goto L_08AFF1CC;
    }
    goto L_08AFF1BC;
L_08AFF1BC:
    aot_gpr_31 = (0x08AFF1C4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF1C4u) goto L_08AFF1C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF1C4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_08AFF1CC;
L_08AFF1CC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(376));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AFF1E4u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF1E4u) goto L_08AFF1E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF1E4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08AFF1F8u);
    ctx.gpr[7] = (0u | 209u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 715u, 0x08AFF1F8u, 0x0893E914u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 635u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 635u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF1F8u) goto L_08AFF1F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF1F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF204u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF204u) goto L_08AFF204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF204:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF20C;
    }
L_08AFF20C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF258;
      }
      goto L_08AFF21C;
    }
L_08AFF21C:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF234;
    }
    goto L_08AFF224;
L_08AFF224:
    aot_gpr_31 = (0x08AFF22Cu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF22Cu) goto L_08AFF22C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF22C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF234;
L_08AFF234:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AFF244u);
    ctx.gpr[7] = (0u | 92u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 722u, 0x08AFF244u, 0x0893E914u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 635u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 635u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF244u) goto L_08AFF244;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF244:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF250u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF250u) goto L_08AFF250;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF250:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF28C;
      }
      goto L_08AFF258;
    }
L_08AFF258:
    if (ctx.gpr[18] != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AFF270;
    }
    goto L_08AFF260;
L_08AFF260:
    aot_gpr_31 = (0x08AFF268u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF268u) goto L_08AFF268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF268:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08AFF270;
L_08AFF270:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08AFF280u);
    ctx.gpr[7] = (0u | 91u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 728u, 0x08AFF280u, 0x0893E914u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 635u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 635u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF280u) goto L_08AFF280;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF280:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF28Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F694, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF28Cu) goto L_08AFF28C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF28C:
    aot_gpr_31 = (0x08AFF294u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890F6B4, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF294u) goto L_08AFF294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF294:
    aot_gpr_5 = (2203u << 16u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF2A8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(13856));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_088905F0, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF2A8u) goto L_08AFF2A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF2A8:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF2C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AFF2D4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 478u, 0x08B726E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF2D4u) goto L_08AFF2D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF2D4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF2E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08AFF2F4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 486u, 0x08B727A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF2F4u) goto L_08AFF2F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF2F4:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF300:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AFF49C;
      }
      goto L_08AFF320;
    }
L_08AFF320:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-32232));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(558), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
      if (branch_taken) {
          goto L_08AFF350;
      }
      goto L_08AFF33C;
    }
L_08AFF33C:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AFF348u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 739u, 0x08AFF348u, 0x08A05F3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 499u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 499u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 499u, 0x08A05F3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF348u) goto L_08AFF348;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF348:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), aot_gpr_4);
    goto L_08AFF350;
L_08AFF350:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
        goto L_08AFF368;
    }
    goto L_08AFF35C;
L_08AFF35C:
    aot_gpr_31 = (0x08AFF364u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF364u) goto L_08AFF364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF364:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    goto L_08AFF368;
L_08AFF368:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_gpr_31 = (0x08AFF374u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0218.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 744u, 0x08AFF374u, 0x08B6CC28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0218_entry(rt, ctx, 139u, aot_mem);
#else
        recomp_unit_0218_entry(rt, ctx, 139u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF374u) goto L_08AFF374;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF374:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08AFF384u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0002.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 745u, 0x08AFF384u, 0x0880DD60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0002_entry(rt, ctx, 422u, aot_mem);
#else
        recomp_unit_0002_entry(rt, ctx, 422u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 422u, 0x0880DD60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF384u) goto L_08AFF384;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF384:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(716)));
      if (branch_taken) {
          goto L_08AFF3AC;
      }
      goto L_08AFF398;
    }
L_08AFF398:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    goto L_08AFF39C;
L_08AFF39C:
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFF39C;
      }
      goto L_08AFF3AC;
    }
L_08AFF3AC:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08AFF3BC;
      }
      goto L_08AFF3B4;
    }
L_08AFF3B4:
    aot_gpr_31 = (0x08AFF3BCu);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF3BCu) goto L_08AFF3BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF3BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF3D0;
      }
      goto L_08AFF3C8;
    }
L_08AFF3C8:
    aot_gpr_31 = (0x08AFF3D0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF3D0u) goto L_08AFF3D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF3D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF3E4;
      }
      goto L_08AFF3DC;
    }
L_08AFF3DC:
    aot_gpr_31 = (0x08AFF3E4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF3E4u) goto L_08AFF3E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF3E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF3F8;
      }
      goto L_08AFF3F0;
    }
L_08AFF3F0:
    aot_gpr_31 = (0x08AFF3F8u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0114.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 756u, 0x08AFF3F8u, 0x089CF934u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0114_entry(rt, ctx, 649u, aot_mem);
#else
        recomp_unit_0114_entry(rt, ctx, 649u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF3F8u) goto L_08AFF3F8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF3F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF404u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0207.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 757u, 0x08AFF404u, 0x08B41BC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0207_entry(rt, ctx, 407u, aot_mem);
#else
        recomp_unit_0207_entry(rt, ctx, 407u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 407u, 0x08B41BC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF404u) goto L_08AFF404;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF404:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF430;
      }
      goto L_08AFF414;
    }
L_08AFF414:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5452), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AFF430;
L_08AFF430:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF45C;
      }
      goto L_08AFF440;
    }
L_08AFF440:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5456), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08AFF45C;
L_08AFF45C:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF480;
      }
      goto L_08AFF468;
    }
L_08AFF468:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(440)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[16] | 0u);
        goto L_08AFF480;
    }
    goto L_08AFF474;
L_08AFF474:
    aot_gpr_31 = (0x08AFF47Cu);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(440));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A93004, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF47Cu) goto L_08AFF47C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFF47C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AFF480;
L_08AFF480:
    aot_gpr_31 = (0x08AFF488u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0152.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 766u, 0x08AFF488u, 0x08A66220u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0152_entry(rt, ctx, 501u, aot_mem);
#else
        recomp_unit_0152_entry(rt, ctx, 501u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 501u, 0x08A66220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF488u) goto L_08AFF488;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF488:
    aot_gpr_4 = (ctx.gpr[17] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF49C;
      }
      goto L_08AFF494;
    }
L_08AFF494:
    aot_gpr_31 = (0x08AFF49Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08AFF2E0;
L_08AFF49C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08AFF4B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08AFF4D0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0178.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 770u, 0x08AFF4D0u, 0x08ACFA70u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0178_entry(rt, ctx, 1055u, aot_mem);
#else
        recomp_unit_0178_entry(rt, ctx, 1055u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 1055u, 0x08ACFA70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF4D0u) goto L_08AFF4D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF4D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(556), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(5))))));
    aot_gpr_31 = (0x08AFF4F0u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(557), static_cast<std::uint8_t>(aot_gpr_5));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0167.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 771u, 0x08AFF4F0u, 0x08AA22DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0167_entry(rt, ctx, 514u, aot_mem);
#else
        recomp_unit_0167_entry(rt, ctx, 514u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 514u, 0x08AA22DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF4F0u) goto L_08AFF4F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF4F0:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(565), static_cast<std::uint8_t>(aot_gpr_2));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF508:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(562)));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AFF558;
      }
      goto L_08AFF530;
    }
L_08AFF530:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(564)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFF550;
      }
      goto L_08AFF53C;
    }
L_08AFF53C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2276)));
        goto L_08AFF560;
    }
    goto L_08AFF548;
L_08AFF548:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF58C;
      }
      goto L_08AFF550;
    }
L_08AFF550:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF558;
    }
L_08AFF558:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF560;
    }
L_08AFF560:
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
      if (branch_taken) {
          goto L_08AFF5A8;
      }
      goto L_08AFF56C;
    }
L_08AFF56C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 55u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
      if (branch_taken) {
          goto L_08AFF58C;
      }
      goto L_08AFF57C;
    }
L_08AFF57C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFF5A8;
      }
      goto L_08AFF58C;
    }
L_08AFF58C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_08AFF5B0;
      }
      goto L_08AFF5A0;
    }
L_08AFF5A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF68C;
      }
      goto L_08AFF5A8;
    }
L_08AFF5A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF5B0;
    }
L_08AFF5B0:
    ctx.gpr[19] = (0u | 55u);
    ctx.gpr[18] = (0u | 58u);
    goto L_08AFF5B8;
L_08AFF5B8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF5C4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF5C4:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF610;
      }
      goto L_08AFF5CC;
    }
L_08AFF5CC:
    aot_gpr_31 = (0x08AFF5D4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF5D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[20];
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF62C;
      }
      goto L_08AFF5E0;
    }
L_08AFF5E0:
    aot_gpr_31 = (0x08AFF5E8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF5E8:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF610;
      }
      goto L_08AFF5F8;
    }
L_08AFF5F8:
    aot_gpr_31 = (0x08AFF600u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF600:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08AFF62C;
      }
      goto L_08AFF610;
    }
L_08AFF610:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFF61Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF61C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF634;
      }
      goto L_08AFF624;
    }
L_08AFF624:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF664;
      }
      goto L_08AFF62C;
    }
L_08AFF62C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF634;
    }
L_08AFF634:
    aot_gpr_31 = (0x08AFF63Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF63C:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AFF664;
      }
      goto L_08AFF64C;
    }
L_08AFF64C:
    aot_gpr_31 = (0x08AFF654u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFF654:
    aot_gpr_4 = (aot_gpr_2 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_08AFF684;
      }
      goto L_08AFF664;
    }
L_08AFF664:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFF5B8;
      }
      goto L_08AFF67C;
    }
L_08AFF67C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF68C;
      }
      goto L_08AFF684;
    }
L_08AFF684:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF68C;
    }
L_08AFF68C:
    ctx.gpr[16] = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    aot_gpr_4 = (ctx.gpr[16] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF6D4;
      }
      goto L_08AFF69C;
    }
L_08AFF69C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFF6D4;
      }
      goto L_08AFF6A4;
    }
L_08AFF6A4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AFF6C4;
      }
      goto L_08AFF6AC;
    }
L_08AFF6AC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFF6CC;
      }
      goto L_08AFF6B4;
    }
L_08AFF6B4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
      if (branch_taken) {
          goto L_08AFF6CC;
      }
      goto L_08AFF6BC;
    }
L_08AFF6BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF6C4;
    }
L_08AFF6C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF6CC;
    }
L_08AFF6CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF6D4;
    }
L_08AFF6D4:
    aot_gpr_2 = (0u | 1u);
    goto L_08AFF6D8;
L_08AFF6D8:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF6F8:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF700:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF708:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF710:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF718:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF720:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF728:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF730:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[21] = (aot_gpr_6 & 255u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AFF790;
      }
      goto L_08AFF768;
    }
L_08AFF768:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u != 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08AFF798;
      }
      goto L_08AFF788;
    }
L_08AFF788:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AFF7B4;
      }
      goto L_08AFF790;
    }
L_08AFF790:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF8EC;
      }
      goto L_08AFF798;
    }
L_08AFF798:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AFF7B4;
      }
      goto L_08AFF7A8;
    }
L_08AFF7A8:
    aot_gpr_31 = (0x08AFF7B0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0117.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 827u, 0x08AFF7B0u, 0x089D89E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0117_entry(rt, ctx, 129u, aot_mem);
#else
        recomp_unit_0117_entry(rt, ctx, 129u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF7B0u) goto L_08AFF7B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF7B0:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08AFF7B4;
L_08AFF7B4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x08AFF7CCu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 829u, 0x08AFF7CCu, 0x0885FF48u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 939u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 939u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF7CCu) goto L_08AFF7CC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF7CC:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = ctx.gpr[21] == 0u;
      if (branch_taken) {
          goto L_08AFF838;
      }
      goto L_08AFF7E0;
    }
L_08AFF7E0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
      if (branch_taken) {
          goto L_08AFF7FC;
      }
      goto L_08AFF7E8;
    }
L_08AFF7E8:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AFF7F4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 832u, 0x08AFF7F4u, 0x0885FA00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 921u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 921u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF7F4u) goto L_08AFF7F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF7F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF7FC;
    }
L_08AFF7FC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AFF81C;
      }
      goto L_08AFF808;
    }
L_08AFF808:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AFF814u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 835u, 0x08AFF814u, 0x0885F9D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 919u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 919u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF814u) goto L_08AFF814;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF814:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF81C;
    }
L_08AFF81C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF824;
    }
L_08AFF824:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AFF830u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 838u, 0x08AFF830u, 0x0885F9B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 917u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 917u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF830u) goto L_08AFF830;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF830:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF838;
    }
L_08AFF838:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 3u, 2u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08AFF85Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 840u, 0x08AFF85Cu, 0x08860094u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF85Cu) goto L_08AFF85C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF85C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
      if (branch_taken) {
          goto L_08AFF878;
      }
      goto L_08AFF864;
    }
L_08AFF864:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AFF870u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 842u, 0x08AFF870u, 0x0885FD1Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 926u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 926u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF870u) goto L_08AFF870;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF870:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF878;
    }
L_08AFF878:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
      if (branch_taken) {
          goto L_08AFF898;
      }
      goto L_08AFF884;
    }
L_08AFF884:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AFF890u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 845u, 0x08AFF890u, 0x0885FC3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 925u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 925u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF890u) goto L_08AFF890;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF890:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF898;
    }
L_08AFF898:
    { const bool branch_taken = ctx.gpr[16] != 0u;
      if (branch_taken) {
          goto L_08AFF8AC;
      }
      goto L_08AFF8A0;
    }
L_08AFF8A0:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08AFF8ACu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 848u, 0x08AFF8ACu, 0x0885FB5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 924u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 924u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 924u, 0x0885FB5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF8ACu) goto L_08AFF8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF8AC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08AFF8C0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 849u, 0x08AFF8C0u, 0x08860094u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF8C0u) goto L_08AFF8C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF8C0:
    aot_gpr_31 = (0x08AFF8C8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 850u, 0x08AFF8C8u, 0x0885FF14u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 936u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 936u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF8C8u) goto L_08AFF8C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF8C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF8EC;
      }
      goto L_08AFF8D8;
    }
L_08AFF8D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFF8EC;
      }
      goto L_08AFF8E4;
    }
L_08AFF8E4:
    aot_gpr_31 = (0x08AFF8ECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0117.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 853u, 0x08AFF8ECu, 0x089D89E0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0117_entry(rt, ctx, 129u, aot_mem);
#else
        recomp_unit_0117_entry(rt, ctx, 129u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFF8ECu) goto L_08AFF8EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFF8EC:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF914:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF91C:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF924:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF92C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF934:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF93C:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF944:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF94C:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFF954:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (16448u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_6);
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
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), 0u);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, ctx.gpr[17], ctx.gpr[17], 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08AFFA1Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0036.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 863u, 0x08AFFA1Cu, 0x0889786Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0036_entry(rt, ctx, 698u, aot_mem);
#else
        recomp_unit_0036_entry(rt, ctx, 698u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFA1Cu) goto L_08AFFA1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFA1C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFFA38;
      }
      goto L_08AFFA24;
    }
L_08AFFA24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
      if (branch_taken) {
          goto L_08AFFA38;
      }
      goto L_08AFFA30;
    }
L_08AFFA30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFFA3C;
      }
      goto L_08AFFA38;
    }
L_08AFFA38:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    goto L_08AFFA3C;
L_08AFFA3C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFA50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08AFFA68u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 869u, 0x08AFFA68u, 0x0894530Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 191u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 191u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 191u, 0x0894530Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFA68u) goto L_08AFFA68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFA68:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08AFFA8C;
      }
      goto L_08AFFA78;
    }
L_08AFFA78:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08AFFAAC;
      }
      goto L_08AFFA84;
    }
L_08AFFA84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFFAAC;
      }
      goto L_08AFFA8C;
    }
L_08AFFA8C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 255 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08AFFAAC;
      }
      goto L_08AFFA98;
    }
L_08AFFA98:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AFFAAC;
      }
      goto L_08AFFAA8;
    }
L_08AFFAA8:
    aot_gpr_4 = (0u | 255u);
    goto L_08AFFAAC;
L_08AFFAAC:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08AFFAB8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0080.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 876u, 0x08AFFAB8u, 0x08945304u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0080_entry(rt, ctx, 190u, aot_mem);
#else
        recomp_unit_0080_entry(rt, ctx, 190u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFAB8u) goto L_08AFFAB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFAB8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFAC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08AFFBF0;
      }
      goto L_08AFFAF8;
    }
L_08AFFAF8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 44u);
    aot_gpr_31 = (0x08AFFB08u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 879u, 0x08AFFB08u, 0x08A360ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 510u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 510u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 510u, 0x08A360ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFB08u) goto L_08AFFB08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFB08:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08AFFB60;
      }
      goto L_08AFFB14;
    }
L_08AFFB14:
    aot_gpr_31 = (0x08AFFB1Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFB1Cu) goto L_08AFFB1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFFB1C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08AFFB60;
      }
      goto L_08AFFB24;
    }
L_08AFFB24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 38u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(2228));
      if (branch_taken) {
          goto L_08AFFB60;
      }
      goto L_08AFFB34;
    }
L_08AFFB34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 63u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08AFFB60;
      }
      goto L_08AFFB44;
    }
L_08AFFB44:
    aot_gpr_31 = (0x08AFFB4Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0059.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 885u, 0x08AFFB4Cu, 0x088F3BA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0059_entry(rt, ctx, 744u, aot_mem);
#else
        recomp_unit_0059_entry(rt, ctx, 744u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 744u, 0x088F3BA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFB4Cu) goto L_08AFFB4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFB4C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFFB5Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 886u, 0x08AFFB5Cu, 0x08ADC8D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 173u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 173u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFB5Cu) goto L_08AFFB5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFB5C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    goto L_08AFFB60;
L_08AFFB60:
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08AFFBF0;
      }
      goto L_08AFFB68;
    }
L_08AFFB68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08AFFBD4;
      }
      goto L_08AFFB78;
    }
L_08AFFB78:
    aot_gpr_31 = (0x08AFFB80u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFB80u) goto L_08AFFB80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFFB80:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFFBA8;
      }
      goto L_08AFFB88;
    }
L_08AFFB88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AFFBA0u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFBA0u) goto L_08AFFBA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFFBA0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFFBC4;
      }
      goto L_08AFFBA8;
    }
L_08AFFBA8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AFFBB4u);
    aot_gpr_5 = (0u | 57u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 894u, 0x08AFFBB4u, 0x08910CCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 222u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 222u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 222u, 0x08910CCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFBB4u) goto L_08AFFBB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFBB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), aot_gpr_4);
    goto L_08AFFBC4;
L_08AFFBC4:
    aot_gpr_31 = (0x08AFFBCCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 896u, 0x08AFFBCCu, 0x0890B608u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 854u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 854u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFBCCu) goto L_08AFFBCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFBCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFFBF0;
      }
      goto L_08AFFBD4;
    }
L_08AFFBD4:
    ctx.gpr[7] = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08AFFBF0u);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0070.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 898u, 0x08AFFBF0u, 0x0891F338u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0070_entry(rt, ctx, 653u, aot_mem);
#else
        recomp_unit_0070_entry(rt, ctx, 653u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFBF0u) goto L_08AFFBF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFBF0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (2237u << 16u);
      if (branch_taken) {
          goto L_08AFFD14;
      }
      goto L_08AFFC04;
    }
L_08AFFC04:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[20] = (8u << 16u);
    goto L_08AFFC0C;
L_08AFFC0C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AFFC18u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08AFEF7C;
L_08AFFC18:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFFD00;
      }
      goto L_08AFFC20;
    }
L_08AFFC20:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AFFC70;
      }
      goto L_08AFFC2C;
    }
L_08AFFC2C:
    aot_gpr_31 = (0x08AFFC34u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08AFEF7C;
L_08AFFC34:
    aot_gpr_31 = (0x08AFFC3Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFC3Cu) goto L_08AFFC3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFFC3C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AFFC70;
      }
      goto L_08AFFC44;
    }
L_08AFFC44:
    aot_gpr_31 = (0x08AFFC4Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08AFEF7C;
L_08AFFC4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(2228)));
    aot_gpr_4 = (aot_gpr_4 ^ 58u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFFC70;
      }
      goto L_08AFFC64;
    }
L_08AFFC64:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08AFFC70u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 909u, 0x08AFFC70u, 0x08ADC8D4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 173u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 173u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFC70u) goto L_08AFFC70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFC70:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AFFC7Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08AFEF7C;
L_08AFFC7C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 44u);
    aot_gpr_31 = (0x08AFFC8Cu);
    aot_gpr_6 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 911u, 0x08AFFC8Cu, 0x08A360ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 510u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 510u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 510u, 0x08A360ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFC8Cu) goto L_08AFFC8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFC8C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08AFFC98u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08AFEF7C;
L_08AFFC98:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
      if (branch_taken) {
          goto L_08AFFD00;
      }
      goto L_08AFFCA4;
    }
L_08AFFCA4:
    aot_gpr_31 = (0x08AFFCACu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0890D44C, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFCACu) goto L_08AFFCAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFFCAC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFFCD4;
      }
      goto L_08AFFCB4;
    }
L_08AFFCB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(160));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08AFFCCCu);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFCCCu) goto L_08AFFCCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08AFFCCC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFFCF8;
      }
      goto L_08AFFCD4;
    }
L_08AFFCD4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08AFFCE0u);
    aot_gpr_5 = (0u | 57u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 918u, 0x08AFFCE0u, 0x08910CCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 222u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 222u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 222u, 0x08910CCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFCE0u) goto L_08AFFCE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFCE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[20]);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_31 = (0x08AFFCF8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0081.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 919u, 0x08AFFCF8u, 0x08948114u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0081_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0081_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFCF8u) goto L_08AFFCF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFCF8:
    aot_gpr_31 = (0x08AFFD00u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 920u, 0x08AFFD00u, 0x0890B608u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 854u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 854u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFD00u) goto L_08AFFD00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFD00:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFFC0C;
      }
      goto L_08AFFD14;
    }
L_08AFFD14:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFD38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08AFFD98;
      }
      goto L_08AFFD60;
    }
L_08AFFD60:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08AFFD6Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    goto L_08AFEF7C;
L_08AFFD6C:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08AFFD90;
      }
      goto L_08AFFD74;
    }
L_08AFFD74:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08AFFD60;
      }
      goto L_08AFFD88;
    }
L_08AFFD88:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08AFFD98;
      }
      goto L_08AFFD90;
    }
L_08AFFD90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AFFD9C;
      }
      goto L_08AFFD98;
    }
L_08AFFD98:
    aot_gpr_2 = (0u | 0u);
    goto L_08AFFD9C;
L_08AFFD9C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFDB0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFFDD4;
      }
      goto L_08AFFDC4;
    }
L_08AFFDC4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08AFFDD4;
L_08AFFDD4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFDDC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AFFE10;
      }
      goto L_08AFFE00;
    }
L_08AFFE00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08AFFE10;
L_08AFFE10:
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(548));
    aot_gpr_31 = (0x08AFFE1Cu);
    aot_gpr_6 = (ctx.gpr[16] + static_cast<std::uint32_t>(552));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0167.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 936u, 0x08AFFE1Cu, 0x08AA1CC8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0167_entry(rt, ctx, 451u, aot_mem);
#else
        recomp_unit_0167_entry(rt, ctx, 451u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 451u, 0x08AA1CC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFE1Cu) goto L_08AFFE1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFE1C:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(896), static_cast<std::uint8_t>(aot_gpr_2));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(896))))));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(897), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFE3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[16] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08AFFE64u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 938u, 0x08AFFE64u, 0x08893460u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 519u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 519u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFE64u) goto L_08AFFE64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFE64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08AFFE80u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0189.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 939u, 0x08AFFE80u, 0x08AF8668u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0189_entry(rt, ctx, 115u, aot_mem);
#else
        recomp_unit_0189_entry(rt, ctx, 115u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFE80u) goto L_08AFFE80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFE80:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08AFFEA0;
      }
      goto L_08AFFE88;
    }
L_08AFFE88:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08AFFEA0;
      }
      goto L_08AFFE9C;
    }
L_08AFFE9C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08AFFEA0;
L_08AFFEA0:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[20];
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFEBC:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFEC4:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFECC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFEF4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08AFFEFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(666)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (16773u << 16u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 2u, 0x08B00004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AFFF18;
    }
L_08AFFF18:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_5 = (aot_gpr_5 | 21845u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_5 = (20224u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08AFFF4C;
      }
      goto L_08AFFF40;
    }
L_08AFFF40:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08AFFF60;
      }
      goto L_08AFFF4C;
    }
L_08AFFF4C:
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_5 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    goto L_08AFFF60;
L_08AFFF60:
    ctx.gpr[7] = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
      if (branch_taken) {
          goto L_08AFFF7C;
      }
      goto L_08AFFF6C;
    }
L_08AFFF6C:
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(666)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
      if (branch_taken) {
          goto L_08AFFF8C;
      }
      goto L_08AFFF7C;
    }
L_08AFFF7C:
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[16] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(666)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    goto L_08AFFF8C;
L_08AFFF8C:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08AFFFDC;
      }
      goto L_08AFFF94;
    }
L_08AFFF94:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[7] = (0u | 4u);
    aot_gpr_5 = (aot_gpr_5 & 7u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
      if (branch_taken) {
          goto L_08AFFFDC;
      }
      goto L_08AFFFA8;
    }
L_08AFFFA8:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-512));
    ctx.gpr[7] = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
      if (branch_taken) {
          goto L_08AFFFDC;
      }
      goto L_08AFFFBC;
    }
L_08AFFFBC:
    ctx.gpr[7] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_31 = (0x08AFFFD8u);
    aot_gpr_6 = (0u | 29u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0190->0128.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0190_entry, 958u, 0x08AFFFD8u, 0x08A05F80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0128_entry(rt, ctx, 503u, aot_mem);
#else
        recomp_unit_0128_entry(rt, ctx, 503u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08AFFFD8u) goto L_08AFFFD8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08AFFFD8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(666)));
    goto L_08AFFFDC;
L_08AFFFDC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 2u, 0x08B00004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08AFFFE4;
    }
L_08AFFFE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(668)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(328));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_6);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B00004u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = jump_target;
    (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }());
    AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0190(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0190_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_190(Runtime &runtime) {
    runtime.register_generated_unit(190u, 0x08AFC000u, 16384u, &recomp_unit_0190, &recomp_unit_0190_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08AFC000u, &recomp_unit_0190, "recomp_unit_0190",
                                          kEntryMasks_recomp_unit_0190, 64u);
}
} // namespace psprecomp
