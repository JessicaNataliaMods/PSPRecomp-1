#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
// PSPRECOMP_V811_COMPACT_DISPATCH: 64-slot occupancy masks + per-group base id.
static constexpr std::uint64_t kEntryMasks_recomp_unit_0087[64] = {
    0x0024081008001541ull, 0x000400A000206882ull, 0x0004648040010801ull, 0x2A2290040011802Aull,
    0x411455500410026Aull, 0x4410001101155400ull, 0x8210A88005510555ull, 0x4900000000000000ull,
    0x002142010080002Dull, 0x08A0211022808014ull, 0x222A444091000844ull, 0x4100088AA9448440ull,
    0x88951115511122AAull, 0x5A2D100A2A4222A4ull, 0x0040040040040000ull, 0x4004004004004004ull,
    0x0400400400400400ull, 0x0010010000420040ull, 0x1001001001001001ull, 0x0100100100100100ull,
    0x4B48108010010010ull, 0x25A40840488AD248ull, 0x04842101222AD248ull, 0x421052202288D109ull,
    0x2082A00000200000ull, 0x0010422AB4282908ull, 0x1001041041064041ull, 0x220A804040900404ull,
    0x2200448082002251ull, 0x0208008208208228ull, 0x2891054020204802ull, 0x1411002240410011ull,
    0x4101041250440089ull, 0x0240101040030410ull, 0x80089448808A0101ull, 0x8A08801122012020ull,
    0x2082282200448804ull, 0x0202048020208008ull, 0x4041001128910114ull, 0x2088412504400882ull,
    0xAA820200645A5294ull, 0x415510820820A26Aull, 0x200090412C12C122ull, 0xA088080820204251ull,
    0x2880015142144000ull, 0x00810410CAA80108ull, 0x00014804008C2041ull, 0x9011202120212000ull,
    0x0801000484115108ull, 0x11830C3080928840ull, 0x4208422882962209ull, 0x148A010B4208A220ull,
    0xA210912204920484ull, 0x55511540000803AAull, 0x1888145145280050ull, 0x2B2A5155694A8245ull,
    0x50AA8A5455452A2Aull, 0x2D00009001448A14ull, 0x0024924AA906A004ull, 0x200008106824AA92ull,
    0x0404108800400000ull, 0x520C820508484444ull, 0x88132040A0190320ull, 0x48C1111040208104ull,
};
static constexpr std::uint16_t kEntryBases_recomp_unit_0087[64] = {
    1u, 11u, 20u, 29u, 43u, 60u, 72u, 90u, 93u, 103u, 115u, 129u, 144u, 166u, 187u, 191u,
    197u, 202u, 207u, 213u, 218u, 229u, 248u, 265u, 282u, 288u, 304u, 315u, 326u, 338u, 348u, 361u,
    372u, 385u, 394u, 407u, 419u, 431u, 439u, 452u, 465u, 485u, 503u, 518u, 531u, 543u, 556u, 566u,
    577u, 588u, 604u, 621u, 637u, 653u, 671u, 687u, 713u, 738u, 752u, 769u, 784u, 790u, 806u, 821u,
};

