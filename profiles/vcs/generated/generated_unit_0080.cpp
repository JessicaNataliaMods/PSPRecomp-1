#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0080[64] = {
    0xA080002010040021ull, 0x1400110101100200ull, 0x2000000000014400ull, 0x0200040440004000ull,
    0x0020220040010110ull, 0x0020204002022008ull, 0x00020000000000A1ull, 0x0010010002020004ull,
    0x0101000800800202ull, 0x0A02001010010040ull, 0x0902104144000800ull, 0x0220A10020908242ull,
    0x0A01000050442610ull, 0x1002009128100024ull, 0x9249249249248408ull, 0x0212804909090824ull,
    0x489108C012104A18ull, 0x204C141008404912ull, 0xA11454459144A62Aull, 0x808D45400000902Aull,
    0x0504490241100212ull, 0x42048224840081A8ull, 0x088010351540A901ull, 0x20040D4028224812ull,
    0x1545480A10241124ull, 0x0242008511221035ull, 0x0002420081500000ull, 0x504200850102A000ull,
    0x04A08020D4224902ull, 0x2248420041A84492ull, 0x892100206AA20508ull, 0x14040D5440508120ull,
    0x1010940428084A02ull, 0x004424000455504Aull, 0x1400800800080000ull, 0x0012002000200002ull,
    0x0588C44009000933ull, 0x0481008008488080ull, 0x808622254444450Aull, 0xA4800800100C9A48ull,
    0x8100445485284444ull, 0x24021A0289008344ull, 0xA92A111104421A0Aull, 0x5210088000488024ull,
    0x1494085154A095A5ull, 0x84032008012A9548ull, 0x0080048000408402ull, 0x2692488000005221ull,
    0x1001100880855150ull, 0x0240205C01215021ull, 0x8805208044012A40ull, 0xB54555500A010284ull,
    0x0B42448914A08506ull, 0x554405122A952092ull, 0x44448D055550AD55ull, 0x84540420A8084540ull,
    0x0400289494444024ull, 0xAA82001344828501ull, 0x548002A400152000ull, 0x85120010290D2600ull,
    0x4454A5504891112Aull, 0x42259488A108AA50ull, 0x0845525490A112C9ull, 0x8508964A112CA445ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0080[64] = {
    1u, 9u, 17u, 21u, 26u, 33u, 40u, 44u, 49u, 55u, 62u, 71u, 83u, 94u, 104u, 123u,
    137u, 153u, 167u, 190u, 204u, 217u, 231u, 247u, 261u, 278u, 293u, 300u, 311u, 326u, 342u, 358u,
    373u, 386u, 400u, 405u, 410u, 426u, 435u, 453u, 467u, 483u, 498u, 517u, 528u, 550u, 566u, 573u,
    587u, 600u, 614u, 627u, 647u, 666u, 687u, 712u, 727u, 741u, 758u, 770u, 785u, 806u, 826u, 847u,
};