// PSPRECOMP_V813_HOT_DENSE_DISPATCH: one indexed load on the measured hot units;
// masks remain for exact registration/correctness proof.
alignas(64) static constexpr std::uint16_t kEntryIdsV813_recomp_unit_0087[4095] = {
    1u, 0u, 0u, 0u, 0u, 0u, 2u, 0u, 3u, 0u, 4u, 0u, 5u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 6u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 7u, 0u, 0u, 0u, 0u, 0u, 0u, 8u, 0u, 0u, 0u, 0u, 0u, 0u, 9u, 0u, 0u, 10u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 11u, 0u, 0u, 0u, 0u, 0u, 12u, 0u, 0u, 0u, 13u, 0u, 14u, 15u, 0u, 0u, 0u, 0u, 0u, 0u, 16u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 17u, 0u, 18u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 19u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    20u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 21u, 0u, 0u, 0u, 0u, 22u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 23u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 24u, 0u, 0u, 25u, 0u, 0u, 26u, 27u, 0u, 0u, 0u, 28u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 29u, 0u, 30u, 0u, 31u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 32u, 33u, 0u, 0u, 0u, 34u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 35u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 36u, 0u, 0u, 37u, 0u, 38u, 0u, 0u, 0u, 39u, 0u, 0u, 0u, 40u, 0u, 41u, 0u, 42u, 0u, 0u,
    0u, 43u, 0u, 44u, 0u, 45u, 46u, 0u, 0u, 47u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 48u, 0u, 0u, 0u, 0u, 0u, 49u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 50u, 0u, 51u, 0u, 52u, 0u, 53u, 0u, 54u, 0u, 55u, 0u, 0u, 0u, 56u, 0u, 57u, 0u, 0u, 0u, 58u, 0u, 0u, 0u, 0u, 0u, 59u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 60u, 0u, 61u, 0u, 62u, 0u, 63u, 0u, 64u, 0u, 65u, 0u, 0u, 0u, 66u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    67u, 0u, 0u, 0u, 68u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 69u, 0u, 0u, 0u, 0u, 0u, 70u, 0u, 0u, 0u, 71u, 0u,
    72u, 0u, 73u, 0u, 74u, 0u, 75u, 0u, 76u, 0u, 77u, 0u, 0u, 0u, 0u, 0u, 78u, 0u, 0u, 0u, 79u, 0u, 80u, 0u, 81u, 0u, 82u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 83u, 0u, 0u, 0u, 84u, 0u, 85u, 0u, 86u, 0u, 0u, 0u, 0u, 87u, 0u, 0u, 0u, 0u, 88u, 0u, 0u, 0u, 0u, 0u, 89u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 90u, 0u, 0u, 91u, 0u, 0u, 92u, 0u,
    93u, 0u, 94u, 95u, 0u, 96u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 97u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    98u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 99u, 0u, 0u, 0u, 0u, 100u, 0u, 101u, 0u, 0u, 0u, 0u, 102u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 103u, 0u, 104u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 105u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 106u, 0u, 107u, 0u, 0u, 0u, 108u, 0u, 0u,
    0u, 0u, 0u, 0u, 109u, 0u, 0u, 0u, 110u, 0u, 0u, 0u, 0u, 111u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 112u, 0u, 113u, 0u, 0u, 0u, 114u, 0u, 0u, 0u, 0u,
    0u, 0u, 115u, 0u, 0u, 0u, 116u, 0u, 0u, 0u, 0u, 117u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 118u, 0u, 0u, 0u, 119u, 0u, 0u, 120u,
    0u, 0u, 0u, 0u, 0u, 0u, 121u, 0u, 0u, 0u, 122u, 0u, 0u, 0u, 123u, 0u, 0u, 124u, 0u, 125u, 0u, 126u, 0u, 0u, 0u, 127u, 0u, 0u, 0u, 128u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 129u, 0u, 0u, 0u, 130u, 0u, 0u, 0u, 0u, 131u, 0u, 0u, 132u, 0u, 0u, 0u, 133u, 0u, 134u, 0u, 0u, 135u, 0u, 136u, 0u, 137u,
    0u, 138u, 0u, 139u, 0u, 0u, 0u, 140u, 0u, 0u, 0u, 141u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 142u, 0u, 0u, 0u, 0u, 0u, 143u, 0u,
    0u, 144u, 0u, 145u, 0u, 146u, 0u, 147u, 0u, 148u, 0u, 0u, 0u, 149u, 0u, 0u, 150u, 0u, 0u, 0u, 151u, 0u, 0u, 0u, 152u, 0u, 0u, 0u, 153u, 0u, 154u, 0u,
    155u, 0u, 156u, 0u, 157u, 0u, 0u, 0u, 158u, 0u, 0u, 0u, 159u, 0u, 0u, 0u, 160u, 0u, 161u, 0u, 162u, 0u, 0u, 163u, 0u, 0u, 0u, 164u, 0u, 0u, 0u, 165u,
    0u, 0u, 166u, 0u, 0u, 167u, 0u, 168u, 0u, 169u, 0u, 0u, 0u, 170u, 0u, 0u, 0u, 171u, 0u, 0u, 0u, 0u, 172u, 0u, 0u, 173u, 0u, 174u, 0u, 175u, 0u, 0u,
    0u, 176u, 0u, 177u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 178u, 0u, 0u, 0u, 179u, 0u, 180u, 181u, 0u, 182u, 0u, 0u, 0u, 183u, 0u, 184u, 185u, 0u, 186u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 187u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 188u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 189u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 190u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 191u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 192u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 193u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 194u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 195u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 196u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 197u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 198u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 199u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 200u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 201u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 202u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 203u, 0u, 0u, 0u, 0u, 204u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 205u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 206u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    207u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 208u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 209u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 210u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 211u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 212u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 213u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 214u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    215u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 216u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 217u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 218u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 219u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 220u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 221u, 0u, 0u, 0u, 0u, 222u, 0u, 0u, 0u, 0u, 0u, 0u, 223u, 0u, 0u, 224u, 0u, 225u, 226u, 0u, 227u, 0u, 0u, 228u, 0u,
    0u, 0u, 0u, 229u, 0u, 0u, 230u, 0u, 0u, 231u, 0u, 0u, 232u, 0u, 233u, 234u, 0u, 235u, 0u, 236u, 0u, 0u, 0u, 237u, 0u, 0u, 0u, 238u, 0u, 0u, 239u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 240u, 0u, 0u, 0u, 0u, 241u, 0u, 0u, 0u, 0u, 0u, 0u, 242u, 0u, 0u, 243u, 0u, 244u, 245u, 0u, 246u, 0u, 0u, 247u, 0u, 0u,
    0u, 0u, 0u, 248u, 0u, 0u, 249u, 0u, 0u, 250u, 0u, 0u, 251u, 0u, 252u, 253u, 0u, 254u, 0u, 255u, 0u, 256u, 0u, 0u, 0u, 257u, 0u, 0u, 0u, 258u, 0u, 0u,
    259u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 260u, 0u, 0u, 0u, 0u, 261u, 0u, 0u, 0u, 0u, 262u, 0u, 0u, 0u, 0u, 263u, 0u, 0u, 264u, 0u, 0u, 0u, 0u, 0u,
    265u, 0u, 0u, 266u, 0u, 0u, 0u, 0u, 267u, 0u, 0u, 0u, 268u, 0u, 269u, 270u, 0u, 0u, 0u, 271u, 0u, 0u, 0u, 272u, 0u, 273u, 0u, 0u, 0u, 274u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 275u, 0u, 0u, 0u, 276u, 0u, 0u, 277u, 0u, 278u, 0u, 0u, 0u, 0u, 0u, 279u, 0u, 0u, 0u, 0u, 280u, 0u, 0u, 0u, 0u, 281u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 282u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 283u, 0u, 284u, 0u, 285u, 0u, 0u, 0u, 0u, 0u, 286u, 0u, 0u, 0u, 0u, 0u, 287u, 0u, 0u,
    0u, 0u, 0u, 288u, 0u, 0u, 0u, 0u, 289u, 0u, 0u, 290u, 0u, 291u, 0u, 0u, 0u, 0u, 0u, 292u, 0u, 293u, 0u, 0u, 0u, 0u, 294u, 0u, 295u, 296u, 0u, 297u,
    0u, 298u, 0u, 299u, 0u, 300u, 0u, 0u, 0u, 301u, 0u, 0u, 0u, 0u, 302u, 0u, 0u, 0u, 0u, 0u, 303u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    304u, 0u, 0u, 0u, 0u, 0u, 305u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 306u, 0u, 0u, 307u, 308u, 0u, 0u, 0u, 0u, 0u, 309u, 0u, 0u, 0u, 0u, 0u, 310u, 0u,
    0u, 0u, 0u, 0u, 311u, 0u, 0u, 0u, 0u, 0u, 312u, 0u, 0u, 0u, 0u, 0u, 313u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 314u, 0u, 0u, 0u,
    0u, 0u, 315u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 316u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 317u, 0u, 0u, 318u, 0u, 0u, 0u, 0u, 0u, 0u, 319u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 320u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 321u, 0u, 322u, 0u, 323u, 0u, 0u, 0u, 0u, 0u, 324u, 0u, 0u, 0u, 325u, 0u, 0u,
    326u, 0u, 0u, 0u, 327u, 0u, 328u, 0u, 0u, 329u, 0u, 0u, 0u, 330u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 331u, 0u, 0u, 0u, 0u, 0u, 332u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 333u, 0u, 0u, 334u, 0u, 0u, 0u, 335u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 336u, 0u, 0u, 0u, 337u, 0u, 0u,
    0u, 0u, 0u, 338u, 0u, 339u, 0u, 0u, 0u, 340u, 0u, 0u, 0u, 0u, 0u, 341u, 0u, 0u, 0u, 0u, 0u, 342u, 0u, 0u, 0u, 0u, 0u, 343u, 0u, 0u, 0u, 0u,
    0u, 344u, 0u, 0u, 0u, 0u, 0u, 345u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 346u, 0u, 0u, 0u, 0u, 0u, 347u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 348u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 349u, 0u, 0u, 350u, 0u, 0u, 0u, 0u, 0u, 0u, 351u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 352u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 353u, 0u, 354u, 0u, 355u, 0u, 0u, 0u, 0u, 0u, 356u, 0u, 0u, 0u, 357u, 0u, 0u, 358u, 0u, 0u, 0u, 359u, 0u, 360u, 0u, 0u,
    361u, 0u, 0u, 0u, 362u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 363u, 0u, 0u, 0u, 0u, 0u, 364u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 365u, 0u,
    0u, 366u, 0u, 0u, 0u, 367u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 368u, 0u, 0u, 0u, 369u, 0u, 0u, 0u, 0u, 0u, 370u, 0u, 371u, 0u, 0u, 0u,
    372u, 0u, 0u, 373u, 0u, 0u, 0u, 374u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 375u, 0u, 0u, 0u, 376u, 0u, 0u, 0u, 0u, 0u, 377u, 0u, 378u, 0u,
    0u, 379u, 0u, 0u, 380u, 0u, 0u, 0u, 0u, 0u, 381u, 0u, 0u, 0u, 0u, 0u, 382u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 383u, 0u, 0u, 0u, 0u, 0u, 384u, 0u,
    0u, 0u, 0u, 0u, 385u, 0u, 0u, 0u, 0u, 0u, 386u, 0u, 0u, 0u, 0u, 0u, 387u, 388u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 389u, 0u,
    0u, 0u, 0u, 0u, 390u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 391u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 392u, 0u, 0u, 393u, 0u, 0u, 0u, 0u, 0u, 0u,
    394u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 395u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 396u, 0u, 397u, 0u, 0u, 0u, 398u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 399u,
    0u, 0u, 0u, 400u, 0u, 0u, 401u, 0u, 0u, 0u, 402u, 0u, 403u, 0u, 0u, 404u, 0u, 0u, 0u, 405u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 406u,
    0u, 0u, 0u, 0u, 0u, 407u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 408u, 0u, 0u, 409u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 410u, 0u, 0u, 0u, 411u, 0u, 0u,
    412u, 0u, 0u, 0u, 413u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 414u, 0u, 0u, 0u, 415u, 0u, 0u, 0u, 0u, 0u, 416u, 0u, 417u, 0u, 0u, 0u, 418u,
    0u, 0u, 419u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 420u, 0u, 0u, 0u, 421u, 0u, 0u, 422u, 0u, 0u, 0u, 423u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 424u, 0u, 0u, 0u, 425u, 0u, 0u, 0u, 0u, 0u, 426u, 0u, 427u, 0u, 0u, 0u, 428u, 0u, 0u, 0u, 0u, 0u, 429u, 0u, 0u, 0u, 0u, 0u, 430u, 0u, 0u,
    0u, 0u, 0u, 431u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 432u, 0u, 0u, 0u, 0u, 0u, 433u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 434u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 435u, 0u, 0u, 436u, 0u, 0u, 0u, 0u, 0u, 0u, 437u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 438u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 439u, 0u, 440u, 0u, 0u, 0u, 441u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 442u, 0u, 0u, 0u, 443u, 0u, 0u, 444u, 0u, 0u, 0u, 445u, 0u, 446u, 0u, 0u,
    447u, 0u, 0u, 0u, 448u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 449u, 0u, 0u, 0u, 0u, 0u, 450u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 451u, 0u,
    0u, 452u, 0u, 0u, 0u, 0u, 0u, 453u, 0u, 0u, 0u, 454u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 455u, 0u, 0u, 0u, 456u, 0u, 0u, 0u, 0u, 0u,
    457u, 0u, 458u, 0u, 0u, 459u, 0u, 0u, 460u, 0u, 0u, 0u, 0u, 0u, 461u, 0u, 0u, 0u, 0u, 462u, 0u, 0u, 0u, 463u, 0u, 0u, 0u, 0u, 0u, 464u, 0u, 0u,
    0u, 0u, 465u, 0u, 466u, 0u, 0u, 467u, 0u, 468u, 0u, 0u, 469u, 0u, 470u, 0u, 0u, 471u, 0u, 472u, 473u, 0u, 474u, 0u, 0u, 0u, 475u, 0u, 0u, 476u, 477u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 478u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 479u, 0u, 0u, 0u, 0u, 0u, 480u, 0u, 481u, 0u, 482u, 0u, 483u, 0u, 484u,
    0u, 485u, 0u, 486u, 0u, 487u, 488u, 0u, 0u, 489u, 0u, 0u, 0u, 490u, 0u, 491u, 0u, 0u, 0u, 0u, 0u, 492u, 0u, 0u, 0u, 0u, 0u, 493u, 0u, 0u, 0u, 0u,
    0u, 494u, 0u, 0u, 0u, 0u, 0u, 495u, 0u, 0u, 0u, 0u, 496u, 0u, 0u, 0u, 497u, 0u, 498u, 0u, 499u, 0u, 500u, 0u, 501u, 0u, 0u, 0u, 0u, 0u, 502u, 0u,
    0u, 503u, 0u, 0u, 0u, 504u, 0u, 0u, 505u, 0u, 0u, 0u, 0u, 0u, 506u, 507u, 0u, 508u, 0u, 0u, 509u, 0u, 0u, 0u, 0u, 0u, 510u, 511u, 0u, 512u, 0u, 0u,
    513u, 0u, 0u, 0u, 0u, 0u, 514u, 0u, 0u, 0u, 0u, 0u, 515u, 0u, 0u, 516u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 517u, 0u, 0u,
    518u, 0u, 0u, 0u, 519u, 0u, 520u, 0u, 0u, 521u, 0u, 0u, 0u, 0u, 522u, 0u, 0u, 0u, 0u, 0u, 0u, 523u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 524u, 0u, 0u,
    0u, 0u, 0u, 525u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 526u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 527u, 0u, 0u, 0u, 528u, 0u, 0u, 0u, 0u, 0u, 529u, 0u, 530u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 531u, 0u, 0u, 0u, 532u, 0u, 533u, 0u, 0u, 0u, 0u, 534u, 0u, 0u, 0u, 0u, 535u, 0u,
    536u, 0u, 0u, 0u, 537u, 0u, 538u, 0u, 539u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 540u, 0u, 0u, 0u, 541u, 0u, 542u, 0u, 0u,
    0u, 0u, 0u, 543u, 0u, 0u, 0u, 0u, 544u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 545u, 0u, 546u, 0u, 547u, 0u, 548u, 0u, 549u, 0u, 0u, 550u, 551u,
    0u, 0u, 0u, 0u, 552u, 0u, 0u, 0u, 0u, 0u, 553u, 0u, 0u, 0u, 0u, 0u, 554u, 0u, 0u, 0u, 0u, 0u, 0u, 555u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    556u, 0u, 0u, 0u, 0u, 0u, 557u, 0u, 0u, 0u, 0u, 0u, 0u, 558u, 0u, 0u, 0u, 0u, 559u, 560u, 0u, 0u, 0u, 561u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 562u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 563u, 0u, 0u, 564u, 0u, 565u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 566u, 0u, 0u, 567u, 0u, 0u, 0u, 0u, 568u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 569u, 0u, 0u,
    570u, 0u, 0u, 0u, 0u, 571u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 572u, 0u, 0u, 573u, 0u, 0u, 0u, 574u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 575u, 0u, 0u, 576u,
    0u, 0u, 0u, 577u, 0u, 0u, 0u, 0u, 578u, 0u, 0u, 0u, 579u, 0u, 580u, 0u, 581u, 0u, 0u, 0u, 582u, 0u, 0u, 0u, 0u, 0u, 583u, 0u, 0u, 0u, 0u, 584u,
    0u, 0u, 585u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 586u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 587u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 588u, 0u, 0u, 0u, 0u, 589u, 0u, 0u, 0u, 590u, 0u, 591u, 0u, 0u, 592u, 0u, 0u, 593u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 594u,
    0u, 0u, 0u, 0u, 595u, 596u, 0u, 0u, 0u, 0u, 597u, 598u, 0u, 0u, 0u, 0u, 599u, 600u, 0u, 0u, 0u, 0u, 0u, 601u, 602u, 0u, 0u, 0u, 603u, 0u, 0u, 0u,
    604u, 0u, 0u, 605u, 0u, 0u, 0u, 0u, 0u, 606u, 0u, 0u, 0u, 607u, 0u, 0u, 0u, 608u, 609u, 0u, 610u, 0u, 0u, 611u, 0u, 612u, 0u, 0u, 0u, 0u, 0u, 613u,
    0u, 0u, 0u, 614u, 0u, 615u, 0u, 0u, 0u, 616u, 0u, 0u, 0u, 0u, 617u, 0u, 0u, 0u, 0u, 618u, 0u, 0u, 0u, 0u, 0u, 619u, 0u, 0u, 0u, 0u, 620u, 0u,
    0u, 0u, 0u, 0u, 0u, 621u, 0u, 0u, 0u, 622u, 0u, 0u, 0u, 623u, 0u, 624u, 0u, 0u, 0u, 625u, 0u, 0u, 0u, 0u, 0u, 626u, 0u, 0u, 0u, 0u, 627u, 0u,
    628u, 629u, 0u, 630u, 0u, 0u, 0u, 0u, 631u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 632u, 0u, 633u, 0u, 0u, 0u, 634u, 0u, 0u, 635u, 0u, 636u, 0u, 0u, 0u,
    0u, 0u, 637u, 0u, 0u, 0u, 0u, 638u, 0u, 0u, 639u, 0u, 0u, 0u, 0u, 0u, 0u, 640u, 0u, 0u, 641u, 0u, 0u, 642u, 0u, 0u, 643u, 0u, 0u, 0u, 0u, 0u,
    0u, 644u, 0u, 0u, 0u, 645u, 0u, 0u, 646u, 0u, 0u, 0u, 647u, 0u, 0u, 648u, 0u, 0u, 0u, 0u, 649u, 0u, 0u, 0u, 0u, 650u, 0u, 0u, 0u, 651u, 0u, 652u,
    0u, 653u, 0u, 654u, 0u, 655u, 0u, 656u, 657u, 658u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 659u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 660u, 0u, 661u, 0u, 662u, 0u, 663u, 0u, 0u, 0u, 664u, 0u, 0u, 0u, 665u, 0u, 666u, 0u, 667u, 0u, 668u, 0u, 669u, 0u, 670u, 0u,
    0u, 0u, 0u, 0u, 671u, 0u, 672u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 673u, 0u, 674u, 0u, 0u, 675u, 0u, 676u, 0u, 0u, 0u, 677u, 0u,
    678u, 0u, 0u, 0u, 679u, 0u, 680u, 0u, 0u, 0u, 681u, 0u, 682u, 0u, 0u, 0u, 0u, 0u, 0u, 683u, 0u, 0u, 0u, 684u, 0u, 0u, 0u, 685u, 686u, 0u, 0u, 0u,
    687u, 0u, 688u, 0u, 0u, 0u, 689u, 0u, 0u, 690u, 0u, 0u, 0u, 0u, 0u, 691u, 0u, 692u, 0u, 693u, 0u, 0u, 694u, 0u, 695u, 0u, 0u, 696u, 0u, 697u, 698u, 0u,
    699u, 0u, 700u, 0u, 701u, 0u, 702u, 0u, 703u, 0u, 0u, 0u, 704u, 0u, 705u, 0u, 0u, 706u, 0u, 707u, 0u, 708u, 0u, 0u, 709u, 710u, 0u, 711u, 0u, 712u, 0u, 0u,
    0u, 713u, 0u, 714u, 0u, 715u, 0u, 0u, 0u, 716u, 0u, 717u, 0u, 718u, 0u, 0u, 719u, 0u, 720u, 0u, 0u, 0u, 721u, 0u, 722u, 0u, 723u, 0u, 724u, 0u, 725u, 0u,
    0u, 0u, 726u, 0u, 727u, 0u, 728u, 0u, 0u, 729u, 0u, 730u, 0u, 0u, 0u, 731u, 0u, 732u, 0u, 733u, 0u, 734u, 0u, 735u, 0u, 0u, 0u, 0u, 736u, 0u, 737u, 0u,
    0u, 0u, 738u, 0u, 739u, 0u, 0u, 0u, 0u, 740u, 0u, 741u, 0u, 0u, 0u, 742u, 0u, 0u, 743u, 0u, 0u, 0u, 744u, 0u, 745u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 0u, 746u, 0u, 0u, 747u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 748u, 0u, 749u, 750u, 0u, 751u, 0u, 0u,
    0u, 0u, 752u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 753u, 0u, 754u, 0u, 755u, 756u, 0u, 0u, 0u, 0u, 0u, 757u, 0u, 0u, 758u, 0u, 759u, 0u, 760u,
    0u, 761u, 0u, 762u, 0u, 0u, 763u, 0u, 0u, 764u, 0u, 0u, 765u, 0u, 0u, 766u, 0u, 0u, 767u, 0u, 0u, 768u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 769u, 0u, 0u, 770u, 0u, 0u, 771u, 0u, 772u, 0u, 773u, 0u, 774u, 0u, 775u, 0u, 0u, 776u, 0u, 0u, 777u, 0u, 0u, 0u, 0u, 0u, 778u, 0u, 779u, 780u, 0u,
    0u, 0u, 0u, 0u, 781u, 0u, 0u, 0u, 0u, 0u, 0u, 782u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 783u, 0u, 0u,
    0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 784u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 0u, 785u, 0u, 0u, 0u, 786u, 0u, 0u, 0u, 0u, 787u, 0u, 0u, 0u, 0u, 0u, 788u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 789u, 0u, 0u, 0u, 0u, 0u,
    0u, 0u, 790u, 0u, 0u, 0u, 791u, 0u, 0u, 0u, 792u, 0u, 0u, 0u, 793u, 0u, 0u, 0u, 0u, 794u, 0u, 0u, 795u, 0u, 0u, 0u, 0u, 796u, 0u, 0u, 0u, 0u,
    797u, 0u, 798u, 0u, 0u, 0u, 0u, 0u, 0u, 799u, 0u, 0u, 0u, 0u, 0u, 800u, 0u, 0u, 801u, 802u, 0u, 0u, 0u, 0u, 0u, 803u, 0u, 0u, 804u, 0u, 805u, 0u,
    0u, 0u, 0u, 0u, 0u, 806u, 0u, 0u, 807u, 808u, 0u, 0u, 0u, 0u, 0u, 0u, 809u, 0u, 0u, 810u, 811u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 812u, 0u, 813u,
    0u, 0u, 0u, 0u, 0u, 0u, 814u, 0u, 0u, 0u, 0u, 0u, 0u, 815u, 0u, 0u, 816u, 817u, 0u, 0u, 818u, 0u, 0u, 0u, 0u, 0u, 0u, 819u, 0u, 0u, 0u, 820u,
    0u, 0u, 821u, 0u, 0u, 0u, 0u, 0u, 822u, 0u, 0u, 0u, 0u, 0u, 0u, 823u, 0u, 0u, 0u, 0u, 0u, 824u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 825u, 0u,
    0u, 0u, 0u, 0u, 826u, 0u, 0u, 0u, 827u, 0u, 0u, 0u, 828u, 0u, 0u, 0u, 829u, 0u, 0u, 0u, 0u, 0u, 830u, 831u, 0u, 0u, 0u, 832u, 0u, 0u, 833u,
};
void recomp_unit_0087_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,6,31,16,23 fprs=12,13,15,14 gpr_occ=4163 fpr_occ=988 gpr_total=5230 fpr_total=1279
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_23 = ctx.gpr[23];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_15 = ctx.fpr[15];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.gpr[23] = aot_gpr_23; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[15] = aot_fpr_15; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_23 = ctx.gpr[23]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_15 = ctx.fpr[15]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_redispatch_rounds = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08960000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u)
            ? kEntryIdsV813_recomp_unit_0087[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08960000;
    case 2u: goto L_08960018;
    case 3u: goto L_08960020;
    case 4u: goto L_08960028;
    case 5u: goto L_08960030;
    case 6u: goto L_0896006C;
    case 7u: goto L_08960090;
    case 8u: goto L_089600AC;
    case 9u: goto L_089600C8;
    case 10u: goto L_089600D4;
    case 11u: goto L_08960104;
    case 12u: goto L_0896011C;
    case 13u: goto L_0896012C;
    case 14u: goto L_08960134;
    case 15u: goto L_08960138;
    case 16u: goto L_08960154;
    case 17u: goto L_08960194;
    case 18u: goto L_0896019C;
    case 19u: goto L_089601C8;
    case 20u: goto L_08960200;
    case 21u: goto L_0896022C;
    case 22u: goto L_08960240;
    case 23u: goto L_08960278;
    case 24u: goto L_0896029C;
    case 25u: goto L_089602A8;
    case 26u: goto L_089602B4;
    case 27u: goto L_089602B8;
    case 28u: goto L_089602C8;
    case 29u: goto L_08960304;
    case 30u: goto L_0896030C;
    case 31u: goto L_08960314;
    case 32u: goto L_0896033C;
    case 33u: goto L_08960340;
    case 34u: goto L_08960350;
    case 35u: goto L_08960388;
    case 36u: goto L_089603B0;
    case 37u: goto L_089603BC;
    case 38u: goto L_089603C4;
    case 39u: goto L_089603D4;
    case 40u: goto L_089603E4;
    case 41u: goto L_089603EC;
    case 42u: goto L_089603F4;
    case 43u: goto L_08960404;
    case 44u: goto L_0896040C;
    case 45u: goto L_08960414;
    case 46u: goto L_08960418;
    case 47u: goto L_08960424;
    case 48u: goto L_08960450;
    case 49u: goto L_08960468;
    case 50u: goto L_08960490;
    case 51u: goto L_08960498;
    case 52u: goto L_089604A0;
    case 53u: goto L_089604A8;
    case 54u: goto L_089604B0;
    case 55u: goto L_089604B8;
    case 56u: goto L_089604C8;
    case 57u: goto L_089604D0;
    case 58u: goto L_089604E0;
    case 59u: goto L_089604F8;
    case 60u: goto L_08960528;
    case 61u: goto L_08960530;
    case 62u: goto L_08960538;
    case 63u: goto L_08960540;
    case 64u: goto L_08960548;
    case 65u: goto L_08960550;
    case 66u: goto L_08960560;
    case 67u: goto L_08960580;
    case 68u: goto L_08960590;
    case 69u: goto L_089605D0;
    case 70u: goto L_089605E8;
    case 71u: goto L_089605F8;
    case 72u: goto L_08960600;
    case 73u: goto L_08960608;
    case 74u: goto L_08960610;
    case 75u: goto L_08960618;
    case 76u: goto L_08960620;
    case 77u: goto L_08960628;
    case 78u: goto L_08960640;
    case 79u: goto L_08960650;
    case 80u: goto L_08960658;
    case 81u: goto L_08960660;
    case 82u: goto L_08960668;
    case 83u: goto L_0896069C;
    case 84u: goto L_089606AC;
    case 85u: goto L_089606B4;
    case 86u: goto L_089606BC;
    case 87u: goto L_089606D0;
    case 88u: goto L_089606E4;
    case 89u: goto L_089606FC;
    case 90u: goto L_089607E0;
    case 91u: goto L_089607EC;
    case 92u: goto L_089607F8;
    case 93u: goto L_08960800;
    case 94u: goto L_08960808;
    case 95u: goto L_0896080C;
    case 96u: goto L_08960814;
    case 97u: goto L_0896085C;
    case 98u: goto L_08960880;
    case 99u: goto L_089608A4;
    case 100u: goto L_089608B8;
    case 101u: goto L_089608C0;
    case 102u: goto L_089608D4;
    case 103u: goto L_08960908;
    case 104u: goto L_08960910;
    case 105u: goto L_0896093C;
    case 106u: goto L_0896095C;
    case 107u: goto L_08960964;
    case 108u: goto L_08960974;
    case 109u: goto L_08960990;
    case 110u: goto L_089609A0;
    case 111u: goto L_089609B4;
    case 112u: goto L_089609D4;
    case 113u: goto L_089609DC;
    case 114u: goto L_089609EC;
    case 115u: goto L_08960A08;
    case 116u: goto L_08960A18;
    case 117u: goto L_08960A2C;
    case 118u: goto L_08960A60;
    case 119u: goto L_08960A70;
    case 120u: goto L_08960A7C;
    case 121u: goto L_08960A98;
    case 122u: goto L_08960AA8;
    case 123u: goto L_08960AB8;
    case 124u: goto L_08960AC4;
    case 125u: goto L_08960ACC;
    case 126u: goto L_08960AD4;
    case 127u: goto L_08960AE4;
    case 128u: goto L_08960AF4;
    case 129u: goto L_08960B18;
    case 130u: goto L_08960B28;
    case 131u: goto L_08960B3C;
    case 132u: goto L_08960B48;
    case 133u: goto L_08960B58;
    case 134u: goto L_08960B60;
    case 135u: goto L_08960B6C;
    case 136u: goto L_08960B74;
    case 137u: goto L_08960B7C;
    case 138u: goto L_08960B84;
    case 139u: goto L_08960B8C;
    case 140u: goto L_08960B9C;
    case 141u: goto L_08960BAC;
    case 142u: goto L_08960BE0;
    case 143u: goto L_08960BF8;
    case 144u: goto L_08960C04;
    case 145u: goto L_08960C0C;
    case 146u: goto L_08960C14;
    case 147u: goto L_08960C1C;
    case 148u: goto L_08960C24;
    case 149u: goto L_08960C34;
    case 150u: goto L_08960C40;
    case 151u: goto L_08960C50;
    case 152u: goto L_08960C60;
    case 153u: goto L_08960C70;
    case 154u: goto L_08960C78;
    case 155u: goto L_08960C80;
    case 156u: goto L_08960C88;
    case 157u: goto L_08960C90;
    case 158u: goto L_08960CA0;
    case 159u: goto L_08960CB0;
    case 160u: goto L_08960CC0;
    case 161u: goto L_08960CC8;
    case 162u: goto L_08960CD0;
    case 163u: goto L_08960CDC;
    case 164u: goto L_08960CEC;
    case 165u: goto L_08960CFC;
    case 166u: goto L_08960D08;
    case 167u: goto L_08960D14;
    case 168u: goto L_08960D1C;
    case 169u: goto L_08960D24;
    case 170u: goto L_08960D34;
    case 171u: goto L_08960D44;
    case 172u: goto L_08960D58;
    case 173u: goto L_08960D64;
    case 174u: goto L_08960D6C;
    case 175u: goto L_08960D74;
    case 176u: goto L_08960D84;
    case 177u: goto L_08960D8C;
    case 178u: goto L_08960DB0;
    case 179u: goto L_08960DC0;
    case 180u: goto L_08960DC8;
    case 181u: goto L_08960DCC;
    case 182u: goto L_08960DD4;
    case 183u: goto L_08960DE4;
    case 184u: goto L_08960DEC;
    case 185u: goto L_08960DF0;
    case 186u: goto L_08960DF8;
    case 187u: goto L_08960E48;
    case 188u: goto L_08960E78;
    case 189u: goto L_08960EA8;
    case 190u: goto L_08960ED8;
    case 191u: goto L_08960F08;
    case 192u: goto L_08960F38;
    case 193u: goto L_08960F68;
    case 194u: goto L_08960F98;
    case 195u: goto L_08960FC8;
    case 196u: goto L_08960FF8;
    case 197u: goto L_08961028;
    case 198u: goto L_08961058;
    case 199u: goto L_08961088;
    case 200u: goto L_089610B8;
    case 201u: goto L_089610E8;
    case 202u: goto L_08961118;
    case 203u: goto L_08961144;
    case 204u: goto L_08961158;
    case 205u: goto L_089611A0;
    case 206u: goto L_089611D0;
    case 207u: goto L_08961200;
    case 208u: goto L_08961230;
    case 209u: goto L_08961260;
    case 210u: goto L_08961290;
    case 211u: goto L_089612C0;
    case 212u: goto L_089612F0;
    case 213u: goto L_08961320;
    case 214u: goto L_08961350;
    case 215u: goto L_08961380;
    case 216u: goto L_089613B0;
    case 217u: goto L_089613E0;
    case 218u: goto L_08961410;
    case 219u: goto L_08961440;
    case 220u: goto L_08961470;
    case 221u: goto L_0896149C;
    case 222u: goto L_089614B0;
    case 223u: goto L_089614CC;
    case 224u: goto L_089614D8;
    case 225u: goto L_089614E0;
    case 226u: goto L_089614E4;
    case 227u: goto L_089614EC;
    case 228u: goto L_089614F8;
    case 229u: goto L_0896150C;
    case 230u: goto L_08961518;
    case 231u: goto L_08961524;
    case 232u: goto L_08961530;
    case 233u: goto L_08961538;
    case 234u: goto L_0896153C;
    case 235u: goto L_08961544;
    case 236u: goto L_0896154C;
    case 237u: goto L_0896155C;
    case 238u: goto L_0896156C;
    case 239u: goto L_08961578;
    case 240u: goto L_08961598;
    case 241u: goto L_089615AC;
    case 242u: goto L_089615C8;
    case 243u: goto L_089615D4;
    case 244u: goto L_089615DC;
    case 245u: goto L_089615E0;
    case 246u: goto L_089615E8;
    case 247u: goto L_089615F4;
    case 248u: goto L_0896160C;
    case 249u: goto L_08961618;
    case 250u: goto L_08961624;
    case 251u: goto L_08961630;
    case 252u: goto L_08961638;
    case 253u: goto L_0896163C;
    case 254u: goto L_08961644;
    case 255u: goto L_0896164C;
    case 256u: goto L_08961654;
    case 257u: goto L_08961664;
    case 258u: goto L_08961674;
    case 259u: goto L_08961680;
    case 260u: goto L_089616A0;
    case 261u: goto L_089616B4;
    case 262u: goto L_089616C8;
    case 263u: goto L_089616DC;
    case 264u: goto L_089616E8;
    case 265u: goto L_08961700;
    case 266u: goto L_0896170C;
    case 267u: goto L_08961720;
    case 268u: goto L_08961730;
    case 269u: goto L_08961738;
    case 270u: goto L_0896173C;
    case 271u: goto L_0896174C;
    case 272u: goto L_0896175C;
    case 273u: goto L_08961764;
    case 274u: goto L_08961774;
    case 275u: goto L_08961794;
    case 276u: goto L_089617A4;
    case 277u: goto L_089617B0;
    case 278u: goto L_089617B8;
    case 279u: goto L_089617D0;
    case 280u: goto L_089617E4;
    case 281u: goto L_089617F8;
    case 282u: goto L_08961854;
    case 283u: goto L_089618B4;
    case 284u: goto L_089618BC;
    case 285u: goto L_089618C4;
    case 286u: goto L_089618DC;
    case 287u: goto L_089618F4;
    case 288u: goto L_0896190C;
    case 289u: goto L_08961920;
    case 290u: goto L_0896192C;
    case 291u: goto L_08961934;
    case 292u: goto L_0896194C;
    case 293u: goto L_08961954;
    case 294u: goto L_08961968;
    case 295u: goto L_08961970;
    case 296u: goto L_08961974;
    case 297u: goto L_0896197C;
    case 298u: goto L_08961984;
    case 299u: goto L_0896198C;
    case 300u: goto L_08961994;
    case 301u: goto L_089619A4;
    case 302u: goto L_089619B8;
    case 303u: goto L_089619D0;
    case 304u: goto L_08961A00;
    case 305u: goto L_08961A18;
    case 306u: goto L_08961A38;
    case 307u: goto L_08961A44;
    case 308u: goto L_08961A48;
    case 309u: goto L_08961A60;
    case 310u: goto L_08961A78;
    case 311u: goto L_08961A90;
    case 312u: goto L_08961AA8;
    case 313u: goto L_08961AC0;
    case 314u: goto L_08961AF0;
    case 315u: goto L_08961B08;
    case 316u: goto L_08961B28;
    case 317u: goto L_08961B50;
    case 318u: goto L_08961B5C;
    case 319u: goto L_08961B78;
    case 320u: goto L_08961B98;
    case 321u: goto L_08961BBC;
    case 322u: goto L_08961BC4;
    case 323u: goto L_08961BCC;
    case 324u: goto L_08961BE4;
    case 325u: goto L_08961BF4;
    case 326u: goto L_08961C00;
    case 327u: goto L_08961C10;
    case 328u: goto L_08961C18;
    case 329u: goto L_08961C24;
    case 330u: goto L_08961C34;
    case 331u: goto L_08961C64;
    case 332u: goto L_08961C7C;
    case 333u: goto L_08961C9C;
    case 334u: goto L_08961CA8;
    case 335u: goto L_08961CB8;
    case 336u: goto L_08961CE4;
    case 337u: goto L_08961CF4;
    case 338u: goto L_08961D0C;
    case 339u: goto L_08961D14;
    case 340u: goto L_08961D24;
    case 341u: goto L_08961D3C;
    case 342u: goto L_08961D54;
    case 343u: goto L_08961D6C;
    case 344u: goto L_08961D84;
    case 345u: goto L_08961D9C;
    case 346u: goto L_08961DCC;
    case 347u: goto L_08961DE4;
    case 348u: goto L_08961E04;
    case 349u: goto L_08961E2C;
    case 350u: goto L_08961E38;
    case 351u: goto L_08961E54;
    case 352u: goto L_08961E74;
    case 353u: goto L_08961E98;
    case 354u: goto L_08961EA0;
    case 355u: goto L_08961EA8;
    case 356u: goto L_08961EC0;
    case 357u: goto L_08961ED0;
    case 358u: goto L_08961EDC;
    case 359u: goto L_08961EEC;
    case 360u: goto L_08961EF4;
    case 361u: goto L_08961F00;
    case 362u: goto L_08961F10;
    case 363u: goto L_08961F40;
    case 364u: goto L_08961F58;
    case 365u: goto L_08961F78;
    case 366u: goto L_08961F84;
    case 367u: goto L_08961F94;
    case 368u: goto L_08961FC0;
    case 369u: goto L_08961FD0;
    case 370u: goto L_08961FE8;
    case 371u: goto L_08961FF0;
    case 372u: goto L_08962000;
    case 373u: goto L_0896200C;
    case 374u: goto L_0896201C;
    case 375u: goto L_08962048;
    case 376u: goto L_08962058;
    case 377u: goto L_08962070;
    case 378u: goto L_08962078;
    case 379u: goto L_08962084;
    case 380u: goto L_08962090;
    case 381u: goto L_089620A8;
    case 382u: goto L_089620C0;
    case 383u: goto L_089620E0;
    case 384u: goto L_089620F8;
    case 385u: goto L_08962110;
    case 386u: goto L_08962128;
    case 387u: goto L_08962140;
    case 388u: goto L_08962144;
    case 389u: goto L_08962178;
    case 390u: goto L_08962190;
    case 391u: goto L_089621B0;
    case 392u: goto L_089621D8;
    case 393u: goto L_089621E4;
    case 394u: goto L_08962200;
    case 395u: goto L_08962220;
    case 396u: goto L_08962244;
    case 397u: goto L_0896224C;
    case 398u: goto L_0896225C;
    case 399u: goto L_0896227C;
    case 400u: goto L_0896228C;
    case 401u: goto L_08962298;
    case 402u: goto L_089622A8;
    case 403u: goto L_089622B0;
    case 404u: goto L_089622BC;
    case 405u: goto L_089622CC;
    case 406u: goto L_089622FC;
    case 407u: goto L_08962314;
    case 408u: goto L_08962334;
    case 409u: goto L_08962340;
    case 410u: goto L_08962364;
    case 411u: goto L_08962374;
    case 412u: goto L_08962380;
    case 413u: goto L_08962390;
    case 414u: goto L_089623BC;
    case 415u: goto L_089623CC;
    case 416u: goto L_089623E4;
    case 417u: goto L_089623EC;
    case 418u: goto L_089623FC;
    case 419u: goto L_08962408;
    case 420u: goto L_0896242C;
    case 421u: goto L_0896243C;
    case 422u: goto L_08962448;
    case 423u: goto L_08962458;
    case 424u: goto L_08962484;
    case 425u: goto L_08962494;
    case 426u: goto L_089624AC;
    case 427u: goto L_089624B4;
    case 428u: goto L_089624C4;
    case 429u: goto L_089624DC;
    case 430u: goto L_089624F4;
    case 431u: goto L_0896250C;
    case 432u: goto L_0896253C;
    case 433u: goto L_08962554;
    case 434u: goto L_08962574;
    case 435u: goto L_0896259C;
    case 436u: goto L_089625A8;
    case 437u: goto L_089625C4;
    case 438u: goto L_089625E4;
    case 439u: goto L_08962608;
    case 440u: goto L_08962610;
    case 441u: goto L_08962620;
    case 442u: goto L_08962640;
    case 443u: goto L_08962650;
    case 444u: goto L_0896265C;
    case 445u: goto L_0896266C;
    case 446u: goto L_08962674;
    case 447u: goto L_08962680;
    case 448u: goto L_08962690;
    case 449u: goto L_089626C0;
    case 450u: goto L_089626D8;
    case 451u: goto L_089626F8;
    case 452u: goto L_08962704;
    case 453u: goto L_0896271C;
    case 454u: goto L_0896272C;
    case 455u: goto L_08962758;
    case 456u: goto L_08962768;
    case 457u: goto L_08962780;
    case 458u: goto L_08962788;
    case 459u: goto L_08962794;
    case 460u: goto L_089627A0;
    case 461u: goto L_089627B8;
    case 462u: goto L_089627CC;
    case 463u: goto L_089627DC;
    case 464u: goto L_089627F4;
    case 465u: goto L_08962808;
    case 466u: goto L_08962810;
    case 467u: goto L_0896281C;
    case 468u: goto L_08962824;
    case 469u: goto L_08962830;
    case 470u: goto L_08962838;
    case 471u: goto L_08962844;
    case 472u: goto L_0896284C;
    case 473u: goto L_08962850;
    case 474u: goto L_08962858;
    case 475u: goto L_08962868;
    case 476u: goto L_08962874;
    case 477u: goto L_08962878;
    case 478u: goto L_089628A4;
    case 479u: goto L_089628C4;
    case 480u: goto L_089628DC;
    case 481u: goto L_089628E4;
    case 482u: goto L_089628EC;
    case 483u: goto L_089628F4;
    case 484u: goto L_089628FC;
    case 485u: goto L_08962904;
    case 486u: goto L_0896290C;
    case 487u: goto L_08962914;
    case 488u: goto L_08962918;
    case 489u: goto L_08962924;
    case 490u: goto L_08962934;
    case 491u: goto L_0896293C;
    case 492u: goto L_08962954;
    case 493u: goto L_0896296C;
    case 494u: goto L_08962984;
    case 495u: goto L_0896299C;
    case 496u: goto L_089629B0;
    case 497u: goto L_089629C0;
    case 498u: goto L_089629C8;
    case 499u: goto L_089629D0;
    case 500u: goto L_089629D8;
    case 501u: goto L_089629E0;
    case 502u: goto L_089629F8;
    case 503u: goto L_08962A04;
    case 504u: goto L_08962A14;
    case 505u: goto L_08962A20;
    case 506u: goto L_08962A38;
    case 507u: goto L_08962A3C;
    case 508u: goto L_08962A44;
    case 509u: goto L_08962A50;
    case 510u: goto L_08962A68;
    case 511u: goto L_08962A6C;
    case 512u: goto L_08962A74;
    case 513u: goto L_08962A80;
    case 514u: goto L_08962A98;
    case 515u: goto L_08962AB0;
    case 516u: goto L_08962ABC;
    case 517u: goto L_08962AF4;
    case 518u: goto L_08962B00;
    case 519u: goto L_08962B10;
    case 520u: goto L_08962B18;
    case 521u: goto L_08962B24;
    case 522u: goto L_08962B38;
    case 523u: goto L_08962B54;
    case 524u: goto L_08962B74;
    case 525u: goto L_08962B8C;
    case 526u: goto L_08962BAC;
    case 527u: goto L_08962BCC;
    case 528u: goto L_08962BDC;
    case 529u: goto L_08962BF4;
    case 530u: goto L_08962BFC;
    case 531u: goto L_08962C38;
    case 532u: goto L_08962C48;
    case 533u: goto L_08962C50;
    case 534u: goto L_08962C64;
    case 535u: goto L_08962C78;
    case 536u: goto L_08962C80;
    case 537u: goto L_08962C90;
    case 538u: goto L_08962C98;
    case 539u: goto L_08962CA0;
    case 540u: goto L_08962CDC;
    case 541u: goto L_08962CEC;
    case 542u: goto L_08962CF4;
    case 543u: goto L_08962D0C;
    case 544u: goto L_08962D20;
    case 545u: goto L_08962D4C;
    case 546u: goto L_08962D54;
    case 547u: goto L_08962D5C;
    case 548u: goto L_08962D64;
    case 549u: goto L_08962D6C;
    case 550u: goto L_08962D78;
    case 551u: goto L_08962D7C;
    case 552u: goto L_08962D90;
    case 553u: goto L_08962DA8;
    case 554u: goto L_08962DC0;
    case 555u: goto L_08962DDC;
    case 556u: goto L_08962E00;
    case 557u: goto L_08962E18;
    case 558u: goto L_08962E34;
    case 559u: goto L_08962E48;
    case 560u: goto L_08962E4C;
    case 561u: goto L_08962E5C;
    case 562u: goto L_08962E88;
    case 563u: goto L_08962EAC;
    case 564u: goto L_08962EB8;
    case 565u: goto L_08962EC0;
    case 566u: goto L_08962F34;
    case 567u: goto L_08962F40;
    case 568u: goto L_08962F54;
    case 569u: goto L_08962F74;
    case 570u: goto L_08962F80;
    case 571u: goto L_08962F94;
    case 572u: goto L_08962FB4;
    case 573u: goto L_08962FC0;
    case 574u: goto L_08962FD0;
    case 575u: goto L_08962FF0;
    case 576u: goto L_08962FFC;
    case 577u: goto L_0896300C;
    case 578u: goto L_08963020;
    case 579u: goto L_08963030;
    case 580u: goto L_08963038;
    case 581u: goto L_08963040;
    case 582u: goto L_08963050;
    case 583u: goto L_08963068;
    case 584u: goto L_0896307C;
    case 585u: goto L_08963088;
    case 586u: goto L_089630C0;
    case 587u: goto L_089630EC;
    case 588u: goto L_08963118;
    case 589u: goto L_0896312C;
    case 590u: goto L_0896313C;
    case 591u: goto L_08963144;
    case 592u: goto L_08963150;
    case 593u: goto L_0896315C;
    case 594u: goto L_0896317C;
    case 595u: goto L_08963190;
    case 596u: goto L_08963194;
    case 597u: goto L_089631A8;
    case 598u: goto L_089631AC;
    case 599u: goto L_089631C0;
    case 600u: goto L_089631C4;
    case 601u: goto L_089631DC;
    case 602u: goto L_089631E0;
    case 603u: goto L_089631F0;
    case 604u: goto L_08963200;
    case 605u: goto L_0896320C;
    case 606u: goto L_08963224;
    case 607u: goto L_08963234;
    case 608u: goto L_08963244;
    case 609u: goto L_08963248;
    case 610u: goto L_08963250;
    case 611u: goto L_0896325C;
    case 612u: goto L_08963264;
    case 613u: goto L_0896327C;
    case 614u: goto L_0896328C;
    case 615u: goto L_08963294;
    case 616u: goto L_089632A4;
    case 617u: goto L_089632B8;
    case 618u: goto L_089632CC;
    case 619u: goto L_089632E4;
    case 620u: goto L_089632F8;
    case 621u: goto L_08963314;
    case 622u: goto L_08963324;
    case 623u: goto L_08963334;
    case 624u: goto L_0896333C;
    case 625u: goto L_0896334C;
    case 626u: goto L_08963364;
    case 627u: goto L_08963378;
    case 628u: goto L_08963380;
    case 629u: goto L_08963384;
    case 630u: goto L_0896338C;
    case 631u: goto L_089633A0;
    case 632u: goto L_089633C4;
    case 633u: goto L_089633CC;
    case 634u: goto L_089633DC;
    case 635u: goto L_089633E8;
    case 636u: goto L_089633F0;
    case 637u: goto L_08963408;
    case 638u: goto L_0896341C;
    case 639u: goto L_08963428;
    case 640u: goto L_08963444;
    case 641u: goto L_08963450;
    case 642u: goto L_0896345C;
    case 643u: goto L_08963468;
    case 644u: goto L_08963484;
    case 645u: goto L_08963494;
    case 646u: goto L_089634A0;
    case 647u: goto L_089634B0;
    case 648u: goto L_089634BC;
    case 649u: goto L_089634D0;
    case 650u: goto L_089634E4;
    case 651u: goto L_089634F4;
    case 652u: goto L_089634FC;
    case 653u: goto L_08963504;
    case 654u: goto L_0896350C;
    case 655u: goto L_08963514;
    case 656u: goto L_0896351C;
    case 657u: goto L_08963520;
    case 658u: goto L_08963524;
    case 659u: goto L_0896354C;
    case 660u: goto L_08963598;
    case 661u: goto L_089635A0;
    case 662u: goto L_089635A8;
    case 663u: goto L_089635B0;
    case 664u: goto L_089635C0;
    case 665u: goto L_089635D0;
    case 666u: goto L_089635D8;
    case 667u: goto L_089635E0;
    case 668u: goto L_089635E8;
    case 669u: goto L_089635F0;
    case 670u: goto L_089635F8;
    case 671u: goto L_08963610;
    case 672u: goto L_08963618;
    case 673u: goto L_0896364C;
    case 674u: goto L_08963654;
    case 675u: goto L_08963660;
    case 676u: goto L_08963668;
    case 677u: goto L_08963678;
    case 678u: goto L_08963680;
    case 679u: goto L_08963690;
    case 680u: goto L_08963698;
    case 681u: goto L_089636A8;
    case 682u: goto L_089636B0;
    case 683u: goto L_089636CC;
    case 684u: goto L_089636DC;
    case 685u: goto L_089636EC;
    case 686u: goto L_089636F0;
    case 687u: goto L_08963700;
    case 688u: goto L_08963708;
    case 689u: goto L_08963718;
    case 690u: goto L_08963724;
    case 691u: goto L_0896373C;
    case 692u: goto L_08963744;
    case 693u: goto L_0896374C;
    case 694u: goto L_08963758;
    case 695u: goto L_08963760;
    case 696u: goto L_0896376C;
    case 697u: goto L_08963774;
    case 698u: goto L_08963778;
    case 699u: goto L_08963780;
    case 700u: goto L_08963788;
    case 701u: goto L_08963790;
    case 702u: goto L_08963798;
    case 703u: goto L_089637A0;
    case 704u: goto L_089637B0;
    case 705u: goto L_089637B8;
    case 706u: goto L_089637C4;
    case 707u: goto L_089637CC;
    case 708u: goto L_089637D4;
    case 709u: goto L_089637E0;
    case 710u: goto L_089637E4;
    case 711u: goto L_089637EC;
    case 712u: goto L_089637F4;
    case 713u: goto L_08963804;
    case 714u: goto L_0896380C;
    case 715u: goto L_08963814;
    case 716u: goto L_08963824;
    case 717u: goto L_0896382C;
    case 718u: goto L_08963834;
    case 719u: goto L_08963840;
    case 720u: goto L_08963848;
    case 721u: goto L_08963858;
    case 722u: goto L_08963860;
    case 723u: goto L_08963868;
    case 724u: goto L_08963870;
    case 725u: goto L_08963878;
    case 726u: goto L_08963888;
    case 727u: goto L_08963890;
    case 728u: goto L_08963898;
    case 729u: goto L_089638A4;
    case 730u: goto L_089638AC;
    case 731u: goto L_089638BC;
    case 732u: goto L_089638C4;
    case 733u: goto L_089638CC;
    case 734u: goto L_089638D4;
    case 735u: goto L_089638DC;
    case 736u: goto L_089638F0;
    case 737u: goto L_089638F8;
    case 738u: goto L_08963908;
    case 739u: goto L_08963910;
    case 740u: goto L_08963924;
    case 741u: goto L_0896392C;
    case 742u: goto L_0896393C;
    case 743u: goto L_08963948;
    case 744u: goto L_08963958;
    case 745u: goto L_08963960;
    case 746u: goto L_08963990;
    case 747u: goto L_0896399C;
    case 748u: goto L_089639E0;
    case 749u: goto L_089639E8;
    case 750u: goto L_089639EC;
    case 751u: goto L_089639F4;
    case 752u: goto L_08963A08;
    case 753u: goto L_08963A34;
    case 754u: goto L_08963A3C;
    case 755u: goto L_08963A44;
    case 756u: goto L_08963A48;
    case 757u: goto L_08963A60;
    case 758u: goto L_08963A6C;
    case 759u: goto L_08963A74;
    case 760u: goto L_08963A7C;
    case 761u: goto L_08963A84;
    case 762u: goto L_08963A8C;
    case 763u: goto L_08963A98;
    case 764u: goto L_08963AA4;
    case 765u: goto L_08963AB0;
    case 766u: goto L_08963ABC;
    case 767u: goto L_08963AC8;
    case 768u: goto L_08963AD4;
    case 769u: goto L_08963B04;
    case 770u: goto L_08963B10;
    case 771u: goto L_08963B1C;
    case 772u: goto L_08963B24;
    case 773u: goto L_08963B2C;
    case 774u: goto L_08963B34;
    case 775u: goto L_08963B3C;
    case 776u: goto L_08963B48;
    case 777u: goto L_08963B54;
    case 778u: goto L_08963B6C;
    case 779u: goto L_08963B74;
    case 780u: goto L_08963B78;
    case 781u: goto L_08963B90;
    case 782u: goto L_08963BAC;
    case 783u: goto L_08963BF4;
    case 784u: goto L_08963C58;
    case 785u: goto L_08963C8C;
    case 786u: goto L_08963C9C;
    case 787u: goto L_08963CB0;
    case 788u: goto L_08963CC8;
    case 789u: goto L_08963CE8;
    case 790u: goto L_08963D08;
    case 791u: goto L_08963D18;
    case 792u: goto L_08963D28;
    case 793u: goto L_08963D38;
    case 794u: goto L_08963D4C;
    case 795u: goto L_08963D58;
    case 796u: goto L_08963D6C;
    case 797u: goto L_08963D80;
    case 798u: goto L_08963D88;
    case 799u: goto L_08963DA4;
    case 800u: goto L_08963DBC;
    case 801u: goto L_08963DC8;
    case 802u: goto L_08963DCC;
    case 803u: goto L_08963DE4;
    case 804u: goto L_08963DF0;
    case 805u: goto L_08963DF8;
    case 806u: goto L_08963E14;
    case 807u: goto L_08963E20;
    case 808u: goto L_08963E24;
    case 809u: goto L_08963E40;
    case 810u: goto L_08963E4C;
    case 811u: goto L_08963E50;
    case 812u: goto L_08963E74;
    case 813u: goto L_08963E7C;
    case 814u: goto L_08963E98;
    case 815u: goto L_08963EB4;
    case 816u: goto L_08963EC0;
    case 817u: goto L_08963EC4;
    case 818u: goto L_08963ED0;
    case 819u: goto L_08963EEC;
    case 820u: goto L_08963EFC;
    case 821u: goto L_08963F08;
    case 822u: goto L_08963F20;
    case 823u: goto L_08963F3C;
    case 824u: goto L_08963F54;
    case 825u: goto L_08963F78;
    case 826u: goto L_08963F90;
    case 827u: goto L_08963FA0;
    case 828u: goto L_08963FB0;
    case 829u: goto L_08963FC0;
    case 830u: goto L_08963FD8;
    case 831u: goto L_08963FDC;
    case 832u: goto L_08963FEC;
    case 833u: goto L_08963FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
// PSPRECOMP_V813_SHARED_JR_DISPATCH: one dynamic-JR reject/redispatch path per unit.
LOCAL_JR_DISPATCH:
    {
        const std::uint32_t local_delta_v813 = jump_target - 0x08960000u;
        if (local_delta_v813 >= 16380u || (local_delta_v813 & 3u) != 0u) {
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
L_08960000:
    ctx.execute_vfpu_vtfm_ct<14u, 36u, 12u, 4u, 3u>();
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08960020;
      }
      goto L_08960018;
    }
L_08960018:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08960020;
L_08960020:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08960030;
      }
      goto L_08960028;
    }
L_08960028:
    aot_gpr_31 = (0x08960030u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0086.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 5u, 0x08960030u, 0x0895DEDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0086_entry(rt, ctx, 295u, aot_mem);
#else
        recomp_unit_0086_entry(rt, ctx, 295u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0086_entry, 86u, 295u, 0x0895DEDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960030u) goto L_08960030;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960030:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(500), aot_run_words);
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
      aot_gpr_23 = aot_run_words[10];
      ctx.gpr[30] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0896006C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2448));
    ctx.gpr[7] = (2198u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-12212));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08960090u);
    aot_gpr_6 = (0u | 112u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 7u, 0x08960090u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960090u) goto L_08960090;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960090:
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(11888));
    ctx.gpr[7] = (2198u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-10720));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_31 = (0x089600ACu);
    aot_gpr_6 = (0u | 320u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 8u, 0x089600ACu, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089600ACu) goto L_089600AC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089600AC:
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(13808));
    ctx.gpr[7] = (2198u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8780));
    aot_gpr_5 = (0u | 5u);
    aot_gpr_31 = (0x089600C8u);
    aot_gpr_6 = (0u | 128u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0215.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 9u, 0x089600C8u, 0x08B60C7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0215_entry(rt, ctx, 158u, aot_mem);
#else
        recomp_unit_0215_entry(rt, ctx, 158u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089600C8u) goto L_089600C8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089600C8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089600D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 14u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08960138;
      }
      goto L_08960104;
    }