// PSPRECOMP_V813_HOT_DENSE_DISPATCH: one indexed load on the measured hot units;
// masks remain for exact registration/correctness proof.
alignas(64) static constexpr std::uint16_t kEntryIdsV813_recomp_unit_0080[4096] = {
    1u, 0u, 0u, 0u, 0u, 2u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 3u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 4u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 5u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 6u, 0u, 0u, 0u, 0u, 0u, 7u, 0u, 8u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 9u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 10u, 0u, 0u, 0u, 11u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    12u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 13u, 0u, 0u, 0u, 14u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 15u, 0u, 16u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 17u, 0u, 0u, 0u, 18u, 0u, 19u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 20u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 21u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 22u, 0u,
    0u, 0u, 23u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 24u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 25u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 26u, 0u, 0u, 0u, 27u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 28u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 29u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 30u, 0u, 0u, 0u, 31u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 32u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 33u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 34u, 0u, 0u, 0u, 35u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 36u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 37u, 0u, 0u, 0u, 0u, 0u, 0u, 38u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 39u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    40u, 0u, 0u, 0u, 0u, 41u, 0u, 42u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 43u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 44u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 45u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 46u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 47u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 48u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 49u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 50u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 51u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 52u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 53u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 54u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 55u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 56u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 57u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 58u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 59u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 60u, 0u, 61u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 62u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 63u, 0u, 0u, 0u, 64u, 0u,
    65u, 0u, 0u, 0u, 0u, 0u, 66u, 0u, 0u, 0u, 0u, 0u, 67u, 0u, 0u, 0u, 0u, 68u, 0u, 0u, 0u, 0u, 0u, 0u, 69u, 0u, 0u, 70u, 0u, 0u, 0u, 0u,
    0u, 71u, 0u, 0u, 0u, 0u, 72u, 0u, 0u, 73u, 0u, 0u, 0u, 0u, 0u, 74u, 0u, 0u, 0u, 0u, 75u, 0u, 0u, 76u, 0u, 0u, 0u, 0u, 0u, 77u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 78u, 0u, 0u, 0u, 0u, 79u, 0u, 80u, 0u, 0u, 0u, 0u, 0u, 81u, 0u, 0u, 0u, 82u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 83u, 0u, 0u, 0u, 0u, 84u, 85u, 0u, 0u, 86u, 0u, 0u, 0u, 0u, 87u, 0u, 0u, 0u, 88u, 0u, 0u, 0u, 0u, 0u, 89u, 0u, 90u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 91u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 92u, 0u, 93u, 0u, 0u, 0u, 0u,
    0u, 0u, 94u, 0u, 0u, 95u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 96u, 0u, 0u, 0u, 0u, 0u, 0u, 97u, 0u, 98u, 0u, 0u,
    99u, 0u, 0u, 0u, 100u, 0u, 0u, 101u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 102u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 103u, 0u, 0u, 0u,
    0u, 0u, 0u, 104u, 0u, 0u, 0u, 0u, 0u, 0u, 105u, 0u, 0u, 0u, 0u, 106u, 0u, 0u, 107u, 0u, 0u, 108u, 0u, 0u, 109u, 0u, 0u, 110u, 0u, 0u, 111u, 0u,
    0u, 112u, 0u, 0u, 113u, 0u, 0u, 114u, 0u, 0u, 115u, 0u, 0u, 116u, 0u, 0u, 117u, 0u, 0u, 118u, 0u, 0u, 119u, 0u, 0u, 120u, 0u, 0u, 121u, 0u, 0u, 122u,
    0u, 0u, 123u, 0u, 0u, 124u, 0u, 0u, 0u, 0u, 0u, 125u, 0u, 0u, 0u, 0u, 126u, 0u, 0u, 127u, 0u, 0u, 0u, 0u, 128u, 0u, 0u, 129u, 0u, 0u, 0u, 0u,
    130u, 0u, 0u, 131u, 0u, 0u, 132u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 133u, 0u, 134u, 0u, 0u, 135u, 0u, 0u, 0u, 0u, 136u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 137u, 138u, 0u, 0u, 0u, 0u, 139u, 0u, 140u, 0u, 0u, 141u, 0u, 0u, 0u, 0u, 0u, 142u, 0u, 0u, 0u, 0u, 143u, 0u, 0u, 144u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 145u, 146u, 0u, 0u, 0u, 147u, 0u, 0u, 0u, 0u, 148u, 0u, 0u, 0u, 149u, 0u, 0u, 150u, 0u, 0u, 0u, 151u, 0u, 0u, 152u, 0u,
    0u, 153u, 0u, 0u, 154u, 0u, 0u, 0u, 155u, 0u, 0u, 156u, 0u, 0u, 157u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 158u, 0u, 0u, 0u, 0u, 159u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 160u, 0u, 0u, 0u, 0u, 0u, 161u, 0u, 162u, 0u, 0u, 0u, 0u, 0u, 163u, 164u, 0u, 0u, 165u, 0u, 0u, 0u, 0u, 0u, 0u, 166u, 0u, 0u,
    0u, 167u, 0u, 168u, 0u, 169u, 0u, 0u, 0u, 170u, 171u, 0u, 0u, 172u, 0u, 173u, 0u, 0u, 174u, 0u, 0u, 0u, 175u, 0u, 176u, 0u, 0u, 0u, 177u, 0u, 0u, 178u,
    179u, 0u, 180u, 0u, 0u, 0u, 181u, 0u, 0u, 0u, 182u, 0u, 183u, 0u, 184u, 0u, 0u, 0u, 185u, 0u, 186u, 0u, 0u, 0u, 187u, 0u, 0u, 0u, 0u, 188u, 0u, 189u,
    0u, 190u, 0u, 191u, 0u, 192u, 0u, 0u, 0u, 0u, 0u, 0u, 193u, 0u, 0u, 194u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 195u, 0u, 196u, 0u, 197u, 0u, 0u, 0u, 198u, 0u, 199u, 0u, 200u, 201u, 0u, 0u, 0u, 202u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 203u,
    0u, 204u, 0u, 0u, 205u, 0u, 0u, 0u, 0u, 206u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 207u, 0u, 0u, 0u, 208u, 0u, 0u, 0u, 0u, 0u, 209u, 0u,
    0u, 210u, 0u, 0u, 0u, 0u, 0u, 0u, 211u, 0u, 0u, 212u, 0u, 0u, 213u, 0u, 0u, 0u, 214u, 0u, 0u, 0u, 0u, 0u, 215u, 0u, 216u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 217u, 0u, 218u, 0u, 219u, 220u, 0u, 0u, 0u, 0u, 0u, 0u, 221u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 222u, 0u, 0u, 0u, 0u, 223u,
    0u, 0u, 224u, 0u, 0u, 225u, 0u, 0u, 0u, 226u, 0u, 0u, 0u, 0u, 0u, 227u, 0u, 0u, 228u, 0u, 0u, 0u, 0u, 0u, 0u, 229u, 0u, 0u, 0u, 0u, 230u, 0u,
    231u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 232u, 0u, 0u, 233u, 0u, 234u, 0u, 235u, 0u, 0u, 0u, 0u, 0u, 0u, 236u, 0u, 237u, 0u, 238u, 0u, 239u, 0u, 0u, 0u,
    240u, 0u, 241u, 0u, 242u, 243u, 0u, 0u, 0u, 0u, 0u, 0u, 244u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 245u, 0u, 0u, 0u, 246u, 0u, 0u, 0u, 0u,
    0u, 247u, 0u, 0u, 248u, 0u, 0u, 0u, 0u, 0u, 0u, 249u, 0u, 0u, 250u, 0u, 0u, 251u, 0u, 0u, 0u, 252u, 0u, 0u, 0u, 0u, 0u, 253u, 0u, 254u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 255u, 0u, 256u, 0u, 257u, 258u, 0u, 0u, 0u, 0u, 0u, 0u, 259u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 260u, 0u, 0u,
    0u, 0u, 261u, 0u, 0u, 262u, 0u, 0u, 263u, 0u, 0u, 0u, 264u, 0u, 0u, 0u, 0u, 0u, 265u, 0u, 0u, 266u, 0u, 0u, 0u, 0u, 0u, 0u, 267u, 0u, 0u, 0u,
    0u, 268u, 0u, 269u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 270u, 0u, 0u, 271u, 0u, 272u, 0u, 273u, 0u, 0u, 0u, 274u, 0u, 275u, 0u, 276u, 0u, 277u, 0u, 0u, 0u,
    278u, 0u, 279u, 0u, 280u, 281u, 0u, 0u, 0u, 0u, 0u, 0u, 282u, 0u, 0u, 0u, 0u, 283u, 0u, 0u, 0u, 284u, 0u, 0u, 285u, 0u, 0u, 0u, 286u, 0u, 0u, 0u,
    287u, 0u, 288u, 0u, 0u, 0u, 0u, 289u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 290u, 0u, 0u, 0u, 0u, 291u, 0u, 0u, 292u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 293u, 0u, 294u, 0u, 295u, 0u, 0u, 0u, 0u, 0u, 0u, 296u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 297u, 0u, 0u, 0u, 0u, 298u, 0u, 0u, 299u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 300u, 0u, 301u, 0u, 302u, 0u, 0u, 0u, 0u, 0u, 0u, 303u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    304u, 0u, 305u, 0u, 0u, 0u, 0u, 306u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 307u, 0u, 0u, 0u, 0u, 308u, 0u, 0u, 0u, 0u, 0u, 309u, 0u, 310u, 0u,
    0u, 311u, 0u, 0u, 0u, 0u, 0u, 0u, 312u, 0u, 0u, 313u, 0u, 0u, 314u, 0u, 0u, 315u, 0u, 0u, 0u, 316u, 0u, 0u, 0u, 0u, 317u, 0u, 318u, 0u, 319u, 320u,
    0u, 0u, 0u, 0u, 0u, 321u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 322u, 0u, 0u, 0u, 0u, 0u, 323u, 0u, 324u, 0u, 0u, 325u, 0u, 0u, 0u, 0u, 0u,
    0u, 326u, 0u, 0u, 327u, 0u, 0u, 328u, 0u, 0u, 329u, 0u, 0u, 0u, 330u, 0u, 0u, 0u, 0u, 331u, 0u, 332u, 0u, 333u, 334u, 0u, 0u, 0u, 0u, 0u, 335u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 336u, 0u, 0u, 0u, 0u, 337u, 0u, 0u, 0u, 0u, 338u, 0u, 0u, 339u, 0u, 0u, 340u, 0u, 0u, 0u, 341u, 0u, 0u,
    0u, 0u, 0u, 342u, 0u, 0u, 0u, 0u, 343u, 0u, 344u, 0u, 0u, 0u, 0u, 0u, 0u, 345u, 0u, 0u, 0u, 346u, 0u, 347u, 0u, 348u, 0u, 349u, 0u, 350u, 351u, 0u,
    0u, 0u, 0u, 0u, 0u, 352u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 353u, 0u, 0u, 0u, 0u, 354u, 0u, 0u, 355u, 0u, 0u, 356u, 0u, 0u, 0u, 357u,
    0u, 0u, 0u, 0u, 0u, 358u, 0u, 0u, 359u, 0u, 0u, 0u, 0u, 0u, 0u, 360u, 0u, 0u, 0u, 0u, 361u, 0u, 362u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 363u, 0u,
    0u, 0u, 364u, 0u, 365u, 0u, 366u, 0u, 367u, 0u, 368u, 369u, 0u, 0u, 0u, 0u, 0u, 0u, 370u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 371u, 0u, 372u, 0u, 0u, 0u,
    0u, 373u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 374u, 0u, 375u, 0u, 0u, 376u, 0u, 0u, 0u, 0u, 377u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 378u, 0u, 379u, 0u, 0u,
    0u, 0u, 380u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 381u, 0u, 382u, 0u, 0u, 383u, 0u, 0u, 0u, 0u, 384u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 385u, 0u, 0u, 0u,
    0u, 386u, 0u, 387u, 0u, 0u, 388u, 0u, 0u, 0u, 0u, 0u, 389u, 0u, 390u, 0u, 391u, 0u, 392u, 0u, 393u, 0u, 394u, 0u, 0u, 0u, 395u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 396u, 0u, 0u, 397u, 0u, 0u, 0u, 0u, 398u, 0u, 0u, 0u, 399u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 400u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 401u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 402u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 403u, 0u, 404u, 0u, 0u, 0u,
    0u, 405u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 406u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 407u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 408u, 0u, 0u, 409u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    410u, 411u, 0u, 0u, 412u, 413u, 0u, 0u, 414u, 0u, 0u, 415u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 416u, 0u, 0u, 417u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 418u, 0u, 0u, 0u, 419u, 0u, 0u, 0u, 420u, 421u, 0u, 0u, 0u, 422u, 0u, 0u, 0u, 423u, 424u, 0u, 425u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 426u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 427u, 0u, 0u, 0u, 428u, 0u, 0u, 429u, 0u, 0u, 0u, 0u, 430u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 431u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 432u, 0u, 0u, 0u, 0u, 0u, 0u, 433u, 0u, 0u, 434u, 0u, 0u, 0u, 0u, 0u,
    0u, 435u, 0u, 436u, 0u, 0u, 0u, 0u, 437u, 0u, 438u, 0u, 0u, 0u, 439u, 0u, 0u, 0u, 440u, 0u, 0u, 0u, 441u, 0u, 0u, 0u, 442u, 0u, 0u, 0u, 443u, 0u,
    444u, 0u, 445u, 0u, 0u, 446u, 0u, 0u, 0u, 447u, 0u, 0u, 0u, 448u, 0u, 0u, 0u, 449u, 450u, 0u, 0u, 0u, 0u, 451u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 452u,
    0u, 0u, 0u, 453u, 0u, 0u, 454u, 0u, 0u, 455u, 0u, 456u, 457u, 0u, 0u, 458u, 0u, 0u, 459u, 460u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 461u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 462u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 463u, 0u, 0u, 464u, 0u, 0u, 465u, 0u, 466u,
    0u, 0u, 467u, 0u, 0u, 0u, 468u, 0u, 0u, 0u, 469u, 0u, 0u, 0u, 470u, 0u, 0u, 0u, 0u, 471u, 0u, 472u, 0u, 0u, 473u, 0u, 474u, 0u, 0u, 0u, 0u, 475u,
    0u, 0u, 476u, 0u, 477u, 0u, 478u, 0u, 0u, 0u, 479u, 0u, 0u, 0u, 480u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 481u, 0u, 0u, 0u, 0u, 0u, 0u, 482u,
    0u, 0u, 483u, 0u, 0u, 0u, 484u, 0u, 485u, 486u, 0u, 0u, 0u, 0u, 0u, 487u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 488u, 0u, 0u, 489u, 0u, 0u, 0u, 490u,
    0u, 491u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 492u, 0u, 493u, 494u, 0u, 0u, 0u, 0u, 495u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 496u, 0u, 0u, 497u, 0u, 0u,
    0u, 498u, 0u, 499u, 0u, 0u, 0u, 0u, 0u, 500u, 0u, 501u, 502u, 0u, 0u, 0u, 0u, 503u, 0u, 0u, 0u, 0u, 504u, 0u, 0u, 0u, 505u, 0u, 0u, 0u, 0u, 0u,
    506u, 0u, 0u, 0u, 507u, 0u, 0u, 0u, 508u, 0u, 0u, 0u, 509u, 0u, 0u, 0u, 0u, 510u, 0u, 511u, 0u, 512u, 0u, 0u, 513u, 0u, 0u, 514u, 0u, 515u, 0u, 516u,
    0u, 0u, 517u, 0u, 0u, 518u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 519u, 0u, 0u, 0u, 520u, 0u, 0u, 521u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 522u, 0u, 0u, 0u, 523u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 524u, 0u, 0u, 0u, 0u, 525u, 0u, 0u, 526u, 0u, 527u, 0u,
    528u, 0u, 529u, 0u, 0u, 530u, 0u, 531u, 532u, 0u, 533u, 0u, 534u, 0u, 0u, 535u, 0u, 0u, 0u, 0u, 0u, 536u, 0u, 537u, 0u, 0u, 538u, 0u, 539u, 0u, 540u, 0u,
    541u, 0u, 0u, 0u, 542u, 0u, 543u, 0u, 0u, 0u, 0u, 544u, 0u, 0u, 0u, 0u, 0u, 0u, 545u, 0u, 546u, 0u, 0u, 547u, 0u, 0u, 548u, 0u, 549u, 0u, 0u, 0u,
    0u, 0u, 0u, 550u, 0u, 0u, 551u, 0u, 552u, 0u, 553u, 0u, 554u, 0u, 0u, 555u, 0u, 556u, 0u, 557u, 0u, 558u, 0u, 0u, 559u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 560u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 561u, 0u, 0u, 562u, 563u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 564u, 0u, 0u, 0u, 0u, 565u,
    0u, 566u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 567u, 0u, 0u, 0u, 0u, 568u, 0u, 0u, 0u, 0u, 0u, 0u, 569u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 570u, 0u, 0u, 571u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 572u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    573u, 0u, 0u, 0u, 0u, 574u, 0u, 0u, 0u, 575u, 0u, 0u, 576u, 0u, 577u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 578u, 0u, 0u, 0u, 579u, 0u, 0u, 580u, 0u, 0u, 581u, 0u, 0u, 582u, 0u, 0u, 583u, 0u, 584u, 585u, 0u, 0u, 586u, 0u, 0u,
    0u, 0u, 0u, 0u, 587u, 0u, 588u, 0u, 589u, 0u, 0u, 0u, 590u, 0u, 591u, 0u, 592u, 0u, 593u, 0u, 0u, 0u, 0u, 594u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 595u,
    0u, 0u, 0u, 596u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 597u, 0u, 0u, 0u, 598u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 599u, 0u, 0u, 0u,
    600u, 0u, 0u, 0u, 0u, 601u, 0u, 0u, 0u, 0u, 0u, 0u, 602u, 0u, 603u, 0u, 604u, 0u, 0u, 0u, 0u, 605u, 0u, 0u, 606u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 607u, 608u, 609u, 0u, 610u, 0u, 0u, 0u, 0u, 0u, 0u, 611u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 612u, 0u, 0u, 613u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 614u, 0u, 0u, 615u, 0u, 616u, 0u, 617u, 0u, 0u, 618u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 619u, 0u, 0u, 0u, 620u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 621u, 0u, 0u, 0u, 0u, 0u, 622u, 0u, 0u, 623u, 0u, 624u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 625u, 0u, 0u, 0u, 626u,
    0u, 0u, 627u, 0u, 0u, 0u, 0u, 628u, 0u, 629u, 0u, 0u, 0u, 0u, 0u, 0u, 630u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 631u, 0u, 632u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 633u, 0u, 634u, 0u, 635u, 0u, 636u, 0u, 637u, 0u, 638u, 0u, 639u, 0u, 640u, 0u, 0u, 0u, 641u, 0u, 642u, 0u, 643u, 0u, 644u, 645u, 0u, 646u,
    0u, 647u, 648u, 0u, 0u, 0u, 0u, 0u, 649u, 0u, 650u, 0u, 0u, 0u, 0u, 651u, 0u, 0u, 0u, 0u, 0u, 652u, 0u, 653u, 0u, 0u, 654u, 0u, 655u, 0u, 0u, 0u,
    656u, 0u, 0u, 657u, 0u, 0u, 0u, 658u, 0u, 0u, 659u, 0u, 0u, 0u, 660u, 0u, 0u, 661u, 0u, 0u, 0u, 0u, 662u, 0u, 663u, 664u, 0u, 665u, 0u, 0u, 0u, 0u,
    0u, 666u, 0u, 0u, 667u, 0u, 0u, 668u, 0u, 0u, 0u, 0u, 0u, 669u, 0u, 0u, 670u, 0u, 671u, 0u, 672u, 0u, 0u, 673u, 0u, 674u, 0u, 675u, 0u, 676u, 0u, 0u,
    0u, 677u, 0u, 0u, 678u, 0u, 0u, 0u, 679u, 0u, 680u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 681u, 0u, 0u, 0u, 682u, 0u, 683u, 0u, 684u, 0u, 685u, 0u, 686u, 0u,
    687u, 0u, 688u, 0u, 689u, 0u, 690u, 0u, 691u, 0u, 692u, 693u, 0u, 694u, 0u, 695u, 0u, 0u, 0u, 0u, 696u, 0u, 697u, 0u, 698u, 0u, 699u, 0u, 700u, 0u, 701u, 0u,
    702u, 0u, 703u, 0u, 0u, 0u, 0u, 0u, 704u, 0u, 705u, 706u, 0u, 0u, 0u, 707u, 0u, 0u, 708u, 0u, 0u, 0u, 709u, 0u, 0u, 0u, 710u, 0u, 0u, 0u, 711u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 712u, 0u, 713u, 0u, 714u, 0u, 0u, 0u, 715u, 0u, 0u, 0u, 0u, 716u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 717u, 0u, 718u, 0u, 719u,
    0u, 0u, 0u, 0u, 0u, 720u, 0u, 0u, 0u, 0u, 721u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 722u, 0u, 723u, 0u, 724u, 0u, 0u, 0u, 725u, 0u, 0u, 0u, 0u, 726u,
    0u, 0u, 727u, 0u, 0u, 728u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 729u, 0u, 0u, 0u, 730u, 0u, 0u, 0u, 731u, 0u, 0u, 0u, 732u, 0u, 733u, 0u, 0u, 734u,
    0u, 0u, 735u, 0u, 736u, 0u, 0u, 737u, 0u, 0u, 0u, 738u, 0u, 739u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 740u, 0u, 0u, 0u, 0u, 0u,
    741u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 742u, 0u, 743u, 0u, 0u, 0u, 0u, 744u, 0u, 745u, 0u, 0u, 0u, 0u, 0u, 746u, 0u, 0u, 747u, 0u, 0u, 0u, 748u, 0u,
    749u, 750u, 0u, 0u, 751u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 752u, 0u, 0u, 0u, 0u, 0u, 753u, 0u, 754u, 0u, 755u, 0u, 756u, 0u, 757u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 758u, 0u, 0u, 759u, 0u, 760u, 0u, 761u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 762u, 0u, 0u, 763u, 0u, 764u, 0u, 765u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 766u, 0u, 0u, 767u, 0u, 768u, 0u, 769u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 770u, 771u, 0u, 0u, 772u, 0u, 0u, 773u, 0u, 774u, 775u, 0u, 0u, 0u, 0u, 776u, 0u, 0u, 777u, 0u, 778u, 0u, 0u,
    0u, 0u, 0u, 0u, 779u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 780u, 0u, 0u, 781u, 0u, 0u, 0u, 782u, 0u, 783u, 0u, 0u, 0u, 0u, 784u,
    0u, 785u, 0u, 786u, 0u, 787u, 0u, 0u, 788u, 0u, 0u, 0u, 789u, 0u, 0u, 0u, 790u, 0u, 0u, 0u, 791u, 0u, 0u, 792u, 0u, 0u, 0u, 793u, 0u, 0u, 794u, 0u,
    0u, 0u, 0u, 0u, 795u, 0u, 796u, 0u, 797u, 0u, 798u, 0u, 0u, 799u, 0u, 800u, 0u, 0u, 801u, 0u, 802u, 0u, 803u, 0u, 0u, 0u, 804u, 0u, 0u, 0u, 805u, 0u,
    0u, 0u, 0u, 0u, 806u, 0u, 807u, 0u, 0u, 808u, 0u, 809u, 0u, 810u, 0u, 811u, 0u, 0u, 0u, 812u, 0u, 0u, 0u, 0u, 813u, 0u, 0u, 0u, 0u, 814u, 0u, 815u,
    0u, 0u, 0u, 816u, 0u, 0u, 0u, 817u, 0u, 0u, 818u, 0u, 819u, 0u, 0u, 820u, 821u, 0u, 822u, 0u, 0u, 823u, 0u, 0u, 0u, 824u, 0u, 0u, 0u, 0u, 825u, 0u,
    826u, 0u, 0u, 827u, 0u, 0u, 828u, 829u, 0u, 830u, 0u, 0u, 831u, 0u, 0u, 0u, 832u, 0u, 0u, 0u, 0u, 833u, 0u, 834u, 0u, 0u, 0u, 0u, 835u, 0u, 0u, 836u,
    0u, 0u, 837u, 0u, 838u, 0u, 839u, 0u, 0u, 840u, 0u, 0u, 841u, 0u, 842u, 0u, 843u, 0u, 844u, 0u, 0u, 0u, 845u, 0u, 0u, 0u, 0u, 846u, 0u, 0u, 0u, 0u,
    847u, 0u, 848u, 0u, 0u, 0u, 849u, 0u, 0u, 0u, 850u, 0u, 0u, 851u, 0u, 852u, 0u, 0u, 853u, 854u, 0u, 855u, 0u, 0u, 856u, 0u, 0u, 0u, 857u, 0u, 0u, 0u,
    0u, 858u, 0u, 859u, 0u, 0u, 860u, 0u, 0u, 861u, 862u, 0u, 863u, 0u, 0u, 864u, 0u, 0u, 0u, 865u, 0u, 0u, 0u, 0u, 866u, 0u, 867u, 0u, 0u, 0u, 0u, 868u,
};
void recomp_unit_0080_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,29,5,31,6,2 fprs=12,13,14,0 gpr_occ=3745 fpr_occ=954 gpr_total=5345 fpr_total=1354
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_0 = ctx.fpr[0];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[29] = aot_gpr_29; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[0] = aot_fpr_0; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_0 = ctx.fpr[0]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08944000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u)
            ? kEntryIdsV813_recomp_unit_0080[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08944000;
    case 2u: goto L_08944014;
    case 3u: goto L_08944048;
    case 4u: goto L_08944070;
    case 5u: goto L_08944094;
    case 6u: goto L_089440DC;
    case 7u: goto L_089440F4;
    case 8u: goto L_089440FC;
    case 9u: goto L_08944124;
    case 10u: goto L_08944150;
    case 11u: goto L_08944160;
    case 12u: goto L_08944180;
    case 13u: goto L_089441A0;
    case 14u: goto L_089441B0;
    case 15u: goto L_089441E8;
    case 16u: goto L_089441F0;
    case 17u: goto L_08944228;
    case 18u: goto L_08944238;
    case 19u: goto L_08944240;
    case 20u: goto L_089442F4;
    case 21u: goto L_08944338;
    case 22u: goto L_08944378;
    case 23u: goto L_08944388;
    case 24u: goto L_089443A8;
    case 25u: goto L_089443E4;
    case 26u: goto L_08944410;
    case 27u: goto L_08944420;
    case 28u: goto L_08944440;
    case 29u: goto L_08944478;
    case 30u: goto L_089444A4;
    case 31u: goto L_089444B4;
    case 32u: goto L_089444D4;
    case 33u: goto L_0894450C;
    case 34u: goto L_08944534;
    case 35u: goto L_08944544;
    case 36u: goto L_08944564;
    case 37u: goto L_08944598;
    case 38u: goto L_089445B4;
    case 39u: goto L_089445D4;
    case 40u: goto L_08944600;
    case 41u: goto L_08944614;
    case 42u: goto L_0894461C;
    case 43u: goto L_089446C4;
    case 44u: goto L_08944708;
    case 45u: goto L_08944744;
    case 46u: goto L_08944764;
    case 47u: goto L_089447A0;
    case 48u: goto L_089447D0;
    case 49u: goto L_08944804;
    case 50u: goto L_08944824;
    case 51u: goto L_0894485C;
    case 52u: goto L_0894488C;
    case 53u: goto L_089448C0;
    case 54u: goto L_089448E0;
    case 55u: goto L_08944918;
    case 56u: goto L_08944940;
    case 57u: goto L_08944970;
    case 58u: goto L_08944990;
    case 59u: goto L_089449C4;
    case 60u: goto L_089449E4;
    case 61u: goto L_089449EC;
    case 62u: goto L_08944A2C;
    case 63u: goto L_08944A68;
    case 64u: goto L_08944A78;
    case 65u: goto L_08944A80;
    case 66u: goto L_08944A98;
    case 67u: goto L_08944AB0;
    case 68u: goto L_08944AC4;
    case 69u: goto L_08944AE0;
    case 70u: goto L_08944AEC;
    case 71u: goto L_08944B04;
    case 72u: goto L_08944B18;
    case 73u: goto L_08944B24;
    case 74u: goto L_08944B3C;
    case 75u: goto L_08944B50;
    case 76u: goto L_08944B5C;
    case 77u: goto L_08944B74;
    case 78u: goto L_08944BA0;
    case 79u: goto L_08944BB4;
    case 80u: goto L_08944BBC;
    case 81u: goto L_08944BD4;
    case 82u: goto L_08944BE4;
    case 83u: goto L_08944C10;
    case 84u: goto L_08944C24;
    case 85u: goto L_08944C28;
    case 86u: goto L_08944C34;
    case 87u: goto L_08944C48;
    case 88u: goto L_08944C58;
    case 89u: goto L_08944C70;
    case 90u: goto L_08944C78;
    case 91u: goto L_08944CC0;
    case 92u: goto L_08944CE4;
    case 93u: goto L_08944CEC;
    case 94u: goto L_08944D08;
    case 95u: goto L_08944D14;
    case 96u: goto L_08944D50;
    case 97u: goto L_08944D6C;
    case 98u: goto L_08944D74;
    case 99u: goto L_08944D80;
    case 100u: goto L_08944D90;
    case 101u: goto L_08944D9C;
    case 102u: goto L_08944DC4;
    case 103u: goto L_08944DF0;
    case 104u: goto L_08944E0C;
    case 105u: goto L_08944E28;
    case 106u: goto L_08944E3C;
    case 107u: goto L_08944E48;
    case 108u: goto L_08944E54;
    case 109u: goto L_08944E60;
    case 110u: goto L_08944E6C;
    case 111u: goto L_08944E78;
    case 112u: goto L_08944E84;
    case 113u: goto L_08944E90;
    case 114u: goto L_08944E9C;
    case 115u: goto L_08944EA8;
    case 116u: goto L_08944EB4;
    case 117u: goto L_08944EC0;
    case 118u: goto L_08944ECC;
    case 119u: goto L_08944ED8;
    case 120u: goto L_08944EE4;
    case 121u: goto L_08944EF0;
    case 122u: goto L_08944EFC;
    case 123u: goto L_08944F08;
    case 124u: goto L_08944F14;
    case 125u: goto L_08944F2C;
    case 126u: goto L_08944F40;
    case 127u: goto L_08944F4C;
    case 128u: goto L_08944F60;
    case 129u: goto L_08944F6C;
    case 130u: goto L_08944F80;
    case 131u: goto L_08944F8C;
    case 132u: goto L_08944F98;
    case 133u: goto L_08944FBC;
    case 134u: goto L_08944FC4;
    case 135u: goto L_08944FD0;
    case 136u: goto L_08944FE4;
    case 137u: goto L_0894500C;
    case 138u: goto L_08945010;
    case 139u: goto L_08945024;
    case 140u: goto L_0894502C;
    case 141u: goto L_08945038;
    case 142u: goto L_08945050;
    case 143u: goto L_08945064;
    case 144u: goto L_08945070;
    case 145u: goto L_08945098;
    case 146u: goto L_0894509C;
    case 147u: goto L_089450AC;
    case 148u: goto L_089450C0;
    case 149u: goto L_089450D0;
    case 150u: goto L_089450DC;
    case 151u: goto L_089450EC;
    case 152u: goto L_089450F8;
    case 153u: goto L_08945104;
    case 154u: goto L_08945110;
    case 155u: goto L_08945120;
    case 156u: goto L_0894512C;
    case 157u: goto L_08945138;
    case 158u: goto L_08945158;
    case 159u: goto L_0894516C;
    case 160u: goto L_08945190;
    case 161u: goto L_089451A8;
    case 162u: goto L_089451B0;
    case 163u: goto L_089451C8;
    case 164u: goto L_089451CC;
    case 165u: goto L_089451D8;
    case 166u: goto L_089451F4;
    case 167u: goto L_08945204;
    case 168u: goto L_0894520C;
    case 169u: goto L_08945214;
    case 170u: goto L_08945224;
    case 171u: goto L_08945228;
    case 172u: goto L_08945234;
    case 173u: goto L_0894523C;
    case 174u: goto L_08945248;
    case 175u: goto L_08945258;
    case 176u: goto L_08945260;
    case 177u: goto L_08945270;
    case 178u: goto L_0894527C;
    case 179u: goto L_08945280;
    case 180u: goto L_08945288;
    case 181u: goto L_08945298;
    case 182u: goto L_089452A8;
    case 183u: goto L_089452B0;
    case 184u: goto L_089452B8;
    case 185u: goto L_089452C8;
    case 186u: goto L_089452D0;
    case 187u: goto L_089452E0;
    case 188u: goto L_089452F4;
    case 189u: goto L_089452FC;
    case 190u: goto L_08945304;
    case 191u: goto L_0894530C;
    case 192u: goto L_08945314;
    case 193u: goto L_08945330;
    case 194u: goto L_0894533C;
    case 195u: goto L_08945398;
    case 196u: goto L_089453A0;
    case 197u: goto L_089453A8;
    case 198u: goto L_089453B8;
    case 199u: goto L_089453C0;
    case 200u: goto L_089453C8;
    case 201u: goto L_089453CC;
    case 202u: goto L_089453DC;
    case 203u: goto L_089453FC;
    case 204u: goto L_08945404;
    case 205u: goto L_08945410;
    case 206u: goto L_08945424;
    case 207u: goto L_08945450;
    case 208u: goto L_08945460;
    case 209u: goto L_08945478;
    case 210u: goto L_08945484;
    case 211u: goto L_089454A0;
    case 212u: goto L_089454AC;
    case 213u: goto L_089454B8;
    case 214u: goto L_089454C8;
    case 215u: goto L_089454E0;
    case 216u: goto L_089454E8;
    case 217u: goto L_0894550C;
    case 218u: goto L_08945514;
    case 219u: goto L_0894551C;
    case 220u: goto L_08945520;
    case 221u: goto L_0894553C;
    case 222u: goto L_08945568;
    case 223u: goto L_0894557C;
    case 224u: goto L_08945588;
    case 225u: goto L_08945594;
    case 226u: goto L_089455A4;
    case 227u: goto L_089455BC;
    case 228u: goto L_089455C8;
    case 229u: goto L_089455E4;
    case 230u: goto L_089455F8;
    case 231u: goto L_08945600;
    case 232u: goto L_08945620;
    case 233u: goto L_0894562C;
    case 234u: goto L_08945634;
    case 235u: goto L_0894563C;
    case 236u: goto L_08945658;
    case 237u: goto L_08945660;
    case 238u: goto L_08945668;
    case 239u: goto L_08945670;
    case 240u: goto L_08945680;
    case 241u: goto L_08945688;
    case 242u: goto L_08945690;
    case 243u: goto L_08945694;
    case 244u: goto L_089456B0;
    case 245u: goto L_089456DC;
    case 246u: goto L_089456EC;
    case 247u: goto L_08945704;
    case 248u: goto L_08945710;
    case 249u: goto L_0894572C;
    case 250u: goto L_08945738;
    case 251u: goto L_08945744;
    case 252u: goto L_08945754;
    case 253u: goto L_0894576C;
    case 254u: goto L_08945774;
    case 255u: goto L_08945798;
    case 256u: goto L_089457A0;
    case 257u: goto L_089457A8;
    case 258u: goto L_089457AC;
    case 259u: goto L_089457C8;
    case 260u: goto L_089457F4;
    case 261u: goto L_08945808;
    case 262u: goto L_08945814;
    case 263u: goto L_08945820;
    case 264u: goto L_08945830;
    case 265u: goto L_08945848;
    case 266u: goto L_08945854;
    case 267u: goto L_08945870;
    case 268u: goto L_08945884;
    case 269u: goto L_0894588C;
    case 270u: goto L_089458AC;
    case 271u: goto L_089458B8;
    case 272u: goto L_089458C0;
    case 273u: goto L_089458C8;
    case 274u: goto L_089458D8;
    case 275u: goto L_089458E0;
    case 276u: goto L_089458E8;
    case 277u: goto L_089458F0;
    case 278u: goto L_08945900;
    case 279u: goto L_08945908;
    case 280u: goto L_08945910;
    case 281u: goto L_08945914;
    case 282u: goto L_08945930;
    case 283u: goto L_08945944;
    case 284u: goto L_08945954;
    case 285u: goto L_08945960;
    case 286u: goto L_08945970;
    case 287u: goto L_08945980;
    case 288u: goto L_08945988;
    case 289u: goto L_0894599C;
    case 290u: goto L_089459C4;
    case 291u: goto L_089459D8;
    case 292u: goto L_089459E4;
    case 293u: goto L_08945A50;
    case 294u: goto L_08945A58;
    case 295u: goto L_08945A60;
    case 296u: goto L_08945A7C;
    case 297u: goto L_08945AA4;
    case 298u: goto L_08945AB8;
    case 299u: goto L_08945AC4;
    case 300u: goto L_08945B34;
    case 301u: goto L_08945B3C;
    case 302u: goto L_08945B44;
    case 303u: goto L_08945B60;
    case 304u: goto L_08945B80;
    case 305u: goto L_08945B88;
    case 306u: goto L_08945B9C;
    case 307u: goto L_08945BC4;
    case 308u: goto L_08945BD8;
    case 309u: goto L_08945BF0;
    case 310u: goto L_08945BF8;
    case 311u: goto L_08945C04;
    case 312u: goto L_08945C20;
    case 313u: goto L_08945C2C;
    case 314u: goto L_08945C38;
    case 315u: goto L_08945C44;
    case 316u: goto L_08945C54;
    case 317u: goto L_08945C68;
    case 318u: goto L_08945C70;
    case 319u: goto L_08945C78;
    case 320u: goto L_08945C7C;
    case 321u: goto L_08945C94;
    case 322u: goto L_08945CBC;
    case 323u: goto L_08945CD4;
    case 324u: goto L_08945CDC;
    case 325u: goto L_08945CE8;
    case 326u: goto L_08945D04;
    case 327u: goto L_08945D10;
    case 328u: goto L_08945D1C;
    case 329u: goto L_08945D28;
    case 330u: goto L_08945D38;
    case 331u: goto L_08945D4C;
    case 332u: goto L_08945D54;
    case 333u: goto L_08945D5C;
    case 334u: goto L_08945D60;
    case 335u: goto L_08945D78;
    case 336u: goto L_08945DA4;
    case 337u: goto L_08945DB8;
    case 338u: goto L_08945DCC;
    case 339u: goto L_08945DD8;
    case 340u: goto L_08945DE4;
    case 341u: goto L_08945DF4;
    case 342u: goto L_08945E0C;
    case 343u: goto L_08945E20;
    case 344u: goto L_08945E28;
    case 345u: goto L_08945E44;
    case 346u: goto L_08945E54;
    case 347u: goto L_08945E5C;
    case 348u: goto L_08945E64;
    case 349u: goto L_08945E6C;
    case 350u: goto L_08945E74;
    case 351u: goto L_08945E78;
    case 352u: goto L_08945E94;
    case 353u: goto L_08945EC0;
    case 354u: goto L_08945ED4;
    case 355u: goto L_08945EE0;
    case 356u: goto L_08945EEC;
    case 357u: goto L_08945EFC;
    case 358u: goto L_08945F14;
    case 359u: goto L_08945F20;
    case 360u: goto L_08945F3C;
    case 361u: goto L_08945F50;
    case 362u: goto L_08945F58;
    case 363u: goto L_08945F78;
    case 364u: goto L_08945F88;
    case 365u: goto L_08945F90;
    case 366u: goto L_08945F98;
    case 367u: goto L_08945FA0;
    case 368u: goto L_08945FA8;
    case 369u: goto L_08945FAC;
    case 370u: goto L_08945FC8;
    case 371u: goto L_08945FE8;
    case 372u: goto L_08945FF0;
    case 373u: goto L_08946004;
    case 374u: goto L_08946024;
    case 375u: goto L_0894602C;
    case 376u: goto L_08946038;
    case 377u: goto L_0894604C;
    case 378u: goto L_0894606C;
    case 379u: goto L_08946074;
    case 380u: goto L_08946088;
    case 381u: goto L_089460A8;
    case 382u: goto L_089460B0;
    case 383u: goto L_089460BC;
    case 384u: goto L_089460D0;
    case 385u: goto L_089460F0;
    case 386u: goto L_08946104;
    case 387u: goto L_0894610C;
    case 388u: goto L_08946118;
    case 389u: goto L_08946130;
    case 390u: goto L_08946138;
    case 391u: goto L_08946140;
    case 392u: goto L_08946148;
    case 393u: goto L_08946150;
    case 394u: goto L_08946158;
    case 395u: goto L_08946168;
    case 396u: goto L_089461A8;
    case 397u: goto L_089461B4;
    case 398u: goto L_089461C8;
    case 399u: goto L_089461D8;
    case 400u: goto L_0894624C;
    case 401u: goto L_0894628C;
    case 402u: goto L_089462BC;
    case 403u: goto L_089462E8;
    case 404u: goto L_089462F0;
    case 405u: goto L_08946304;
    case 406u: goto L_08946354;
    case 407u: goto L_08946394;
    case 408u: goto L_089463C4;
    case 409u: goto L_089463D0;
    case 410u: goto L_08946400;
    case 411u: goto L_08946404;
    case 412u: goto L_08946410;
    case 413u: goto L_08946414;
    case 414u: goto L_08946420;
    case 415u: goto L_0894642C;
    case 416u: goto L_08946460;
    case 417u: goto L_0894646C;
    case 418u: goto L_08946498;
    case 419u: goto L_089464A8;
    case 420u: goto L_089464B8;
    case 421u: goto L_089464BC;
    case 422u: goto L_089464CC;
    case 423u: goto L_089464DC;
    case 424u: goto L_089464E0;
    case 425u: goto L_089464E8;
    case 426u: goto L_0894651C;
    case 427u: goto L_0894653C;
    case 428u: goto L_0894654C;
    case 429u: goto L_08946558;
    case 430u: goto L_0894656C;
    case 431u: goto L_0894659C;
    case 432u: goto L_089465C0;
    case 433u: goto L_089465DC;
    case 434u: goto L_089465E8;
    case 435u: goto L_08946604;
    case 436u: goto L_0894660C;
    case 437u: goto L_08946620;
    case 438u: goto L_08946628;
    case 439u: goto L_08946638;
    case 440u: goto L_08946648;
    case 441u: goto L_08946658;
    case 442u: goto L_08946668;
    case 443u: goto L_08946678;
    case 444u: goto L_08946680;
    case 445u: goto L_08946688;
    case 446u: goto L_08946694;
    case 447u: goto L_089466A4;
    case 448u: goto L_089466B4;
    case 449u: goto L_089466C4;
    case 450u: goto L_089466C8;
    case 451u: goto L_089466DC;
    case 452u: goto L_089466FC;
    case 453u: goto L_0894670C;
    case 454u: goto L_08946718;
    case 455u: goto L_08946724;
    case 456u: goto L_0894672C;
    case 457u: goto L_08946730;
    case 458u: goto L_0894673C;
    case 459u: goto L_08946748;
    case 460u: goto L_0894674C;
    case 461u: goto L_08946770;
    case 462u: goto L_089467AC;
    case 463u: goto L_089467DC;
    case 464u: goto L_089467E8;
    case 465u: goto L_089467F4;
    case 466u: goto L_089467FC;
    case 467u: goto L_08946808;
    case 468u: goto L_08946818;
    case 469u: goto L_08946828;
    case 470u: goto L_08946838;
    case 471u: goto L_0894684C;
    case 472u: goto L_08946854;
    case 473u: goto L_08946860;
    case 474u: goto L_08946868;
    case 475u: goto L_0894687C;
    case 476u: goto L_08946888;
    case 477u: goto L_08946890;
    case 478u: goto L_08946898;
    case 479u: goto L_089468A8;
    case 480u: goto L_089468B8;
    case 481u: goto L_089468E0;
    case 482u: goto L_089468FC;
    case 483u: goto L_08946908;
    case 484u: goto L_08946918;
    case 485u: goto L_08946920;
    case 486u: goto L_08946924;
    case 487u: goto L_0894693C;
    case 488u: goto L_08946960;
    case 489u: goto L_0894696C;
    case 490u: goto L_0894697C;
    case 491u: goto L_08946984;
    case 492u: goto L_089469A4;
    case 493u: goto L_089469AC;
    case 494u: goto L_089469B0;
    case 495u: goto L_089469C4;
    case 496u: goto L_089469E8;
    case 497u: goto L_089469F4;
    case 498u: goto L_08946A04;
    case 499u: goto L_08946A0C;
    case 500u: goto L_08946A24;
    case 501u: goto L_08946A2C;
    case 502u: goto L_08946A30;
    case 503u: goto L_08946A44;
    case 504u: goto L_08946A58;
    case 505u: goto L_08946A68;
    case 506u: goto L_08946A80;
    case 507u: goto L_08946A90;
    case 508u: goto L_08946AA0;
    case 509u: goto L_08946AB0;
    case 510u: goto L_08946AC4;
    case 511u: goto L_08946ACC;
    case 512u: goto L_08946AD4;
    case 513u: goto L_08946AE0;
    case 514u: goto L_08946AEC;
    case 515u: goto L_08946AF4;
    case 516u: goto L_08946AFC;
    case 517u: goto L_08946B08;
    case 518u: goto L_08946B14;
    case 519u: goto L_08946B3C;
    case 520u: goto L_08946B4C;
    case 521u: goto L_08946B58;
    case 522u: goto L_08946B9C;
    case 523u: goto L_08946BAC;
    case 524u: goto L_08946BD0;
    case 525u: goto L_08946BE4;
    case 526u: goto L_08946BF0;
    case 527u: goto L_08946BF8;
    case 528u: goto L_08946C00;
    case 529u: goto L_08946C08;
    case 530u: goto L_08946C14;
    case 531u: goto L_08946C1C;
    case 532u: goto L_08946C20;
    case 533u: goto L_08946C28;
    case 534u: goto L_08946C30;
    case 535u: goto L_08946C3C;
    case 536u: goto L_08946C54;
    case 537u: goto L_08946C5C;
    case 538u: goto L_08946C68;
    case 539u: goto L_08946C70;
    case 540u: goto L_08946C78;
    case 541u: goto L_08946C80;
    case 542u: goto L_08946C90;
    case 543u: goto L_08946C98;
    case 544u: goto L_08946CAC;
    case 545u: goto L_08946CC8;
    case 546u: goto L_08946CD0;
    case 547u: goto L_08946CDC;
    case 548u: goto L_08946CE8;
    case 549u: goto L_08946CF0;
    case 550u: goto L_08946D0C;
    case 551u: goto L_08946D18;
    case 552u: goto L_08946D20;
    case 553u: goto L_08946D28;
    case 554u: goto L_08946D30;
    case 555u: goto L_08946D3C;
    case 556u: goto L_08946D44;
    case 557u: goto L_08946D4C;
    case 558u: goto L_08946D54;
    case 559u: goto L_08946D60;
    case 560u: goto L_08946D8C;
    case 561u: goto L_08946DB4;
    case 562u: goto L_08946DC0;
    case 563u: goto L_08946DC4;
    case 564u: goto L_08946DE8;
    case 565u: goto L_08946DFC;
    case 566u: goto L_08946E04;
    case 567u: goto L_08946E28;
    case 568u: goto L_08946E3C;
    case 569u: goto L_08946E58;
    case 570u: goto L_08946E9C;
    case 571u: goto L_08946EA8;
    case 572u: goto L_08946EDC;
    case 573u: goto L_08946F00;
    case 574u: goto L_08946F14;
    case 575u: goto L_08946F24;
    case 576u: goto L_08946F30;
    case 577u: goto L_08946F38;
    case 578u: goto L_08946F9C;
    case 579u: goto L_08946FAC;
    case 580u: goto L_08946FB8;
    case 581u: goto L_08946FC4;
    case 582u: goto L_08946FD0;
    case 583u: goto L_08946FDC;
    case 584u: goto L_08946FE4;
    case 585u: goto L_08946FE8;
    case 586u: goto L_08946FF4;
    case 587u: goto L_08947010;
    case 588u: goto L_08947018;
    case 589u: goto L_08947020;
    case 590u: goto L_08947030;
    case 591u: goto L_08947038;
    case 592u: goto L_08947040;
    case 593u: goto L_08947048;
    case 594u: goto L_0894705C;
    case 595u: goto L_0894707C;
    case 596u: goto L_0894708C;
    case 597u: goto L_089470B0;
    case 598u: goto L_089470C0;
    case 599u: goto L_089470F0;
    case 600u: goto L_08947100;
    case 601u: goto L_08947114;
    case 602u: goto L_08947130;
    case 603u: goto L_08947138;
    case 604u: goto L_08947140;
    case 605u: goto L_08947154;
    case 606u: goto L_08947160;
    case 607u: goto L_08947188;
    case 608u: goto L_0894718C;
    case 609u: goto L_08947190;
    case 610u: goto L_08947198;
    case 611u: goto L_089471B4;
    case 612u: goto L_089471D8;
    case 613u: goto L_089471E4;
    case 614u: goto L_08947218;
    case 615u: goto L_08947224;
    case 616u: goto L_0894722C;
    case 617u: goto L_08947234;
    case 618u: goto L_08947240;
    case 619u: goto L_08947268;
    case 620u: goto L_08947278;
    case 621u: goto L_0894729C;
    case 622u: goto L_089472B4;
    case 623u: goto L_089472C0;
    case 624u: goto L_089472C8;
    case 625u: goto L_089472EC;
    case 626u: goto L_089472FC;
    case 627u: goto L_08947308;
    case 628u: goto L_0894731C;
    case 629u: goto L_08947324;
    case 630u: goto L_08947340;
    case 631u: goto L_08947364;
    case 632u: goto L_0894736C;
    case 633u: goto L_08947390;
    case 634u: goto L_08947398;
    case 635u: goto L_089473A0;
    case 636u: goto L_089473A8;
    case 637u: goto L_089473B0;
    case 638u: goto L_089473B8;
    case 639u: goto L_089473C0;
    case 640u: goto L_089473C8;
    case 641u: goto L_089473D8;
    case 642u: goto L_089473E0;
    case 643u: goto L_089473E8;
    case 644u: goto L_089473F0;
    case 645u: goto L_089473F4;
    case 646u: goto L_089473FC;
    case 647u: goto L_08947404;
    case 648u: goto L_08947408;
    case 649u: goto L_08947420;
    case 650u: goto L_08947428;
    case 651u: goto L_0894743C;
    case 652u: goto L_08947454;
    case 653u: goto L_0894745C;
    case 654u: goto L_08947468;
    case 655u: goto L_08947470;
    case 656u: goto L_08947480;
    case 657u: goto L_0894748C;
    case 658u: goto L_0894749C;
    case 659u: goto L_089474A8;
    case 660u: goto L_089474B8;
    case 661u: goto L_089474C4;
    case 662u: goto L_089474D8;
    case 663u: goto L_089474E0;
    case 664u: goto L_089474E4;
    case 665u: goto L_089474EC;
    case 666u: goto L_08947504;
    case 667u: goto L_08947510;
    case 668u: goto L_0894751C;
    case 669u: goto L_08947534;
    case 670u: goto L_08947540;
    case 671u: goto L_08947548;
    case 672u: goto L_08947550;
    case 673u: goto L_0894755C;
    case 674u: goto L_08947564;
    case 675u: goto L_0894756C;
    case 676u: goto L_08947574;
    case 677u: goto L_08947584;
    case 678u: goto L_08947590;
    case 679u: goto L_089475A0;
    case 680u: goto L_089475A8;
    case 681u: goto L_089475C8;
    case 682u: goto L_089475D8;
    case 683u: goto L_089475E0;
    case 684u: goto L_089475E8;
    case 685u: goto L_089475F0;
    case 686u: goto L_089475F8;
    case 687u: goto L_08947600;
    case 688u: goto L_08947608;
    case 689u: goto L_08947610;
    case 690u: goto L_08947618;
    case 691u: goto L_08947620;
    case 692u: goto L_08947628;
    case 693u: goto L_0894762C;
    case 694u: goto L_08947634;
    case 695u: goto L_0894763C;
    case 696u: goto L_08947650;
    case 697u: goto L_08947658;
    case 698u: goto L_08947660;
    case 699u: goto L_08947668;
    case 700u: goto L_08947670;
    case 701u: goto L_08947678;
    case 702u: goto L_08947680;
    case 703u: goto L_08947688;
    case 704u: goto L_089476A0;
    case 705u: goto L_089476A8;
    case 706u: goto L_089476AC;
    case 707u: goto L_089476BC;
    case 708u: goto L_089476C8;
    case 709u: goto L_089476D8;
    case 710u: goto L_089476E8;
    case 711u: goto L_089476F8;
    case 712u: goto L_08947718;
    case 713u: goto L_08947720;
    case 714u: goto L_08947728;
    case 715u: goto L_08947738;
    case 716u: goto L_0894774C;
    case 717u: goto L_0894776C;
    case 718u: goto L_08947774;
    case 719u: goto L_0894777C;
    case 720u: goto L_08947794;
    case 721u: goto L_089477A8;
    case 722u: goto L_089477C8;
    case 723u: goto L_089477D0;
    case 724u: goto L_089477D8;
    case 725u: goto L_089477E8;
    case 726u: goto L_089477FC;
    case 727u: goto L_08947808;
    case 728u: goto L_08947814;
    case 729u: goto L_08947838;
    case 730u: goto L_08947848;
    case 731u: goto L_08947858;
    case 732u: goto L_08947868;
    case 733u: goto L_08947870;
    case 734u: goto L_0894787C;
    case 735u: goto L_08947888;
    case 736u: goto L_08947890;
    case 737u: goto L_0894789C;
    case 738u: goto L_089478AC;
    case 739u: goto L_089478B4;
    case 740u: goto L_089478E8;
    case 741u: goto L_08947900;
    case 742u: goto L_08947920;
    case 743u: goto L_08947928;
    case 744u: goto L_0894793C;
    case 745u: goto L_08947944;
    case 746u: goto L_0894795C;
    case 747u: goto L_08947968;
    case 748u: goto L_08947978;
    case 749u: goto L_08947980;
    case 750u: goto L_08947984;
    case 751u: goto L_08947990;
    case 752u: goto L_089479C4;
    case 753u: goto L_089479DC;
    case 754u: goto L_089479E4;
    case 755u: goto L_089479EC;
    case 756u: goto L_089479F4;
    case 757u: goto L_089479FC;
    case 758u: goto L_08947A34;
    case 759u: goto L_08947A40;
    case 760u: goto L_08947A48;
    case 761u: goto L_08947A50;
    case 762u: goto L_08947A88;
    case 763u: goto L_08947A94;
    case 764u: goto L_08947A9C;
    case 765u: goto L_08947AA4;
    case 766u: goto L_08947ADC;
    case 767u: goto L_08947AE8;
    case 768u: goto L_08947AF0;
    case 769u: goto L_08947AF8;
    case 770u: goto L_08947B24;
    case 771u: goto L_08947B28;
    case 772u: goto L_08947B34;
    case 773u: goto L_08947B40;
    case 774u: goto L_08947B48;
    case 775u: goto L_08947B4C;
    case 776u: goto L_08947B60;
    case 777u: goto L_08947B6C;
    case 778u: goto L_08947B74;
    case 779u: goto L_08947B90;
    case 780u: goto L_08947BC4;
    case 781u: goto L_08947BD0;
    case 782u: goto L_08947BE0;
    case 783u: goto L_08947BE8;
    case 784u: goto L_08947BFC;
    case 785u: goto L_08947C04;
    case 786u: goto L_08947C0C;
    case 787u: goto L_08947C14;
    case 788u: goto L_08947C20;
    case 789u: goto L_08947C30;
    case 790u: goto L_08947C40;
    case 791u: goto L_08947C50;
    case 792u: goto L_08947C5C;
    case 793u: goto L_08947C6C;
    case 794u: goto L_08947C78;
    case 795u: goto L_08947C90;
    case 796u: goto L_08947C98;
    case 797u: goto L_08947CA0;
    case 798u: goto L_08947CA8;
    case 799u: goto L_08947CB4;
    case 800u: goto L_08947CBC;
    case 801u: goto L_08947CC8;
    case 802u: goto L_08947CD0;
    case 803u: goto L_08947CD8;
    case 804u: goto L_08947CE8;
    case 805u: goto L_08947CF8;
    case 806u: goto L_08947D10;
    case 807u: goto L_08947D18;
    case 808u: goto L_08947D24;
    case 809u: goto L_08947D2C;
    case 810u: goto L_08947D34;
    case 811u: goto L_08947D3C;
    case 812u: goto L_08947D4C;
    case 813u: goto L_08947D60;
    case 814u: goto L_08947D74;
    case 815u: goto L_08947D7C;
    case 816u: goto L_08947D8C;
    case 817u: goto L_08947D9C;
    case 818u: goto L_08947DA8;
    case 819u: goto L_08947DB0;
    case 820u: goto L_08947DBC;
    case 821u: goto L_08947DC0;
    case 822u: goto L_08947DC8;
    case 823u: goto L_08947DD4;
    case 824u: goto L_08947DE4;
    case 825u: goto L_08947DF8;
    case 826u: goto L_08947E00;
    case 827u: goto L_08947E0C;
    case 828u: goto L_08947E18;
    case 829u: goto L_08947E1C;
    case 830u: goto L_08947E24;
    case 831u: goto L_08947E30;
    case 832u: goto L_08947E40;
    case 833u: goto L_08947E54;
    case 834u: goto L_08947E5C;
    case 835u: goto L_08947E70;
    case 836u: goto L_08947E7C;
    case 837u: goto L_08947E88;
    case 838u: goto L_08947E90;
    case 839u: goto L_08947E98;
    case 840u: goto L_08947EA4;
    case 841u: goto L_08947EB0;
    case 842u: goto L_08947EB8;
    case 843u: goto L_08947EC0;
    case 844u: goto L_08947EC8;
    case 845u: goto L_08947ED8;
    case 846u: goto L_08947EEC;
    case 847u: goto L_08947F00;
    case 848u: goto L_08947F08;
    case 849u: goto L_08947F18;
    case 850u: goto L_08947F28;
    case 851u: goto L_08947F34;
    case 852u: goto L_08947F3C;
    case 853u: goto L_08947F48;
    case 854u: goto L_08947F4C;
    case 855u: goto L_08947F54;
    case 856u: goto L_08947F60;
    case 857u: goto L_08947F70;
    case 858u: goto L_08947F84;
    case 859u: goto L_08947F8C;
    case 860u: goto L_08947F98;
    case 861u: goto L_08947FA4;
    case 862u: goto L_08947FA8;
    case 863u: goto L_08947FB0;
    case 864u: goto L_08947FBC;
    case 865u: goto L_08947FCC;
    case 866u: goto L_08947FE0;
    case 867u: goto L_08947FE8;
    case 868u: goto L_08947FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08944000u;
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
L_08944000:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08944014u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 2u, 0x08944014u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944014u) goto L_08944014;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944014:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1216)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1200)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08944048u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(480)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944048u) goto L_08944048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944048:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1192)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944070u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(484)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944070u) goto L_08944070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944070:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944094u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944094u) goto L_08944094;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944094:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1184)));
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(488)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x089440DCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 6u, 0x089440DCu, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089440DCu) goto L_089440DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089440DC:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(720));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(720));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1204)));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 536u, 0x08943D90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089440F4;
    }
L_089440F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_089440FC;
    }
L_089440FC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(132)));
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[17] = (aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(146)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (15820u << 16u);
      if (branch_taken) {
          goto L_08944238;
      }
      goto L_08944124;
    }
L_08944124:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    aot_gpr_4 = (15861u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(136));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    goto L_08944150;
L_08944150:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_gpr_31 = (0x08944160u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944160u) goto L_08944160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944160:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(624)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944180u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944180u) goto L_08944180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944180:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(628)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089441A0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089441A0u) goto L_089441A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089441A0:
    aot_gpr_4 = (aot_gpr_2 & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089441F0;
      }
      goto L_089441B0;
    }
L_089441B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (0u | 36u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x089441E8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 15u, 0x089441E8u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089441E8u) goto L_089441E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089441E8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08944228;
      }
      goto L_089441F0;
    }
L_089441F0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (0u | 38u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08944228u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 17u, 0x08944228u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944228u) goto L_08944228;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944228:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08944150;
      }
      goto L_08944238;
    }
L_08944238:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1152), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_08944240;
    }
L_08944240:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(688), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(689), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(690), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 196u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(691), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1152)));
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
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(704));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1160), aot_gpr_4);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1156), aot_gpr_4);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15235u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15363u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(672));
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
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(136));
      if (branch_taken) {
          goto L_08944614;
      }
      goto L_089442F4;
    }