L_08960104:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0896011Cu);
    ctx.gpr[18] = (aot_gpr_4 + aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0158.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 12u, 0x0896011Cu, 0x08A7FAA4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0158_entry(rt, ctx, 666u, aot_mem);
#else
        recomp_unit_0158_entry(rt, ctx, 666u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896011Cu) goto L_0896011C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896011C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x0896012Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896012Cu) goto L_0896012C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0896012C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08960138;
      }
      goto L_08960134;
    }
L_08960134:
    aot_gpr_16 = (0u | 1u);
    goto L_08960138;
L_08960138:
    ctx.gpr[2] = (aot_gpr_16 & 255u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_6 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    ctx.gpr[17] = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08960194u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 17u, 0x08960194u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960194u) goto L_08960194;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960194:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08960200;
      }
      goto L_0896019C;
    }
L_0896019C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08960200;
      }
      goto L_089601C8;
    }
L_089601C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0896022C;
      }
      goto L_08960200;
    }
L_08960200:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0896022C;
L_0896022C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08960278u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 23u, 0x08960278u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960278u) goto L_08960278;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960278:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089602B4;
      }
      goto L_0896029C;
    }
L_0896029C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089602B4;
      }
      goto L_089602A8;
    }
L_089602A8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_089602B8;
      }
      goto L_089602B4;
    }
L_089602B4:
    ctx.gpr[2] = (aot_gpr_4 + static_cast<std::uint32_t>(320));
    goto L_089602B8;
L_089602B8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089602C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0896033C;
      }
      goto L_08960304;
    }
L_08960304:
    aot_gpr_31 = (0x0896030Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 30u, 0x0896030Cu, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896030Cu) goto L_0896030C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896030C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0896033C;
      }
      goto L_08960314;
    }
L_08960314:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08960340;
      }
      goto L_0896033C;
    }
L_0896033C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08960340;
L_08960340:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08960388u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 35u, 0x08960388u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960388u) goto L_08960388;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960388:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    ctx.gpr[2] = (aot_gpr_4 + aot_gpr_16);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089603C4;
      }
      goto L_089603B0;
    }
L_089603B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089603C4;
      }
      goto L_089603BC;
    }
L_089603BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_089603C4;
      }
      goto L_089603C4;
    }
L_089603C4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089603D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089603E4u);
    goto L_089602C8;
L_089603E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08960414;
      }
      goto L_089603EC;
    }
L_089603EC:
    aot_gpr_31 = (0x089603F4u);
    goto L_089602C8;
L_089603F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08960414;
      }
      goto L_08960404;
    }
L_08960404:
    aot_gpr_31 = (0x0896040Cu);
    goto L_089602C8;
L_0896040C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960418;
      }
      goto L_08960414;
    }
L_08960414:
    ctx.gpr[2] = (0u | 0u);
    goto L_08960418;
L_08960418:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960424:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(5465)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
      if (branch_taken) {
          goto L_089604B8;
      }
      goto L_08960468;
    }
L_08960468:
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_16 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089604B0;
      }
      goto L_08960490;
    }
L_08960490:
    aot_gpr_31 = (0x08960498u);
    goto L_089602C8;
L_08960498:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089604C8;
      }
      goto L_089604A0;
    }
L_089604A0:
    aot_gpr_31 = (0x089604A8u);
    goto L_089602C8;
L_089604A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089604D0;
      }
      goto L_089604B0;
    }
L_089604B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089604D0;
      }
      goto L_089604B8;
    }
L_089604B8:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[2] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089604D0;
      }
      goto L_089604C8;
    }
L_089604C8:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    goto L_089604D0;
L_089604D0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089604E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(5465)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08960550;
      }
      goto L_089604F8;
    }
L_089604F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_16 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08960548;
      }
      goto L_08960528;
    }
L_08960528:
    aot_gpr_31 = (0x08960530u);
    goto L_089602C8;
L_08960530:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08960560;
    }
    goto L_08960538;
L_08960538:
    aot_gpr_31 = (0x08960540u);
    goto L_089602C8;
L_08960540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08960580;
      }
      goto L_08960548;
    }
L_08960548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08960580;
      }
      goto L_08960550;
    }
L_08960550:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[2] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08960580;
      }
      goto L_08960560;
    }
L_08960560:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    goto L_08960580;
L_08960580:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08960610;
      }
      goto L_089605D0;
    }
L_089605D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08960600;
      }
      goto L_089605E8;
    }
L_089605E8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[20])) && aot_fpr_13 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08960600;
      }
      goto L_089605F8;
    }
L_089605F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08960608;
      }
      goto L_08960600;
    }
L_08960600:
    aot_gpr_31 = (0x08960608u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 73u, 0x08960608u, 0x08964540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960608u) goto L_08960608;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960608:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089606BC;
      }
      goto L_08960610;
    }
L_08960610:
    aot_gpr_31 = (0x08960618u);
    goto L_089602C8;
L_08960618:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08960668;
    }
    goto L_08960620;
L_08960620:
    aot_gpr_31 = (0x08960628u);
    goto L_089602C8;
L_08960628:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08960658;
      }
      goto L_08960640;
    }
L_08960640:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[20])) && aot_fpr_13 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08960658;
      }
      goto L_08960650;
    }
L_08960650:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08960660;
      }
      goto L_08960658;
    }
L_08960658:
    aot_gpr_31 = (0x08960660u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 81u, 0x08960660u, 0x08964540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960660u) goto L_08960660;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960660:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089606BC;
      }
      goto L_08960668;
    }
L_08960668:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089606B4;
      }
      goto L_0896069C;
    }
L_0896069C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[20])) && aot_fpr_13 == ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089606B4;
      }
      goto L_089606AC;
    }
L_089606AC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089606BC;
      }
      goto L_089606B4;
    }
L_089606B4:
    aot_gpr_31 = (0x089606BCu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 86u, 0x089606BCu, 0x08964540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089606BCu) goto L_089606BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089606BC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089606D0:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    if (aot_gpr_5 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(176), 0u);
        goto L_089606FC;
    }
    goto L_089606E4;
L_089606E4:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(615))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(176), 0u);
    goto L_089606FC;
L_089606FC:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(212), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(300), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(188), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(184), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(224), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(228), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(192), 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(196), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(232), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(240), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(236), 0u);
    { const std::uint32_t aot_run_words[14]{0u, std::bit_cast<std::uint32_t>(aot_fpr_12), 0u, 0u, std::bit_cast<std::uint32_t>(aot_fpr_12), 0u, std::bit_cast<std::uint32_t>(aot_fpr_12), 0u, 0u, std::bit_cast<std::uint32_t>(aot_fpr_12), 0u, std::bit_cast<std::uint32_t>(aot_fpr_12), 0u, std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(244), aot_run_words); }
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(334), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(335), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 100u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(338), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(339), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(aot_gpr_5));
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(308), aot_run_words); }
    aot_gpr_5 = (0u | 20u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(328), 0u);
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089607E0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_08960800;
      }
      goto L_089607EC;
    }
L_089607EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08960808;
      }
      goto L_089607F8;
    }
L_089607F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896080C;
      }
      goto L_08960800;
    }
L_08960800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896080C;
      }
      goto L_08960808;
    }
L_08960808:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896080C;
L_0896080C:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), aot_gpr_31);
    aot_gpr_31 = (0x0896085Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 97u, 0x0896085Cu, 0x08964540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896085Cu) goto L_0896085C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896085C:
    aot_gpr_4 = (16585u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[26];
        goto L_08960880;
    }
    goto L_08960880;
L_08960880:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x089608A4u);
    aot_fpr_12 = aot_fpr_14 - aot_fpr_15;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 99u, 0x089608A4u, 0x08964540u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 28u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 28u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089608A4u) goto L_089608A4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089608A4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[26];
        goto L_089608B8;
    }
    goto L_089608B8;
L_089608B8:
    aot_gpr_31 = (0x089608C0u);
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0162.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 101u, 0x089608C0u, 0x08A8F0B4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0162_entry(rt, ctx, 580u, aot_mem);
#else
        recomp_unit_0162_entry(rt, ctx, 580u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089608C0u) goto L_089608C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089608C0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
        goto L_089608D4;
    }
    goto L_089608D4;
L_089608D4:
    aot_fpr_12 = ctx.fpr[22] / ctx.fpr[26];
    aot_gpr_4 = (16672u << 16u);
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[20] = aot_fpr_14 - ctx.fpr[20];
    aot_fpr_12 = aot_fpr_15 - aot_fpr_12;
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08960910;
      }
      goto L_08960908;
    }
L_08960908:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_16);
    goto L_08960910;
L_08960910:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_0896093C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0896095Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 106u, 0x0896095Cu, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896095Cu) goto L_0896095C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896095C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08960990;
      }
      goto L_08960964;
    }
L_08960964:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08960990;
      }
      goto L_08960974;
    }
L_08960974:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_089609A0;
      }
      goto L_08960990;
    }
L_08960990:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_089609A0;
L_089609A0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089609B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089609D4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 112u, 0x089609D4u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089609D4u) goto L_089609D4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089609D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08960A08;
      }
      goto L_089609DC;
    }
L_089609DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08960A08;
      }
      goto L_089609EC;
    }
L_089609EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960A18;
      }
      goto L_08960A08;
    }
L_08960A08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08960A18;
L_08960A18:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960A2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(352)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), aot_gpr_16);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(56), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08960A7C;
      }
      goto L_08960A60;
    }
L_08960A60:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08960A70u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 119u, 0x08960A70u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960A70u) goto L_08960A70;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960A70:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08960A7C;
L_08960A7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(204))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08960CD0;
      }
      goto L_08960A98;
    }
L_08960A98:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 246u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08960ACC;
      }
      goto L_08960AA8;
    }
L_08960AA8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 275u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08960ACC;
      }
      goto L_08960AB8;
    }
L_08960AB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08960AD4;
      }
      goto L_08960AC4;
    }
L_08960AC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08960AF4;
      }
      goto L_08960ACC;
    }
L_08960ACC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960AD4;
    }
L_08960AD4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(33));
    aot_gpr_31 = (0x08960AE4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 127u, 0x08960AE4u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960AE4u) goto L_08960AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960AE4:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08960AF4;
L_08960AF4:
    aot_gpr_5 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_5 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08960B28;
      }
      goto L_08960B18;
    }
L_08960B18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(380)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08960B84;
      }
      goto L_08960B28;
    }
L_08960B28:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960B3Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0105.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 131u, 0x08960B3Cu, 0x089A8CF4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0105_entry(rt, ctx, 118u, aot_mem);
#else
        recomp_unit_0105_entry(rt, ctx, 118u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 118u, 0x089A8CF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960B3Cu) goto L_08960B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960B3C:
    aot_gpr_4 = (0u | 10u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08960B7C;
      }
      goto L_08960B48;
    }
L_08960B48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960B58u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0105.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 133u, 0x08960B58u, 0x089ABCECu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0105_entry(rt, ctx, 817u, aot_mem);
#else
        recomp_unit_0105_entry(rt, ctx, 817u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 817u, 0x089ABCECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960B58u) goto L_08960B58;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960B58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08960B74;
      }
      goto L_08960B60;
    }
L_08960B60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08960B8C;
      }
      goto L_08960B6C;
    }
L_08960B6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08960BAC;
      }
      goto L_08960B74;
    }
L_08960B74:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960B7C;
    }
L_08960B7C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960B84;
    }
L_08960B84:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960B8C;
    }
L_08960B8C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    aot_gpr_31 = (0x08960B9Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 140u, 0x08960B9Cu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960B9Cu) goto L_08960B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960B9C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08960BAC;
L_08960BAC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15436u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08960C0C;
      }
      goto L_08960BE0;
    }
L_08960BE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08960BF8u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960BF8u) goto L_08960BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08960BF8:
    ctx.gpr[21] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
      if (branch_taken) {
          goto L_08960C14;
      }
      goto L_08960C04;
    }
L_08960C04:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960CC8;
      }
      goto L_08960C0C;
    }
L_08960C0C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960C14;
    }
L_08960C14:
    aot_gpr_31 = (0x08960C1Cu);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    goto L_08960424;
L_08960C1C:
    aot_gpr_31 = (0x08960C24u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0066.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 148u, 0x08960C24u, 0x0890EF94u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0066_entry(rt, ctx, 696u, aot_mem);
#else
        recomp_unit_0066_entry(rt, ctx, 696u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 696u, 0x0890EF94u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960C24u) goto L_08960C24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960C24:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != aot_gpr_4;
      if (branch_taken) {
          goto L_08960C70;
      }
      goto L_08960C34;
    }
L_08960C34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08960C60;
    }
    goto L_08960C40;
L_08960C40:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(35));
    aot_gpr_31 = (0x08960C50u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 151u, 0x08960C50u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960C50u) goto L_08960C50;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960C50:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08960C60;
L_08960C60:
    aot_gpr_5 = (0u | 7u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08960C80;
      }
      goto L_08960C70;
    }
L_08960C70:
    if (ctx.gpr[19] == ctx.gpr[21]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08960C88;
    }
    goto L_08960C78;
L_08960C78:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960CC8;
      }
      goto L_08960C80;
    }
L_08960C80:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960C88;
    }
L_08960C88:
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08960CB0;
    }
    goto L_08960C90;
L_08960C90:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr_31 = (0x08960CA0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 158u, 0x08960CA0u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960CA0u) goto L_08960CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960CA0:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08960CB0;
L_08960CB0:
    aot_gpr_5 = (0u | 8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08960CC8;
      }
      goto L_08960CC0;
    }
L_08960CC0:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960CC8;
    }
L_08960CC8:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D08;
      }
      goto L_08960CD0;
    }
L_08960CD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08960CFC;
    }
    goto L_08960CDC;
L_08960CDC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(37));
    aot_gpr_31 = (0x08960CECu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 164u, 0x08960CECu, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960CECu) goto L_08960CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960CEC:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08960CFC;
L_08960CFC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08960D1C;
      }
      goto L_08960D08;
    }
L_08960D08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08960D24;
      }
      goto L_08960D14;
    }
L_08960D14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08960D44;
      }
      goto L_08960D1C;
    }
L_08960D1C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960D24;
    }
L_08960D24:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(38));
    aot_gpr_31 = (0x08960D34u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 170u, 0x08960D34u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960D34u) goto L_08960D34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960D34:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08960D44;
L_08960D44:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(193)));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08960D6C;
      }
      goto L_08960D58;
    }
L_08960D58:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08960D74;
      }
      goto L_08960D64;
    }
L_08960D64:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960D6C;
    }
L_08960D6C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08960D8C;
      }
      goto L_08960D74;
    }
L_08960D74:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08960D84u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0182.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 176u, 0x08960D84u, 0x08ADCEC0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0182_entry(rt, ctx, 266u, aot_mem);
#else
        recomp_unit_0182_entry(rt, ctx, 266u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 266u, 0x08ADCEC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960D84u) goto L_08960D84;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960D84:
    aot_gpr_4 = (0u | 20u);
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08960D8C;
L_08960D8C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(44), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960DB0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08960DC8;
      }
      goto L_08960DC0;
    }
L_08960DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08960DCC;
      }
      goto L_08960DC8;
    }
L_08960DC8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08960DCC;
L_08960DCC:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960DD4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08960DEC;
      }
      goto L_08960DE4;
    }
L_08960DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08960DF0;
      }
      goto L_08960DEC;
    }
L_08960DEC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08960DF0;
L_08960DF0:
    jump_target = aot_gpr_31;
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08960DF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (0u | 352u);
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (2238u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(172));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08960E48u);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 187u, 0x08960E48u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960E48u) goto L_08960E48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960E48:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(208));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960E78u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 188u, 0x08960E78u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960E78u) goto L_08960E78;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960E78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(212));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960EA8u);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 189u, 0x08960EA8u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960EA8u) goto L_08960EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960EA8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(300));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960ED8u);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 190u, 0x08960ED8u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960ED8u) goto L_08960ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960ED8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(2));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960F08u);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 191u, 0x08960F08u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960F08u) goto L_08960F08;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960F08:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(176));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960F38u);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 192u, 0x08960F38u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960F38u) goto L_08960F38;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960F38:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(333));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960F68u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 193u, 0x08960F68u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960F68u) goto L_08960F68;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960F68:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(334));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960F98u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 194u, 0x08960F98u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960F98u) goto L_08960F98;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960F98:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(335));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960FC8u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 195u, 0x08960FC8u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960FC8u) goto L_08960FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960FC8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(336));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08960FF8u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 196u, 0x08960FF8u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08960FF8u) goto L_08960FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08960FF8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(337));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961028u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 197u, 0x08961028u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961028u) goto L_08961028;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961028:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(338));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961058u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 198u, 0x08961058u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961058u) goto L_08961058;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961058:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(339));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961088u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 199u, 0x08961088u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961088u) goto L_08961088;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961088:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(340));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089610B8u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 200u, 0x089610B8u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089610B8u) goto L_089610B8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089610B8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089610E8u);
    aot_gpr_6 = (0u | 70u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 201u, 0x089610E8u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089610E8u) goto L_089610E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089610E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(341));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(70));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961118u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 202u, 0x08961118u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961118u) goto L_08961118;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961118:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(342));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_31 = (0x08961144u);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 203u, 0x08961144u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961144u) goto L_08961144;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961144:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08961158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (2238u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    ctx.gpr[17] = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(172));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089611A0u);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 205u, 0x089611A0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089611A0u) goto L_089611A0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089611A0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(208));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089611D0u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 206u, 0x089611D0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089611D0u) goto L_089611D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089611D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(212));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961200u);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 207u, 0x08961200u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961200u) goto L_08961200;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961200:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(300));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961230u);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 208u, 0x08961230u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961230u) goto L_08961230;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961230:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961260u);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 209u, 0x08961260u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961260u) goto L_08961260;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961260:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(176));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961290u);
    aot_gpr_6 = (0u | 4u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 210u, 0x08961290u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961290u) goto L_08961290;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961290:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(333));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089612C0u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 211u, 0x089612C0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089612C0u) goto L_089612C0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089612C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(334));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089612F0u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 212u, 0x089612F0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089612F0u) goto L_089612F0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089612F0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(335));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961320u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 213u, 0x08961320u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961320u) goto L_08961320;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961320:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(336));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961350u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 214u, 0x08961350u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961350u) goto L_08961350;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961350:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(337));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961380u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 215u, 0x08961380u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961380u) goto L_08961380;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961380:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(338));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089613B0u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 216u, 0x089613B0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089613B0u) goto L_089613B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089613B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(339));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089613E0u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 217u, 0x089613E0u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089613E0u) goto L_089613E0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089613E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(340));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961410u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 218u, 0x08961410u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961410u) goto L_08961410;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961410:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961440u);
    aot_gpr_6 = (0u | 70u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 219u, 0x08961440u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961440u) goto L_08961440;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961440:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(341));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(70));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08961470u);
    aot_gpr_6 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 220u, 0x08961470u, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961470u) goto L_08961470;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961470:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(342));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_31 = (0x0896149Cu);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0088.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 221u, 0x0896149Cu, 0x089645DCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0088_entry(rt, ctx, 36u, aot_mem);
#else
        recomp_unit_0088_entry(rt, ctx, 36u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896149Cu) goto L_0896149C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896149C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089614B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08961598;
      }
      goto L_089614CC;
    }
L_089614CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_089614E4;
    }
    goto L_089614D8;
L_089614D8:
    aot_gpr_31 = (0x089614E0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089614E0u) goto L_089614E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089614E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_089614E4;
L_089614E4:
    aot_gpr_31 = (0x089614ECu);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 227u, 0x089614ECu, 0x089BAA4Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 552u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 552u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 552u, 0x089BAA4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089614ECu) goto L_089614EC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089614EC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08961598;
      }
      goto L_089614F8;
    }
L_089614F8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_31 = (0x0896150Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(212), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 229u, 0x0896150Cu, 0x08A363D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 563u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 563u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 563u, 0x08A363D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896150Cu) goto L_0896150C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896150C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08961544;
    }
    goto L_08961518;
L_08961518:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08961524u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 231u, 0x08961524u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961524u) goto L_08961524;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961524:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0896153C;
      }
      goto L_08961530;
    }
L_08961530:
    aot_gpr_31 = (0x08961538u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961538u) goto L_08961538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08961538:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_0896153C;
L_0896153C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08961544;
L_08961544:
    aot_gpr_31 = (0x0896154Cu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17580));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 236u, 0x0896154Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896154Cu) goto L_0896154C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896154C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 4000u);
    aot_gpr_31 = (0x0896155Cu);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0173.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 237u, 0x0896155Cu, 0x08AB9448u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0173_entry(rt, ctx, 246u, aot_mem);
#else
        recomp_unit_0173_entry(rt, ctx, 246u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 246u, 0x08AB9448u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896155Cu) goto L_0896155C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896155C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9032)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x0896156Cu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9032), aot_gpr_4);
    goto L_08960424;
L_0896156C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08961598;
      }
      goto L_08961578;
    }
L_08961578:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(468)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(464), aot_gpr_5);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(468), aot_gpr_5);
    goto L_08961598;
L_08961598:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089615AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089616A0;
      }
      goto L_089615C8;
    }
L_089615C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_089615E0;
    }
    goto L_089615D4;
L_089615D4:
    aot_gpr_31 = (0x089615DCu);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089615DCu) goto L_089615DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089615DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_089615E0;
L_089615E0:
    aot_gpr_31 = (0x089615E8u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0109.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 246u, 0x089615E8u, 0x089BAA4Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0109_entry(rt, ctx, 552u, aot_mem);
#else
        recomp_unit_0109_entry(rt, ctx, 552u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 552u, 0x089BAA4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089615E8u) goto L_089615E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089615E8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089616A0;
      }
      goto L_089615F4;
    }
L_089615F4:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x0896160Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(212), aot_gpr_4);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 248u, 0x0896160Cu, 0x08A363D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 563u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 563u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 563u, 0x08A363D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896160Cu) goto L_0896160C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896160C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08961644;
    }
    goto L_08961618;
L_08961618:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08961624u);
    aot_gpr_4 = (0u | 2452u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0174.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 250u, 0x08961624u, 0x08ABE278u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0174_entry(rt, ctx, 466u, aot_mem);
#else
        recomp_unit_0174_entry(rt, ctx, 466u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961624u) goto L_08961624;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961624:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_0896163C;
      }
      goto L_08961630;
    }
L_08961630:
    aot_gpr_31 = (0x08961638u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961638u) goto L_08961638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08961638:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_0896163C;
L_0896163C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08961644;
L_08961644:
    aot_gpr_31 = (0x0896164Cu);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17572));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0124.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 255u, 0x0896164Cu, 0x089F6390u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0124_entry(rt, ctx, 420u, aot_mem);
#else
        recomp_unit_0124_entry(rt, ctx, 420u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896164Cu) goto L_0896164C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896164C:
    aot_gpr_31 = (0x08961654u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0132.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 256u, 0x08961654u, 0x08A17A04u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0132_entry(rt, ctx, 606u, aot_mem);
#else
        recomp_unit_0132_entry(rt, ctx, 606u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 606u, 0x08A17A04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961654u) goto L_08961654;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961654:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 5000u);
    aot_gpr_31 = (0x08961664u);
    aot_gpr_6 = (0u | 2u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0173.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 257u, 0x08961664u, 0x08AB9448u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0173_entry(rt, ctx, 246u, aot_mem);
#else
        recomp_unit_0173_entry(rt, ctx, 246u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 246u, 0x08AB9448u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961664u) goto L_08961664;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961664:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9036)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08961674u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9036), aot_gpr_4);
    goto L_08960424;
L_08961674:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089616A0;
      }
      goto L_08961680;
    }
L_08961680:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(468)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(464), aot_gpr_5);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(468), aot_gpr_5);
    goto L_089616A0;
L_089616A0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089616B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_089616DC;
      }
      goto L_089616C8;
    }
L_089616C8:
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_31 = (0x089616DCu);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(212), aot_gpr_5);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0140.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 263u, 0x089616DCu, 0x08A363D8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0140_entry(rt, ctx, 563u, aot_mem);
#else
        recomp_unit_0140_entry(rt, ctx, 563u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 563u, 0x08A363D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089616DCu) goto L_089616DC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089616DC:
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089616E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896170C;
      }
      goto L_08961700;
    }
L_08961700:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_0896173C;
      }
      goto L_0896170C;
    }
L_0896170C:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 59u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
      if (branch_taken) {
          goto L_08961730;
      }
      goto L_08961720;
    }
L_08961720:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 61u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_0896173C;
      }
      goto L_08961730;
    }
L_08961730:
    aot_gpr_31 = (0x08961738u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0105.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 269u, 0x08961738u, 0x089AA5B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0105_entry(rt, ctx, 441u, aot_mem);
#else
        recomp_unit_0105_entry(rt, ctx, 441u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961738u) goto L_08961738;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961738:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_0896173C;
L_0896173C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2196)));
    aot_gpr_6 = (0u | 17u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
      if (branch_taken) {
          goto L_0896175C;
      }
      goto L_0896174C;
    }
L_0896174C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2196)));
    aot_gpr_6 = (0u | 18u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
      if (branch_taken) {
          goto L_08961764;
      }
      goto L_0896175C;
    }
L_0896175C:
    aot_gpr_31 = (0x08961764u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0176.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 273u, 0x08961764u, 0x08AC7C60u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0176_entry(rt, ctx, 1022u, aot_mem);
#else
        recomp_unit_0176_entry(rt, ctx, 1022u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08961764u) goto L_08961764;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08961764:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08961774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_089617E4;
      }
      goto L_08961794;
    }
L_08961794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089617E4;
      }
      goto L_089617A4;
    }
L_089617A4:
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x089617B0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0094.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 277u, 0x089617B0u, 0x0897FD10u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0094_entry(rt, ctx, 962u, aot_mem);
#else
        recomp_unit_0094_entry(rt, ctx, 962u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0094_entry, 94u, 962u, 0x0897FD10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089617B0u) goto L_089617B0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089617B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_089617E4;
      }
      goto L_089617B8;
    }
L_089617B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_16 = (aot_gpr_5 + static_cast<std::uint32_t>(328));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x089617D0u);
    ctx.gpr[17] = (aot_gpr_4 + aot_gpr_5);
    goto L_08960424;
L_089617D0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x089617E4u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089617E4u) goto L_089617E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089617E4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_089617F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08961854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_gpr_6 = (16128u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(188)));
    aot_gpr_6 = (16256u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), aot_gpr_16);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_16 = (0u | 1u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(200), aot_run_words); }
    { const std::uint32_t aot_run_words[9]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_23, ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(216), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_23 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08961974;
      }
      goto L_089618B4;
    }
L_089618B4:
    aot_gpr_31 = (0x089618BCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 284u, 0x089618BCu, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089618BCu) goto L_089618BC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089618BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08961974;
      }
      goto L_089618C4;
    }
L_089618C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 226u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0896190C;
      }
      goto L_089618DC;
    }
L_089618DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 183u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0896190C;
      }
      goto L_089618F4;
    }
L_089618F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-959));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08961974;
      }
      goto L_0896190C;
    }
L_0896190C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
      if (branch_taken) {
          goto L_08961974;
      }
      goto L_08961920;
    }
L_08961920:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x0896192Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 290u, 0x0896192Cu, 0x08B021B0u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 559u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 559u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896192Cu) goto L_0896192C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896192C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
      if (branch_taken) {
          goto L_08961974;
      }
      goto L_08961934;
    }
L_08961934:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(184)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08961970;
      }
      goto L_0896194C;
    }
L_0896194C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(184)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(172)));
    goto L_08961954;
L_08961954:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1000));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_gpr_5 < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_08961954;
      }
      goto L_08961968;
    }
L_08961968:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(172), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(184), aot_gpr_4);
    goto L_08961970;
L_08961970:
    aot_gpr_16 = (0u | 0u);
    goto L_08961974;
L_08961974:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08961984;
      }
      goto L_0896197C;
    }
L_0896197C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(184), aot_gpr_4);
    goto L_08961984;
L_08961984:
    aot_gpr_31 = (0x0896198Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 299u, 0x0896198Cu, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896198Cu) goto L_0896198C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896198C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089627B8;
      }
      goto L_08961994;
    }
L_08961994:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089627B8;
      }
      goto L_089619A4;
    }
L_089619A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08962090;
      }
      goto L_089619B8;
    }
L_089619B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1884)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (16968u << 16u);
      if (branch_taken) {
          goto L_08961A44;
      }
      goto L_089619D0;
    }
L_089619D0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_15 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_6 = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(252)));
      if (branch_taken) {
          goto L_08961A18;
      }
      goto L_08961A00;
    }