L_089442F4:
    ctx.fpr[30] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1148), aot_gpr_4);
    aot_gpr_4 = (15267u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_gpr_5 = (2247u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_5 + static_cast<std::uint32_t>(-8224));
    aot_gpr_4 = (15349u << 16u);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(752));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(736));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(768));
    ctx.gpr[20] = (aot_gpr_5 + static_cast<std::uint32_t>(-12320));
    ctx.gpr[18] = (0u | 300u);
    goto L_08944338;
L_08944338:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1172), ctx.gpr[20]);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08944378u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944378u) goto L_08944378;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944378:
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08944388u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944388u) goto L_08944388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944388:
    aot_fpr_14 = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(776)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089443A8u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089443A8u) goto L_089443A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089443A8:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1204)));
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1148)));
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x089443E4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 25u, 0x089443E4u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089443E4u) goto L_089443E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089443E4:
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1176)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08944410u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944410u) goto L_08944410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944410:
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08944420u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944420u) goto L_08944420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944420:
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(776)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944440u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944440u) goto L_08944440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944440:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1204)));
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08944478u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 29u, 0x08944478u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944478u) goto L_08944478;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944478:
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1176)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089444A4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089444A4u) goto L_089444A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089444A4:
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x089444B4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089444B4u) goto L_089444B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089444B4:
    aot_fpr_13 = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(776)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089444D4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089444D4u) goto L_089444D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089444D4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1204)));
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x0894450Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 33u, 0x0894450Cu, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894450Cu) goto L_0894450C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894450C:
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1200)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1192)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08944534u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944534u) goto L_08944534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944534:
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08944544u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944544u) goto L_08944544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944544:
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(776)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944564u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944564u) goto L_08944564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944564:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08944598u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 37u, 0x08944598u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944598u) goto L_08944598;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944598:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(720));
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1172)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(720));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1184)));
      if (branch_taken) {
          goto L_08944338;
      }
      goto L_089445B4;
    }
L_089445B4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1152)));
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(146)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1148)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1156)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1160)));
      if (branch_taken) {
          goto L_08944614;
      }
      goto L_089445D4;
    }
L_089445D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08944600u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 40u, 0x08944600u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944600u) goto L_08944600;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944600:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(146)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089445D4;
      }
      goto L_08944614;
    }
L_08944614:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_0894461C;
    }
L_0894461C:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(784), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(785), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(786), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 196u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(787), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(800));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (15477u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15235u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15363u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (14979u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15267u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (0u | 1000u);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (2247u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1136), aot_gpr_4);
    ctx.gpr[30] = (aot_gpr_5 + static_cast<std::uint32_t>(-8224));
    aot_gpr_4 = (2247u << 16u);
    ctx.gpr[23] = (aot_gpr_4 + static_cast<std::uint32_t>(-12320));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(848));
    ctx.fpr[30] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(832));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(864));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(136));
    goto L_089446C4;
L_089446C4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1184), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1176), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08944708u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944708u) goto L_08944708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944708:
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(864)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1192)));
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[28];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(868)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944744u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944744u) goto L_08944744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944744:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(872)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944764u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944764u) goto L_08944764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944764:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1184)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1204)));
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_4 = (0u | 26u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x089447A0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 47u, 0x089447A0u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089447A0u) goto L_089447A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089447A0:
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1200)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1176)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089447D0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089447D0u) goto L_089447D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089447D0:
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(864)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1220)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[26];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(868)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[26];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1196), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944804u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944804u) goto L_08944804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944804:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(872)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944824u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944824u) goto L_08944824;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944824:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1204)));
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_4 = (0u | 26u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x0894485Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 51u, 0x0894485Cu, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894485Cu) goto L_0894485C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894485C:
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1200)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1180), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1176)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0894488Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894488Cu) goto L_0894488C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894488C:
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(864)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1220)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) ^ 0x80000000u);
    aot_fpr_12 = aot_fpr_13 + ctx.fpr[26];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1176), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(868)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089448C0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089448C0u) goto L_089448C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089448C0:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(872)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089448E0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089448E0u) goto L_089448E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089448E0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1204)));
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_4 = (0u | 26u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08944918u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 55u, 0x08944918u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944918u) goto L_08944918;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944918:
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1180)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1192)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08944940u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944940u) goto L_08944940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944940:
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(864)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1176)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(868)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1196)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944970u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944970u) goto L_08944970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944970:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[20] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(872)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08944990u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944990u) goto L_08944990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944990:
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    aot_gpr_4 = (0u | 26u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x089449C4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 59u, 0x089449C4u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089449C4u) goto L_089449C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089449C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1136)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(720));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(720));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1136), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1216)));
      if (branch_taken) {
          goto L_089446C4;
      }
      goto L_089449E4;
    }
L_089449E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_089449EC;
    }
L_089449EC:
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(880));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(896));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (14979u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 1000u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(912));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(928));
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(136));
    goto L_08944A2C;
L_08944A2C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08944A68u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 63u, 0x08944A68u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944A68u) goto L_08944A68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944A68:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08944A2C;
      }
      goto L_08944A78;
    }
L_08944A78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1152), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_08944A80;
    }
L_08944A80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(128)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08944BBC;
      }
      goto L_08944A98;
    }
L_08944A98:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1152), ctx.gpr[23]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(146)));
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08944BB4;
      }
      goto L_08944AB0;
    }
L_08944AB0:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(944));
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(136));
    goto L_08944AC4;
L_08944AC4:
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(944)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08944B04;
      }
      goto L_08944AE0;
    }
L_08944AE0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    aot_gpr_31 = (0x08944AECu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944AECu) goto L_08944AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944AEC:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(944)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08944B04;
L_08944B04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(948)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08944B3C;
      }
      goto L_08944B18;
    }
L_08944B18:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    aot_gpr_31 = (0x08944B24u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944B24u) goto L_08944B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944B24:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(948)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08944B3C;
L_08944B3C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(952)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08944B74;
      }
      goto L_08944B50;
    }
L_08944B50:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    aot_gpr_31 = (0x08944B5Cu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20998, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944B5Cu) goto L_08944B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944B5C:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(952)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08944B74;
L_08944B74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08944BA0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 78u, 0x08944BA0u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944BA0u) goto L_08944BA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944BA0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[21] + static_cast<std::uint32_t>(146)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08944AC4;
      }
      goto L_08944BB4;
    }
L_08944BB4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_08944BBC;
    }
L_08944BBC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1152), ctx.gpr[23]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[23] + static_cast<std::uint32_t>(146)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08944C24;
      }
      goto L_08944BD4;
    }
L_08944BD4:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1152)));
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(136));
    goto L_08944BE4;
L_08944BE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08944C10u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0063.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 83u, 0x08944C10u, 0x0890043Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0063_entry(rt, ctx, 90u, aot_mem);
#else
        recomp_unit_0063_entry(rt, ctx, 90u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944C10u) goto L_08944C10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944C10:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(146)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08944BE4;
      }
      goto L_08944C24;
    }
L_08944C24:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1152)));
    goto L_08944C28;
L_08944C28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08944C78;
      }
      goto L_08944C34;
    }
L_08944C34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08944C78;
      }
      goto L_08944C48;
    }
L_08944C48:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18160));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18152));
    aot_gpr_31 = (0x08944C58u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0079.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 88u, 0x08944C58u, 0x08941FE4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0079_entry(rt, ctx, 324u, aot_mem);
#else
        recomp_unit_0079_entry(rt, ctx, 324u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 324u, 0x08941FE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944C58u) goto L_08944C58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944C58:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store16(ctx.gpr[23] + static_cast<std::uint32_t>(142), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08944C78;
      }
      goto L_08944C70;
    }
L_08944C70:
    aot_gpr_31 = (0x08944C78u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0079.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 90u, 0x08944C78u, 0x08942110u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0079_entry(rt, ctx, 344u, aot_mem);
#else
        recomp_unit_0079_entry(rt, ctx, 344u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 344u, 0x08942110u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944C78u) goto L_08944C78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944C78:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1228), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1296));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08944CC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[7] = (2196u << 16u);
    aot_gpr_5 = (0u | 70u);
    aot_gpr_6 = (0u | 160u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8976));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08944CE4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7116));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 92u, 0x08944CE4u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944CE4u) goto L_08944CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944CE4:
    aot_gpr_31 = (0x08944CECu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18120));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944CECu) goto L_08944CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08944CEC:
    aot_gpr_4 = (2234u << 16u);
    ctx.gpr[7] = (2196u << 16u);
    aot_gpr_5 = (0u | 8u);
    aot_gpr_6 = (0u | 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2224));
    aot_gpr_31 = (0x08944D08u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8268));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 94u, 0x08944D08u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944D08u) goto L_08944D08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944D08:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08944D14:
    aot_gpr_5 = (0u | 3u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08944D50:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08944D74;
      }
      goto L_08944D6C;
    }
L_08944D6C:
    aot_gpr_31 = (0x08944D74u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 98u, 0x08944D74u, 0x08972D80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 621u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 621u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944D74u) goto L_08944D74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944D74:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08944D80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    aot_gpr_2 = (0u | 0u);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08944D90:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_5));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 | 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08944D9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2247u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(8736));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08944DC4u);
    aot_gpr_5 = (0u | 20u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 102u, 0x08944DC4u, 0x08B6B6ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 667u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 667u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 667u, 0x08B6B6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944DC4u) goto L_08944DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944DC4:
    aot_gpr_4 = (19646u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 48160u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (2247u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(8808));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08944DF0u);
    aot_gpr_5 = (0u | 6u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 103u, 0x08944DF0u, 0x08B6B8C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 694u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 694u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 694u, 0x08B6B8C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944DF0u) goto L_08944DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944DF0:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (2238u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(17440));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08944E0Cu);
    aot_gpr_5 = (0u | 200u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 104u, 0x08944E0Cu, 0x08B6B6ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 667u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 667u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 667u, 0x08B6B6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E0Cu) goto L_08944E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E0C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (2247u << 16u);
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(8896));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08944E28u);
    aot_gpr_5 = (0u | 30u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 105u, 0x08944E28u, 0x08B6B6ACu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 667u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 667u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 667u, 0x08B6B6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E28u) goto L_08944E28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E28:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (2198u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08944E3Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-17500));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 106u, 0x08944E3Cu, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E3Cu) goto L_08944E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E3C:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944E48u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21468));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 107u, 0x08944E48u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E48u) goto L_08944E48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E48:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944E54u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21540));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 108u, 0x08944E54u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E54u) goto L_08944E54;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E54:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944E60u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(21820));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 109u, 0x08944E60u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E60u) goto L_08944E60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E60:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944E6Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22192));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 110u, 0x08944E6Cu, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E6Cu) goto L_08944E6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E6C:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944E78u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22472));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 111u, 0x08944E78u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E78u) goto L_08944E78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E78:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944E84u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22832));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 112u, 0x08944E84u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E84u) goto L_08944E84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E84:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944E90u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(22940));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 113u, 0x08944E90u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E90u) goto L_08944E90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E90:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944E9Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23164));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 114u, 0x08944E9Cu, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944E9Cu) goto L_08944E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944E9C:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944EA8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23392));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 115u, 0x08944EA8u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944EA8u) goto L_08944EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944EA8:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944EB4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23452));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 116u, 0x08944EB4u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944EB4u) goto L_08944EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944EB4:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944EC0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23700));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 117u, 0x08944EC0u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944EC0u) goto L_08944EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944EC0:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944ECCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23928));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 118u, 0x08944ECCu, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944ECCu) goto L_08944ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944ECC:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944ED8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24212));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 119u, 0x08944ED8u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944ED8u) goto L_08944ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944ED8:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944EE4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24520));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 120u, 0x08944EE4u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944EE4u) goto L_08944EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944EE4:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944EF0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24580));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 121u, 0x08944EF0u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944EF0u) goto L_08944EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944EF0:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944EFCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24652));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 122u, 0x08944EFCu, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944EFCu) goto L_08944EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944EFC:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944F08u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24712));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 123u, 0x08944F08u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944F08u) goto L_08944F08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944F08:
    aot_gpr_4 = (2196u << 16u);
    aot_gpr_31 = (0x08944F14u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24784));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0139.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 124u, 0x08944F14u, 0x08A31530u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0139_entry(rt, ctx, 306u, aot_mem);
#else
        recomp_unit_0139_entry(rt, ctx, 306u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 306u, 0x08A31530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944F14u) goto L_08944F14;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944F14:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.gpr[16] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08944F2C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2247u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08944F40u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 126u, 0x08944F40u, 0x08B6B74Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 673u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 673u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 673u, 0x08B6B74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944F40u) goto L_08944F40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944F40:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08944F4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2247u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08944F60u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8808));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 128u, 0x08944F60u, 0x08B6B970u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 700u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 700u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 700u, 0x08B6B970u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944F60u) goto L_08944F60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944F60:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08944F6C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2238u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08944F80u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17440));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 130u, 0x08944F80u, 0x08B6B74Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 673u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 673u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 673u, 0x08B6B74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944F80u) goto L_08944F80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944F80:
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_31 = (0x08944F8Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8896));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 131u, 0x08944F8Cu, 0x08B6B74Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 673u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 673u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 673u, 0x08B6B74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944F8Cu) goto L_08944F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944F8C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08944F98:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2247u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8736));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
      if (branch_taken) {
          goto L_08944FD0;
      }
      goto L_08944FBC;
    }
L_08944FBC:
    aot_gpr_31 = (0x08944FC4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 134u, 0x08944FC4u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08944FC4u) goto L_08944FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08944FC4:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08944FBC;
      }
      goto L_08944FD0;
    }
L_08944FD0:
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
L_08944FE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2247u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8808));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    ctx.gpr[16] = (2196u << 16u);
      if (branch_taken) {
          goto L_08945038;
      }
      goto L_0894500C;
    }
L_0894500C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(19856));
    goto L_08945010;
L_08945010:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x08945024u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 139u, 0x08945024u, 0x0881DCCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 248u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 248u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945024u) goto L_08945024;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945024:
    aot_gpr_31 = (0x0894502Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 140u, 0x0894502Cu, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894502Cu) goto L_0894502C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894502C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
      if (branch_taken) {
          goto L_08945010;
      }
      goto L_08945038;
    }
L_08945038:
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
L_08945050:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2238u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08945064u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17440));
    goto L_08945070;
L_08945064:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08945070:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_4;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945138;
      }
      goto L_08945098;
    }
L_08945098:
    ctx.gpr[17] = (0u | 1u);
    goto L_0894509C;
L_0894509C:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894512C;
      }
      goto L_089450AC;
    }
L_089450AC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089450D0;
      }
      goto L_089450C0;
    }
L_089450C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089450D0;
L_089450D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_089450F8;
      }
      goto L_089450DC;
    }
L_089450DC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(58)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089450F8;
      }
      goto L_089450EC;
    }
L_089450EC:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x089450F8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089450F8u) goto L_089450F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089450F8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08945104u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0157.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 153u, 0x08945104u, 0x08A7A664u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0157_entry(rt, ctx, 496u, aot_mem);
#else
        recomp_unit_0157_entry(rt, ctx, 496u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0157_entry, 157u, 496u, 0x08A7A664u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945104u) goto L_08945104;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945104:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
      if (branch_taken) {
          goto L_0894512C;
      }
      goto L_08945110;
    }
L_08945110:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(58)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894512C;
      }
      goto L_08945120;
    }
L_08945120:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x0894512Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08861668, 23u, 203u, 0x08861668u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894512Cu) goto L_0894512C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894512C:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[16];
      if (branch_taken) {
          goto L_0894509C;
      }
      goto L_08945138;
    }
L_08945138:
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
L_08945158:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089451B0;
      }
      goto L_0894516C;
    }
L_0894516C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (0u | 255u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (2196u << 16u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x08945190u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(19840));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0006.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 160u, 0x08945190u, 0x0881DCCCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0006_entry(rt, ctx, 248u, aot_mem);
#else
        recomp_unit_0006_entry(rt, ctx, 248u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945190u) goto L_08945190;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945190:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_31 = (0x089451A8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8808));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 161u, 0x089451A8u, 0x08B6B9C0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 704u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 704u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 704u, 0x08B6B9C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089451A8u) goto L_089451A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089451A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089451CC;
      }
      goto L_089451B0;
    }
L_089451B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (2247u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089451C8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 163u, 0x089451C8u, 0x08B6B79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 677u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 677u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 677u, 0x08B6B79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089451C8u) goto L_089451C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089451C8:
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_089451CC;
L_089451CC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089451D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08945214;
      }
      goto L_089451F4;
    }
L_089451F4:
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08945204u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8896));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 167u, 0x08945204u, 0x08B6B79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 677u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 677u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 677u, 0x08B6B79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945204u) goto L_08945204;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945204:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08945214;
      }
      goto L_0894520C;
    }
L_0894520C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08945228;
      }
      goto L_08945214;
    }
L_08945214:
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08945224u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17440));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 170u, 0x08945224u, 0x08B6B79Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 677u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 677u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 677u, 0x08B6B79Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945224u) goto L_08945224;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945224:
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    goto L_08945228;
L_08945228:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08945234:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08945270;
      }
      goto L_0894523C;
    }
L_0894523C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    goto L_08945248;
L_08945248:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
        goto L_08945258;
    }
    goto L_08945258;
L_08945258:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[8];
      if (branch_taken) {
          goto L_0894527C;
      }
      goto L_08945260;
    }
L_08945260:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 9000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08945248;
      }
      goto L_08945270;
    }
L_08945270:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08945280;
      }
      goto L_0894527C;
    }
L_0894527C:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08945280;
L_08945280:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08945288:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(40))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089452B0;
      }
      goto L_08945298;
    }
L_08945298:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_089452B8;
      }
      goto L_089452A8;
    }
L_089452A8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089452C8;
      }
      goto L_089452B0;
    }
L_089452B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_089452C8;
      }
      goto L_089452B8;
    }
L_089452B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089452C8;
L_089452C8:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089452D0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089452E0:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    aot_gpr_5 = (~(aot_gpr_5 | 0u));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(aot_gpr_5));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089452F4:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(42))))));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089452FC:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08945304:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(20), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894530C:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08945314:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_089453A0;
      }
      goto L_08945330;
    }
L_08945330:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x0894533Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089462F0;
L_0894533C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6572), std::bit_cast<std::uint32_t>(aot_fpr_0));
    ctx.fpr[15] = aot_fpr_14 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[16];
    aot_fpr_13 = ctx.fpr[17] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_13 = std::sqrt(aot_fpr_13);
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_14) || std::isnan(aot_fpr_12)) && aot_fpr_14 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089453A8;
      }
      goto L_08945398;
    }
L_08945398:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089453B8;
      }
      goto L_089453A0;
    }
L_089453A0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089453CC;
      }
      goto L_089453A8;
    }
L_089453A8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089453C8;
      }
      goto L_089453B8;
    }
L_089453B8:
    aot_gpr_31 = (0x089453C0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 199u, 0x089453C0u, 0x08964540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089453C0u) goto L_089453C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089453C0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
      if (branch_taken) {
          goto L_089453C8;
      }
      goto L_089453C8;
    }
L_089453C8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6576), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089453CC;
L_089453CC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089453DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945410;
      }
      goto L_089453FC;
    }
L_089453FC:
    aot_gpr_31 = (0x08945404u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0894530C;
L_08945404:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08945410u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    goto L_0894628C;
L_08945410:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08945424:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0894551C;
      }
      goto L_08945450;
    }
L_08945450:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08945460u);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    goto L_089452F4;
L_08945460:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08945514;
      }
      goto L_08945478;
    }
L_08945478:
    aot_gpr_4 = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08945514;
      }
      goto L_08945484;
    }
L_08945484:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945514;
      }
      goto L_089454A0;
    }
L_089454A0:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x089454ACu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 212u, 0x089454ACu, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089454ACu) goto L_089454AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089454AC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x089454B8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 213u, 0x089454B8u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089454B8u) goto L_089454B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089454B8:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089454C8u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_089454C8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08945514;
      }
      goto L_089454E0;
    }
L_089454E0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15820u << 16u);
      if (branch_taken) {
          goto L_0894550C;
      }
      goto L_089454E8;
    }
L_089454E8:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945514;
      }
      goto L_0894550C;
    }
L_0894550C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945520;
      }
      goto L_08945514;
    }
L_08945514:
    aot_gpr_31 = (0x0894551Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 219u, 0x0894551Cu, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894551Cu) goto L_0894551C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894551C:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    goto L_08945520;
L_08945520:
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
L_0894553C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945690;
      }
      goto L_08945568;
    }
L_08945568:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x0894557Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 223u, 0x0894557Cu, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894557Cu) goto L_0894557C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894557C:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08945588u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945588:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08945594u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 225u, 0x08945594u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945594u) goto L_08945594;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945594:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089455A4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_089455A4:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
      if (branch_taken) {
          goto L_08945620;
      }
      goto L_089455BC;
    }
L_089455BC:
    aot_gpr_4 = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08945620;
      }
      goto L_089455C8;
    }
L_089455C8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945620;
      }
      goto L_089455E4;
    }
L_089455E4:
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08945620;
      }
      goto L_089455F8;
    }
L_089455F8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15820u << 16u);
      if (branch_taken) {
          goto L_08945634;
      }
      goto L_08945600;
    }
L_08945600:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945634;
      }
      goto L_08945620;
    }
L_08945620:
    aot_gpr_4 = (ctx.gpr[17] & 64u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0894563C;
      }
      goto L_0894562C;
    }
L_0894562C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08945670;
      }
      goto L_08945634;
    }
L_08945634:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945694;
      }
      goto L_0894563C;
    }
L_0894563C:
    aot_gpr_4 = (14545u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 46871u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08945658u);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    goto L_08945158;
L_08945658:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08945668;
      }
      goto L_08945660;
    }
L_08945660:
    aot_gpr_31 = (0x08945668u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 238u, 0x08945668u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945668u) goto L_08945668;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945668:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945694;
      }
      goto L_08945670;
    }
L_08945670:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08945680u);
    aot_gpr_5 = (0u | 0u);
    goto L_08945158;
L_08945680:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08945690;
      }
      goto L_08945688;
    }
L_08945688:
    aot_gpr_31 = (0x08945690u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 242u, 0x08945690u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945690u) goto L_08945690;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945690:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    goto L_08945694;
L_08945694:
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
L_089456B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089457A8;
      }
      goto L_089456DC;
    }
L_089456DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089456ECu);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    goto L_089452F4;
L_089456EC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_08945704;
    }
L_08945704:
    aot_gpr_4 = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_08945710;
    }
L_08945710:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_0894572C;
    }
L_0894572C:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08945738u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 250u, 0x08945738u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945738u) goto L_08945738;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945738:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08945744u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 251u, 0x08945744u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945744u) goto L_08945744;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945744:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08945754u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_08945754:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_0894576C;
    }
L_0894576C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15820u << 16u);
      if (branch_taken) {
          goto L_08945798;
      }
      goto L_08945774;
    }
L_08945774:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089457A0;
      }
      goto L_08945798;
    }
L_08945798:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089457AC;
      }
      goto L_089457A0;
    }
L_089457A0:
    aot_gpr_31 = (0x089457A8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 257u, 0x089457A8u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089457A8u) goto L_089457A8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089457A8:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    goto L_089457AC;
L_089457AC:
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
L_089457C8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945910;
      }
      goto L_089457F4;
    }
L_089457F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08945808u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 261u, 0x08945808u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945808u) goto L_08945808;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945808:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08945814u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945814:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08945820u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 263u, 0x08945820u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945820u) goto L_08945820;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945820:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08945830u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_08945830:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
      if (branch_taken) {
          goto L_089458AC;
      }
      goto L_08945848;
    }
L_08945848:
    aot_gpr_4 = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_089458AC;
      }
      goto L_08945854;
    }
L_08945854:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089458AC;
      }
      goto L_08945870;
    }
L_08945870:
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_089458AC;
      }
      goto L_08945884;
    }
L_08945884:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15820u << 16u);
      if (branch_taken) {
          goto L_089458C0;
      }
      goto L_0894588C;
    }
L_0894588C:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089458C0;
      }
      goto L_089458AC;
    }
L_089458AC:
    aot_gpr_4 = (ctx.gpr[17] & 64u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089458C8;
      }
      goto L_089458B8;
    }
L_089458B8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089458F0;
      }
      goto L_089458C0;
    }
L_089458C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945914;
      }
      goto L_089458C8;
    }
L_089458C8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x089458D8u);
    aot_gpr_5 = (0u | 0u);
    goto L_08945158;
L_089458D8:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089458E8;
      }
      goto L_089458E0;
    }
L_089458E0:
    aot_gpr_31 = (0x089458E8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 276u, 0x089458E8u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089458E8u) goto L_089458E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089458E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945914;
      }
      goto L_089458F0;
    }
L_089458F0:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08945900u);
    aot_gpr_5 = (0u | 0u);
    goto L_08945158;
L_08945900:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08945910;
      }
      goto L_08945908;
    }
L_08945908:
    aot_gpr_31 = (0x08945910u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 280u, 0x08945910u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945910u) goto L_08945910;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945910:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    goto L_08945914;
L_08945914:
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
L_08945930:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08945944u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_08945288;
L_08945944:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_gpr_31 = (0x08945954u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 284u, 0x08945954u, 0x08AAE058u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 384u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 384u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 384u, 0x08AAE058u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945954u) goto L_08945954;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945954:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08945988;
      }
      goto L_08945960;
    }
L_08945960:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08945980;
      }
      goto L_08945970;
    }
L_08945970:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08945980u);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 287u, 0x08945980u, 0x0895B470u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 455u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 455u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 455u, 0x0895B470u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945980u) goto L_08945980;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945980:
    aot_gpr_31 = (0x08945988u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 288u, 0x08945988u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945988u) goto L_08945988;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945988:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894599C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945A60;
      }
      goto L_089459C4;
    }
L_089459C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x089459D8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 291u, 0x089459D8u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089459D8u) goto L_089459D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089459D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x089459E4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 292u, 0x089459E4u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089459E4u) goto L_089459E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089459E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = ctx.fpr[18] + aot_fpr_12;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_gpr_31 = (0x08945A50u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[16];
    goto L_08945158;
L_08945A50:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08945A60;
      }
      goto L_08945A58;
    }
L_08945A58:
    aot_gpr_31 = (0x08945A60u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 295u, 0x08945A60u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945A60u) goto L_08945A60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945A60:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08945A7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945B44;
      }
      goto L_08945AA4;
    }
L_08945AA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08945AB8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 298u, 0x08945AB8u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945AB8u) goto L_08945AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945AB8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08945AC4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 299u, 0x08945AC4u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945AC4u) goto L_08945AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945AC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(ctx.fpr[16])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = ctx.fpr[18] + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_31 = (0x08945B34u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_08945158;
L_08945B34:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08945B44;
      }
      goto L_08945B3C;
    }
L_08945B3C:
    aot_gpr_31 = (0x08945B44u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 302u, 0x08945B44u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945B44u) goto L_08945B44;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945B44:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08945B60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945B88;
      }
      goto L_08945B80;
    }
L_08945B80:
    aot_gpr_31 = (0x08945B88u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 305u, 0x08945B88u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945B88u) goto L_08945B88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945B88:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08945B9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8928)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945C78;
      }
      goto L_08945BC4;
    }
L_08945BC4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945C78;
      }
      goto L_08945BD8;
    }
L_08945BD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08945C70;
      }
      goto L_08945BF0;
    }
L_08945BF0:
    aot_gpr_31 = (0x08945BF8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945BF8:
    aot_gpr_4 = (aot_gpr_2 & 2048u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08945C70;
      }
      goto L_08945C04;
    }
L_08945C04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945C70;
      }
      goto L_08945C20;
    }
L_08945C20:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08945C2Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 313u, 0x08945C2Cu, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945C2Cu) goto L_08945C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945C2C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08945C38u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 314u, 0x08945C38u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945C38u) goto L_08945C38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945C38:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08945C44u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945C44:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08945C54u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    goto L_08946354;
L_08945C54:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945C70;
      }
      goto L_08945C68;
    }
L_08945C68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945C7C;
      }
      goto L_08945C70;
    }
L_08945C70:
    aot_gpr_31 = (0x08945C78u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 319u, 0x08945C78u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945C78u) goto L_08945C78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945C78:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    goto L_08945C7C;