L_08961A00:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08961A38;
      }
      goto L_08961A18;
    }
L_08961A18:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = aot_fpr_15 / aot_fpr_14;
    aot_gpr_6 = (32768u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    goto L_08961A38;
L_08961A38:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(252), aot_gpr_5);
      if (branch_taken) {
          goto L_08961A48;
      }
      goto L_08961A44;
    }
L_08961A44:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(252), 0u);
    goto L_08961A48;
L_08961A48:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1544)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08961D24;
      }
      goto L_08961A60;
    }
L_08961A60:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1548)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08961D24;
      }
      goto L_08961A78;
    }
L_08961A78:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1536)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08961C18;
      }
      goto L_08961A90;
    }
L_08961A90:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1540)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08961C18;
      }
      goto L_08961AA8;
    }
L_08961AA8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(268)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (16968u << 16u);
      if (branch_taken) {
          goto L_08961C18;
      }
      goto L_08961AC0;
    }
L_08961AC0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    aot_gpr_5 = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_08961B08;
      }
      goto L_08961AF0;
    }
L_08961AF0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08961B28;
      }
      goto L_08961B08;
    }
L_08961B08:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    aot_gpr_5 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    goto L_08961B28;
L_08961B28:
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(244), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
    ctx.fpr[17] = aot_fpr_12 + ctx.fpr[17];
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08961B5C;
      }
      goto L_08961B50;
    }
L_08961B50:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    goto L_08961B5C;
L_08961B5C:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < aot_fpr_15)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08961B98;
    }
    goto L_08961B78;
L_08961B78:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08961BBC;
      }
      goto L_08961B98;
    }
L_08961B98:
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    aot_gpr_4 = (32768u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    goto L_08961BBC;
L_08961BBC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_08961BCC;
      }
      goto L_08961BC4;
    }
L_08961BC4:
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    goto L_08961BCC;
L_08961BCC:
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08961BE4;
    }
    goto L_08961BE4;
L_08961BE4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
        goto L_08961C00;
    }
    goto L_08961BF4;
L_08961BF4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08961C10;
      }
      goto L_08961C00;
    }
L_08961C00:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08961C10;
L_08961C10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), aot_gpr_4);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08961C18;
    }
L_08961C18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08961CA8;
      }
      goto L_08961C24;
    }
L_08961C24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(500) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08961CA8;
      }
      goto L_08961C34;
    }
L_08961C34:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_08961C7C;
      }
      goto L_08961C64;
    }
L_08961C64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08961C9C;
      }
      goto L_08961C7C;
    }
L_08961C7C:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = aot_fpr_15 / aot_fpr_14;
    aot_gpr_4 = (32768u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    goto L_08961C9C;
L_08961C9C:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), aot_gpr_4);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08961CA8;
    }
L_08961CA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08961D14;
      }
      goto L_08961CB8;
    }
L_08961CB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    aot_gpr_4 = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(276), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9040)));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08961CF4;
      }
      goto L_08961CE4;
    }
L_08961CE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9040), aot_gpr_4);
    goto L_08961CF4;
L_08961CF4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9044)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08961D14;
      }
      goto L_08961D0C;
    }
L_08961D0C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9044), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08961D14;
L_08961D14:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08961D24;
    }
L_08961D24:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1536)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08962000;
      }
      goto L_08961D3C;
    }
L_08961D3C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1540)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08962000;
      }
      goto L_08961D54;
    }
L_08961D54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1540)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08961EF4;
      }
      goto L_08961D6C;
    }
L_08961D6C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1548)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08961EF4;
      }
      goto L_08961D84;
    }
L_08961D84:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(268)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (16968u << 16u);
      if (branch_taken) {
          goto L_08961EF4;
      }
      goto L_08961D9C;
    }
L_08961D9C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    aot_gpr_6 = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_08961DE4;
      }
      goto L_08961DCC;
    }
L_08961DCC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08961E04;
      }
      goto L_08961DE4;
    }
L_08961DE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    aot_gpr_6 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    goto L_08961E04;
L_08961E04:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(244), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
    ctx.fpr[17] = aot_fpr_12 + ctx.fpr[17];
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08961E38;
      }
      goto L_08961E2C;
    }
L_08961E2C:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    goto L_08961E38;
L_08961E38:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < aot_fpr_15)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08961E74;
    }
    goto L_08961E54;
L_08961E54:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08961E98;
      }
      goto L_08961E74;
    }
L_08961E74:
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    aot_gpr_4 = (32768u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    goto L_08961E98;
L_08961E98:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (20352u << 16u);
      if (branch_taken) {
          goto L_08961EA8;
      }
      goto L_08961EA0;
    }
L_08961EA0:
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    goto L_08961EA8;
L_08961EA8:
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08961EC0;
    }
    goto L_08961EC0;
L_08961EC0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
        goto L_08961EDC;
    }
    goto L_08961ED0;
L_08961ED0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08961EEC;
      }
      goto L_08961EDC;
    }
L_08961EDC:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_08961EEC;
L_08961EEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), aot_gpr_4);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08961EF4;
    }
L_08961EF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08961F84;
      }
      goto L_08961F00;
    }
L_08961F00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(500) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08961F84;
      }
      goto L_08961F10;
    }
L_08961F10:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_08961F58;
      }
      goto L_08961F40;
    }
L_08961F40:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08961F78;
      }
      goto L_08961F58;
    }
L_08961F58:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = aot_fpr_15 / aot_fpr_14;
    aot_gpr_4 = (32768u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    goto L_08961F78;
L_08961F78:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), aot_gpr_4);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08961F84;
    }
L_08961F84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08961FF0;
      }
      goto L_08961F94;
    }
L_08961F94:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    aot_gpr_4 = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(276), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9040)));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08961FD0;
      }
      goto L_08961FC0;
    }
L_08961FC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9040), aot_gpr_4);
    goto L_08961FD0;
L_08961FD0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9044)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08961FF0;
      }
      goto L_08961FE8;
    }
L_08961FE8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9044), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08961FF0;
L_08961FF0:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_08962000;
    }
L_08962000:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08962084;
      }
      goto L_0896200C;
    }
L_0896200C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08962078;
      }
      goto L_0896201C;
    }
L_0896201C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    aot_gpr_4 = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(276), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9040)));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08962058;
      }
      goto L_08962048;
    }
L_08962048:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(244)));
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9040), aot_gpr_4);
    goto L_08962058;
L_08962058:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9044)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08962078;
      }
      goto L_08962070;
    }
L_08962070:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(248)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9044), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08962078;
L_08962078:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), 0u);
    goto L_08962084;
L_08962084:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(256), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(264), 0u);
      if (branch_taken) {
          goto L_089627CC;
      }
      goto L_08962090;
    }
L_08962090:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089620C0;
      }
      goto L_089620A8;
    }
L_089620A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089627A0;
      }
      goto L_089620C0;
    }
L_089620C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1232)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089623FC;
      }
      goto L_089620E0;
    }
L_089620E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1236)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089623FC;
      }
      goto L_089620F8;
    }
L_089620F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1240)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08962144;
      }
      goto L_08962110;
    }
L_08962110:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1244)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089622B0;
      }
      goto L_08962128;
    }
L_08962128:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(268)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089622B0;
      }
      goto L_08962140;
    }
L_08962140:
    aot_gpr_4 = (16968u << 16u);
    goto L_08962144;
L_08962144:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    aot_gpr_6 = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(256)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_14 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08962190;
      }
      goto L_08962178;
    }
L_08962178:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089621B0;
      }
      goto L_08962190;
    }
L_08962190:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    aot_gpr_6 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    goto L_089621B0;
L_089621B0:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(256), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(260)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
    ctx.fpr[17] = aot_fpr_12 + ctx.fpr[17];
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_089621E4;
      }
      goto L_089621D8;
    }
L_089621D8:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    goto L_089621E4;
L_089621E4:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < aot_fpr_15)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08962220;
    }
    goto L_08962200;
L_08962200:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08962244;
      }
      goto L_08962220;
    }
L_08962220:
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    aot_gpr_4 = (32768u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    goto L_08962244;
L_08962244:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_0896225C;
      }
      goto L_0896224C;
    }
L_0896224C:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    aot_gpr_4 = (15948u << 16u);
    goto L_0896225C;
L_0896225C:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_0896227C;
    }
    goto L_0896227C;
L_0896227C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
        goto L_08962298;
    }
    goto L_0896228C;
L_0896228C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089622A8;
      }
      goto L_08962298;
    }
L_08962298:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_089622A8;
L_089622A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), aot_gpr_4);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_089622B0;
    }
L_089622B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08962340;
      }
      goto L_089622BC;
    }
L_089622BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(500) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08962340;
      }
      goto L_089622CC;
    }
L_089622CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (17530u << 16u);
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_08962314;
      }
      goto L_089622FC;
    }
L_089622FC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08962334;
      }
      goto L_08962314;
    }
L_08962314:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_14 = aot_fpr_15 / aot_fpr_14;
    aot_gpr_4 = (32768u << 16u);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    goto L_08962334;
L_08962334:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), aot_gpr_4);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_08962340;
    }
L_08962340:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (17723u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_fpr_14 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08962364;
      }
      goto L_08962364;
    }
L_08962364:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(256)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08962380;
      }
      goto L_08962374;
    }
L_08962374:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    goto L_08962380;
L_08962380:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089623EC;
      }
      goto L_08962390;
    }
L_08962390:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(256)));
    aot_gpr_4 = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(284), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9048)));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_089623CC;
      }
      goto L_089623BC;
    }
L_089623BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(256)));
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9048), aot_gpr_4);
    goto L_089623CC;
L_089623CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9052)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089623EC;
      }
      goto L_089623E4;
    }
L_089623E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9052), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089623EC;
L_089623EC:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_089623FC;
    }
L_089623FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089624C4;
      }
      goto L_08962408;
    }
L_08962408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (17723u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_fpr_14 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0896242C;
      }
      goto L_0896242C;
    }
L_0896242C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(256)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08962448;
      }
      goto L_0896243C;
    }
L_0896243C:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_15;
    goto L_08962448;
L_08962448:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089624B4;
      }
      goto L_08962458;
    }
L_08962458:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(256)));
    aot_gpr_4 = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(284), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9048)));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08962494;
      }
      goto L_08962484;
    }
L_08962484:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(256)));
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9048), aot_gpr_4);
    goto L_08962494;
L_08962494:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9052)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(260)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089624B4;
      }
      goto L_089624AC;
    }
L_089624AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9052), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089624B4;
L_089624B4:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_089624C4;
    }
L_089624C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1240)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08962674;
      }
      goto L_089624DC;
    }
L_089624DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1244)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17584)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08962674;
      }
      goto L_089624F4;
    }
L_089624F4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(268)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08962674;
      }
      goto L_0896250C;
    }
L_0896250C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    aot_gpr_6 = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08962554;
      }
      goto L_0896253C;
    }
L_0896253C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08962574;
      }
      goto L_08962554;
    }
L_08962554:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    aot_gpr_6 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    goto L_08962574;
L_08962574:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(264), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(268)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
    ctx.fpr[17] = aot_fpr_12 + ctx.fpr[17];
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_089625A8;
      }
      goto L_0896259C;
    }
L_0896259C:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[17];
    goto L_089625A8;
L_089625A8:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[17] < aot_fpr_15)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_089625E4;
    }
    goto L_089625C4;
L_089625C4:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08962608;
      }
      goto L_089625E4;
    }
L_089625E4:
    ctx.fpr[16] = ctx.fpr[17] / ctx.fpr[16];
    aot_gpr_4 = (32768u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_15;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    goto L_08962608;
L_08962608:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08962620;
      }
      goto L_08962610;
    }
L_08962610:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    aot_gpr_4 = (15948u << 16u);
    goto L_08962620;
L_08962620:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_08962640;
    }
    goto L_08962640;
L_08962640:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_15)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
        goto L_0896265C;
    }
    goto L_08962650;
L_08962650:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0896266C;
      }
      goto L_0896265C;
    }
L_0896265C:
    aot_gpr_4 = (32768u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    goto L_0896266C;
L_0896266C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), aot_gpr_4);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_08962674;
    }
L_08962674:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08962704;
      }
      goto L_08962680;
    }
L_08962680:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(500) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08962704;
      }
      goto L_08962690;
    }
L_08962690:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_5 = (17530u << 16u);
    aot_gpr_6 = (20224u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_15 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_089626D8;
      }
      goto L_089626C0;
    }
L_089626C0:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089626F8;
      }
      goto L_089626D8;
    }
L_089626D8:
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_12 = aot_fpr_15 / aot_fpr_12;
    aot_gpr_5 = (32768u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    goto L_089626F8;
L_089626F8:
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), aot_gpr_4);
      if (branch_taken) {
          goto L_08962794;
      }
      goto L_08962704;
    }
L_08962704:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0896271C;
      }
      goto L_0896271C;
    }
L_0896271C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08962788;
      }
      goto L_0896272C;
    }
L_0896272C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(268)));
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(292), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9056)));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08962768;
      }
      goto L_08962758;
    }
L_08962758:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(264)));
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = aot_gpr_4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9056), aot_gpr_4);
    goto L_08962768;
L_08962768:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9060)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(268)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08962788;
      }
      goto L_08962780;
    }
L_08962780:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(268)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9060), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08962788;
L_08962788:
    { const std::uint32_t aot_run_words[3]{0u, std::bit_cast<std::uint32_t>(aot_fpr_12), 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_23 + static_cast<std::uint32_t>(264), aot_run_words); }
    goto L_08962794;
L_08962794:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(244), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(252), 0u);
      if (branch_taken) {
          goto L_089627CC;
      }
      goto L_089627A0;
    }
L_089627A0:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(252), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(264), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), 0u);
      if (branch_taken) {
          goto L_089627CC;
      }
      goto L_089627B8;
    }
L_089627B8:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(252), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(264), 0u);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(272), 0u);
    goto L_089627CC;
L_089627CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(172)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(304)));
        goto L_08962878;
    }
    goto L_089627DC;
L_089627DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(172)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    if (static_cast<std::int32_t>(aot_gpr_5) < 0) {
    aot_gpr_5 = (0u - aot_gpr_4);
        goto L_089627F4;
    }
    goto L_089627F4;
L_089627F4:
    aot_gpr_6 = (2u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-31072));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08962810;
      }
      goto L_08962808;
    }
L_08962808:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 12345u);
      if (branch_taken) {
          goto L_08962850;
      }
      goto L_08962810;
    }
L_08962810:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 10001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08962824;
      }
      goto L_0896281C;
    }
L_0896281C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 1234u);
      if (branch_taken) {
          goto L_08962850;
      }
      goto L_08962824;
    }
L_08962824:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 1001 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
      if (branch_taken) {
          goto L_08962838;
      }
      goto L_08962830;
    }
L_08962830:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 123u);
      if (branch_taken) {
          goto L_08962850;
      }
      goto L_08962838;
    }
L_08962838:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 51 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
      if (branch_taken) {
          goto L_0896284C;
      }
      goto L_08962844;
    }
L_08962844:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 42u);
      if (branch_taken) {
          goto L_08962850;
      }
      goto L_0896284C;
    }
L_0896284C:
    aot_gpr_5 = (0u | 1u);
    goto L_08962850;
L_08962850:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
      if (branch_taken) {
          goto L_08962868;
      }
      goto L_08962858;
    }
L_08962858:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(176), aot_gpr_4);
      if (branch_taken) {
          goto L_08962874;
      }
      goto L_08962868;
    }
L_08962868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(176), aot_gpr_4);
    goto L_08962874;
L_08962874:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(304)));
    goto L_08962878;
L_08962878:
    aot_gpr_4 = (16153u << 16u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[20];
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[20];
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_12)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(304)));
        goto L_089628A4;
    }
    goto L_089628A4;
L_089628A4:
    aot_gpr_4 = (16313u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(304)));
        goto L_089628C4;
    }
    goto L_089628C4;
L_089628C4:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & 1024u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08962904;
      }
      goto L_089628DC;
    }
L_089628DC:
    aot_gpr_31 = (0x089628E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 481u, 0x089628E4u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089628E4u) goto L_089628E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089628E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08962904;
      }
      goto L_089628EC;
    }
L_089628EC:
    aot_gpr_31 = (0x089628F4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089628F4u) goto L_089628F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089628F4:
    aot_gpr_31 = (0x089628FCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 484u, 0x089628FCu, 0x0898D1B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 400u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 400u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 400u, 0x0898D1B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089628FCu) goto L_089628FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089628FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08962918;
      }
      goto L_08962904;
    }
L_08962904:
    aot_gpr_31 = (0x0896290Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896290Cu) goto L_0896290C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0896290C:
    aot_gpr_31 = (0x08962914u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 487u, 0x08962914u, 0x0898D168u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 392u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 392u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 392u, 0x0898D168u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962914u) goto L_08962914;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08962914:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08962918;
L_08962918:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
      if (branch_taken) {
          goto L_08962934;
      }
      goto L_08962924;
    }
L_08962924:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(324)));
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08962934;
L_08962934:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896293C;
    }
L_0896293C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 36u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962954;
    }
L_08962954:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 12u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896296C;
    }
L_0896296C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 60u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962984;
    }
L_08962984:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 13u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896299C;
    }
L_0896299C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (0u | 58u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089629C0;
      }
      goto L_089629B0;
    }
L_089629B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
    aot_gpr_6 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_089629C8;
      }
      goto L_089629C0;
    }
L_089629C0:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_089629C8;
L_089629C8:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089629D0;
    }
L_089629D0:
    aot_gpr_31 = (0x089629D8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 500u, 0x089629D8u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089629D8u) goto L_089629D8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089629D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08962D54;
      }
      goto L_089629E0;
    }
L_089629E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(615))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08962D54;
      }
      goto L_089629F8;
    }
L_089629F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_08962A6C;
      }
      goto L_08962A04;
    }
L_08962A04:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08962A14u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962A14u) goto L_08962A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08962A14:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08962A3C;
      }
      goto L_08962A20;
    }
L_08962A20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 246u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08962A3C;
      }
      goto L_08962A38;
    }
L_08962A38:
    aot_gpr_16 = (0u | 0u);
    goto L_08962A3C;
L_08962A3C:
    aot_gpr_31 = (0x08962A44u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ADC734, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962A44u) goto L_08962A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08962A44:
    aot_gpr_4 = (0u | 7u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08962A6C;
      }
      goto L_08962A50;
    }