L_08945C7C:
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
L_08945C94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8928)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945D5C;
      }
      goto L_08945CBC;
    }
L_08945CBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08945D54;
      }
      goto L_08945CD4;
    }
L_08945CD4:
    aot_gpr_31 = (0x08945CDCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945CDC:
    aot_gpr_4 = (aot_gpr_2 & 2048u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08945D54;
      }
      goto L_08945CE8;
    }
L_08945CE8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945D54;
      }
      goto L_08945D04;
    }
L_08945D04:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08945D10u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 327u, 0x08945D10u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945D10u) goto L_08945D10;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945D10:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08945D1Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 328u, 0x08945D1Cu, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945D1Cu) goto L_08945D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945D1C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08945D28u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945D28:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08945D38u);
    aot_gpr_6 = (aot_gpr_2 | 0u);
    goto L_08946354;
L_08945D38:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945D54;
      }
      goto L_08945D4C;
    }
L_08945D4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945D60;
      }
      goto L_08945D54;
    }
L_08945D54:
    aot_gpr_31 = (0x08945D5Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 333u, 0x08945D5Cu, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945D5Cu) goto L_08945D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945D5C:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    goto L_08945D60;
L_08945D60:
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
L_08945D78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8928)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945E74;
      }
      goto L_08945DA4;
    }
L_08945DA4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945E74;
      }
      goto L_08945DB8;
    }
L_08945DB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08945DCCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 338u, 0x08945DCCu, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945DCCu) goto L_08945DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945DCC:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08945DD8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945DD8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08945DE4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 340u, 0x08945DE4u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945DE4u) goto L_08945DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945DE4:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08945DF4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_08945DF4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
      if (branch_taken) {
          goto L_08945E44;
      }
      goto L_08945E0C;
    }
L_08945E0C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[17] & 2048u);
      if (branch_taken) {
          goto L_08945E44;
      }
      goto L_08945E20;
    }
L_08945E20:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08945E44;
      }
      goto L_08945E28;
    }
L_08945E28:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945E64;
      }
      goto L_08945E44;
    }
L_08945E44:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08945E54u);
    aot_gpr_5 = (0u | 0u);
    goto L_08945158;
L_08945E54:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08945E6C;
      }
      goto L_08945E5C;
    }
L_08945E5C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08945E74;
      }
      goto L_08945E64;
    }
L_08945E64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945E78;
      }
      goto L_08945E6C;
    }
L_08945E6C:
    aot_gpr_31 = (0x08945E74u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 350u, 0x08945E74u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945E74u) goto L_08945E74;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945E74:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    goto L_08945E78;
L_08945E78:
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
L_08945E94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8928)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945FA8;
      }
      goto L_08945EC0;
    }
L_08945EC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08945ED4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 354u, 0x08945ED4u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945ED4u) goto L_08945ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945ED4:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08945EE0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089452F4;
L_08945EE0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08945EECu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 356u, 0x08945EECu, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945EECu) goto L_08945EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945EEC:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08945EFCu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08946354;
L_08945EFC:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8944)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0));
      if (branch_taken) {
          goto L_08945F78;
      }
      goto L_08945F14;
    }
L_08945F14:
    aot_gpr_4 = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08945F78;
      }
      goto L_08945F20;
    }
L_08945F20:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6576)));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945F78;
      }
      goto L_08945F3C;
    }
L_08945F3C:
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[17] & 256u);
      if (branch_taken) {
          goto L_08945F78;
      }
      goto L_08945F50;
    }
L_08945F50:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15820u << 16u);
      if (branch_taken) {
          goto L_08945F98;
      }
      goto L_08945F58;
    }
L_08945F58:
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08945F98;
      }
      goto L_08945F78;
    }
L_08945F78:
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08945F88u);
    aot_gpr_5 = (0u | 0u);
    goto L_08945158;
L_08945F88:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08945FA0;
      }
      goto L_08945F90;
    }
L_08945F90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08945FA8;
      }
      goto L_08945F98;
    }
L_08945F98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08945FAC;
      }
      goto L_08945FA0;
    }
L_08945FA0:
    aot_gpr_31 = (0x08945FA8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 368u, 0x08945FA8u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945FA8u) goto L_08945FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945FA8:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    goto L_08945FAC;
L_08945FAC:
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
L_08945FC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08945FF0;
      }
      goto L_08945FE8;
    }
L_08945FE8:
    aot_gpr_31 = (0x08945FF0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 372u, 0x08945FF0u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08945FF0u) goto L_08945FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08945FF0:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946004:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8916)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08946038;
      }
      goto L_08946024;
    }
L_08946024:
    aot_gpr_31 = (0x0894602Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0894530C;
L_0894602C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08946038u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    goto L_0894628C;
L_08946038:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894604C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08946074;
      }
      goto L_0894606C;
    }
L_0894606C:
    aot_gpr_31 = (0x08946074u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 379u, 0x08946074u, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946074u) goto L_08946074;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946074:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946088:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8932)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6572)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089460BC;
      }
      goto L_089460A8;
    }
L_089460A8:
    aot_gpr_31 = (0x089460B0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0894530C;
L_089460B0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089460BCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    goto L_0894628C;
L_089460BC:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089460D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089460F0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089462F0;
L_089460F0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8936)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_0)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08946118;
      }
      goto L_08946104;
    }
L_08946104:
    aot_gpr_31 = (0x0894610Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0894530C;
L_0894610C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08946118u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    goto L_0894628C;
L_08946118:
    aot_gpr_2 = (ctx.gpr[16] | 0u);
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
L_08946130:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08946140;
      }
      goto L_08946138;
    }
L_08946138:
    aot_gpr_5 = (2198u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-17500));
    goto L_08946140;
L_08946140:
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08946150;
      }
      goto L_08946148;
    }
L_08946148:
    aot_gpr_5 = (2198u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-17500));
    goto L_08946150;
L_08946150:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(36), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946158:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08946168u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18096), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 395u, 0x08946168u, 0x08890828u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 121u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 121u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 121u, 0x08890828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946168u) goto L_08946168;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946168:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (aot_gpr_2 + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092), aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
      if (branch_taken) {
          goto L_089461B4;
      }
      goto L_089461A8;
    }
L_089461A8:
    aot_gpr_6 = (0u | 37u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_4 = (16800u << 16u);
      if (branch_taken) {
          goto L_089461C8;
      }
      goto L_089461B4;
    }
L_089461B4:
    aot_gpr_4 = (18804u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 9216u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8944), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089461D8;
      }
      goto L_089461C8;
    }
L_089461C8:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8944), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_089461D8;
L_089461D8:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1952)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17036u << 16u);
    aot_gpr_5 = (17076u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (17116u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8916), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8928), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8920), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8924), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(8932), aot_run_words); }
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894624C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    jump_target = aot_gpr_31;
    aot_fpr_0 = aot_fpr_12 + aot_fpr_0;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894628C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (23808u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_5 = (aot_gpr_5 | aot_gpr_6);
    ctx.gpr[16] = (2236u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x089462BCu);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29552), aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0085.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 402u, 0x089462BCu, 0x0895BBA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0085_entry(rt, ctx, 528u, aot_mem);
#else
        recomp_unit_0085_entry(rt, ctx, 528u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089462BCu) goto L_089462BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089462BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    aot_gpr_5 = (23808u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(255));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29552), aot_gpr_4);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089462E8:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u | 1u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089462F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08946304u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0091.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 405u, 0x08946304u, 0x08973704u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0091_entry(rt, ctx, 725u, aot_mem);
#else
        recomp_unit_0091_entry(rt, ctx, 725u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946304u) goto L_08946304;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946304:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_0 = aot_fpr_12 + aot_fpr_0;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946354:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18092)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[15];
    aot_gpr_4 = (aot_gpr_6 & 48u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089463C4;
      }
      goto L_08946394;
    }
L_08946394:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    { const bool branch_taken = 0u == 0u;
    aot_fpr_0 = aot_fpr_12 + aot_fpr_0;
      if (branch_taken) {
          goto L_08946404;
      }
      goto L_089463C4;
    }
L_089463C4:
    aot_gpr_4 = (aot_gpr_6 & 12u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946400;
      }
      goto L_089463D0;
    }
L_089463D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_0 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_0 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    { const bool branch_taken = 0u == 0u;
    aot_fpr_0 = aot_fpr_12 + aot_fpr_0;
      if (branch_taken) {
          goto L_08946404;
      }
      goto L_08946400;
    }
L_08946400:
    aot_fpr_0 = std::bit_cast<float>(0u);
    goto L_08946404;
L_08946404:
    aot_gpr_4 = (aot_gpr_6 & 36u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946414;
      }
      goto L_08946410;
    }
L_08946410:
    aot_fpr_0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_0) ^ 0x80000000u);
    goto L_08946414;
L_08946414:
    aot_gpr_4 = (aot_gpr_6 & 1536u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089464E0;
      }
      goto L_08946420;
    }
L_08946420:
    aot_gpr_4 = (aot_gpr_6 & 512u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_13 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08946460;
      }
      goto L_0894642C;
    }
L_0894642C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08946498;
      }
      goto L_08946460;
    }
L_08946460:
    aot_gpr_4 = (aot_gpr_6 & 1024u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946498;
      }
      goto L_0894646C;
    }
L_0894646C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    goto L_08946498;
L_08946498:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089464BC;
      }
      goto L_089464A8;
    }
L_089464A8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089464BC;
      }
      goto L_089464B8;
    }
L_089464B8:
    aot_fpr_0 = aot_fpr_0 + aot_fpr_12;
    goto L_089464BC;
L_089464BC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_0 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089464E0;
      }
      goto L_089464CC;
    }
L_089464CC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089464E0;
      }
      goto L_089464DC;
    }
L_089464DC:
    aot_fpr_0 = aot_fpr_0 + aot_fpr_12;
    goto L_089464E0;
L_089464E0:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089464E8:
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8736));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8808));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(80), 0u);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(17440));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8896));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894651C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0894653Cu);
    aot_gpr_5 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 427u, 0x0894653Cu, 0x088079D0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 555u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 555u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894653Cu) goto L_0894653C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894653C:
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18004));
    aot_gpr_31 = (0x0894654Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 428u, 0x0894654Cu, 0x0889D344u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 249u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 249u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894654Cu) goto L_0894654C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894654C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08946558u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0000.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 429u, 0x08946558u, 0x08807510u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0000_entry(rt, ctx, 492u, aot_mem);
#else
        recomp_unit_0000_entry(rt, ctx, 492u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946558u) goto L_08946558;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946558:
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
L_0894656C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_31 = (0x0894659Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894659Cu) goto L_0894659C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894659C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x089465C0u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 432u, 0x089465C0u, 0x08931AF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 315u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 315u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089465C0u) goto L_089465C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089465C0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (49864u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_0894660C;
      }
      goto L_089465DC;
    }
L_089465DC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089465E8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089465E8u) goto L_089465E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089465E8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_0));
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08946628;
      }
      goto L_08946604;
    }
L_08946604:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08946668;
      }
      goto L_0894660C;
    }
L_0894660C:
    aot_gpr_6 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08946620u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-9496));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 437u, 0x08946620u, 0x0889CFFCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 201u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 201u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946620u) goto L_08946620;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946620:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894674C;
      }
      goto L_08946628;
    }
L_08946628:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
      if (branch_taken) {
          goto L_08946680;
      }
      goto L_08946638;
    }
L_08946638:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(146)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
      if (branch_taken) {
          goto L_08946680;
      }
      goto L_08946648;
    }
L_08946648:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
      if (branch_taken) {
          goto L_08946680;
      }
      goto L_08946658;
    }
L_08946658:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
      if (branch_taken) {
          goto L_08946680;
      }
      goto L_08946668;
    }
L_08946668:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
      if (branch_taken) {
          goto L_089466C4;
      }
      goto L_08946678;
    }
L_08946678:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08946688;
      }
      goto L_08946680;
    }
L_08946680:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0894674C;
      }
      goto L_08946688;
    }
L_08946688:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(146)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
      if (branch_taken) {
          goto L_089466C4;
      }
      goto L_08946694;
    }
L_08946694:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
      if (branch_taken) {
          goto L_089466C4;
      }
      goto L_089466A4;
    }
L_089466A4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_5;
      if (branch_taken) {
          goto L_089466C4;
      }
      goto L_089466B4;
    }
L_089466B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_5;
      if (branch_taken) {
          goto L_089466C8;
      }
      goto L_089466C4;
    }
L_089466C4:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_089466C8;
L_089466C8:
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[21] = (0u | 2u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[21] = (0u | 15u);
        goto L_089466DC;
    }
    goto L_089466DC;
L_089466DC:
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x089466FCu);
    ctx.gpr[10] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0060.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 452u, 0x089466FCu, 0x088F5A3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0060_entry(rt, ctx, 409u, aot_mem);
#else
        recomp_unit_0060_entry(rt, ctx, 409u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089466FCu) goto L_089466FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089466FC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0894670Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_0894651C;
L_0894670C:
    ctx.gpr[16] = (0u | 0u);
    aot_gpr_31 = (0x08946718u);
    aot_gpr_4 = (0u | 132u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 454u, 0x08946718u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946718u) goto L_08946718;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946718:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_gpr_4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08946730;
      }
      goto L_08946724;
    }
L_08946724:
    aot_gpr_31 = (0x0894672Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0129.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 456u, 0x0894672Cu, 0x08A0A1DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0129_entry(rt, ctx, 314u, aot_mem);
#else
        recomp_unit_0129_entry(rt, ctx, 314u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 314u, 0x08A0A1DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894672Cu) goto L_0894672C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894672C:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_08946730;
L_08946730:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(116));
    aot_gpr_31 = (0x0894673Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 458u, 0x0894673Cu, 0x08933F0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 759u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 759u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894673Cu) goto L_0894673C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894673C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08946748u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 459u, 0x08946748u, 0x088BAFE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 623u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 623u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 623u, 0x088BAFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946748u) goto L_08946748;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946748:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    goto L_0894674C;
L_0894674C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
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
L_08946770:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    goto L_089467AC;
L_089467AC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_6 >> 30u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    aot_gpr_6 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (aot_gpr_4 | 0u);
        goto L_089467DC;
    }
    goto L_089467DC;
L_089467DC:
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946860;
      }
      goto L_089467E8;
    }
L_089467E8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089467F4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 465u, 0x089467F4u, 0x08ADC0F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089467F4u) goto L_089467F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089467F4:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08946854;
      }
      goto L_089467FC;
    }
L_089467FC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08946808u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 467u, 0x08946808u, 0x08ADC0F0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 12u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 12u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946808u) goto L_08946808;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946808:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08946838;
    }
    goto L_08946818;
L_08946818:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08946828u);
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 469u, 0x08946828u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946828u) goto L_08946828;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946828:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08946838;
L_08946838:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(102)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946854;
      }
      goto L_0894684C;
    }
L_0894684C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_08946854;
L_08946854:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089467AC;
      }
      goto L_08946860;
    }
L_08946860:
    { const bool branch_taken = ctx.gpr[17] != 0u;
      if (branch_taken) {
          goto L_089468A8;
      }
      goto L_08946868;
    }
L_08946868:
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[8] = (0u | 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31024));
    goto L_0894687C;
L_0894687C:
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
      if (branch_taken) {
          goto L_08946890;
      }
      goto L_08946888;
    }
L_08946888:
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[8];
      if (branch_taken) {
          goto L_08946898;
      }
      goto L_08946890;
    }
L_08946890:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_08946898;
L_08946898:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 336 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0894687C;
      }
      goto L_089468A8;
    }
L_089468A8:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089468B8u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089468B8u) goto L_089468B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089468B8:
    aot_gpr_2 = (0u | 1u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089468E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18004));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x089468FCu);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 482u, 0x089468FCu, 0x0889D374u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 252u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 252u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089468FCu) goto L_089468FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089468FC:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08946924;
      }
      goto L_08946908;
    }
L_08946908:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[16];
      if (branch_taken) {
          goto L_08946924;
      }
      goto L_08946918;
    }
L_08946918:
    aot_gpr_31 = (0x08946920u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0059.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 485u, 0x08946920u, 0x088F2DDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0059_entry(rt, ctx, 608u, aot_mem);
#else
        recomp_unit_0059_entry(rt, ctx, 608u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 608u, 0x088F2DDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946920u) goto L_08946920;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946920:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08946924;
L_08946924:
    aot_gpr_2 = (0u | 0u);
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
L_0894693C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18004));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08946960u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 488u, 0x08946960u, 0x0889D374u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 252u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 252u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946960u) goto L_08946960;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946960:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089469AC;
      }
      goto L_0894696C;
    }
L_0894696C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089469AC;
      }
      goto L_0894697C;
    }
L_0894697C:
    aot_gpr_31 = (0x08946984u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0059.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 491u, 0x08946984u, 0x088F352Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0059_entry(rt, ctx, 659u, aot_mem);
#else
        recomp_unit_0059_entry(rt, ctx, 659u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 659u, 0x088F352Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946984u) goto L_08946984;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946984:
    aot_gpr_5 = (2246u << 16u);
    aot_gpr_4 = (aot_gpr_2 << 6u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(31024));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(57)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089469A4u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089469A4u) goto L_089469A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089469A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089469B0;
      }
      goto L_089469AC;
    }
L_089469AC:
    aot_gpr_2 = (0u | 0u);
    goto L_089469B0;
L_089469B0:
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
L_089469C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18004));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089469E8u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0038.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 496u, 0x089469E8u, 0x0889D374u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0038_entry(rt, ctx, 252u, aot_mem);
#else
        recomp_unit_0038_entry(rt, ctx, 252u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089469E8u) goto L_089469E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089469E8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946A2C;
      }
      goto L_089469F4;
    }
L_089469F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08946A2C;
      }
      goto L_08946A04;
    }
L_08946A04:
    aot_gpr_31 = (0x08946A0Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0059.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 499u, 0x08946A0Cu, 0x088F352Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0059_entry(rt, ctx, 659u, aot_mem);
#else
        recomp_unit_0059_entry(rt, ctx, 659u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 659u, 0x088F352Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946A0Cu) goto L_08946A0C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946A0C:
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_5 = (aot_gpr_2 << 6u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31024));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_31 = (0x08946A24u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 500u, 0x08946A24u, 0x08931AD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946A24u) goto L_08946A24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946A24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08946A30;
      }
      goto L_08946A2C;
    }
L_08946A2C:
    aot_gpr_2 = (0u | 0u);
    goto L_08946A30;
L_08946A30:
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
L_08946A44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08946A58u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-11072));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0059.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 504u, 0x08946A58u, 0x088F3420u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0059_entry(rt, ctx, 644u, aot_mem);
#else
        recomp_unit_0059_entry(rt, ctx, 644u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 644u, 0x088F3420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946A58u) goto L_08946A58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946A58:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946A68:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08946A80u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(144));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 506u, 0x08946A80u, 0x08931AD0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 313u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 313u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946A80u) goto L_08946A80;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946A80:
    aot_gpr_2 = (0u | 1u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946A90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08946AA0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0059.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 508u, 0x08946AA0u, 0x088F3AC4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0059_entry(rt, ctx, 733u, aot_mem);
#else
        recomp_unit_0059_entry(rt, ctx, 733u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0059_entry, 59u, 733u, 0x088F3AC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946AA0u) goto L_08946AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946AA0:
    aot_gpr_2 = (0u | 0u);
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946AB0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2232u << 16u);
      if (branch_taken) {
          goto L_08946AD4;
      }
      goto L_08946AC4;
    }
L_08946AC4:
    aot_gpr_31 = (0x08946ACCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946ACCu) goto L_08946ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08946ACC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2232u << 16u);
    goto L_08946AD4;
L_08946AD4:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18004));
    aot_gpr_31 = (0x08946AE0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-9648));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 513u, 0x08946AE0u, 0x08885284u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 270u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 270u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946AE0u) goto L_08946AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946AE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2232u << 16u);
      if (branch_taken) {
          goto L_08946AFC;
      }
      goto L_08946AEC;
    }
L_08946AEC:
    aot_gpr_31 = (0x08946AF4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946AF4u) goto L_08946AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08946AF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2232u << 16u);
    goto L_08946AFC;
L_08946AFC:
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08946B08u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-9552));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 517u, 0x08946B08u, 0x08885220u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 266u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 266u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946B08u) goto L_08946B08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946B08:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946B14:
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
L_08946B3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08946B4Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946B4Cu) goto L_08946B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08946B4C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946B58:
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
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946B9C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1780))))));
    aot_gpr_2 = (aot_gpr_4 & 2u);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946BAC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08946CF0;
      }
      goto L_08946BD0;
    }
L_08946BD0:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23360));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_31 = (0x08946BE4u);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2288));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0172.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 525u, 0x08946BE4u, 0x08AB4074u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0172_entry(rt, ctx, 13u, aot_mem);
#else
        recomp_unit_0172_entry(rt, ctx, 13u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0172_entry, 172u, 13u, 0x08AB4074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946BE4u) goto L_08946BE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946BE4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3292)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(6000));
      if (branch_taken) {
          goto L_08946C80;
      }
      goto L_08946BF0;
    }
L_08946BF0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08946C1C;
      }
      goto L_08946BF8;
    }
L_08946BF8:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(152));
        goto L_08946C20;
    }
    goto L_08946C00;
L_08946C00:
    aot_gpr_31 = (0x08946C08u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0217.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 529u, 0x08946C08u, 0x08B6BAECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0217_entry(rt, ctx, 721u, aot_mem);
#else
        recomp_unit_0217_entry(rt, ctx, 721u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 721u, 0x08B6BAECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946C08u) goto L_08946C08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946C08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(6000)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(152));
        goto L_08946C20;
    }
    goto L_08946C14;
L_08946C14:
    aot_gpr_31 = (0x08946C1Cu);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946C1Cu) goto L_08946C1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08946C1C:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(152));
    goto L_08946C20;
L_08946C20:
    aot_gpr_31 = (0x08946C28u);
    aot_gpr_5 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0032.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 533u, 0x08946C28u, 0x088876BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0032_entry(rt, ctx, 771u, aot_mem);
#else
        recomp_unit_0032_entry(rt, ctx, 771u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 771u, 0x088876BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946C28u) goto L_08946C28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946C28:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (2234u << 16u);
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C30;
    }
L_08946C30:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(29640));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), aot_gpr_4);
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C3C;
    }
L_08946C3C:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(19080));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C54;
    }
L_08946C54:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C5C;
    }
L_08946C5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C68;
    }
L_08946C68:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946C78;
      }
      goto L_08946C70;
    }
L_08946C70:
    aot_gpr_31 = (0x08946C78u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946C78u) goto L_08946C78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08946C78:
    aot_gpr_31 = (0x08946C80u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946C80u) goto L_08946C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08946C80:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3292), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946CD0;
      }
      goto L_08946C90;
    }
L_08946C90:
    aot_gpr_31 = (0x08946C98u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 543u, 0x08946C98u, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946C98u) goto L_08946C98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946C98:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946CC8;
      }
      goto L_08946CAC;
    }
L_08946CAC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08946CC8u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946CC8u) goto L_08946CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08946CC8:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17613), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3304), 0u);
    goto L_08946CD0;
L_08946CD0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08946CDCu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0064.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 547u, 0x08946CDCu, 0x08905FECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0064_entry(rt, ctx, 416u, aot_mem);
#else
        recomp_unit_0064_entry(rt, ctx, 416u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 416u, 0x08905FECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946CDCu) goto L_08946CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946CDC:
    aot_gpr_4 = (ctx.gpr[17] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946CF0;
      }
      goto L_08946CE8;
    }
L_08946CE8:
    aot_gpr_31 = (0x08946CF0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0064.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 549u, 0x08946CF0u, 0x08906308u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0064_entry(rt, ctx, 477u, aot_mem);
#else
        recomp_unit_0064_entry(rt, ctx, 477u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 477u, 0x08906308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946CF0u) goto L_08946CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946CF0:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_08946D0C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4196)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08946D20;
      }
      goto L_08946D18;
    }
L_08946D18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(2016));
      if (branch_taken) {
          goto L_08946D28;
      }
      goto L_08946D20;
    }
L_08946D20:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(4));
    goto L_08946D28;
L_08946D28:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946D30:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4196)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08946D44;
      }
      goto L_08946D3C;
    }
L_08946D3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(2016));
      if (branch_taken) {
          goto L_08946D4C;
      }
      goto L_08946D44;
    }
L_08946D44:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(4));
    goto L_08946D4C;
L_08946D4C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946D54:
    aot_gpr_2 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(152));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946D60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x08946D8Cu);
    aot_gpr_4 = (0u | 3344u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0064.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 560u, 0x08946D8Cu, 0x089062ECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0064_entry(rt, ctx, 475u, aot_mem);
#else
        recomp_unit_0064_entry(rt, ctx, 475u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946D8Cu) goto L_08946D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946D8C:
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[16] << 8u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    ctx.gpr[16] = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + aot_gpr_4);
      if (branch_taken) {
          goto L_08946DC4;
      }
      goto L_08946DB4;
    }
L_08946DB4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08946DC0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0081.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 562u, 0x08946DC0u, 0x08949E34u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0081_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0081_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 420u, 0x08949E34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946DC0u) goto L_08946DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946DC0:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08946DC4;
L_08946DC4:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
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
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08946DE8u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0022.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 564u, 0x08946DE8u, 0x0885FA28u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0022_entry(rt, ctx, 923u, aot_mem);
#else
        recomp_unit_0022_entry(rt, ctx, 923u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946DE8u) goto L_08946DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946DE8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08946DFCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0023.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 565u, 0x08946DFCu, 0x08860094u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0023_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0023_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946DFCu) goto L_08946DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946DFC:
    aot_gpr_31 = (0x08946E04u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 566u, 0x08946E04u, 0x08891A2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 224u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 224u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946E04u) goto L_08946E04;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946E04:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17146u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_08946E28;
    }
    goto L_08946E28;
L_08946E28:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08946E3Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0081.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 568u, 0x08946E3Cu, 0x08949CA8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0081_entry(rt, ctx, 400u, aot_mem);
#else
        recomp_unit_0081_entry(rt, ctx, 400u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 400u, 0x08949CA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946E3Cu) goto L_08946E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946E3C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946E58:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_6 = (aot_gpr_6 | 128u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08946E9Cu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 570u, 0x08946E9Cu, 0x08891B8Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 247u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 247u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946E9Cu) goto L_08946E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946E9C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946EA8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08946EDCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0035.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 572u, 0x08946EDCu, 0x08891A2Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0035_entry(rt, ctx, 224u, aot_mem);
#else
        recomp_unit_0035_entry(rt, ctx, 224u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946EDCu) goto L_08946EDC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946EDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946F00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08946F24;
      }
      goto L_08946F14;
    }
L_08946F14:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x08946F24u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0141.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 575u, 0x08946F24u, 0x08A39C74u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0141_entry(rt, ctx, 427u, aot_mem);
#else
        recomp_unit_0141_entry(rt, ctx, 427u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 427u, 0x08A39C74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946F24u) goto L_08946F24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946F24:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946F30:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08946F38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (0u | 2u);
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (0u | 5u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.gpr[17] = (0u | 44u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_5 = (0u | 7u);
    aot_gpr_4 = (50298u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (aot_gpr_29 | 0u);
    goto L_08946F9C;
L_08946F9C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08946FACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 579u, 0x08946FACu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946FACu) goto L_08946FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946FAC:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
      if (branch_taken) {
          goto L_0894707C;
      }
      goto L_08946FB8;
    }
L_08946FB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08946FD0;
      }
      goto L_08946FC4;
    }
L_08946FC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_0894707C;
      }
      goto L_08946FD0;
    }
L_08946FD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08946FE8;
    }
    goto L_08946FDC;
L_08946FDC:
    aot_gpr_31 = (0x08946FE4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946FE4u) goto L_08946FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08946FE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08946FE8;
L_08946FE8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    aot_gpr_31 = (0x08946FF4u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0078.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 586u, 0x08946FF4u, 0x0893E8D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0078_entry(rt, ctx, 633u, aot_mem);
#else
        recomp_unit_0078_entry(rt, ctx, 633u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08946FF4u) goto L_08946FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08946FF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08947030;
      }
      goto L_08947010;
    }
L_08947010:
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08947020;
      }
      goto L_08947018;
    }
L_08947018:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08947040;
      }
      goto L_08947020;
    }
L_08947020:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08947010;
      }
      goto L_08947030;
    }
L_08947030:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08947040;
      }
      goto L_08947038;
    }
L_08947038:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08947040;
      }
      goto L_08947040;
    }
L_08947040:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0894707C;
      }
      goto L_08947048;
    }
L_08947048:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0894705Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 594u, 0x0894705Cu, 0x089089B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 175u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 175u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894705Cu) goto L_0894705C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894705C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_2 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_0894707C;
L_0894707C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08946F9C;
      }
      goto L_0894708C;
    }
L_0894708C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089470B0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
      if (branch_taken) {
          goto L_08947160;
      }
      goto L_089470C0;
    }
L_089470C0:
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
          goto L_08947138;
      }
      goto L_089470F0;
    }
L_089470F0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08947138;
      }
      goto L_08947100;
    }
L_08947100:
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08947138;
      }
      goto L_08947114;
    }
L_08947114:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3264)));
    aot_gpr_5 = (49864u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08947140;
      }
      goto L_08947130;
    }
L_08947130:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0894718C;
      }
      goto L_08947138;
    }
L_08947138:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08947190;
      }
      goto L_08947140;
    }
L_08947140:
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08947154;
    }
    goto L_08947154;
L_08947154:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08947190;
      }
      goto L_08947160;
    }
L_08947160:
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3264)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3160)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0894718C;
      }
      goto L_08947188;
    }
L_08947188:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0894718C;
L_0894718C:
    aot_gpr_2 = (0u | 0u);
    goto L_08947190;
L_08947190:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08947198:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_4 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_089471D8;
      }
      goto L_089471B4;
    }
L_089471B4:
    aot_gpr_6 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x089471D8u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    goto L_089471E4;
L_089471D8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089471E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[18] = (2236u << 16u);
    aot_gpr_6 = (0u | 12u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    ctx.gpr[17] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08947224;
      }
      goto L_08947218;
    }
L_08947218:
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08947234;
      }
      goto L_08947224;
    }
L_08947224:
    aot_gpr_31 = (0x0894722Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0129.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 616u, 0x0894722Cu, 0x08A08AE0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0129_entry(rt, ctx, 78u, aot_mem);
#else
        recomp_unit_0129_entry(rt, ctx, 78u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894722Cu) goto L_0894722C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894722C:
    aot_gpr_31 = (0x08947234u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 617u, 0x08947234u, 0x08A1BE00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 588u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 588u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947234u) goto L_08947234;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947234:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08947240u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 618u, 0x08947240u, 0x0890816Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947240u) goto L_08947240;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947240:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[17] = (ctx.gpr[16] + aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1396));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08947268u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947268u) goto L_08947268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08947268:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[19] | 0u);
        goto L_08947278;
    }
    goto L_08947278;
L_08947278:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[16] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x0894729Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894729Cu) goto L_0894729C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894729C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089472C0;
      }
      goto L_089472B4;
    }
L_089472B4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x089472C0u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0081.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 623u, 0x089472C0u, 0x08948114u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0081_entry(rt, ctx, 16u, aot_mem);
#else
        recomp_unit_0081_entry(rt, ctx, 16u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089472C0u) goto L_089472C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089472C0:
    aot_gpr_31 = (0x089472C8u);
    aot_gpr_4 = (0u | 30u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089472C8u) goto L_089472C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089472C8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (32u << 16u);
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (0u | 214u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 55u);
        goto L_089472EC;
    }
    goto L_089472EC;
L_089472EC:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x089472FCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0065.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 626u, 0x089472FCu, 0x08908C10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0065_entry(rt, ctx, 216u, aot_mem);
#else
        recomp_unit_0065_entry(rt, ctx, 216u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089472FCu) goto L_089472FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089472FC:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
      if (branch_taken) {
          goto L_0894731C;
      }
      goto L_08947308;
    }
L_08947308:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    goto L_0894731C;
L_0894731C:
    aot_gpr_31 = (0x08947324u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 629u, 0x08947324u, 0x08A1BE00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 588u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 588u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947324u) goto L_08947324;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947324:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
L_08947340:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08947364u);
    ctx.gpr[18] = (aot_gpr_6 & 255u);
    goto L_08946B3C;
L_08947364:
    aot_gpr_31 = (0x0894736Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B1FD70, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894736Cu) goto L_0894736C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0894736C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089473A0;
      }
      goto L_08947390;
    }
L_08947390:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_5;
    aot_gpr_6 = (0u | 11u);
      if (branch_taken) {
          goto L_089473A0;
      }
      goto L_08947398;
    }
L_08947398:
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_089473B0;
      }
      goto L_089473A0;
    }
L_089473A0:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_5;
      if (branch_taken) {
          goto L_089473B8;
      }
      goto L_089473A8;
    }
L_089473A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08947408;
      }
      goto L_089473B0;
    }
L_089473B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08947408;
      }
      goto L_089473B8;
    }
L_089473B8:
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089473A8;
      }
      goto L_089473C0;
    }
L_089473C0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
      if (branch_taken) {
          goto L_089473E0;
      }
      goto L_089473C8;
    }
L_089473C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 16u);
    if (aot_gpr_5 == aot_gpr_6) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_089473F4;
    }
    goto L_089473D8;
L_089473D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (0u | 22u);
      if (branch_taken) {
          goto L_089473E8;
      }
      goto L_089473E0;
    }
L_089473E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08947408;
      }
      goto L_089473E8;
    }
L_089473E8:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08947404;
      }
      goto L_089473F0;
    }
L_089473F0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_089473F4;
L_089473F4:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08947404;
      }
      goto L_089473FC;
    }
L_089473FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08947408;
      }
      goto L_08947404;
    }
L_08947404:
    aot_gpr_2 = (0u | 1u);
    goto L_08947408;
L_08947408:
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
L_08947420:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3292)));
    ctx.gpr[7] = (0u | 0u);
    goto L_08947428;
L_08947428:
    aot_gpr_6 = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(6288)));
    { const bool branch_taken = ctx.gpr[8] == aot_gpr_5;
      if (branch_taken) {
          goto L_0894745C;
      }
      goto L_0894743C;
    }
L_0894743C:
    aot_gpr_6 = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_gpr_6 << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08947428;
      }
      goto L_08947454;
    }
L_08947454:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08947468;
      }
      goto L_0894745C;
    }
L_0894745C:
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(6288), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1744), 0u);
      if (branch_taken) {
          goto L_08947468;
      }
      goto L_08947468;
    }
L_08947468:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08947470:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08947480u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0171.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 656u, 0x08947480u, 0x08AB3C80u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0171_entry(rt, ctx, 965u, aot_mem);
#else
        recomp_unit_0171_entry(rt, ctx, 965u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 965u, 0x08AB3C80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947480u) goto L_08947480;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947480:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894748C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x0894749Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0171.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 658u, 0x0894749Cu, 0x08AB3D5Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0171_entry(rt, ctx, 982u, aot_mem);
#else
        recomp_unit_0171_entry(rt, ctx, 982u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 982u, 0x08AB3D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0894749Cu) goto L_0894749C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0894749C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089474A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089474B8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0171.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 660u, 0x089474B8u, 0x08AB3DB4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0171_entry(rt, ctx, 988u, aot_mem);
#else
        recomp_unit_0171_entry(rt, ctx, 988u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 988u, 0x08AB3DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089474B8u) goto L_089474B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089474B8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089474C4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(-6992)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_5;
      if (branch_taken) {
          goto L_089474E0;
      }
      goto L_089474D8;
    }
L_089474D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
      if (branch_taken) {
          goto L_089474E4;
      }
      goto L_089474E0;
    }
L_089474E0:
    aot_gpr_2 = (0u | 0u);
    goto L_089474E4;
L_089474E4:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089474EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 12u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08947510;
      }
      goto L_08947504;
    }
L_08947504:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08947510u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0133.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 667u, 0x08947510u, 0x08A1BE00u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0133_entry(rt, ctx, 588u, aot_mem);
#else
        recomp_unit_0133_entry(rt, ctx, 588u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947510u) goto L_08947510;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947510:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894751C:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1364)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(23))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (aot_gpr_6 & 255u);
      if (branch_taken) {
          goto L_08947540;
      }
      goto L_08947534;
    }
L_08947534:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0894756C;
      }
      goto L_08947540;
    }
L_08947540:
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 55 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894755C;
      }
      goto L_08947548;
    }
L_08947548:
    { const bool branch_taken = ctx.gpr[7] == 0u;
      if (branch_taken) {
          goto L_0894755C;
      }
      goto L_08947550;
    }
L_08947550:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0894756C;
      }
      goto L_0894755C;
    }
L_0894755C:
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_0894756C;
      }
      goto L_08947564;
    }