L_08962A50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 275u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08962A6C;
      }
      goto L_08962A68;
    }
L_08962A68:
    aot_gpr_16 = (0u | 0u);
    goto L_08962A6C;
L_08962A6C:
    { const bool branch_taken = aot_gpr_16 == 0u;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962A74;
    }
L_08962A74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962A80;
    }
L_08962A80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
        goto L_08962B38;
    }
    goto L_08962A98;
L_08962A98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(680)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
        goto L_08962B38;
    }
    goto L_08962AB0;
L_08962AB0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08962B18;
      }
      goto L_08962ABC;
    }
L_08962ABC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08962B10;
      }
      goto L_08962AF4;
    }
L_08962AF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08962B00u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0106.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 518u, 0x08962B00u, 0x089AD800u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0106_entry(rt, ctx, 408u, aot_mem);
#else
        recomp_unit_0106_entry(rt, ctx, 408u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 408u, 0x089AD800u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962B00u) goto L_08962B00;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08962B00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (aot_gpr_5 | 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(464), aot_gpr_5);
    goto L_08962B10;
L_08962B10:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962B18;
    }
L_08962B18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08962B24u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0106.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 521u, 0x08962B24u, 0x089AD800u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0106_entry(rt, ctx, 408u, aot_mem);
#else
        recomp_unit_0106_entry(rt, ctx, 408u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 408u, 0x089AD800u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962B24u) goto L_08962B24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08962B24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (aot_gpr_5 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(464), aot_gpr_5);
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962B38;
    }
L_08962B38:
    aot_gpr_16 = (0u | 5u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_16;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962B54;
    }
L_08962B54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962B74;
    }
L_08962B74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[17];
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962B8C;
    }
L_08962B8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(408));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08962BACu);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962BACu) goto L_08962BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08962BAC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1152)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_6 = (0u | 0u);
      if (branch_taken) {
          goto L_08962BDC;
      }
      goto L_08962BCC;
    }
L_08962BCC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08962BDC;
L_08962BDC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(636)));
    aot_gpr_5 = (aot_gpr_5 & 64u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08962C50;
      }
      goto L_08962BF4;
    }
L_08962BF4:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08962C38;
      }
      goto L_08962BFC;
    }
L_08962BFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(320));
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
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08962C50;
      }
      goto L_08962C38;
    }
L_08962C38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08962C48u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0178.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 532u, 0x08962C48u, 0x08ACD698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0178_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0178_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962C48u) goto L_08962C48;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08962C48:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962C50;
    }
L_08962C50:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[17];
      if (branch_taken) {
          goto L_08962C78;
      }
      goto L_08962C64;
    }
L_08962C64:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_16;
      if (branch_taken) {
          goto L_08962C98;
      }
      goto L_08962C78;
    }
L_08962C78:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962C80;
    }
L_08962C80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08962C90u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0178.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 537u, 0x08962C90u, 0x08ACD698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0178_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0178_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962C90u) goto L_08962C90;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08962C90:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962C98;
    }
L_08962C98:
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08962CDC;
      }
      goto L_08962CA0;
    }
L_08962CA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
        goto L_08962CF4;
    }
    goto L_08962CDC;
L_08962CDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08962CECu);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0178.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 541u, 0x08962CECu, 0x08ACD698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0178_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0178_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962CECu) goto L_08962CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08962CEC:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962CF4;
    }
L_08962CF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    aot_gpr_4 = (aot_gpr_4 >> 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962D0C;
    }
L_08962D0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08962D4C;
      }
      goto L_08962D20;
    }
L_08962D20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1000));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(128), aot_gpr_5);
    goto L_08962D4C;
L_08962D4C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962D54;
    }
L_08962D54:
    aot_gpr_31 = (0x08962D5Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962D5Cu) goto L_08962D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08962D5C:
    aot_gpr_31 = (0x08962D64u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0098.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 548u, 0x08962D64u, 0x0898D1B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0098_entry(rt, ctx, 400u, aot_mem);
#else
        recomp_unit_0098_entry(rt, ctx, 400u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 400u, 0x0898D1B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962D64u) goto L_08962D64;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08962D64:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
        goto L_08962D7C;
    }
    goto L_08962D6C;
L_08962D6C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962D78;
    }
L_08962D78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    goto L_08962D7C;
L_08962D7C:
    aot_gpr_5 = (0u | 17u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962D90;
    }
L_08962D90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962DA8;
    }
L_08962DA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 22u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08962DC0;
    }
L_08962DC0:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962DDC;
    }
L_08962DDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1300)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962E00;
    }
L_08962E00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1300)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962E18;
    }
L_08962E18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1300)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08962E4C;
    }
    goto L_08962E34;
L_08962E34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (0u | 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962E48;
    }
L_08962E48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08962E4C;
L_08962E4C:
    aot_gpr_5 = (0u | 278u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962E5C;
    }
L_08962E5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (4096u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_gpr_6 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(460), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (0u | 80u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962E88;
    }
L_08962E88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (16025u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_5 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08962EB8;
      }
      goto L_08962EAC;
    }
L_08962EAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08962EB8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0105.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 564u, 0x08962EB8u, 0x089A9810u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0105_entry(rt, ctx, 277u, aot_mem);
#else
        recomp_unit_0105_entry(rt, ctx, 277u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 277u, 0x089A9810u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08962EB8u) goto L_08962EB8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08962EB8:
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), aot_gpr_16);
      if (branch_taken) {
          goto L_08963144;
      }
      goto L_08962EC0;
    }
L_08962EC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (16672u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17056u << 16u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[28];
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_15 = ctx.fpr[22] / aot_fpr_12;
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (16880u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (16840u << 16u);
    aot_gpr_5 = (0u | 49u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[28];
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[28];
    ctx.fpr[28] = aot_fpr_14 + ctx.fpr[28];
    aot_fpr_15 = aot_fpr_15 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08962F34;
    }
    goto L_08962F34;
L_08962F34:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08962F40;
    }
    goto L_08962F40;
L_08962F40:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_16 = (aot_gpr_4 | 0u);
        goto L_08962F54;
    }
    goto L_08962F54;
L_08962F54:
    aot_fpr_15 = ctx.fpr[26] / aot_fpr_12;
    aot_gpr_5 = (0u | 49u);
    aot_fpr_15 = aot_fpr_15 + aot_fpr_14;
    aot_fpr_15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_15));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08962F74;
    }
    goto L_08962F74;
L_08962F74:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08962F80;
    }
    goto L_08962F80;
L_08962F80:
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[21] = (aot_gpr_4 | 0u);
        goto L_08962F94;
    }
    goto L_08962F94;
L_08962F94:
    aot_fpr_15 = ctx.fpr[24] / aot_fpr_12;
    aot_gpr_5 = (0u | 49u);
    aot_fpr_13 = aot_fpr_15 + aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08962FB4;
    }
    goto L_08962FB4;
L_08962FB4:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08962FC0;
    }
    goto L_08962FC0;
L_08962FC0:
    ctx.gpr[20] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[20] = (aot_gpr_4 | 0u);
        goto L_08962FD0;
    }
    goto L_08962FD0;
L_08962FD0:
    aot_fpr_12 = ctx.fpr[28] / aot_fpr_12;
    aot_gpr_5 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 49u);
        goto L_08962FF0;
    }
    goto L_08962FF0;
L_08962FF0:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08962FFC;
    }
    goto L_08962FFC;
L_08962FFC:
    ctx.gpr[30] = (0u | 49u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 49 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[30] = (aot_gpr_4 | 0u);
        goto L_0896300C;
    }
    goto L_0896300C;
L_0896300C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_gpr_5 = (0u | 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963030;
      }
      goto L_08963020;
    }
L_08963020:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08963040;
      }
      goto L_08963030;
    }
L_08963030:
    aot_gpr_31 = (0x08963038u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0036.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 580u, 0x08963038u, 0x088954BCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0036_entry(rt, ctx, 274u, aot_mem);
#else
        recomp_unit_0036_entry(rt, ctx, 274u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963038u) goto L_08963038;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963038:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08963040;
L_08963040:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[21] << 4u);
      if (branch_taken) {
          goto L_0896313C;
      }
      goto L_08963050;
    }
L_08963050:
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), aot_gpr_16);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[21]);
    goto L_08963068;
L_08963068:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0896312C;
      }
      goto L_0896307C;
    }
L_0896307C:
    aot_gpr_16 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    goto L_08963088;
L_08963088:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[21] = (aot_gpr_4 + aot_gpr_16);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_gpr_23 | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089630C0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08963BF4;
L_089630C0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089630ECu);
    ctx.gpr[9] = (0u | 1u);
    goto L_08963BF4;
L_089630EC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (aot_gpr_23 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08963118u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08963BF4;
L_08963118:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(56));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_08963088;
      }
      goto L_0896312C;
    }
L_0896312C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08963068;
      }
      goto L_0896313C;
    }
L_0896313C:
    ctx.gpr[18] = (0u | 22u);
    ctx.gpr[19] = (0u | 16u);
    goto L_08963144;
L_08963144:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08963150;
    }
L_08963150:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896315C;
    }
L_0896315C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 14u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963264;
      }
      goto L_0896317C;
    }
L_0896317C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08963194;
      }
      goto L_08963190;
    }
L_08963190:
    ctx.gpr[17] = (0u | 0u);
    goto L_08963194;
L_08963194:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
      if (branch_taken) {
          goto L_089631AC;
      }
      goto L_089631A8;
    }
L_089631A8:
    ctx.gpr[17] = (0u | 0u);
    goto L_089631AC;
L_089631AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
      if (branch_taken) {
          goto L_089631C4;
      }
      goto L_089631C0;
    }
L_089631C0:
    ctx.gpr[17] = (0u | 0u);
    goto L_089631C4;
L_089631C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 45u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089631E0;
      }
      goto L_089631DC;
    }
L_089631DC:
    ctx.gpr[17] = (0u | 0u);
    goto L_089631E0;
L_089631E0:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(352)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0896320C;
      }
      goto L_089631F0;
    }
L_089631F0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr_31 = (0x08963200u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 604u, 0x08963200u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963200u) goto L_08963200;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963200:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0896320C;
L_0896320C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(204))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963248;
      }
      goto L_08963224;
    }
L_08963224:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(380)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08963244;
      }
      goto L_08963234;
    }
L_08963234:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(380)));
    aot_gpr_5 = (0u | 233u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08963248;
      }
      goto L_08963244;
    }
L_08963244:
    ctx.gpr[17] = (0u | 0u);
    goto L_08963248;
L_08963248:
    { const bool branch_taken = ctx.gpr[17] == 0u;
      if (branch_taken) {
          goto L_0896325C;
      }
      goto L_08963250;
    }
L_08963250:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_31 = (0x0896325Cu);
    aot_gpr_4 = (aot_gpr_23 | 0u);
    goto L_08960A2C;
L_0896325C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08963264;
    }
L_08963264:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (0u | 112u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08963294;
      }
      goto L_0896327C;
    }
L_0896327C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_31 = (0x0896328Cu);
    aot_gpr_5 = (0u | 17u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0178.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 614u, 0x0896328Cu, 0x08ACD698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0178_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0178_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896328Cu) goto L_0896328C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896328C:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_08963294;
    }
L_08963294:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089632A4;
    }
L_089632A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089632B8;
    }
L_089632B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089632CC;
    }
L_089632CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 45u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089632E4;
    }
L_089632E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08963384;
      }
      goto L_089632F8;
    }
L_089632F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08963384;
      }
      goto L_08963314;
    }
L_08963314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08963380;
      }
      goto L_08963324;
    }
L_08963324:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_16 = (0u | 1u);
    aot_gpr_31 = (0x08963334u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 623u, 0x08963334u, 0x08B01088u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 296u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 296u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 296u, 0x08B01088u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963334u) goto L_08963334;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08963384;
      }
      goto L_0896333C;
    }
L_0896333C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_31 = (0x0896334Cu);
    aot_gpr_5 = (0u | 18u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0178.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 625u, 0x0896334Cu, 0x08ACD698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0178_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0178_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896334Cu) goto L_0896334C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896334C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 2u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08963364u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 626u, 0x08963364u, 0x08910BDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 209u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 209u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963364u) goto L_08963364;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963364:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2274)));
    aot_gpr_31 = (0x08963378u);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0105.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 627u, 0x08963378u, 0x089A95B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0105_entry(rt, ctx, 231u, aot_mem);
#else
        recomp_unit_0105_entry(rt, ctx, 231u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963378u) goto L_08963378;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963378:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_08963384;
      }
      goto L_08963380;
    }
L_08963380:
    aot_gpr_16 = (0u | 0u);
    goto L_08963384;
L_08963384:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896338C;
    }
L_0896338C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_089633CC;
      }
      goto L_089633A0;
    }
L_089633A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(616))))));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_31 = (0x089633C4u);
    aot_gpr_5 = (0u | 18u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0178.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 632u, 0x089633C4u, 0x08ACD698u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0178_entry(rt, ctx, 482u, aot_mem);
#else
        recomp_unit_0178_entry(rt, ctx, 482u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089633C4u) goto L_089633C4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089633C4:
    { const bool branch_taken = 0u == 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089633CC;
    }
L_089633CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089633DC;
    }
L_089633DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_31 = (0x089633E8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0191.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 635u, 0x089633E8u, 0x08B01088u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0191_entry(rt, ctx, 296u, aot_mem);
#else
        recomp_unit_0191_entry(rt, ctx, 296u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 296u, 0x08B01088u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089633E8u) goto L_089633E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089633E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_089633F0;
    }
L_089633F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08963408u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 637u, 0x08963408u, 0x08910BDCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 209u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 209u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963408u) goto L_08963408;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963408:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2274)));
    aot_gpr_31 = (0x0896341Cu);
    ctx.gpr[7] = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0105.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 638u, 0x0896341Cu, 0x089A95B8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0105_entry(rt, ctx, 231u, aot_mem);
#else
        recomp_unit_0105_entry(rt, ctx, 231u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896341Cu) goto L_0896341C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896341C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089635C0;
      }
      goto L_08963428;
    }
L_08963428:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(220)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 - aot_gpr_16);
      if (branch_taken) {
          goto L_08963494;
      }
      goto L_08963444;
    }
L_08963444:
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08963494;
      }
      goto L_08963450;
    }
L_08963450:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08963494;
      }
      goto L_0896345C;
    }
L_0896345C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963494;
      }
      goto L_08963468;
    }
L_08963468:
    aot_gpr_4 = (2236u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x08963484u);
    ctx.gpr[7] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 644u, 0x08963484u, 0x08A1CF7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 156u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 156u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963484u) goto L_08963484;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963484:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x08963494u);
    aot_gpr_5 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 645u, 0x08963494u, 0x08A1C044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963494u) goto L_08963494;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963494:
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089635C0;
      }
      goto L_089634A0;
    }
L_089634A0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (2238u << 16u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
      if (branch_taken) {
          goto L_08963520;
      }
      goto L_089634B0;
    }
L_089634B0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_23 + static_cast<std::uint32_t>(218)));
    if (aot_gpr_5 == 0u) {
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
        goto L_08963524;
    }
    goto L_089634BC;
L_089634BC:
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), aot_gpr_4);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x089634D0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 649u, 0x089634D0u, 0x08A1CC44u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 125u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 125u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 125u, 0x08A1CC44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089634D0u) goto L_089634D0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089634D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089634E4u);
    ctx.gpr[7] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 650u, 0x089634E4u, 0x08A1CF7Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 156u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 156u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089634E4u) goto L_089634E4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089634E4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x089634F4u);
    aot_gpr_5 = (0u | 1u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0134.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 651u, 0x089634F4u, 0x08A1C044u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0134_entry(rt, ctx, 4u, aot_mem);
#else
        recomp_unit_0134_entry(rt, ctx, 4u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089634F4u) goto L_089634F4;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089634F4:
    aot_gpr_31 = (0x089634FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0135.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 652u, 0x089634FCu, 0x08A225A4u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0135_entry(rt, ctx, 316u, aot_mem);
#else
        recomp_unit_0135_entry(rt, ctx, 316u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0135_entry, 135u, 316u, 0x08A225A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089634FCu) goto L_089634FC;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089634FC:
    aot_gpr_31 = (0x08963504u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 653u, 0x08963504u, 0x08A11208u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 127u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 127u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963504u) goto L_08963504;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963504:
    aot_gpr_31 = (0x0896350Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0158.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 654u, 0x0896350Cu, 0x08A7C6A8u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0158_entry(rt, ctx, 11u, aot_mem);
#else
        recomp_unit_0158_entry(rt, ctx, 11u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 11u, 0x08A7C6A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896350Cu) goto L_0896350C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896350C:
    aot_gpr_31 = (0x08963514u);
    aot_gpr_4 = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0179.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 655u, 0x08963514u, 0x08AD3610u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0179_entry(rt, ctx, 598u, aot_mem);
#else
        recomp_unit_0179_entry(rt, ctx, 598u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963514u) goto L_08963514;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963514:
    aot_gpr_31 = (0x0896351Cu);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0131.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 656u, 0x0896351Cu, 0x08A11214u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0131_entry(rt, ctx, 128u, aot_mem);
#else
        recomp_unit_0131_entry(rt, ctx, 128u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896351Cu) goto L_0896351C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896351C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    goto L_08963520;
L_08963520:
    aot_mem.aot_direct_store8(aot_gpr_23 + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    goto L_08963524;
L_08963524:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08963598;
      }
      goto L_0896354C;
    }
L_0896354C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(76), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    goto L_08963598;
L_08963598:
    aot_gpr_31 = (0x089635A0u);
    goto L_089602C8;
L_089635A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089635C0;
      }
      goto L_089635A8;
    }
L_089635A8:
    aot_gpr_31 = (0x089635B0u);
    goto L_089602C8;
L_089635B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_089635C0;
L_089635C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 31u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08963778;
      }
      goto L_089635D0;
    }
L_089635D0:
    aot_gpr_31 = (0x089635D8u);
    goto L_089602C8;
L_089635D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_089635E0;
    }
L_089635E0:
    aot_gpr_31 = (0x089635E8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0067.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 668u, 0x089635E8u, 0x08910B38u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0067_entry(rt, ctx, 195u, aot_mem);
#else
        recomp_unit_0067_entry(rt, ctx, 195u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089635E8u) goto L_089635E8;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_089635E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_089635F0;
    }
L_089635F0:
    aot_gpr_31 = (0x089635F8u);
    goto L_089602C8;
L_089635F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_08963610;
    }
L_08963610:
    aot_gpr_31 = (0x08963618u);
    goto L_089602C8;
L_08963618:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(320));
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
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_0896364C;
    }
L_0896364C:
    aot_gpr_31 = (0x08963654u);
    goto L_089602C8;
L_08963654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963690;
      }
      goto L_08963660;
    }
L_08963660:
    aot_gpr_31 = (0x08963668u);
    goto L_089602C8;
L_08963668:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08963690;
      }
      goto L_08963678;
    }
L_08963678:
    aot_gpr_31 = (0x08963680u);
    goto L_089602C8;
L_08963680:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_08963690;
    }
L_08963690:
    aot_gpr_31 = (0x08963698u);
    goto L_089602C8;
L_08963698:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_089636A8;
    }
L_089636A8:
    aot_gpr_31 = (0x089636B0u);
    goto L_089602C8;
L_089636B0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (48896u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_089636DC;
      }
      goto L_089636CC;
    }
L_089636CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(236), aot_gpr_4);
      if (branch_taken) {
          goto L_089636F0;
      }
      goto L_089636DC;
    }
L_089636DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(236), aot_gpr_4);
      if (branch_taken) {
          goto L_089636F0;
      }
      goto L_089636EC;
    }
L_089636EC:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(236), 0u);
    goto L_089636F0;
L_089636F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08963778;
      }
      goto L_08963700;
    }
L_08963700:
    aot_gpr_31 = (0x08963708u);
    goto L_089602C8;
L_08963708:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(615))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963778;
      }
      goto L_08963718;
    }
L_08963718:
    aot_gpr_4 = (17273u << 16u);
    aot_gpr_31 = (0x08963724u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    goto L_089602C8;
L_08963724:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(636)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < aot_fpr_12)) ? 0x00800000u : 0u);
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(636)));
        goto L_0896373C;
    }
    goto L_0896373C;
L_0896373C:
    aot_gpr_31 = (0x08963744u);
    goto L_089602C8;
L_08963744:
    aot_gpr_31 = (0x0896374Cu);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089602C8;
L_0896374C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08963778;
      }
      goto L_08963758;
    }
L_08963758:
    aot_gpr_31 = (0x08963760u);
    goto L_089602C8;
L_08963760:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0896376Cu);
    aot_gpr_5 = (0u | 225u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0194.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 696u, 0x0896376Cu, 0x08B0D94Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0194_entry(rt, ctx, 383u, aot_mem);
#else
        recomp_unit_0194_entry(rt, ctx, 383u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 383u, 0x08B0D94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0896376Cu) goto L_0896376C;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_0896376C:
    aot_gpr_31 = (0x08963774u);
    goto L_089602C8;
L_08963774:
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1840), 0u);
    goto L_08963778;
L_08963778:
    aot_gpr_31 = (0x08963780u);
    goto L_089602C8;
L_08963780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089638F0;
      }
      goto L_08963788;
    }
L_08963788:
    aot_gpr_31 = (0x08963790u);
    aot_gpr_16 = (0u + static_cast<std::uint32_t>(-1));
    goto L_089602C8;
L_08963790:
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_16 = (0u | 0u);
    goto L_08963798;
L_08963798:
    aot_gpr_31 = (0x089637A0u);
    goto L_089602C8;
L_089637A0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(565)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_089637EC;
      }
      goto L_089637B0;
    }
L_089637B0:
    aot_gpr_31 = (0x089637B8u);
    goto L_089602C8;
L_089637B8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089637C4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089637C4u) goto L_089637C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089637C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_089637E4;
      }
      goto L_089637CC;
    }
L_089637CC:
    aot_gpr_31 = (0x089637D4u);
    goto L_089602C8;
L_089637D4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089637E0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089637E0u) goto L_089637E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089637E0:
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(0u));
    goto L_089637E4;
L_089637E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08963798;
      }
      goto L_089637EC;
    }
L_089637EC:
    aot_gpr_31 = (0x089637F4u);
    goto L_089602C8;
L_089637F4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_0896393C;
      }
      goto L_08963804;
    }
L_08963804:
    aot_gpr_31 = (0x0896380Cu);
    goto L_089602C8;
L_0896380C:
    aot_gpr_31 = (0x08963814u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963814u) goto L_08963814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08963814:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_16 = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08963840;
      }
      goto L_08963824;
    }
L_08963824:
    aot_gpr_31 = (0x0896382Cu);
    goto L_089602C8;
L_0896382C:
    aot_gpr_31 = (0x08963834u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963834u) goto L_08963834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08963834:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_08963858;
      }
      goto L_08963840;
    }
L_08963840:
    aot_gpr_31 = (0x08963848u);
    goto L_089602C8;
L_08963848:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9064)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9064), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08963858;
L_08963858:
    aot_gpr_31 = (0x08963860u);
    goto L_089602C8;
L_08963860:
    aot_gpr_31 = (0x08963868u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963868u) goto L_08963868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08963868:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
      if (branch_taken) {
          goto L_08963888;
      }
      goto L_08963870;
    }
L_08963870:
    aot_gpr_31 = (0x08963878u);
    goto L_089602C8;
L_08963878:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9068)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9068), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08963888;
L_08963888:
    aot_gpr_31 = (0x08963890u);
    goto L_089602C8;
L_08963890:
    aot_gpr_31 = (0x08963898u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963898u) goto L_08963898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08963898:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
      if (branch_taken) {
          goto L_089638BC;
      }
      goto L_089638A4;
    }
L_089638A4:
    aot_gpr_31 = (0x089638ACu);
    goto L_089602C8;
L_089638AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9072)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9072), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089638BC;
L_089638BC:
    aot_gpr_31 = (0x089638C4u);
    goto L_089602C8;
L_089638C4:
    aot_gpr_31 = (0x089638CCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B01E00, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, ctx.pc, ctx.gpr[2], aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089638CCu) goto L_089638CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089638CC:
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_16;
      if (branch_taken) {
          goto L_0896393C;
      }
      goto L_089638D4;
    }
L_089638D4:
    aot_gpr_31 = (0x089638DCu);
    goto L_089602C8;
L_089638DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9076)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9076), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0896393C;
      }
      goto L_089638F0;
    }
L_089638F0:
    aot_gpr_31 = (0x089638F8u);
    goto L_08960424;
L_089638F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963924;
      }
      goto L_08963908;
    }
L_08963908:
    aot_gpr_31 = (0x08963910u);
    goto L_08960424;
L_08963910:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9080)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9080), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0896393C;
      }
      goto L_08963924;
    }
L_08963924:
    aot_gpr_31 = (0x0896392Cu);
    goto L_08960424;
L_0896392C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(264)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9084)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9084), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0896393C;
L_0896393C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08963B78;
      }
      goto L_08963948;
    }
L_08963948:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08963960;
      }
      goto L_08963958;
    }
L_08963958:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963960;
    }
L_08963960:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (0u | 20000u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (ctx.lo);
    { const std::uint32_t dividend = aot_gpr_6; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
      if (branch_taken) {
          goto L_08963A48;
      }
      goto L_08963990;
    }
L_08963990:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr_31 = (0x0896399Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08960154;
L_0896399C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(6592));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_089639E8;
      }
      goto L_089639E0;
    }
L_089639E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17556), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089639EC;
      }
      goto L_089639E8;
    }
L_089639E8:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17556), static_cast<std::uint8_t>(aot_gpr_16));
    goto L_089639EC;
L_089639EC:
    aot_gpr_31 = (0x089639F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08960154;
L_089639F4:
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_31 = (0x08963A08u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08960154;
L_08963A08:
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08963A34u);
    ctx.gpr[11] = (0u | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0092.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 753u, 0x08963A34u, 0x08976FBCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0092_entry(rt, ctx, 650u, aot_mem);
#else
        recomp_unit_0092_entry(rt, ctx, 650u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963A34u) goto L_08963A34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963A34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
      if (branch_taken) {
          goto L_08963A44;
      }
      goto L_08963A3C;
    }
L_08963A3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17555), static_cast<std::uint8_t>(aot_gpr_16));
      if (branch_taken) {
          goto L_08963A48;
      }
      goto L_08963A44;
    }
L_08963A44:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17555), static_cast<std::uint8_t>(0u));
    goto L_08963A48;
L_08963A48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2320)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963A60;
    }
L_08963A60:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08963A98;
      }
      goto L_08963A6C;
    }
L_08963A6C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08963AA4;
      }
      goto L_08963A74;
    }
L_08963A74:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08963AB0;
      }
      goto L_08963A7C;
    }
L_08963A7C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08963ABC;
      }
      goto L_08963A84;
    }
L_08963A84:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
      if (branch_taken) {
          goto L_08963AC8;
      }
      goto L_08963A8C;
    }
L_08963A8C:
    aot_gpr_4 = (16888u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963A98;
    }
L_08963A98:
    aot_gpr_4 = (17016u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963AA4;
    }
L_08963AA4:
    aot_gpr_4 = (17146u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963AB0;
    }
L_08963AB0:
    aot_gpr_4 = (17274u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963ABC;
    }
L_08963ABC:
    aot_gpr_4 = (17402u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963AC8;
    }
L_08963AC8:
    aot_gpr_4 = (17530u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08963AD4;
      }
      goto L_08963AD4;
    }
L_08963AD4:
    aot_gpr_4 = (17948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(320)));
    ctx.fpr[22] = ctx.fpr[22] - aot_fpr_14;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08963B48;
      }
      goto L_08963B04;
    }
L_08963B04:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17556)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963B10;
    }
L_08963B10:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17555)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963B1C;
    }
L_08963B1C:
    aot_gpr_31 = (0x08963B24u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 772u, 0x08963B24u, 0x08AAE958u)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 526u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 526u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963B24u) goto L_08963B24;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963B24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963B2C;
    }
L_08963B2C:
    aot_gpr_31 = (0x08963B34u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0170.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 774u, 0x08963B34u, 0x08AAE97Cu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0170_entry(rt, ctx, 530u, aot_mem);
#else
        recomp_unit_0170_entry(rt, ctx, 530u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE97Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963B34u) goto L_08963B34;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963B34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963B3C;
    }
L_08963B3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = aot_gpr_4 != 0u;
      if (branch_taken) {
          goto L_08963B54;
      }
      goto L_08963B48;
    }
L_08963B48:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(320)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[22];
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08963B54;
L_08963B54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(320)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9088)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9088)));
        goto L_08963B74;
    }
    goto L_08963B6C;
L_08963B6C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          goto L_08963B74;
      }
      goto L_08963B74;
    }
L_08963B74:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9088), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08963B78;
L_08963B78:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(172)));
    aot_gpr_4 = (1526u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7937));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(172)));
        goto L_08963B90;
    }
    goto L_08963B90;
L_08963B90:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(172), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (1526u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7937));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_23 + static_cast<std::uint32_t>(176)));
        goto L_08963BAC;
    }
    goto L_08963BAC;
L_08963BAC:
    aot_mem.aot_direct_store32(aot_gpr_23 + static_cast<std::uint32_t>(176), aot_gpr_4);
    { std::uint32_t aot_run_words[15]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[29] + static_cast<std::uint32_t>(192), aot_run_words);
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
      aot_gpr_23 = aot_run_words[12];
      ctx.gpr[30] = aot_run_words[13];
      aot_gpr_31 = aot_run_words[14];
    }
    jump_target = aot_gpr_31;
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    // PSPRECOMP_V813_JR_FAST_EXIT: preserve the exact 256-transfer boundary; common JR path is shared.
    if (++local_transfers < 256u) goto LOCAL_JR_DISPATCH;
    // PSPRECOMP_V812_SHARED_SCHED_JUMP
    goto LOCAL_SCHED_BOUNDARY;
L_08963BF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[9]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[30]);
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[8]);
    ctx.gpr[30] = (aot_gpr_6 | 0u);
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(240), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_23};
      aot_mem.aot_direct_store32_block(ctx.gpr[29] + static_cast<std::uint32_t>(280), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[7]);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 7u, 0x089640C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963C58;
    }
L_08963C58:
    aot_gpr_4 = (16422u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_23 = (0u | 6u);
    aot_gpr_4 = (16672u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (0u | 8u);
    aot_gpr_4 = (16544u << 16u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[20] = (1u << 16u);
    goto L_08963C8C;
L_08963C8C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08963C9Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089600D4;
L_08963C9C:
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963CB0;
    }
L_08963CB0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 512u);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963CC8;
    }
L_08963CC8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 ^ 4u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_gpr_4 = (aot_gpr_6 | aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963CE8;
    }
L_08963CE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 14u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(aot_gpr_6));
      if (branch_taken) {
          goto L_08963D4C;
      }
      goto L_08963D08;
    }
L_08963D08:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
        goto L_08963D38;
    }
    goto L_08963D18;
L_08963D18:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    aot_gpr_31 = (0x08963D28u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 792u, 0x08963D28u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963D28u) goto L_08963D28;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963D28:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    goto L_08963D38;
L_08963D38:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(204))))));
    aot_gpr_16 = (aot_gpr_4 & 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u < aot_gpr_16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08963D58;
      }
      goto L_08963D4C;
    }
L_08963D4C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(617))))));
    aot_gpr_16 = (aot_gpr_4 & 4u);
    aot_gpr_16 = (0u < aot_gpr_16 ? 1u : 0u);
    goto L_08963D58;
L_08963D58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u | 80u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963D6C;
    }
L_08963D6C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (0u | 96u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963D80;
    }
L_08963D80:
    { const bool branch_taken = aot_gpr_16 != 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963D88;
    }
L_08963D88:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 ^ 14u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08963DF8;
      }
      goto L_08963DA4;
    }
L_08963DA4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[20]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08963DCC;
      }
      goto L_08963DBC;
    }
L_08963DBC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_23;
      if (branch_taken) {
          goto L_08963DCC;
      }
      goto L_08963DC8;
    }
L_08963DC8:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08963DCC;
L_08963DCC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_gpr_6 & ctx.gpr[20]);
    aot_gpr_6 = (0u < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08963E50;
      }
      goto L_08963DE4;
    }
L_08963DE4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08963E50;
      }
      goto L_08963DF0;
    }
L_08963DF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08963E50;
      }
      goto L_08963DF8;
    }
L_08963DF8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 ^ 4u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08963E24;
      }
      goto L_08963E14;
    }
L_08963E14:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_6 != aot_gpr_23;
      if (branch_taken) {
          goto L_08963E24;
      }
      goto L_08963E20;
    }
L_08963E20:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08963E24;
L_08963E24:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 14u);
    aot_gpr_6 = (aot_gpr_6 ^ 4u);
    aot_gpr_6 = (aot_gpr_6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    { const bool branch_taken = aot_gpr_6 == 0u;
      if (branch_taken) {
          goto L_08963E50;
      }
      goto L_08963E40;
    }
L_08963E40:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[22];
      if (branch_taken) {
          goto L_08963E50;
      }
      goto L_08963E4C;
    }
L_08963E4C:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08963E50;
L_08963E50:
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (16025u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          goto L_08963E7C;
      }
      goto L_08963E74;
    }
L_08963E74:
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963E7C;
    }
L_08963E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(236)));
    aot_gpr_6 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_6);
      if (branch_taken) {
          goto L_08963EC4;
      }
      goto L_08963E98;
    }
L_08963E98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963EC4;
      }
      goto L_08963EB4;
    }
L_08963EB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
      if (branch_taken) {
          goto L_08963EC4;
      }
      goto L_08963EC0;
    }
L_08963EC0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08963EC4;
L_08963EC4:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08963ED0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089617F8;
L_08963ED0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08963EEC;
    }
    goto L_08963EEC;
L_08963EEC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963EFC;
    }
L_08963EFC:
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08963F08u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089617F8;
L_08963F08:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[20] = aot_fpr_13 - aot_fpr_12;
    aot_gpr_31 = (0x08963F20u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089617F8;
L_08963F20:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_fpr_14 = aot_fpr_15 - aot_fpr_14;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08963F3Cu);
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_089617F8;
L_08963F3C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[22] = aot_fpr_13 - aot_fpr_12;
    aot_gpr_31 = (0x08963F54u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089617F8;
L_08963F54:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = aot_fpr_15 - aot_fpr_14;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[22] = ctx.fpr[20] + aot_fpr_14;
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08963FDC;
      }
      goto L_08963F78;
    }
L_08963F78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963FDC;
      }
      goto L_08963F90;
    }
L_08963F90:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
        goto L_08963FC0;
    }
    goto L_08963FA0;
L_08963FA0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (ctx.gpr[29] + static_cast<std::uint32_t>(181));
    aot_gpr_31 = (0x08963FB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    // PSPRECOMP_V814_LINKED_CALL: non-recursive generated call 0087->0166.
#if defined(PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    AOT_REGCACHE_SYNC_OUT();
    if (rt.prepare_aot_linked_call(ctx, &recomp_unit_0087_entry, 828u, 0x08963FB0u, 0x08A9C6FCu)) {
#if defined(__clang__)
        [[clang::musttail]] return recomp_unit_0166_entry(rt, ctx, 47u, aot_mem);
#else
        recomp_unit_0166_entry(rt, ctx, 47u, aot_mem); return;
#endif
    }
    return;
#else
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08963FB0u) goto L_08963FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
#endif
L_08963FB0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[29] + static_cast<std::uint32_t>(181)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    goto L_08963FC0;
L_08963FC0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(204))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          goto L_08963FDC;
      }
      goto L_08963FD8;
    }
L_08963FD8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08963FDC;
L_08963FDC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[20])) ? 0x00800000u : 0u);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 6u, 0x089640B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963FEC;
    }
L_08963FEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = aot_gpr_4 == 0u;
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 3u, 0x0896408Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08963FF8;
    }
L_08963FF8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.pc = 0x08964000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0087(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0087_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_87(Runtime &runtime) {
    runtime.register_generated_unit(87u, 0x08960000u, 16384u, &recomp_unit_0087, &recomp_unit_0087_entry);
    // PSPRECOMP_V812_COMPACT_REGISTRATION: same entry set, looped once in Runtime instead of source-expanded calls.
    runtime.register_generated_entry_mask(0x08960000u, &recomp_unit_0087, "recomp_unit_0087",
                                          kEntryMasks_recomp_unit_0087, 64u);
}
} // namespace psprecomp