L_08947564:
    aot_gpr_4 = (0u | 46u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0894756C;
L_0894756C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08947574:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3261))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089475A0;
      }
      goto L_08947584;
    }
L_08947584:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3192)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089475A0;
      }
      goto L_08947590;
    }
L_08947590:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3192), 0u);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089475A0;
L_089475A0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089475A8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089475E0;
      }
      goto L_089475C8;
    }
L_089475C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 28u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_089475D8;
    }
L_089475D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 29u);
      if (branch_taken) {
          goto L_089475E8;
      }
      goto L_089475E0;
    }
L_089475E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_0894762C;
      }
      goto L_089475E8;
    }
L_089475E8:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 21u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_089475F0;
    }
L_089475F0:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 22u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_089475F8;
    }
L_089475F8:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 23u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_08947600;
    }
L_08947600:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 32u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_08947608;
    }
L_08947608:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 34u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_08947610;
    }
L_08947610:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 35u);
      if (branch_taken) {
          goto L_08947620;
      }
      goto L_08947618;
    }
L_08947618:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08947628;
      }
      goto L_08947620;
    }
L_08947620:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_0894762C;
      }
      goto L_08947628;
    }
L_08947628:
    aot_gpr_2 = (0u | 0u);
    goto L_0894762C;
L_0894762C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08947634:
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_4 + static_cast<std::uint32_t>(3330));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0894763C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08947650u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    goto L_089476BC;
L_08947650:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089476A0;
      }
      goto L_08947658;
    }
L_08947658:
    aot_gpr_31 = (0x08947660u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089476D8;
L_08947660:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089476A0;
      }
      goto L_08947668;
    }
L_08947668:
    aot_gpr_31 = (0x08947670u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089476C8;
L_08947670:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089476A0;
      }
      goto L_08947678;
    }
L_08947678:
    aot_gpr_31 = (0x08947680u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 702u, 0x08947680u, 0x08A363C8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 562u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 562u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947680u) goto L_08947680;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947680:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089476A0;
      }
      goto L_08947688;
    }
L_08947688:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3330)));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089476A8;
      }
      goto L_089476A0;
    }
L_089476A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_089476AC;
      }
      goto L_089476A8;
    }
L_089476A8:
    aot_gpr_2 = (0u | 0u);
    goto L_089476AC;
L_089476AC:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089476BC:
    aot_gpr_2 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3330)));
    jump_target = aot_gpr_31;
    aot_gpr_2 = (aot_gpr_2 & 1u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089476C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3330)));
    aot_gpr_2 = (aot_gpr_4 & 4u);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089476D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3330)));
    aot_gpr_2 = (aot_gpr_4 & 2u);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089476E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3330)));
    aot_gpr_2 = (aot_gpr_4 & 32u);
    jump_target = aot_gpr_31;
    aot_gpr_2 = (0u < aot_gpr_2 ? 1u : 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089476F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08947738;
      }
      goto L_08947718;
    }
L_08947718:
    aot_gpr_31 = (0x08947720u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0894763C;
L_08947720:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08947738;
      }
      goto L_08947728;
    }
L_08947728:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3330)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3296), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08947738;
L_08947738:
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
L_0894774C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08947794;
      }
      goto L_0894776C;
    }
L_0894776C:
    aot_gpr_31 = (0x08947774u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0894763C;
L_08947774:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_08947794;
      }
      goto L_0894777C;
    }
L_0894777C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3330)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3296), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 2000u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3300), aot_gpr_4);
    goto L_08947794;
L_08947794:
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
L_089477A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089477E8;
      }
      goto L_089477C8;
    }
L_089477C8:
    aot_gpr_31 = (0x089477D0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_0894763C;
L_089477D0:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089477E8;
      }
      goto L_089477D8;
    }
L_089477D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3330)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3296), ctx.gpr[16]);
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089477E8;
L_089477E8:
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
L_089477FC:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08947868;
      }
      goto L_08947808;
    }
L_08947808:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08947868;
      }
      goto L_08947814;
    }
L_08947814:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3330)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3296)));
    ctx.gpr[7] = (ctx.gpr[7] | 16u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3296), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08947848;
      }
      goto L_08947838;
    }
L_08947838:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08947868;
      }
      goto L_08947848;
    }
L_08947848:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08947868;
      }
      goto L_08947858;
    }
L_08947858:
    aot_gpr_4 = (16298u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 15729u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08947868;
L_08947868:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08947870:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08947888;
      }
      goto L_0894787C;
    }
L_0894787C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3330)));
    aot_gpr_5 = (aot_gpr_5 | 32u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08947888;
L_08947888:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08947890:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089478AC;
      }
      goto L_0894789C;
    }
L_0894789C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3330)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_089478AC;
L_089478AC:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089478B4:
    aot_gpr_5 = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[16] = ctx.fpr[15] / aot_fpr_14;
    aot_gpr_6 = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3296)));
      if (branch_taken) {
          goto L_08947900;
      }
      goto L_089478E8;
    }
L_089478E8:
    aot_fpr_12 = ctx.fpr[15] / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
      if (branch_taken) {
          goto L_08947920;
      }
      goto L_08947900;
    }
L_08947900:
    aot_fpr_14 = ctx.fpr[15] / aot_fpr_14;
    aot_gpr_6 = (32768u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    goto L_08947920;
L_08947920:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3296), aot_gpr_5);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08947928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(3296)));
    aot_gpr_2 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_2 = (aot_gpr_4 | 0u);
        goto L_0894793C;
    }
    goto L_0894793C;
L_0894793C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08947944:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3330)));
    aot_gpr_5 = (aot_gpr_5 & 16u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08947984;
      }
      goto L_0894795C;
    }
L_0894795C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08947984;
      }
      goto L_08947968;
    }
L_08947968:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (16256u << 16u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_08947980;
      }
      goto L_08947978;
    }
L_08947978:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08947984;
      }
      goto L_08947980;
    }
L_08947980:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08947984;
L_08947984:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(3296), 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08947990:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3330)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 & 16u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089479EC;
      }
      goto L_089479C4;
    }
L_089479C4:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x089479DCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089476BC;
L_089479DC:
    { const bool branch_taken = aot_gpr_2 != 0u;
      if (branch_taken) {
          goto L_089479FC;
      }
      goto L_089479E4;
    }
L_089479E4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08947A40;
      }
      goto L_089479EC;
    }
L_089479EC:
    aot_gpr_31 = (0x089479F4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08947944;
L_089479F4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08947B74;
      }
      goto L_089479FC;
    }
L_089479FC:
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
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(146)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3296)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08947A34u);
    ctx.gpr[10] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0060.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 758u, 0x08947A34u, 0x088F5A3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0060_entry(rt, ctx, 409u, aot_mem);
#else
        recomp_unit_0060_entry(rt, ctx, 409u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947A34u) goto L_08947A34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947A34:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08947B28;
      }
      goto L_08947A40;
    }
L_08947A40:
    aot_gpr_31 = (0x08947A48u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089476D8;
L_08947A48:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08947A94;
      }
      goto L_08947A50;
    }
L_08947A50:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(148)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3296)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08947A88u);
    ctx.gpr[10] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0060.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 762u, 0x08947A88u, 0x088F5A3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0060_entry(rt, ctx, 409u, aot_mem);
#else
        recomp_unit_0060_entry(rt, ctx, 409u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947A88u) goto L_08947A88;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947A88:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08947B28;
      }
      goto L_08947A94;
    }
L_08947A94:
    aot_gpr_31 = (0x08947A9Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089476C8;
L_08947A9C:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08947AE8;
      }
      goto L_08947AA4;
    }
L_08947AA4:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(150)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3296)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    aot_gpr_6 = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08947ADCu);
    ctx.gpr[10] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0060.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 766u, 0x08947ADCu, 0x088F5A3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0060_entry(rt, ctx, 409u, aot_mem);
#else
        recomp_unit_0060_entry(rt, ctx, 409u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947ADCu) goto L_08947ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947ADC:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08947B28;
      }
      goto L_08947AE8;
    }
L_08947AE8:
    aot_gpr_31 = (0x08947AF0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_089476E8;
L_08947AF0:
    { const bool branch_taken = aot_gpr_2 == 0u;
      if (branch_taken) {
          goto L_08947B28;
      }
      goto L_08947AF8;
    }
L_08947AF8:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(132)));
    aot_gpr_6 = (0u | 15u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_gpr_31 = (0x08947B24u);
    ctx.gpr[10] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0060.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 770u, 0x08947B24u, 0x088F5A3Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0060_entry(rt, ctx, 409u, aot_mem);
#else
        recomp_unit_0060_entry(rt, ctx, 409u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947B24u) goto L_08947B24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947B24:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    goto L_08947B28;
L_08947B28:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08947B34u);
    aot_gpr_4 = (0u | 132u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 772u, 0x08947B34u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947B34u) goto L_08947B34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947B34:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08947B4C;
      }
      goto L_08947B40;
    }
L_08947B40:
    aot_gpr_31 = (0x08947B48u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0129.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 774u, 0x08947B48u, 0x08A0A1DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0129_entry(rt, ctx, 314u, aot_mem);
#else
        recomp_unit_0129_entry(rt, ctx, 314u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0129_entry, 129u, 314u, 0x08A0A1DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947B48u) goto L_08947B48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947B48:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08947B4C;
L_08947B4C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(116));
    aot_gpr_31 = (0x08947B60u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0075.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 776u, 0x08947B60u, 0x08933F0Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0075_entry(rt, ctx, 759u, aot_mem);
#else
        recomp_unit_0075_entry(rt, ctx, 759u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947B60u) goto L_08947B60;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947B60:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08947B6Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0045.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 777u, 0x08947B6Cu, 0x088BAFE8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0045_entry(rt, ctx, 623u, aot_mem);
#else
        recomp_unit_0045_entry(rt, ctx, 623u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 623u, 0x088BAFE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947B6Cu) goto L_08947B6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947B6C:
    aot_gpr_31 = (0x08947B74u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08947944;
L_08947B74:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08947B90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_31 = (0x08947BC4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947BC4u) goto L_08947BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08947BC4:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08947BE8;
      }
      goto L_08947BD0;
    }
L_08947BD0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08947BE0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 782u, 0x08947BE0u, 0x08ADD768u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 395u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 395u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 395u, 0x08ADD768u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947BE0u) goto L_08947BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947BE0:
    { const bool branch_taken = ctx.gpr[19] == aot_gpr_2;
      if (branch_taken) {
          goto L_08947C0C;
      }
      goto L_08947BE8;
    }
L_08947BE8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08947BFCu);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 784u, 0x08947BFCu, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947BFCu) goto L_08947BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947BFC:
    if (aot_gpr_2 != 0u) {
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
        goto L_08947C14;
    }
    goto L_08947C04;
L_08947C04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08947C5C;
      }
      goto L_08947C0C;
    }
L_08947C0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08947C14;
    }
L_08947C14:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08947C20u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 788u, 0x08947C20u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947C20u) goto L_08947C20;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947C20:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08947C50;
    }
    goto L_08947C30;
L_08947C30:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08947C40u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 790u, 0x08947C40u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947C40u) goto L_08947C40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947C40:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08947C50;
L_08947C50:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_08947C98;
      }
      goto L_08947C5C;
    }
L_08947C5C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08947C6Cu);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 793u, 0x08947C6Cu, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947C6Cu) goto L_08947C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947C6C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_08947EB8;
      }
      goto L_08947C78;
    }
L_08947C78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08947CA0;
      }
      goto L_08947C90;
    }
L_08947C90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08947CBC;
      }
      goto L_08947C98;
    }
L_08947C98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08947CA0;
    }
L_08947CA0:
    aot_gpr_31 = (0x08947CA8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0115.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 798u, 0x08947CA8u, 0x089D3458u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0115_entry(rt, ctx, 597u, aot_mem);
#else
        recomp_unit_0115_entry(rt, ctx, 597u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 597u, 0x089D3458u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947CA8u) goto L_08947CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947CA8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08947CB4u);
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0066.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 799u, 0x08947CB4u, 0x0890EF94u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0066_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0066_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 696u, 0x0890EF94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947CB4u) goto L_08947CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947CB4:
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_2;
      if (branch_taken) {
          goto L_08947CD0;
      }
      goto L_08947CBC;
    }
L_08947CBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08947CD8;
      }
      goto L_08947CC8;
    }
L_08947CC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08947CF8;
      }
      goto L_08947CD0;
    }
L_08947CD0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08947CD8;
    }
L_08947CD8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(17));
    aot_gpr_31 = (0x08947CE8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 804u, 0x08947CE8u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947CE8u) goto L_08947CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947CE8:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(17)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08947CF8;
L_08947CF8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(346)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08947D2C;
      }
      goto L_08947D10;
    }
L_08947D10:
    aot_gpr_31 = (0x08947D18u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947D18u) goto L_08947D18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08947D18:
    aot_gpr_4 = (0u | 4u);
    if (aot_gpr_2 == aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08947D34;
    }
    goto L_08947D24;
L_08947D24:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08947E90;
      }
      goto L_08947D2C;
    }
L_08947D2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08947D34;
    }
L_08947D34:
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
        goto L_08947D60;
    }
    goto L_08947D3C;
L_08947D3C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(18));
    aot_gpr_31 = (0x08947D4Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 812u, 0x08947D4Cu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947D4Cu) goto L_08947D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947D4C:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    goto L_08947D60;
L_08947D60:
    aot_gpr_5 = (aot_gpr_5 ^ 65535u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08947E90;
      }
      goto L_08947D74;
    }
L_08947D74:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (0u | 65535u);
      if (branch_taken) {
          goto L_08947D9C;
      }
      goto L_08947D7C;
    }
L_08947D7C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(19));
    aot_gpr_31 = (0x08947D8Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 816u, 0x08947D8Cu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947D8Cu) goto L_08947D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947D8C:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(19)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08947D9C;
L_08947D9C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08947DB0;
      }
      goto L_08947DA8;
    }
L_08947DA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08947DC0;
      }
      goto L_08947DB0;
    }
L_08947DB0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08947DBCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 820u, 0x08947DBCu, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947DBCu) goto L_08947DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947DBC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_08947DC0;
L_08947DC0:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08947E90;
      }
      goto L_08947DC8;
    }
L_08947DC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
        goto L_08947DF8;
    }
    goto L_08947DD4;
L_08947DD4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x08947DE4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 824u, 0x08947DE4u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947DE4u) goto L_08947DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947DE4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    goto L_08947DF8;
L_08947DF8:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08947E0C;
      }
      goto L_08947E00;
    }
L_08947E00:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08947E1C;
      }
      goto L_08947E0C;
    }
L_08947E0C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08947E18u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 828u, 0x08947E18u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947E18u) goto L_08947E18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947E18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(112)));
    goto L_08947E1C;
L_08947E1C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08947E90;
      }
      goto L_08947E24;
    }
L_08947E24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
        goto L_08947E54;
    }
    goto L_08947E30;
L_08947E30:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(21));
    aot_gpr_31 = (0x08947E40u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 832u, 0x08947E40u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947E40u) goto L_08947E40;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947E40:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(21)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    goto L_08947E54;
L_08947E54:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08947E70;
      }
      goto L_08947E5C;
    }
L_08947E5C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_08947E88;
      }
      goto L_08947E70;
    }
L_08947E70:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08947E7Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 836u, 0x08947E7Cu, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947E7Cu) goto L_08947E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    goto L_08947E88;
L_08947E88:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08947EC0;
      }
      goto L_08947E90;
    }
L_08947E90:
    aot_gpr_31 = (0x08947E98u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947E98u) goto L_08947E98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08947E98:
    aot_gpr_4 = (0u | 7u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
      if (branch_taken) {
          goto L_08947EB8;
      }
      goto L_08947EA4;
    }
L_08947EA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08947EC8;
      }
      goto L_08947EB0;
    }
L_08947EB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08947EEC;
      }
      goto L_08947EB8;
    }
L_08947EB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08947EC0;
    }
L_08947EC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 5u, 0x08948020u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08947EC8;
    }
L_08947EC8:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(22));
    aot_gpr_31 = (0x08947ED8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 845u, 0x08947ED8u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947ED8u) goto L_08947ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947ED8:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(22)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    goto L_08947EEC;
L_08947EEC:
    aot_gpr_5 = (aot_gpr_5 ^ 65535u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08947EB8;
      }
      goto L_08947F00;
    }
L_08947F00:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (0u | 65535u);
      if (branch_taken) {
          goto L_08947F28;
      }
      goto L_08947F08;
    }
L_08947F08:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(23));
    aot_gpr_31 = (0x08947F18u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 849u, 0x08947F18u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947F18u) goto L_08947F18;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947F18:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(23)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08947F28;
L_08947F28:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08947F3C;
      }
      goto L_08947F34;
    }
L_08947F34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08947F4C;
      }
      goto L_08947F3C;
    }
L_08947F3C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08947F48u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 853u, 0x08947F48u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947F48u) goto L_08947F48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947F48:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    goto L_08947F4C;
L_08947F4C:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08947EB8;
      }
      goto L_08947F54;
    }
L_08947F54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
        goto L_08947F84;
    }
    goto L_08947F60;
L_08947F60:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x08947F70u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 857u, 0x08947F70u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947F70u) goto L_08947F70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947F70:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    goto L_08947F84;
L_08947F84:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08947F98;
      }
      goto L_08947F8C;
    }
L_08947F8C:
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08947FA8;
      }
      goto L_08947F98;
    }
L_08947F98:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08947FA4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 861u, 0x08947FA4u, 0x08ADCA6Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 192u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 192u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947FA4u) goto L_08947FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947FA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(112)));
    goto L_08947FA8;
L_08947FA8:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08947EB8;
      }
      goto L_08947FB0;
    }
L_08947FB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
        goto L_08947FE0;
    }
    goto L_08947FBC;
L_08947FBC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(25));
    aot_gpr_31 = (0x08947FCCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0080->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0080_entry, 865u, 0x08947FCCu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08947FCCu) goto L_08947FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08947FCC:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(25)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(176)));
    goto L_08947FE0;
L_08947FE0:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[16];
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08947FFC;
      }
      goto L_08947FE8;
    }
L_08947FE8:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948014u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08947FFC;
    }
L_08947FFC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.pc = 0x08948000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0080(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0080_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_80(Runtime &runtime) {
    runtime.register_generated_unit(80u, 0x08944000u, 16384u, &recomp_unit_0080, &recomp_unit_0080_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08944000u, &recomp_unit_0080, "recomp_unit_0080",
                                          kEntryMasks_recomp_unit_0080, 64u);
}
} // namespace psprecomp
