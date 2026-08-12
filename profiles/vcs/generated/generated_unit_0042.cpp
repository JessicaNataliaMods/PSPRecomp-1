#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0042[4089] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6,
    0, 0, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0,
    0, 0, 20, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 48, 0, 0,
    0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60,
    0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 70, 0, 0, 0, 71,
    0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0,
    0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0,
    0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0,
    0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114,
    0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0,
    0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 136, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0,
    158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0,
    166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179,
    0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0,
    0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 238, 0, 0, 0,
    0, 0, 239, 0, 240, 0, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0,
    0, 0, 0, 259, 0, 260, 0, 0, 0, 261, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 266, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 269, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0,
    0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 295, 0,
    0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0,
    0, 0, 307, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0,
    0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0,
    0, 329, 330, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 358, 359, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 363, 0,
    364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0,
    0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 385, 386, 0, 0,
    0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0,
    392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 403, 0, 404, 405, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0,
    0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 419, 0,
    0, 0, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 0, 0, 0, 0, 428, 0, 0, 429, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434,
    0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 443, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444,
};
void recomp_unit_0042_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088AC000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0042[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088AC000;
    case 2u: goto L_088AC04C;
    case 3u: goto L_088AC054;
    case 4u: goto L_088AC060;
    case 5u: goto L_088AC074;
    case 6u: goto L_088AC07C;
    case 7u: goto L_088AC08C;
    case 8u: goto L_088AC094;
    case 9u: goto L_088AC098;
    case 10u: goto L_088AC0B8;
    case 11u: goto L_088AC0C4;
    case 12u: goto L_088AC0D4;
    case 13u: goto L_088AC0E0;
    case 14u: goto L_088AC0E8;
    case 15u: goto L_088AC1C8;
    case 16u: goto L_088AC1D0;
    case 17u: goto L_088AC1DC;
    case 18u: goto L_088AC1F0;
    case 19u: goto L_088AC1F8;
    case 20u: goto L_088AC208;
    case 21u: goto L_088AC210;
    case 22u: goto L_088AC214;
    case 23u: goto L_088AC234;
    case 24u: goto L_088AC240;
    case 25u: goto L_088AC250;
    case 26u: goto L_088AC25C;
    case 27u: goto L_088AC264;
    case 28u: goto L_088AC344;
    case 29u: goto L_088AC35C;
    case 30u: goto L_088AC388;
    case 31u: goto L_088AC3B8;
    case 32u: goto L_088AC3CC;
    case 33u: goto L_088AC420;
    case 34u: goto L_088AC434;
    case 35u: goto L_088AC45C;
    case 36u: goto L_088AC47C;
    case 37u: goto L_088AC4A8;
    case 38u: goto L_088AC4B4;
    case 39u: goto L_088AC4C0;
    case 40u: goto L_088AC518;
    case 41u: goto L_088AC520;
    case 42u: goto L_088AC560;
    case 43u: goto L_088AC568;
    case 44u: goto L_088AC570;
    case 45u: goto L_088AC5C8;
    case 46u: goto L_088AC5E8;
    case 47u: goto L_088AC5F0;
    case 48u: goto L_088AC5F4;
    case 49u: goto L_088AC608;
    case 50u: goto L_088AC614;
    case 51u: goto L_088AC628;
    case 52u: goto L_088AC630;
    case 53u: goto L_088AC64C;
    case 54u: goto L_088AC658;
    case 55u: goto L_088AC660;
    case 56u: goto L_088AC670;
    case 57u: goto L_088AC684;
    case 58u: goto L_088AC6E8;
    case 59u: goto L_088AC6F4;
    case 60u: goto L_088AC6FC;
    case 61u: goto L_088AC710;
    case 62u: goto L_088AC718;
    case 63u: goto L_088AC72C;
    case 64u: goto L_088AC750;
    case 65u: goto L_088AC780;
    case 66u: goto L_088AC7AC;
    case 67u: goto L_088AC7B8;
    case 68u: goto L_088AC7DC;
    case 69u: goto L_088AC7E8;
    case 70u: goto L_088AC7EC;
    case 71u: goto L_088AC7FC;
    case 72u: goto L_088AC808;
    case 73u: goto L_088AC81C;
    case 74u: goto L_088AC828;
    case 75u: goto L_088AC844;
    case 76u: goto L_088AC850;
    case 77u: goto L_088AC860;
    case 78u: goto L_088AC868;
    case 79u: goto L_088AC874;
    case 80u: goto L_088AC888;
    case 81u: goto L_088AC894;
    case 82u: goto L_088AC8B0;
    case 83u: goto L_088AC8BC;
    case 84u: goto L_088AC8CC;
    case 85u: goto L_088AC8DC;
    case 86u: goto L_088AC8E4;
    case 87u: goto L_088AC8F0;
    case 88u: goto L_088AC904;
    case 89u: goto L_088AC90C;
    case 90u: goto L_088AC958;
    case 91u: goto L_088ACA74;
    case 92u: goto L_088ACA88;
    case 93u: goto L_088ACA94;
    case 94u: goto L_088ACAA8;
    case 95u: goto L_088ACAB4;
    case 96u: goto L_088ACAC8;
    case 97u: goto L_088ACAD8;
    case 98u: goto L_088ACADC;
    case 99u: goto L_088ACB64;
    case 100u: goto L_088ACB9C;
    case 101u: goto L_088ACBAC;
    case 102u: goto L_088ACBB8;
    case 103u: goto L_088ACBC8;
    case 104u: goto L_088ACBD4;
    case 105u: goto L_088ACBDC;
    case 106u: goto L_088ACBEC;
    case 107u: goto L_088ACBF8;
    case 108u: goto L_088ACC08;
    case 109u: goto L_088ACC14;
    case 110u: goto L_088ACC20;
    case 111u: goto L_088ACCD8;
    case 112u: goto L_088ACCE4;
    case 113u: goto L_088ACCF0;
    case 114u: goto L_088ACCFC;
    case 115u: goto L_088ACD08;
    case 116u: goto L_088ACD14;
    case 117u: goto L_088ACD38;
    case 118u: goto L_088ACD54;
    case 119u: goto L_088ACE58;
    case 120u: goto L_088ACE68;
    case 121u: goto L_088ACE78;
    case 122u: goto L_088ACE8C;
    case 123u: goto L_088ACEB8;
    case 124u: goto L_088ACEF8;
    case 125u: goto L_088ACF0C;
    case 126u: goto L_088ACF3C;
    case 127u: goto L_088ACF4C;
    case 128u: goto L_088ACF60;
    case 129u: goto L_088ACF8C;
    case 130u: goto L_088ACFCC;
    case 131u: goto L_088ACFE0;
    case 132u: goto L_088AD008;
    case 133u: goto L_088AD240;
    case 134u: goto L_088AD248;
    case 135u: goto L_088AD258;
    case 136u: goto L_088AD260;
    case 137u: goto L_088AD264;
    case 138u: goto L_088AD3B8;
    case 139u: goto L_088AD3C0;
    case 140u: goto L_088AD3D0;
    case 141u: goto L_088AD3D8;
    case 142u: goto L_088AD3DC;
    case 143u: goto L_088AD4AC;
    case 144u: goto L_088AD4B4;
    case 145u: goto L_088AD4C4;
    case 146u: goto L_088AD4CC;
    case 147u: goto L_088AD4E0;
    case 148u: goto L_088AD4FC;
    case 149u: goto L_088AD508;
    case 150u: goto L_088AD514;
    case 151u: goto L_088AD55C;
    case 152u: goto L_088AD5BC;
    case 153u: goto L_088AD5D4;
    case 154u: goto L_088AD614;
    case 155u: goto L_088AD6C0;
    case 156u: goto L_088AD6DC;
    case 157u: goto L_088AD6F8;
    case 158u: goto L_088AD700;
    case 159u: goto L_088AD708;
    case 160u: goto L_088AD720;
    case 161u: goto L_088AD728;
    case 162u: goto L_088AD73C;
    case 163u: goto L_088AD758;
    case 164u: goto L_088AD760;
    case 165u: goto L_088AD768;
    case 166u: goto L_088AD780;
    case 167u: goto L_088AD78C;
    case 168u: goto L_088ADB0C;
    case 169u: goto L_088ADB1C;
    case 170u: goto L_088ADB24;
    case 171u: goto L_088ADB30;
    case 172u: goto L_088ADB58;
    case 173u: goto L_088ADD3C;
    case 174u: goto L_088ADD4C;
    case 175u: goto L_088ADD54;
    case 176u: goto L_088ADD94;
    case 177u: goto L_088ADDE4;
    case 178u: goto L_088ADDF0;
    case 179u: goto L_088ADDFC;
    case 180u: goto L_088ADE08;
    case 181u: goto L_088ADE14;
    case 182u: goto L_088ADE20;
    case 183u: goto L_088ADE40;
    case 184u: goto L_088ADF68;
    case 185u: goto L_088ADF78;
    case 186u: goto L_088ADF88;
    case 187u: goto L_088ADF90;
    case 188u: goto L_088ADF98;
    case 189u: goto L_088ADFCC;
    case 190u: goto L_088ADFE4;
    case 191u: goto L_088ADFFC;
    case 192u: goto L_088AE014;
    case 193u: goto L_088AE02C;
    case 194u: goto L_088AE03C;
    case 195u: goto L_088AE054;
    case 196u: goto L_088AE064;
    case 197u: goto L_088AE074;
    case 198u: goto L_088AE07C;
    case 199u: goto L_088AE0A8;
    case 200u: goto L_088AE0B4;
    case 201u: goto L_088AE0BC;
    case 202u: goto L_088AE0CC;
    case 203u: goto L_088AE0D4;
    case 204u: goto L_088AE0E4;
    case 205u: goto L_088AE0FC;
    case 206u: goto L_088AE10C;
    case 207u: goto L_088AE134;
    case 208u: goto L_088AE140;
    case 209u: goto L_088AE1FC;
    case 210u: goto L_088AE21C;
    case 211u: goto L_088AE23C;
    case 212u: goto L_088AE248;
    case 213u: goto L_088AE258;
    case 214u: goto L_088AE340;
    case 215u: goto L_088AE360;
    case 216u: goto L_088AE380;
    case 217u: goto L_088AE38C;
    case 218u: goto L_088AE39C;
    case 219u: goto L_088AE484;
    case 220u: goto L_088AE4A4;
    case 221u: goto L_088AE4C4;
    case 222u: goto L_088AE4D0;
    case 223u: goto L_088AE4E0;
    case 224u: goto L_088AE5C8;
    case 225u: goto L_088AE5E8;
    case 226u: goto L_088AE608;
    case 227u: goto L_088AE614;
    case 228u: goto L_088AE624;
    case 229u: goto L_088AE70C;
    case 230u: goto L_088AE72C;
    case 231u: goto L_088AE74C;
    case 232u: goto L_088AE758;
    case 233u: goto L_088AE764;
    case 234u: goto L_088AE820;
    case 235u: goto L_088AE840;
    case 236u: goto L_088AE860;
    case 237u: goto L_088AE86C;
    case 238u: goto L_088AE870;
    case 239u: goto L_088AE888;
    case 240u: goto L_088AE890;
    case 241u: goto L_088AE89C;
    case 242u: goto L_088AE8A0;
    case 243u: goto L_088AE8E8;
    case 244u: goto L_088AE920;
    case 245u: goto L_088AE92C;
    case 246u: goto L_088AE938;
    case 247u: goto L_088AE944;
    case 248u: goto L_088AE950;
    case 249u: goto L_088AE970;
    case 250u: goto L_088AE994;
    case 251u: goto L_088AE9A4;
    case 252u: goto L_088AE9B4;
    case 253u: goto L_088AE9BC;
    case 254u: goto L_088AE9D4;
    case 255u: goto L_088AE9DC;
    case 256u: goto L_088AE9E4;
    case 257u: goto L_088AE9F0;
    case 258u: goto L_088AE9F8;
    case 259u: goto L_088AEA0C;
    case 260u: goto L_088AEA14;
    case 261u: goto L_088AEA24;
    case 262u: goto L_088AEA28;
    case 263u: goto L_088AEC9C;
    case 264u: goto L_088AECAC;
    case 265u: goto L_088AECB4;
    case 266u: goto L_088AECC0;
    case 267u: goto L_088AECC4;
    case 268u: goto L_088AEF38;
    case 269u: goto L_088AEF3C;
    case 270u: goto L_088AEF54;
    case 271u: goto L_088AEF5C;
    case 272u: goto L_088AEF6C;
    case 273u: goto L_088AEF78;
    case 274u: goto L_088AEF84;
    case 275u: goto L_088AEF90;
    case 276u: goto L_088AEFC0;
    case 277u: goto L_088AF06C;
    case 278u: goto L_088AF0B4;
    case 279u: goto L_088AF0C0;
    case 280u: goto L_088AF0C8;
    case 281u: goto L_088AF0D0;
    case 282u: goto L_088AF0D8;
    case 283u: goto L_088AF0E0;
    case 284u: goto L_088AF0E8;
    case 285u: goto L_088AF104;
    case 286u: goto L_088AF114;
    case 287u: goto L_088AF120;
    case 288u: goto L_088AF128;
    case 289u: goto L_088AF138;
    case 290u: goto L_088AF140;
    case 291u: goto L_088AF14C;
    case 292u: goto L_088AF158;
    case 293u: goto L_088AF160;
    case 294u: goto L_088AF170;
    case 295u: goto L_088AF178;
    case 296u: goto L_088AF184;
    case 297u: goto L_088AF18C;
    case 298u: goto L_088AF194;
    case 299u: goto L_088AF19C;
    case 300u: goto L_088AF1A4;
    case 301u: goto L_088AF1B8;
    case 302u: goto L_088AF1C4;
    case 303u: goto L_088AF1D0;
    case 304u: goto L_088AF1DC;
    case 305u: goto L_088AF1E8;
    case 306u: goto L_088AF1F0;
    case 307u: goto L_088AF208;
    case 308u: goto L_088AF20C;
    case 309u: goto L_088AF21C;
    case 310u: goto L_088AF224;
    case 311u: goto L_088AF22C;
    case 312u: goto L_088AF234;
    case 313u: goto L_088AF264;
    case 314u: goto L_088AF270;
    case 315u: goto L_088AF2BC;
    case 316u: goto L_088AF2C8;
    case 317u: goto L_088AF2D0;
    case 318u: goto L_088AF2DC;
    case 319u: goto L_088AF2E4;
    case 320u: goto L_088AF304;
    case 321u: goto L_088AF328;
    case 322u: goto L_088AF348;
    case 323u: goto L_088AF354;
    case 324u: goto L_088AF35C;
    case 325u: goto L_088AF368;
    case 326u: goto L_088AF38C;
    case 327u: goto L_088AF3AC;
    case 328u: goto L_088AF3E4;
    case 329u: goto L_088AF404;
    case 330u: goto L_088AF408;
    case 331u: goto L_088AF410;
    case 332u: goto L_088AF41C;
    case 333u: goto L_088AF430;
    case 334u: goto L_088AF440;
    case 335u: goto L_088AF448;
    case 336u: goto L_088AF450;
    case 337u: goto L_088AF458;
    case 338u: goto L_088AF460;
    case 339u: goto L_088AF484;
    case 340u: goto L_088AF48C;
    case 341u: goto L_088AF4D4;
    case 342u: goto L_088AF4DC;
    case 343u: goto L_088AF4F0;
    case 344u: goto L_088AF518;
    case 345u: goto L_088AF53C;
    case 346u: goto L_088AF548;
    case 347u: goto L_088AF590;
    case 348u: goto L_088AF5A8;
    case 349u: goto L_088AF5B0;
    case 350u: goto L_088AF5B8;
    case 351u: goto L_088AF5CC;
    case 352u: goto L_088AF628;
    case 353u: goto L_088AF62C;
    case 354u: goto L_088AF718;
    case 355u: goto L_088AF724;
    case 356u: goto L_088AF734;
    case 357u: goto L_088AF740;
    case 358u: goto L_088AF748;
    case 359u: goto L_088AF74C;
    case 360u: goto L_088AF760;
    case 361u: goto L_088AF768;
    case 362u: goto L_088AF770;
    case 363u: goto L_088AF778;
    case 364u: goto L_088AF780;
    case 365u: goto L_088AF788;
    case 366u: goto L_088AF7A8;
    case 367u: goto L_088AF7B4;
    case 368u: goto L_088AF7C8;
    case 369u: goto L_088AF7D0;
    case 370u: goto L_088AF7DC;
    case 371u: goto L_088AF7F0;
    case 372u: goto L_088AF844;
    case 373u: goto L_088AF84C;
    case 374u: goto L_088AF86C;
    case 375u: goto L_088AF884;
    case 376u: goto L_088AF8FC;
    case 377u: goto L_088AF948;
    case 378u: goto L_088AF94C;
    case 379u: goto L_088AF990;
    case 380u: goto L_088AF9BC;
    case 381u: goto L_088AFA40;
    case 382u: goto L_088AFA4C;
    case 383u: goto L_088AFA5C;
    case 384u: goto L_088AFA68;
    case 385u: goto L_088AFA70;
    case 386u: goto L_088AFA74;
    case 387u: goto L_088AFA88;
    case 388u: goto L_088AFA90;
    case 389u: goto L_088AFAA8;
    case 390u: goto L_088AFAB8;
    case 391u: goto L_088AFAF8;
    case 392u: goto L_088AFB00;
    case 393u: goto L_088AFB08;
    case 394u: goto L_088AFB28;
    case 395u: goto L_088AFB3C;
    case 396u: goto L_088AFB50;
    case 397u: goto L_088AFB64;
    case 398u: goto L_088AFB88;
    case 399u: goto L_088AFB9C;
    case 400u: goto L_088AFBA4;
    case 401u: goto L_088AFBD8;
    case 402u: goto L_088AFBE0;
    case 403u: goto L_088AFBE8;
    case 404u: goto L_088AFBF0;
    case 405u: goto L_088AFBF4;
    case 406u: goto L_088AFC30;
    case 407u: goto L_088AFC38;
    case 408u: goto L_088AFC40;
    case 409u: goto L_088AFC60;
    case 410u: goto L_088AFC74;
    case 411u: goto L_088AFC88;
    case 412u: goto L_088AFC9C;
    case 413u: goto L_088AFCA8;
    case 414u: goto L_088AFCB8;
    case 415u: goto L_088AFCC0;
    case 416u: goto L_088AFCC8;
    case 417u: goto L_088AFCDC;
    case 418u: goto L_088AFCE4;
    case 419u: goto L_088AFCF8;
    case 420u: goto L_088AFD10;
    case 421u: goto L_088AFD18;
    case 422u: goto L_088AFD20;
    case 423u: goto L_088AFD28;
    case 424u: goto L_088AFD30;
    case 425u: goto L_088AFD38;
    case 426u: goto L_088AFD50;
    case 427u: goto L_088AFD74;
    case 428u: goto L_088AFD94;
    case 429u: goto L_088AFDA0;
    case 430u: goto L_088AFDA4;
    case 431u: goto L_088AFDC4;
    case 432u: goto L_088AFDD0;
    case 433u: goto L_088AFDE8;
    case 434u: goto L_088AFDFC;
    case 435u: goto L_088AFE0C;
    case 436u: goto L_088AFE14;
    case 437u: goto L_088AFE68;
    case 438u: goto L_088AFE70;
    case 439u: goto L_088AFE90;
    case 440u: goto L_088AFEA8;
    case 441u: goto L_088AFF20;
    case 442u: goto L_088AFF6C;
    case 443u: goto L_088AFF70;
    case 444u: goto L_088AFFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088AC000:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 100u);
    hot_regs.g6 = (0u | 100u);
    hot_regs.g7 = (0u | 100u);
    hot_regs.g31 = (0x088AC04Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 413u, 0x088AAD00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC04Cu) goto L_088AC04C;
    return;
L_088AC04C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC344;
      }
      goto L_088AC054;
    }
L_088AC054:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088AC1D0;
      }
      goto L_088AC060;
    }
L_088AC060:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (2235u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28400));
    hot_regs.g31 = (0x088AC074u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC074u) goto L_088AC074;
    return;
L_088AC074:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), 0u);
      if (branch_taken) {
          goto L_088AC094;
      }
      goto L_088AC07C;
    }
L_088AC07C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    hot_regs.g4 = g4;
        goto L_088AC098;
    }
    goto L_088AC08C;
}
L_088AC08C:
    hot_regs.g31 = (0x088AC094u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC094u) goto L_088AC094;
    return;
L_088AC094:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    goto L_088AC098;
L_088AC098:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), hot_regs.g4);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g31 = (0x088AC0B8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC0B8u) goto L_088AC0B8;
    return;
L_088AC0B8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088AC0C4u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC0C4u) goto L_088AC0C4;
    return;
L_088AC0C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AC0E8;
      }
      goto L_088AC0D4;
    }
}
L_088AC0D4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC0E8;
      }
      goto L_088AC0E0;
    }
L_088AC0E0:
    hot_regs.g31 = (0x088AC0E8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC0E8u) goto L_088AC0E8;
    return;
L_088AC0E8:
    hot_regs.g4 = (15523u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15759u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 23593u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (48477u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 12059u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (15621u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 7864u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (16203u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 50856u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 100u);
    hot_regs.g6 = (0u | 100u);
    hot_regs.g7 = (0u | 100u);
    hot_regs.g31 = (0x088AC1C8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 413u, 0x088AAD00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC1C8u) goto L_088AC1C8;
    return;
L_088AC1C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC344;
      }
      goto L_088AC1D0;
    }
L_088AC1D0:
    hot_regs.g4 = (0u | 10u);
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088AC344;
      }
      goto L_088AC1DC;
    }
L_088AC1DC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (2235u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28400));
    hot_regs.g31 = (0x088AC1F0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC1F0u) goto L_088AC1F0;
    return;
L_088AC1F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), 0u);
      if (branch_taken) {
          goto L_088AC210;
      }
      goto L_088AC1F8;
    }
L_088AC1F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(424)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(424)));
    hot_regs.g4 = g4;
        goto L_088AC214;
    }
    goto L_088AC208;
}
L_088AC208:
    hot_regs.g31 = (0x088AC210u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(416)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC210u) goto L_088AC210;
    return;
L_088AC210:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(424)));
    goto L_088AC214;
L_088AC214:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(424), hot_regs.g4);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    hot_regs.g31 = (0x088AC234u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC234u) goto L_088AC234;
    return;
L_088AC234:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088AC240u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC240u) goto L_088AC240;
    return;
L_088AC240:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(424)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AC264;
      }
      goto L_088AC250;
    }
}
L_088AC250:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC264;
      }
      goto L_088AC25C;
    }
L_088AC25C:
    hot_regs.g31 = (0x088AC264u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(416)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC264u) goto L_088AC264;
    return;
L_088AC264:
    hot_regs.g4 = (15523u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15759u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 23593u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (15812u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 39846u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (48271u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 23593u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (16268u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 18874u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 100u);
    hot_regs.g6 = (0u | 100u);
    hot_regs.g7 = (0u | 100u);
    hot_regs.g31 = (0x088AC344u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 413u, 0x088AAD00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC344u) goto L_088AC344;
    return;
L_088AC344:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(624)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(628)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(632)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(636)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AC35C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g5 = (g4 | 0u);
    g4 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24920), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088AC434;
      }
      goto L_088AC388;
    }
}
L_088AC388:
    hot_regs.g5 = (0u | 8192u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g5 = (0u | 16384u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24916), hot_regs.g6);
    ctx.gpr[18] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[17] = (ctx.lo);
    hot_regs.g31 = (0x088AC3B8u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC3B8u) goto L_088AC3B8;
    return;
L_088AC3B8:
    hot_regs.g6 = (ctx.gpr[17] - ctx.gpr[18]);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x088AC3CCu);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC3CCu) goto L_088AC3CC;
    return;
L_088AC3CC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g6 = (ctx.gpr[18] + hot_regs.g4);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24920)));
    hot_regs.g7 = (hot_regs.g6 < hot_regs.g4 ? 1u : 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24912), hot_regs.g4);
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[19]);
    hot_regs.g4 = (15948u << 16u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g5 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g31 = (0x088AC420u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC420u) goto L_088AC420;
    return;
L_088AC420:
{
    float f14 = hot_regs.f14;
    f14 = hot_regs.f20 - hot_regs.f22;
    { const float fs = f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = hot_regs.f22 + f14;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24908), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088AC45C;
      }
      goto L_088AC434;
    }
}
L_088AC434:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2236u << 16u);
    g4 = (0u + static_cast<std::uint32_t>(-1));
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(2856), g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(2864), g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(2860), g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(2896), g4);
    g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088AC45C;
}
L_088AC45C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AC47C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g5 - g4);
    g5 = (g4 < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088AC5F0;
      }
      goto L_088AC4A8;
    }
}
L_088AC4A8:
{
    float f20 = hot_regs.f20;
    f20 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f20)));
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_088AC4C0;
      }
      goto L_088AC4B4;
    }
}
L_088AC4B4:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    goto L_088AC4C0;
L_088AC4C0:
    hot_regs.g4 = (17658u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f20 = hot_regs.f20 / hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088AC518u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC518u) goto L_088AC518;
    return;
L_088AC518:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (16179u << 16u);
      if (branch_taken) {
          goto L_088AC5E8;
      }
      goto L_088AC520;
    }
L_088AC520:
    hot_regs.g4 = (hot_regs.g4 | 13107u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = (0u | 1u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g31 = (0x088AC560u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC560u) goto L_088AC560;
    return;
L_088AC560:
    hot_regs.g31 = (0x088AC568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC568u) goto L_088AC568;
    return;
L_088AC568:
    hot_regs.g31 = (0x088AC570u);
    hot_regs.g4 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC570u) goto L_088AC570;
    return;
L_088AC570:
    hot_regs.g4 = (17279u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(65)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(hot_regs.g4));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g31 = (0x088AC5C8u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(hot_regs.g5));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC5C8u) goto L_088AC5C8;
    return;
L_088AC5C8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088AC5E8u);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC5E8u) goto L_088AC5E8;
    return;
L_088AC5E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC5F4;
      }
      goto L_088AC5F0;
    }
L_088AC5F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_088AC5F4;
L_088AC5F4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AC608:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2246u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(16496));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = g4;
    goto L_088AC614;
}
L_088AC614:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088AC614;
      }
      goto L_088AC628;
    }
}
L_088AC628:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AC630:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (2246u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(16496));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_088AC64C;
}
L_088AC64C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC660;
      }
      goto L_088AC658;
    }
L_088AC658:
    hot_regs.g31 = (0x088AC660u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088AC47C;
L_088AC660:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088AC64C;
      }
      goto L_088AC670;
    }
}
L_088AC670:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AC684:
{
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g21);
    g21 = (2246u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[9] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g6 & 255u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    g21 = (g21 + static_cast<std::uint32_t>(16496));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[17] = (hot_regs.g7 & 255u);
    ctx.gpr[18] = (ctx.gpr[8] & 255u);
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (g21 | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    ctx.gpr[21] = g21;
    hot_regs.g29 = g29;
    goto L_088AC6E8;
}
L_088AC6E8:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC710;
      }
      goto L_088AC6F4;
    }
L_088AC6F4:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC710;
      }
      goto L_088AC6FC;
    }
L_088AC6FC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 16 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088AC6E8;
      }
      goto L_088AC710;
    }
}
L_088AC710:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC750;
      }
      goto L_088AC718;
    }
L_088AC718:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x088AC72Cu);
    hot_regs.g5 = (ctx.gpr[20] + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC72Cu) goto L_088AC72C;
    return;
L_088AC72C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    g4 = (ctx.gpr[20] + g4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = g4;
    goto L_088AC750;
}
L_088AC750:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AC780:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2246u << 16u);
    hot_regs.g7 = (2231u << 16u);
    hot_regs.g5 = (0u | 32u);
    hot_regs.g6 = (0u | 144u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(11888));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088AC7ACu);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-31848));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AC7ACu) goto L_088AC7AC;
    return;
L_088AC7AC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AC7B8:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-272));
    ctx.gpr[8] = (g7 & 255u);
    g7 = (2246u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(4080));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (g7 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), hot_regs.g31);
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    goto L_088AC7DC;
}
L_088AC7DC:
    hot_regs.g2 = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC7EC;
      }
      goto L_088AC7E8;
    }
L_088AC7E8:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_088AC7EC;
L_088AC7EC:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (g10 + static_cast<std::uint32_t>(1));
    hot_regs.g2 = (static_cast<std::int32_t>(g10) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088AC7DC;
      }
      goto L_088AC7FC;
    }
}
L_088AC7FC:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[11]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AC868;
      }
      goto L_088AC808;
    }
L_088AC808:
{
    float f15 = hot_regs.f15;
    f15 = std::bit_cast<float>(hot_regs.g6);
    ctx.gpr[9] = (20224u << 16u);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) >= 0;
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[9]);
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088AC828;
      }
      goto L_088AC81C;
    }
}
L_088AC81C:
    hot_regs.g6 = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f15 = hot_regs.f15 + ctx.fpr[16];
    goto L_088AC828;
L_088AC828:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    hot_regs.g6 = (16000u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g6);
    { const float fs = f15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    ctx.set_fpu_condition((f15 < f14));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = f15 - f14;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_088AC850;
    }
    goto L_088AC844;
}
L_088AC844:
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f15));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
      if (branch_taken) {
          goto L_088AC860;
      }
      goto L_088AC850;
    }
L_088AC850:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(f14));
    g6 = (ctx.gpr[9] + g6);
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
    goto L_088AC860;
}
}
L_088AC860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC8CC;
      }
      goto L_088AC868;
    }
L_088AC868:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[11]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AC8CC;
      }
      goto L_088AC874;
    }
L_088AC874:
{
    float f15 = hot_regs.f15;
    f15 = std::bit_cast<float>(hot_regs.g6);
    ctx.gpr[9] = (20224u << 16u);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) >= 0;
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[9]);
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088AC894;
      }
      goto L_088AC888;
    }
}
L_088AC888:
    hot_regs.g6 = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f15 = hot_regs.f15 + ctx.fpr[16];
    goto L_088AC894;
L_088AC894:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    hot_regs.g6 = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g6);
    { const float fs = f15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    ctx.set_fpu_condition((f15 < f14));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = f15 - f14;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_088AC8BC;
    }
    goto L_088AC8B0;
}
L_088AC8B0:
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f15));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
      if (branch_taken) {
          goto L_088AC8CC;
      }
      goto L_088AC8BC;
    }
L_088AC8BC:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(f14));
    g6 = (ctx.gpr[9] + g6);
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
    goto L_088AC8CC;
}
}
L_088AC8CC:
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g2 = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (hot_regs.g7 | 0u);
    goto L_088AC8DC;
L_088AC8DC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC904;
      }
      goto L_088AC8E4;
    }
L_088AC8E4:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC904;
      }
      goto L_088AC8F0;
    }
L_088AC8F0:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (g10 + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (static_cast<std::int32_t>(g10) < 16 ? 1u : 0u);
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088AC8DC;
      }
      goto L_088AC904;
    }
}
L_088AC904:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AC958;
      }
      goto L_088AC90C;
    }
L_088AC90C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g7 = (g7 + static_cast<std::uint32_t>(16));
    g7 = (ctx.gpr[11] + g7);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g7 = (0u | 1u);
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(32), g7);
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[8]));
    g7 = (17008u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g7);
    f12 = f12 / hot_regs.f14;
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    g7 = (0u | 10u);
    { const std::uint32_t dividend = g6; const std::uint32_t divisor = g7; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g6 = (ctx.lo);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(36), g6);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    goto L_088AC958;
}
}
L_088AC958:
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (2236u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(32304));
    hot_regs.g7 = (hot_regs.g6 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (hot_regs.g6 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g6 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088ACC14;
      }
      goto L_088ACA74;
    }
L_088ACA74:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
        goto L_088ACA94;
    }
    goto L_088ACA88;
L_088ACA88:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) ^ 0x80000000u);
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088ACA94;
      }
      goto L_088ACA94;
    }
}
L_088ACA94:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f12 = f12;
        goto L_088ACAB4;
    }
    goto L_088ACAA8;
}
L_088ACAA8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088ACAB4;
      }
      goto L_088ACAB4;
    }
}
L_088ACAB4:
{
    float f15 = hot_regs.f15;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((f15 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f15 = f15;
        goto L_088ACAD8;
    }
    goto L_088ACAC8;
}
L_088ACAC8:
{
    float f15 = hot_regs.f15;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = hot_regs.f12 + f15;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088ACADC;
      }
      goto L_088ACAD8;
    }
}
L_088ACAD8:
    hot_regs.f12 = hot_regs.f12 + hot_regs.f15;
    goto L_088ACADC;
L_088ACADC:
    hot_regs.f12 = hot_regs.f14 / hot_regs.f12;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16128u << 16u);
      if (branch_taken) {
          goto L_088ACC14;
      }
      goto L_088ACB64;
    }
L_088ACB64:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f14 = std::bit_cast<float>(g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    g5 = (17150u << 16u);
    ctx.set_fpu_condition((hot_regs.f15 < f13));
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    f13 = std::bit_cast<float>(g5);
    f12 = ctx.fpr[16] - f12;
    g5 = (20224u << 16u);
    f14 = std::bit_cast<float>(g5);
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088ACBDC;
      }
      goto L_088ACB9C;
    }
}
}
L_088ACB9C:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - hot_regs.f14;
    hot_regs.f12 = f12;
        goto L_088ACBB8;
    }
    goto L_088ACBAC;
}
L_088ACBAC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088ACBC8;
      }
      goto L_088ACBB8;
    }
}
L_088ACBB8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (hot_regs.g6 + g5);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_088ACBC8;
}
}
L_088ACBC8:
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088ACBD4u);
    hot_regs.g5 = (0u | 186u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ACBD4u) goto L_088ACBD4;
    return;
L_088ACBD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ACC14;
      }
      goto L_088ACBDC;
    }
L_088ACBDC:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - hot_regs.f14;
    hot_regs.f12 = f12;
        goto L_088ACBF8;
    }
    goto L_088ACBEC;
}
L_088ACBEC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088ACC08;
      }
      goto L_088ACBF8;
    }
}
L_088ACBF8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (hot_regs.g6 + g5);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_088ACC08;
}
}
L_088ACC08:
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088ACC14u);
    hot_regs.g5 = (0u | 185u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ACC14u) goto L_088ACC14;
    return;
L_088ACC14:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088ACC20:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-720));
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(672), g17);
    g4 = (g4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(640), hot_regs.g5);
    g17 = (2246u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(636), g4);
    g17 = (g17 + static_cast<std::uint32_t>(4080));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(692), g22);
    g22 = (0u | 0u);
    g4 = (g17 + static_cast<std::uint32_t>(16));
    g22 = (g22 + g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    g4 = (16672u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[30] = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(668), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(696), g23);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    g16 = (2235u << 16u);
    g23 = (2233u << 16u);
    g4 = (16384u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(652), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(676), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(680), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(684), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(688), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(700), ctx.gpr[30]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g16 = (g16 + static_cast<std::uint32_t>(28032));
    g23 = (g23 + static_cast<std::uint32_t>(-17648));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(704), hot_regs.g31);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    goto L_088ACCD8;
}
L_088ACCD8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD4CC;
      }
      goto L_088ACCE4;
    }
L_088ACCE4:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088ACCF0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ACCF0u) goto L_088ACCF0;
    return;
L_088ACCF0:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x088ACCFCu);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ACCFCu) goto L_088ACCFC;
    return;
L_088ACCFC:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x088ACD08u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ACD08u) goto L_088ACD08;
    return;
L_088ACD08:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x088ACD14u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ACD14u) goto L_088ACD14;
    return;
L_088ACD14:
{
    float f22 = hot_regs.f22;
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (20352u << 16u);
    g8 = (hot_regs.g4 - g8);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    f22 = std::bit_cast<float>(g8);
    f22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f22)));
    if (static_cast<std::int32_t>(g8) < 0) {
    f22 = f22 + hot_regs.f13;
    ctx.gpr[8] = g8;
    hot_regs.f22 = f22;
        goto L_088ACD38;
    }
    goto L_088ACD38;
}
}
L_088ACD38:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const float fs = f22; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    if (static_cast<std::int32_t>(g4) < 0) {
    f12 = f12 + hot_regs.f13;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
        goto L_088ACD54;
    }
    goto L_088ACD54;
}
}
L_088ACD54:
    hot_regs.f22 = hot_regs.f22 / hot_regs.f12;
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (hot_regs.g5 - ctx.gpr[8]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g4 = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = hot_regs.g4; const std::uint32_t divisor = hot_regs.g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(640)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(636)));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16179u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 13107u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f14;
    hot_regs.f13 = hot_regs.f13 - hot_regs.f14;
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088ACE68;
      }
      goto L_088ACE58;
    }
L_088ACE58:
    ctx.set_fpu_condition((hot_regs.f13 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AD4CC;
      }
      goto L_088ACE68;
    }
L_088ACE68:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088ACF3C;
      }
      goto L_088ACE78;
    }
L_088ACE78:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((f14 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    hot_regs.f14 = f14;
        goto L_088ACE8C;
    }
    goto L_088ACE8C;
}
L_088ACE8C:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
        goto L_088ACEB8;
    }
    goto L_088ACEB8;
L_088ACEB8:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
        goto L_088ACEF8;
    }
    goto L_088ACEF8;
L_088ACEF8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_088ACF0C;
    }
    goto L_088ACF0C;
}
L_088ACF0C:
    hot_regs.f12 = hot_regs.f14 + hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD008;
      }
      goto L_088ACF3C;
    }
L_088ACF3C:
    ctx.set_fpu_condition((hot_regs.f13 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AD008;
      }
      goto L_088ACF4C;
    }
L_088ACF4C:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((f14 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    hot_regs.f14 = f14;
        goto L_088ACF60;
    }
    goto L_088ACF60;
}
L_088ACF60:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
        goto L_088ACF8C;
    }
    goto L_088ACF8C;
L_088ACF8C:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
        goto L_088ACFCC;
    }
    goto L_088ACFCC;
L_088ACFCC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_088ACFE0;
    }
    goto L_088ACFE0;
}
L_088ACFE0:
    hot_regs.f12 = hot_regs.f14 + hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088AD008;
L_088AD008:
    hot_regs.g4 = (16608u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16640u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g4 = (ctx.gpr[8] & 255u);
    hot_regs.g5 = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g6 = (0u | 152u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g7 = (0u | 34u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(131), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(153), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(154), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(155), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(201), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(202), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(203), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = hot_regs.f14 + hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f15 = hot_regs.f12 + hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f15 = hot_regs.f13 + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = hot_regs.f14 - hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = hot_regs.f13 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[16] = hot_regs.f15 + hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = hot_regs.f12 + hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = hot_regs.f14 + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f13 = hot_regs.f15 - hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x088AD240u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD240u) goto L_088AD240;
    return;
L_088AD240:
    if (hot_regs.g2 == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_088AD264;
    }
    goto L_088AD248;
L_088AD248:
    hot_regs.g4 = (0u | 3u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088AD258u);
    hot_regs.g6 = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD258u) goto L_088AD258;
    return;
L_088AD258:
    hot_regs.g31 = (0x088AD260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD260u) goto L_088AD260;
    return;
L_088AD260:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_088AD264;
L_088AD264:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (0u | 255u);
    hot_regs.g5 = (0u | 152u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g6 = (0u | 34u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g7 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g7 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g7 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = hot_regs.f12 + hot_regs.f20;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.fpr[17] = hot_regs.f13 + ctx.fpr[26];
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.f15 = hot_regs.f14 + hot_regs.f22;
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[19] = hot_regs.f12 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[18] = hot_regs.f14 - hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[0] = hot_regs.f13 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    ctx.fpr[16] = hot_regs.f12 + hot_regs.f20;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[17] = hot_regs.f15 + hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = hot_regs.f13 + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[18] = hot_regs.f15 - hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.fpr[19] = hot_regs.f12 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[0] = hot_regs.f13 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x088AD3B8u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD3B8u) goto L_088AD3B8;
    return;
L_088AD3B8:
    if (hot_regs.g2 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
        goto L_088AD3DC;
    }
    goto L_088AD3C0;
L_088AD3C0:
    hot_regs.g4 = (0u | 3u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088AD3D0u);
    hot_regs.g6 = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD3D0u) goto L_088AD3D0;
    return;
L_088AD3D0:
    hot_regs.g31 = (0x088AD3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD3D8u) goto L_088AD3D8;
    return;
L_088AD3D8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    goto L_088AD3DC;
L_088AD3DC:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f15 = hot_regs.f12 + hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[16] = hot_regs.f13 + ctx.fpr[26];
    ctx.fpr[17] = hot_regs.f14 + hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[19] = hot_regs.f12 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[18] = hot_regs.f14 - hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[0] = hot_regs.f13 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    ctx.fpr[16] = hot_regs.f12 + hot_regs.f20;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[17] = hot_regs.f15 + hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = hot_regs.f13 + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[18] = hot_regs.f15 - hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.fpr[19] = hot_regs.f12 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[0] = hot_regs.f13 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x088AD4ACu);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD4ACu) goto L_088AD4AC;
    return;
L_088AD4AC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD4CC;
      }
      goto L_088AD4B4;
    }
L_088AD4B4:
    hot_regs.g4 = (0u | 3u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088AD4C4u);
    hot_regs.g6 = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD4C4u) goto L_088AD4C4;
    return;
L_088AD4C4:
    hot_regs.g31 = (0x088AD4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD4CCu) goto L_088AD4CC;
    return;
L_088AD4CC:
{
    std::uint32_t g30 = ctx.gpr[30];
    g30 = (g30 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (static_cast<std::int32_t>(g30) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_088ACCD8;
      }
      goto L_088AD4E0;
    }
}
L_088AD4E0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(632)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088AD4FCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD4FCu) goto L_088AD4FC;
    return;
L_088AD4FC:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x088AD508u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD508u) goto L_088AD508;
    return;
L_088AD508:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x088AD514u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD514u) goto L_088AD514;
    return;
L_088AD514:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(644)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(648)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(652)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(656)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(660)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(664)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(668)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(672)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(676)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(680)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(684)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(688)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(692)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(696)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(700)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(704)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AD55C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-1120));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1052), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1056), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1068), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1072), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1076), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1080), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1084), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1088), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1092), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1096), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1100), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1104), hot_regs.g31);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16281u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.g31 = (0x088AD5BCu);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD5BCu) goto L_088AD5BC;
    return;
L_088AD5BC:
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    hot_regs.g31 = (0x088AD5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD5D4u) goto L_088AD5D4;
    return;
L_088AD5D4:
    hot_regs.f13 = ctx.fpr[26] - hot_regs.f20;
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = hot_regs.f20 + hot_regs.f13;
    { const float fs = hot_regs.f22; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    hot_regs.g4 = (ctx.gpr[16] << 4u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (2246u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4848));
    ctx.gpr[20] = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (2233u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-16976));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088AD614u);
    hot_regs.g6 = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD614u) goto L_088AD614;
    return;
L_088AD614:
    hot_regs.g4 = (0u | 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f22 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088AD6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD6C0u) goto L_088AD6C0;
    return;
L_088AD6C0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24804)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24808)));
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088AD6DCu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD6DCu) goto L_088AD6DC;
    return;
L_088AD6DC:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (hot_regs.g2 >> 31u);
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AD700;
      }
      goto L_088AD6F8;
    }
}
L_088AD6F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_088AD700;
      }
      goto L_088AD700;
    }
L_088AD700:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD720;
      }
      goto L_088AD708;
    }
L_088AD708:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_088AD720;
}
L_088AD720:
    hot_regs.g31 = (0x088AD728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD728u) goto L_088AD728;
    return;
L_088AD728:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088AD73Cu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD73Cu) goto L_088AD73C;
    return;
L_088AD73C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AD760;
      }
      goto L_088AD758;
    }
}
L_088AD758:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_088AD760;
      }
      goto L_088AD760;
    }
L_088AD760:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AD780;
      }
      goto L_088AD768;
    }
L_088AD768:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_088AD780;
}
L_088AD780:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24944)));
    hot_regs.g31 = (0x088AD78Cu);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AD78Cu) goto L_088AD78C;
    return;
L_088AD78C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[23] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(576), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(576)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(580), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(580)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(581)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(153), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(582)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(154), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(583)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(155), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(624), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(624)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(628), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(628)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(629)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(630)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(631)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(656), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(656)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(660), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(660)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(661)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(201), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(662)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(202), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(663)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(203), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(688), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(692), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(736), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(736)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(740), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(740)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(741)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(249), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(742)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(250), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(743)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(251), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(784), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(784)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(788), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(788)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(789)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(790)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(274), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(791)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(275), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(792), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(792)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(796), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(796)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(797)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(297), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(798)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(298), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(799)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(299), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(832), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(832)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(836), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(836)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(320), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(837)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(321), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(838)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(839)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g5 = (0u | 8u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x088ADB0Cu);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADB0Cu) goto L_088ADB0C;
    return;
L_088ADB0C:
    hot_regs.g4 = (0u | 3u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088ADB1Cu);
    hot_regs.g6 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADB1Cu) goto L_088ADB1C;
    return;
L_088ADB1C:
    hot_regs.g31 = (0x088ADB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADB24u) goto L_088ADB24;
    return;
L_088ADB24:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24936)));
    hot_regs.g31 = (0x088ADB30u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADB30u) goto L_088ADB30;
    return;
L_088ADB30:
    hot_regs.g4 = (16000u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x088ADB58u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADB58u) goto L_088ADB58;
    return;
L_088ADB58:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(896), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(896)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(900), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(901)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(902)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(346), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(903)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(347), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(944), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(944)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(948), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(948)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(368), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(949)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(369), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(950)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(370), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(951)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(371), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(992), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(992)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(996), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(996)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(997)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(998)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(999)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1040), ctx.gpr[23]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(1040)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1044), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1044)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1045)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(417), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1046)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(418), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1047)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(419), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x088ADD3Cu);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADD3Cu) goto L_088ADD3C;
    return;
L_088ADD3C:
    hot_regs.g4 = (0u | 3u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088ADD4Cu);
    hot_regs.g6 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADD4Cu) goto L_088ADD4C;
    return;
L_088ADD4C:
    hot_regs.g31 = (0x088ADD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADD54u) goto L_088ADD54;
    return;
L_088ADD54:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1052)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1056)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1060)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1064)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1068)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1072)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1076)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1080)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1084)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1088)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1092)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1096)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1100)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1104)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088ADD94:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8436)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088AE8A0;
      }
      goto L_088ADDE4;
    }
}
L_088ADDE4:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x088ADDF0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADDF0u) goto L_088ADDF0;
    return;
L_088ADDF0:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088ADDFCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADDFCu) goto L_088ADDFC;
    return;
L_088ADDFC:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x088ADE08u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADE08u) goto L_088ADE08;
    return;
L_088ADE08:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x088ADE14u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADE14u) goto L_088ADE14;
    return;
L_088ADE14:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x088ADE20u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADE20u) goto L_088ADE20;
    return;
L_088ADE20:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8456), 0u);
    g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8436)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (2233u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AE888;
      }
      goto L_088ADE40;
    }
}
L_088ADE40:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (g4 + static_cast<std::uint32_t>(-17504));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g4);
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17000));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17024));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17128));
    g5 = (2233u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    g5 = (g5 + static_cast<std::uint32_t>(-17192));
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17160));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g5);
    g5 = (2233u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    g5 = (g5 + static_cast<std::uint32_t>(-17224));
    g4 = (2233u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g5);
    g4 = (g4 + static_cast<std::uint32_t>(-17288));
    g5 = (2233u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g4);
    g5 = (g5 + static_cast<std::uint32_t>(-17256));
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17320));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17384));
    g5 = (2233u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g4);
    g5 = (g5 + static_cast<std::uint32_t>(-17352));
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17416));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g4);
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17480));
    g5 = (2233u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g4);
    g5 = (g5 + static_cast<std::uint32_t>(-17448));
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17528));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g4);
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17552));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g4);
    g4 = (16750u << 16u);
    g4 = (g4 | 61167u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g4 = (16948u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    g18 = (2236u << 16u);
    g4 = (17279u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    g18 = (g18 + static_cast<std::uint32_t>(32304));
    g4 = (16752u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g23 = (2238u << 16u);
    g4 = (16880u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    g17 = (2238u << 16u);
    g16 = (2246u << 16u);
    g30 = (2233u << 16u);
    g4 = (16888u << 16u);
    ctx.gpr[19] = (g18 + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g23 = (g23 + static_cast<std::uint32_t>(12016));
    g17 = (g17 + static_cast<std::uint32_t>(-272));
    g16 = (g16 + static_cast<std::uint32_t>(5744));
    g30 = (g30 + static_cast<std::uint32_t>(-17096));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    ctx.gpr[23] = g23;
    ctx.gpr[30] = g30;
    goto L_088ADF68;
}
L_088ADF68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    g4 = (static_cast<std::int32_t>(g4) < 985 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088ADF88;
      }
      goto L_088ADF78;
    }
}
L_088ADF78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    g4 = (static_cast<std::int32_t>(g4) < 473 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088ADF90;
      }
      goto L_088ADF88;
    }
}
L_088ADF88:
    hot_regs.g31 = (0x088ADF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 452u, 0x088AAFB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADF90u) goto L_088ADF90;
    return;
L_088ADF90:
    hot_regs.g31 = (0x088ADF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ADF98u) goto L_088ADF98;
    return;
L_088ADF98:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 255u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    hot_regs.g6 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
    g4 = (hot_regs.g6 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = g4 == 0u;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088AE064;
      }
      goto L_088ADFCC;
    }
}
}
L_088ADFCC:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g6);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-22536)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088ADFE4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g21 = ctx.gpr[21];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[22] = (0u | 255u);
    g21 = (std::bit_cast<std::uint32_t>(f12));
    g21 = (g21 & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (g21 | 0u);
    ctx.gpr[21] = g21;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AE064;
      }
      goto L_088ADFFC;
    }
}
}
L_088ADFFC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g22 = ctx.gpr[22];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[21] = (0u | 255u);
    g22 = (std::bit_cast<std::uint32_t>(f12));
    g22 = (g22 & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (g22 | 0u);
    ctx.gpr[22] = g22;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AE064;
      }
      goto L_088AE014;
    }
}
}
L_088AE014:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g20 = ctx.gpr[20];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[22] = (0u | 255u);
    ctx.gpr[21] = (0u | 128u);
    g20 = (std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    g20 = (g20 & 255u);
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AE064;
      }
      goto L_088AE02C;
    }
}
}
L_088AE02C:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (0u | 255u);
    ctx.gpr[21] = (g20 | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (g20 | 0u);
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_088AE064;
      }
      goto L_088AE03C;
    }
}
L_088AE03C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g20 = ctx.gpr[20];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[22] = (0u | 255u);
    g20 = (std::bit_cast<std::uint32_t>(f12));
    g20 = (g20 & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (g20 | 0u);
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AE064;
      }
      goto L_088AE054;
    }
}
}
L_088AE054:
{
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[22] = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(69)));
    ctx.gpr[21] = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(71)));
      if (branch_taken) {
          goto L_088AE064;
      }
      goto L_088AE064;
    }
}
L_088AE064:
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f22));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = hot_regs.f13 - hot_regs.f22;
        goto L_088AE07C;
    }
    goto L_088AE074;
L_088AE074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 255u);
      if (branch_taken) {
          goto L_088AE0A8;
      }
      goto L_088AE07C;
    }
L_088AE07C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    g4 = (15752u << 16u);
    g4 = (g4 | 34953u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(g4);
    f12 = hot_regs.f15 - f12;
    { const float fs = f12; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g10 = (std::bit_cast<std::uint32_t>(f12));
    g10 = (g10 & 255u);
    hot_regs.g4 = g4;
    ctx.gpr[10] = g10;
    hot_regs.f12 = f12;
    goto L_088AE0A8;
}
}
L_088AE0A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(hot_regs.g7) < 4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (static_cast<std::int32_t>(hot_regs.g7) < 12 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AE0FC;
      }
      goto L_088AE0B4;
    }
}
L_088AE0B4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE0FC;
      }
      goto L_088AE0BC;
    }
L_088AE0BC:
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AE0D4;
      }
      goto L_088AE0CC;
    }
L_088AE0CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 31u);
      if (branch_taken) {
          goto L_088AE0FC;
      }
      goto L_088AE0D4;
    }
L_088AE0D4:
    ctx.set_fpu_condition((hot_regs.f13 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AE0FC;
      }
      goto L_088AE0E4;
    }
L_088AE0E4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g10 = ctx.gpr[10];
    f12 = hot_regs.f13 - hot_regs.f20;
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 + ctx.fpr[24];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g10 = (std::bit_cast<std::uint32_t>(f12));
    g10 = (g10 & 255u);
    ctx.gpr[10] = g10;
    hot_regs.f12 = f12;
    goto L_088AE0FC;
}
}
L_088AE0FC:
    hot_regs.g6 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g6 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE86C;
      }
      goto L_088AE10C;
    }
L_088AE10C:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[12] = (ctx.gpr[22] & 255u);
    ctx.gpr[3] = (ctx.gpr[21] & 255u);
    ctx.gpr[11] = (ctx.gpr[20] & 255u);
    g6 = (g6 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g6);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-22488)));
    jump_target = g1;
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AE134:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g6 = (0u | 0u);
    goto L_088AE140;
L_088AE140:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (hot_regs.g2 + g6);
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[10]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    f13 = f14 + f13;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    { const float fs = f16; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g4 = (g4 + g6);
    f15 = f18 + f15;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    f13 = f13 + f17;
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    { const float fs = f16; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    f12 = ctx.fpr[0] + f12;
    g4 = (g4 + g5);
    { const float fs = f16; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    g4 = (g4 + ctx.gpr[17]);
    f14 = f15 + f19;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    f12 = f12 + f16;
    g7 = (g7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f14));
    g5 = (static_cast<std::int32_t>(g6) < 6 ? 1u : 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = g5 != 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_088AE140;
      }
      goto L_088AE1FC;
    }
}
}
L_088AE1FC:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g9 = (g12 + g12);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8436)));
    g9 = (g9 + ctx.gpr[23]);
    g12 = (g12 + static_cast<std::uint32_t>(12));
    ctx.gpr[3] = (hot_regs.g2 + static_cast<std::uint32_t>(6));
    ctx.gpr[9] = g9;
    ctx.gpr[12] = g12;
    goto L_088AE21C;
}
L_088AE21C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g4 = (aot_mem.aot_load16(g10 + static_cast<std::uint32_t>(0)));
    g11 = (g11 + static_cast<std::uint32_t>(1));
    g4 = (hot_regs.g2 + g4);
    aot_mem.aot_store16(g9 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g10 = (g10 + static_cast<std::uint32_t>(2));
    g4 = (static_cast<std::int32_t>(g11) < 12 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g9 = (g9 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088AE21C;
      }
      goto L_088AE23C;
    }
}
L_088AE23C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AE870;
      }
      goto L_088AE248;
    }
L_088AE248:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[9] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    goto L_088AE258;
}
L_088AE258:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (hot_regs.g2 + g6);
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[10]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    f13 = f14 + f13;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f12; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g4 = (g4 + g6);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    f13 = f13 + f16;
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    f17 = f18 + f17;
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    { const float fs = f14; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    g4 = (g4 << 3u);
    { const float fs = f15; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f12; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    f13 = f13 + f19;
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    f16 = f17 + f16;
    f12 = f18 + f12;
    g5 = (g4 + g4);
    { const float fs = f14; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    g4 = (g4 + g5);
    { const float fs = f15; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f14; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f15;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    f13 = f16 + f2;
    g9 = (g9 + static_cast<std::uint32_t>(4));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    g7 = (g7 + static_cast<std::uint32_t>(4));
    f12 = f12 + f14;
    g5 = (static_cast<std::int32_t>(g6) < 8 ? 1u : 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = g5 != 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_088AE258;
      }
      goto L_088AE340;
    }
}
}
L_088AE340:
{
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[11] = (0u | 0u);
    g10 = (g12 + g12);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8436)));
    g10 = (g10 + ctx.gpr[23]);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    g12 = (g12 + static_cast<std::uint32_t>(36));
    ctx.gpr[3] = (hot_regs.g2 + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = g10;
    ctx.gpr[12] = g12;
    goto L_088AE360;
}
L_088AE360:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g4 = (aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0)));
    g11 = (g11 + static_cast<std::uint32_t>(1));
    g4 = (hot_regs.g2 + g4);
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g10 = (g10 + static_cast<std::uint32_t>(2));
    g4 = (static_cast<std::int32_t>(g11) < 36 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g9 = (g9 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088AE360;
      }
      goto L_088AE380;
    }
}
L_088AE380:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AE870;
      }
      goto L_088AE38C;
    }
L_088AE38C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[9] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    goto L_088AE39C;
}
L_088AE39C:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (hot_regs.g2 + g6);
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[10]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    f13 = f14 + f13;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f12; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g4 = (g4 + g6);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    f13 = f13 + f16;
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    f17 = f18 + f17;
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    { const float fs = f14; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    g4 = (g4 << 3u);
    { const float fs = f15; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f12; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    f13 = f13 + f19;
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    f16 = f17 + f16;
    f12 = f18 + f12;
    g5 = (g4 + g4);
    { const float fs = f14; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    g4 = (g4 + g5);
    { const float fs = f15; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f14; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f15;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    f13 = f16 + f2;
    g9 = (g9 + static_cast<std::uint32_t>(4));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    g7 = (g7 + static_cast<std::uint32_t>(4));
    f12 = f12 + f14;
    g5 = (static_cast<std::int32_t>(g6) < 8 ? 1u : 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = g5 != 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_088AE39C;
      }
      goto L_088AE484;
    }
}
}
L_088AE484:
{
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[11] = (0u | 0u);
    g10 = (g12 + g12);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8436)));
    g10 = (g10 + ctx.gpr[23]);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    g12 = (g12 + static_cast<std::uint32_t>(36));
    ctx.gpr[3] = (hot_regs.g2 + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = g10;
    ctx.gpr[12] = g12;
    goto L_088AE4A4;
}
L_088AE4A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g4 = (aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0)));
    g11 = (g11 + static_cast<std::uint32_t>(1));
    g4 = (hot_regs.g2 + g4);
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g10 = (g10 + static_cast<std::uint32_t>(2));
    g4 = (static_cast<std::int32_t>(g11) < 36 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g9 = (g9 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088AE4A4;
      }
      goto L_088AE4C4;
    }
}
L_088AE4C4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AE870;
      }
      goto L_088AE4D0;
    }
L_088AE4D0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[9] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    goto L_088AE4E0;
}
L_088AE4E0:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (hot_regs.g2 + g6);
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[10]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    f13 = f14 + f13;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f12; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g4 = (g4 + g6);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    f13 = f13 + f16;
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    f17 = f18 + f17;
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    { const float fs = f14; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    g4 = (g4 << 3u);
    { const float fs = f15; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f12; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    f13 = f13 + f19;
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    f16 = f17 + f16;
    f12 = f18 + f12;
    g5 = (g4 + g4);
    { const float fs = f14; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    g4 = (g4 + g5);
    { const float fs = f15; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f14; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f15;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    f13 = f16 + f2;
    g9 = (g9 + static_cast<std::uint32_t>(4));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    g7 = (g7 + static_cast<std::uint32_t>(4));
    f12 = f12 + f14;
    g5 = (static_cast<std::int32_t>(g6) < 8 ? 1u : 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = g5 != 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_088AE4E0;
      }
      goto L_088AE5C8;
    }
}
}
L_088AE5C8:
{
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[11] = (0u | 0u);
    g10 = (g12 + g12);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8436)));
    g10 = (g10 + ctx.gpr[23]);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    g12 = (g12 + static_cast<std::uint32_t>(36));
    ctx.gpr[3] = (hot_regs.g2 + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = g10;
    ctx.gpr[12] = g12;
    goto L_088AE5E8;
}
L_088AE5E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g4 = (aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0)));
    g11 = (g11 + static_cast<std::uint32_t>(1));
    g4 = (hot_regs.g2 + g4);
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g10 = (g10 + static_cast<std::uint32_t>(2));
    g4 = (static_cast<std::int32_t>(g11) < 36 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g9 = (g9 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088AE5E8;
      }
      goto L_088AE608;
    }
}
L_088AE608:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AE870;
      }
      goto L_088AE614;
    }
L_088AE614:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[9] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    goto L_088AE624;
}
L_088AE624:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (hot_regs.g2 + g6);
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[10]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    f13 = f14 + f13;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f12; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g4 = (g4 + g6);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    f13 = f13 + f16;
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    f17 = f18 + f17;
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    { const float fs = f14; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    g4 = (g4 << 3u);
    { const float fs = f15; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f12; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    f13 = f13 + f19;
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    f16 = f17 + f16;
    f12 = f18 + f12;
    g5 = (g4 + g4);
    { const float fs = f14; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    g4 = (g4 + g5);
    { const float fs = f15; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f14; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f15;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    f13 = f16 + f2;
    g9 = (g9 + static_cast<std::uint32_t>(4));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    g7 = (g7 + static_cast<std::uint32_t>(4));
    f12 = f12 + f14;
    g5 = (static_cast<std::int32_t>(g6) < 8 ? 1u : 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = g5 != 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_088AE624;
      }
      goto L_088AE70C;
    }
}
}
L_088AE70C:
{
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[11] = (0u | 0u);
    g10 = (g12 + g12);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8436)));
    g10 = (g10 + ctx.gpr[23]);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    g12 = (g12 + static_cast<std::uint32_t>(36));
    ctx.gpr[3] = (hot_regs.g2 + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = g10;
    ctx.gpr[12] = g12;
    goto L_088AE72C;
}
L_088AE72C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g4 = (aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0)));
    g11 = (g11 + static_cast<std::uint32_t>(1));
    g4 = (hot_regs.g2 + g4);
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g10 = (g10 + static_cast<std::uint32_t>(2));
    g4 = (static_cast<std::int32_t>(g11) < 36 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g9 = (g9 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088AE72C;
      }
      goto L_088AE74C;
    }
}
L_088AE74C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AE870;
      }
      goto L_088AE758;
    }
L_088AE758:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (0u | 0u);
    goto L_088AE764;
L_088AE764:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (hot_regs.g2 + g6);
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[10]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    f13 = f14 + f13;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    { const float fs = f16; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g4 = (g4 + g6);
    f15 = f18 + f15;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    f13 = f13 + f17;
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    { const float fs = f16; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    f12 = ctx.fpr[0] + f12;
    g4 = (g4 + g5);
    { const float fs = f16; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    g4 = (g4 + ctx.gpr[17]);
    f14 = f15 + f19;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    f12 = f12 + f16;
    g7 = (g7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f14));
    g5 = (static_cast<std::int32_t>(g6) < 6 ? 1u : 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = g5 != 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_088AE764;
      }
      goto L_088AE820;
    }
}
}
L_088AE820:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g9 = (g12 + g12);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8436)));
    g9 = (g9 + ctx.gpr[23]);
    g12 = (g12 + static_cast<std::uint32_t>(12));
    ctx.gpr[3] = (hot_regs.g2 + static_cast<std::uint32_t>(6));
    ctx.gpr[9] = g9;
    ctx.gpr[12] = g12;
    goto L_088AE840;
}
L_088AE840:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g4 = (aot_mem.aot_load16(g10 + static_cast<std::uint32_t>(0)));
    g11 = (g11 + static_cast<std::uint32_t>(1));
    g4 = (hot_regs.g2 + g4);
    aot_mem.aot_store16(g9 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g10 = (g10 + static_cast<std::uint32_t>(2));
    g4 = (static_cast<std::int32_t>(g11) < 12 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g9 = (g9 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088AE840;
      }
      goto L_088AE860;
    }
}
L_088AE860:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088AE870;
      }
      goto L_088AE86C;
    }
L_088AE86C:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8436)));
    goto L_088AE870;
L_088AE870:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088ADF68;
      }
      goto L_088AE888;
    }
}
L_088AE888:
    hot_regs.g31 = (0x088AE890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 452u, 0x088AAFB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AE890u) goto L_088AE890;
    return;
L_088AE890:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x088AE89Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AE89Cu) goto L_088AE89C;
    return;
L_088AE89C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8436), 0u);
    goto L_088AE8A0;
L_088AE8A0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AE8E8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8440)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[30] = (0u | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088AEF90;
      }
      goto L_088AE920;
    }
}
L_088AE920:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x088AE92Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AE92Cu) goto L_088AE92C;
    return;
L_088AE92C:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088AE938u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AE938u) goto L_088AE938;
    return;
L_088AE938:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x088AE944u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AE944u) goto L_088AE944;
    return;
L_088AE944:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x088AE950u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AE950u) goto L_088AE950;
    return;
L_088AE950:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8456), 0u);
    g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8440)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (2238u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AEF54;
      }
      goto L_088AE970;
    }
}
L_088AE970:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (2238u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(12016));
    g20 = (g20 + static_cast<std::uint32_t>(-272));
    g16 = (2246u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), g4);
    ctx.gpr[23] = (g20 + static_cast<std::uint32_t>(24));
    ctx.gpr[22] = (g20 + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (g20 + static_cast<std::uint32_t>(72));
    g16 = (g16 + static_cast<std::uint32_t>(8304));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[20] = g20;
    goto L_088AE994;
}
L_088AE994:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    g4 = (static_cast<std::int32_t>(g4) < 961 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AE9B4;
      }
      goto L_088AE9A4;
    }
}
L_088AE9A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    g4 = (static_cast<std::int32_t>(g4) < 449 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AE9BC;
      }
      goto L_088AE9B4;
    }
}
L_088AE9B4:
    hot_regs.g31 = (0x088AE9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 468u, 0x088AB1A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AE9BCu) goto L_088AE9BC;
    return;
L_088AE9BC:
{
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[17] = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(101)));
    hot_regs.g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(102)));
    hot_regs.g6 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(100)));
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    hot_regs.g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(103)));
      if (branch_taken) {
          goto L_088AE9E4;
      }
      goto L_088AE9D4;
    }
}
L_088AE9D4:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) <= 0;
    // nop
      if (branch_taken) {
          goto L_088AEF38;
      }
      goto L_088AE9DC;
    }
L_088AE9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AE9F8;
      }
      goto L_088AE9E4;
    }
L_088AE9E4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(g6) < 3 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AEC9C;
      }
      goto L_088AE9F0;
    }
}
L_088AE9F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AEF38;
      }
      goto L_088AE9F8;
    }
L_088AE9F8:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5016)));
    ctx.gpr[19] = (ctx.gpr[17] & 255u);
    ctx.gpr[18] = (hot_regs.g4 & 255u);
    { const bool branch_taken = ctx.gpr[30] == hot_regs.g6;
    ctx.gpr[17] = (hot_regs.g5 & 255u);
      if (branch_taken) {
          goto L_088AEA28;
      }
      goto L_088AEA0C;
    }
L_088AEA0C:
    hot_regs.g31 = (0x088AEA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 468u, 0x088AB1A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AEA14u) goto L_088AEA14;
    return;
L_088AEA14:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5016)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x088AEA24u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AEA24u) goto L_088AEA24;
    return;
L_088AEA24:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5016)));
    goto L_088AEA28;
L_088AEA28:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (0u | 255u);
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g20);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g19));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g17));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + g20);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(64)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g20);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(68)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g20);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g23);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g19));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g17));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + g23);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g23);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g23);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g22);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g19));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g17));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    g4 = (g4 + g22);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g22);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(84)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g22);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g21);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g19));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g17));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    g4 = (g4 + g21);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(88)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g21);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(92)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g21);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8452)));
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g7 = (g5 + g5);
    g6 = (g7 + g6);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g7 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g7));
    g8 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g7));
    g7 = (g4 + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g7));
    g5 = (g5 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8452), g5);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8456), g4);
    { const bool branch_taken = 0u == 0u;
    g17 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8440)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088AEF3C;
      }
      goto L_088AEC9C;
    }
}
}
L_088AEC9C:
    ctx.gpr[19] = (ctx.gpr[17] & 255u);
    ctx.gpr[18] = (hot_regs.g4 & 255u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[17] = (hot_regs.g5 & 255u);
      if (branch_taken) {
          goto L_088AECC4;
      }
      goto L_088AECAC;
    }
L_088AECAC:
    hot_regs.g31 = (0x088AECB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 468u, 0x088AB1A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AECB4u) goto L_088AECB4;
    return;
L_088AECB4:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x088AECC0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AECC0u) goto L_088AECC0;
    return;
L_088AECC0:
    ctx.gpr[30] = (0u | 0u);
    goto L_088AECC4;
L_088AECC4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (0u | 255u);
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g20);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g19));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g17));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + g20);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(64)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g20);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(68)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g20);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g23);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g19));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g17));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + g23);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g23);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g23);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g22);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g19));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g17));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    g4 = (g4 + g22);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g22);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(84)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g22);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + g21);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g19));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g17));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    g4 = (g4 + g21);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(88)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g21);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(92)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g21);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8452)));
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g7 = (g5 + g5);
    g6 = (g7 + g6);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g7 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g7));
    g8 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g7));
    g7 = (g4 + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g7));
    g5 = (g5 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8452), g5);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8456), g4);
    { const bool branch_taken = 0u == 0u;
    g17 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8440)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088AEF3C;
      }
      goto L_088AEF38;
    }
}
}
L_088AEF38:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8440)));
    goto L_088AEF3C;
L_088AEF3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AE994;
      }
      goto L_088AEF54;
    }
}
L_088AEF54:
    hot_regs.g31 = (0x088AEF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 468u, 0x088AB1A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AEF5Cu) goto L_088AEF5C;
    return;
L_088AEF5C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8440), 0u);
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x088AEF6Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AEF6Cu) goto L_088AEF6C;
    return;
L_088AEF6C:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088AEF78u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AEF78u) goto L_088AEF78;
    return;
L_088AEF78:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x088AEF84u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AEF84u) goto L_088AEF84;
    return;
L_088AEF84:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x088AEF90u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AEF90u) goto L_088AEF90;
    return;
L_088AEF90:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AEFC0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-816));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(776), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(780), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(784), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(788), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(792), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(796), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(800), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(804), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(808), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(812), hot_regs.g31);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[22] = (hot_regs.g6 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[21] = (hot_regs.g5 & 65535u);
    hot_regs.g4 = (hot_regs.g7 & 255u);
    hot_regs.g5 = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(741), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[30] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(740), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (ctx.gpr[10] & 255u);
    ctx.gpr[20] = (ctx.gpr[11] & 65535u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(742), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(816)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(746), static_cast<std::uint16_t>(ctx.gpr[20]));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    ctx.gpr[23] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(824)));
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(828)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(820)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(736), hot_regs.g4);
    hot_regs.g31 = (0x088AF06Cu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 48u, 0x08960450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AF06Cu) goto L_088AF06C;
    return;
L_088AF06C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (0u | 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f12 = f12 - hot_regs.f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f30 = f12 + f14;
    f30 = std::sqrt(f30);
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(744), static_cast<std::uint16_t>(ctx.gpr[20]));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_088AF0E8;
      }
      goto L_088AF0B4;
    }
}
}
L_088AF0B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[21] == g4;
    g4 = (0u | 6u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AF0E8;
      }
      goto L_088AF0C0;
    }
}
L_088AF0C0:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    hot_regs.g4 = (0u | 3u);
      if (branch_taken) {
          goto L_088AF0E8;
      }
      goto L_088AF0C8;
    }
L_088AF0C8:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    hot_regs.g4 = (0u | 7u);
      if (branch_taken) {
          goto L_088AF0E8;
      }
      goto L_088AF0D0;
    }
L_088AF0D0:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    hot_regs.g4 = (0u | 8u);
      if (branch_taken) {
          goto L_088AF0E8;
      }
      goto L_088AF0D8;
    }
L_088AF0D8:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088AF0E8;
      }
      goto L_088AF0E0;
    }
L_088AF0E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 18u, 0x088B019Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088AF0E8;
    }
L_088AF0E8:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (2246u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(740)));
    g6 = (g6 + static_cast<std::uint32_t>(11888));
    ctx.gpr[10] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(741)));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (g6 | 0u);
    ctx.gpr[11] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(742)));
    hot_regs.g6 = g6;
    goto L_088AF104;
}
L_088AF104:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(130))))));
    g7 = (g7 & 1u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088AF128;
      }
      goto L_088AF114;
    }
}
L_088AF114:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088AF128;
      }
      goto L_088AF120;
    }
L_088AF120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_088AF138;
      }
      goto L_088AF128;
    }
L_088AF128:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 32 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AF104;
      }
      goto L_088AF138;
    }
}
L_088AF138:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF170;
      }
      goto L_088AF140;
    }
L_088AF140:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g7 = (0u | 257u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    goto L_088AF14C;
L_088AF14C:
    ctx.gpr[8] = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[8] != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_088AF160;
      }
      goto L_088AF158;
    }
L_088AF158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_088AF170;
      }
      goto L_088AF160;
    }
L_088AF160:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(g4) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AF14C;
      }
      goto L_088AF170;
    }
}
L_088AF170:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    hot_regs.g4 = (0u | 2u);
      if (branch_taken) {
          goto L_088AF22C;
      }
      goto L_088AF178;
    }
L_088AF178:
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    ctx.gpr[8] = (0u | 8u);
      if (branch_taken) {
          goto L_088AF19C;
      }
      goto L_088AF184;
    }
L_088AF184:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088AF19C;
      }
      goto L_088AF18C;
    }
L_088AF18C:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AF19C;
      }
      goto L_088AF194;
    }
L_088AF194:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088AF22C;
      }
      goto L_088AF19C;
    }
L_088AF19C:
    hot_regs.g7 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (0u | 0u);
    goto L_088AF1A4;
L_088AF1A4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[30] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AF20C;
      }
      goto L_088AF1B8;
    }
L_088AF1B8:
    hot_regs.g2 = (aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AF1E8;
      }
      goto L_088AF1C4;
    }
L_088AF1C4:
    hot_regs.g2 = (aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088AF1E8;
      }
      goto L_088AF1D0;
    }
L_088AF1D0:
    hot_regs.g2 = (aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088AF1E8;
      }
      goto L_088AF1DC;
    }
L_088AF1DC:
    hot_regs.g2 = (aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088AF20C;
      }
      goto L_088AF1E8;
    }
L_088AF1E8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF208;
      }
      goto L_088AF1F0;
    }
L_088AF1F0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(116)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AF20C;
      }
      goto L_088AF208;
    }
L_088AF208:
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    goto L_088AF20C;
L_088AF20C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g2 = (static_cast<std::int32_t>(g6) < 32 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(144));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AF1A4;
      }
      goto L_088AF21C;
    }
}
L_088AF21C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF22C;
      }
      goto L_088AF224;
    }
L_088AF224:
    hot_regs.g4 = (0u | 257u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_088AF22C;
L_088AF22C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 17u, 0x088B0198u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088AF234;
    }
L_088AF234:
{
    float f28 = ctx.fpr[28];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(126)));
    g4 = (g5 - g4);
    g5 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    g5 = (ctx.gpr[17] & 1u);
    f28 = std::bit_cast<float>(g4);
    g5 = (g5 << 2u);
    f28 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f28)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(748), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.fpr[28] = f28;
      if (branch_taken) {
          goto L_088AF270;
      }
      goto L_088AF264;
    }
}
}
L_088AF264:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[28] = ctx.fpr[28] + hot_regs.f12;
    goto L_088AF270;
L_088AF270:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = ctx.fpr[28]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (aot_mem.aot_load16(g19 + static_cast<std::uint32_t>(126)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f12 = f12 / f13;
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[28] = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = g4 != ctx.gpr[16];
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088AFB88;
      }
      goto L_088AF2BC;
    }
}
}
L_088AF2BC:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088AFB88;
      }
      goto L_088AF2C8;
    }
L_088AF2C8:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    hot_regs.g4 = (0u | 7u);
      if (branch_taken) {
          goto L_088AF2E4;
      }
      goto L_088AF2D0;
    }
L_088AF2D0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[21] == g5;
    g5 = (0u | 3u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088AF2E4;
      }
      goto L_088AF2DC;
    }
}
L_088AF2DC:
    { const bool branch_taken = ctx.gpr[21] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AF35C;
      }
      goto L_088AF2E4;
    }
L_088AF2E4:
{
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[10]));
    hot_regs.g5 = (16840u << 16u);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[9]));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((ctx.fpr[30] < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_088AF354;
      }
      goto L_088AF304;
    }
}
L_088AF304:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16025u << 16u);
    g5 = (g5 | 39322u);
    f12 = std::bit_cast<float>(g5);
    g5 = (16544u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((ctx.fpr[30] <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AF348;
      }
      goto L_088AF328;
    }
}
}
L_088AF328:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = f13 - ctx.fpr[30];
    hot_regs.g5 = (16800u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / hot_regs.f14;
    f12 = hot_regs.f20 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088AF408;
      }
      goto L_088AF348;
    }
}
L_088AF348:
{
    float f12 = hot_regs.f12;
    f12 = hot_regs.f20 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AF408;
      }
      goto L_088AF354;
    }
}
L_088AF354:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_088AF408;
      }
      goto L_088AF35C;
    }
L_088AF35C:
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = ctx.gpr[21] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AF408;
      }
      goto L_088AF368;
    }
L_088AF368:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g5 = (16704u << 16u);
    f14 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[10]));
    f14 = hot_regs.f20 + f14;
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_fpu_condition((ctx.fpr[30] < f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[30]));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088AF404;
      }
      goto L_088AF38C;
    }
}
}
L_088AF38C:
{
    float f12 = hot_regs.f12;
    hot_regs.g5 = (16256u << 16u);
    f12 = std::bit_cast<float>(ctx.gpr[11]);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f15 = hot_regs.f20 + hot_regs.f13;
    ctx.set_fpu_condition((ctx.fpr[30] <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AF3E4;
      }
      goto L_088AF3AC;
    }
}
L_088AF3AC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    f14 = f14 - ctx.fpr[30];
    g5 = (16179u << 16u);
    g5 = (g5 | 13107u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    g5 = (16688u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g5);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = f14 / ctx.fpr[16];
    f13 = f13 - f14;
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088AF408;
      }
      goto L_088AF3E4;
    }
}
}
L_088AF3E4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16025u << 16u);
    g5 = (g5 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AF408;
      }
      goto L_088AF404;
    }
}
}
L_088AF404:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[11]));
    goto L_088AF408;
L_088AF408:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    ctx.gpr[30] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(736)));
      if (branch_taken) {
          goto L_088AF430;
      }
      goto L_088AF410;
    }
L_088AF410:
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AF430;
      }
      goto L_088AF41C;
    }
L_088AF41C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    { const float fs = hot_regs.f22; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_088AF430;
}
L_088AF430:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AF448;
      }
      goto L_088AF440;
    }
L_088AF440:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_088AF450;
      }
      goto L_088AF448;
    }
L_088AF448:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088AF450;
L_088AF450:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    hot_regs.g5 = (0u | 3u);
      if (branch_taken) {
          goto L_088AF460;
      }
      goto L_088AF458;
    }
L_088AF458:
    { const bool branch_taken = ctx.gpr[21] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AF484;
      }
      goto L_088AF460;
    }
L_088AF460:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (16000u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f14 + f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AF53C;
      }
      goto L_088AF484;
    }
}
L_088AF484:
    { const bool branch_taken = ctx.gpr[21] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088AF4D4;
      }
      goto L_088AF48C;
    }
L_088AF48C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g22 = ctx.gpr[22];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(0)));
    g4 = (16153u << 16u);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(104)));
    g4 = (g4 | 39322u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.g5 = (16179u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(8)));
    g4 = (hot_regs.g5 | 13107u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f15;
    { const float fs = f13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088AF53C;
      }
      goto L_088AF4D4;
    }
}
}
L_088AF4D4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AF53C;
      }
      goto L_088AF4DC;
    }
L_088AF4DC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.gpr[11]);
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AF518;
      }
      goto L_088AF4F0;
    }
}
L_088AF4F0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16179u << 16u);
    g4 = (g4 | 13107u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088AF53C;
      }
      goto L_088AF518;
    }
}
}
L_088AF518:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16076u << 16u);
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_088AF53C;
}
}
L_088AF53C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(128))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF5A8;
      }
      goto L_088AF548;
    }
L_088AF548:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(128))))));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (17204u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f15;
    hot_regs.g31 = (0x088AF590u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AF590u) goto L_088AF590;
    return;
L_088AF590:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088AF5A8;
}
}
L_088AF5A8:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088AF760;
      }
      goto L_088AF5B0;
    }
L_088AF5B0:
    if (ctx.gpr[30] == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_088AF74C;
    }
    goto L_088AF5B8;
L_088AF5B8:
    hot_regs.g4 = (48818u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 47299u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x088AF5CCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AF5CCu) goto L_088AF5CC;
    return;
L_088AF5CC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (14545u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 46871u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AF62C;
      }
      goto L_088AF628;
    }
L_088AF628:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088AF62C;
L_088AF62C:
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g4);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088AF718u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AF718u) goto L_088AF718;
    return;
L_088AF718:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088AF724u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AF724u) goto L_088AF724;
    return;
L_088AF724:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AF748;
      }
      goto L_088AF734;
    }
}
L_088AF734:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF748;
      }
      goto L_088AF740;
    }
L_088AF740:
    hot_regs.g31 = (0x088AF748u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AF748u) goto L_088AF748;
    return;
L_088AF748:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_088AF74C;
L_088AF74C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088AF760;
}
}
L_088AF760:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    hot_regs.g4 = (0u | 2u);
      if (branch_taken) {
          goto L_088AF780;
      }
      goto L_088AF768;
    }
L_088AF768:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    hot_regs.g4 = (0u | 3u);
      if (branch_taken) {
          goto L_088AF780;
      }
      goto L_088AF770;
    }
L_088AF770:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    hot_regs.g4 = (0u | 8u);
      if (branch_taken) {
          goto L_088AF780;
      }
      goto L_088AF778;
    }
L_088AF778:
    { const bool branch_taken = ctx.gpr[21] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088AFA88;
      }
      goto L_088AF780;
    }
L_088AF780:
    if (ctx.gpr[30] == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_088AFA74;
    }
    goto L_088AF788;
L_088AF788:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (16256u << 16u);
    ctx.gpr[16] = (0u | 8u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(176));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(192));
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_088AF7B4;
      }
      goto L_088AF7A8;
    }
}
L_088AF7A8:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[21] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088AF7D0;
      }
      goto L_088AF7B4;
    }
L_088AF7B4:
    hot_regs.g5 = (48818u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 47299u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088AF7C8u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AF7C8u) goto L_088AF7C8;
    return;
L_088AF7C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF7DC;
      }
      goto L_088AF7D0;
    }
L_088AF7D0:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088AF7DCu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AF7DCu) goto L_088AF7DC;
    return;
L_088AF7DC:
{
    float f26 = ctx.fpr[26];
{
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f26));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[16];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_088AF8FC;
      }
      goto L_088AF7F0;
    }
}
}
L_088AF7F0:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088AF844u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AF844u) goto L_088AF844;
    return;
L_088AF844:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF86C;
      }
      goto L_088AF84C;
    }
L_088AF84C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AF884;
      }
      goto L_088AF86C;
    }
}
L_088AF86C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088AF884;
}
L_088AF884:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_088AF9BC;
      }
      goto L_088AF8FC;
    }
L_088AF8FC:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (14545u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 46871u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AF94C;
      }
      goto L_088AF948;
    }
L_088AF948:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_088AF94C;
L_088AF94C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(hot_regs.f22));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088AF990u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 308u, 0x088AA3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AF990u) goto L_088AF990;
    return;
L_088AF990:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    goto L_088AF9BC;
L_088AF9BC:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), 0u);
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088AFA40u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFA40u) goto L_088AFA40;
    return;
L_088AFA40:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088AFA4Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFA4Cu) goto L_088AFA4C;
    return;
L_088AFA4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AFA70;
      }
      goto L_088AFA5C;
    }
}
L_088AFA5C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AFA70;
      }
      goto L_088AFA68;
    }
L_088AFA68:
    hot_regs.g31 = (0x088AFA70u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFA70u) goto L_088AFA70;
    return;
L_088AFA70:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_088AFA74;
L_088AFA74:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088AFA88;
}
}
L_088AFA88:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AFAA8;
      }
      goto L_088AFA90;
    }
L_088AFA90:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g22 = ctx.gpr[22];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088AFAA8;
}
}
L_088AFAA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(130))))));
    g4 = (g4 & 2u);
    if (g4 == 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(130))))));
    hot_regs.g4 = g4;
        goto L_088AFB64;
    }
    goto L_088AFAB8;
}
L_088AFAB8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    f12 = f12 - f13;
    f14 = f14 - hot_regs.f15;
    g4 = (17948u << 16u);
    g4 = (g4 | 16384u);
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = std::bit_cast<float>(g4);
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 < f13));
    // nop
    if (!ctx.fpu_condition()) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(130))))));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_088AFB64;
    }
    goto L_088AFAF8;
}
}
L_088AFAF8:
    hot_regs.g31 = (0x088AFB00u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 321u, 0x08809958u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFB00u) goto L_088AFB00;
    return;
L_088AFB00:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(130))))));
        goto L_088AFB64;
    }
    goto L_088AFB08;
L_088AFB08:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x088AFB28u);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFB28u) goto L_088AFB28;
    return;
L_088AFB28:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(ctx.fpr[26])) && f12 == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (15692u << 16u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AFB50;
      }
      goto L_088AFB3C;
    }
}
L_088AFB3C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f20; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_088AFB50;
}
}
L_088AFB50:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(130))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(130))))));
    hot_regs.g4 = g4;
    goto L_088AFB64;
}
L_088AFB64:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-5));
    hot_regs.g4 = (hot_regs.g4 | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(130))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(748)));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 17u, 0x088B0198u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088AFB88;
    }
L_088AFB88:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (0u | 6u);
    ctx.gpr[23] = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (0u | 4u);
      if (branch_taken) {
          goto L_088AFBA4;
      }
      goto L_088AFB9C;
    }
L_088AFB9C:
    hot_regs.g31 = (0x088AFBA4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 491u, 0x088AB3B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFBA4u) goto L_088AFBA4;
    return;
L_088AFBA4:
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(741)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(740)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(742)));
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(744))))));
    ctx.gpr[11] = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(746)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x088AFBD8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 475u, 0x088AB20Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFBD8u) goto L_088AFBD8;
    return;
L_088AFBD8:
    if (ctx.gpr[21] == ctx.gpr[20]) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
        goto L_088AFBF4;
    }
    goto L_088AFBE0;
L_088AFBE0:
    if (ctx.gpr[21] == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
        goto L_088AFBF4;
    }
    goto L_088AFBE8;
L_088AFBE8:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088AFCA8;
      }
      goto L_088AFBF0;
    }
L_088AFBF0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    goto L_088AFBF4;
L_088AFBF4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    f12 = f12 - f13;
    f14 = f14 - hot_regs.f15;
    g4 = (17948u << 16u);
    g4 = (g4 | 16384u);
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = std::bit_cast<float>(g4);
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088AFC9C;
      }
      goto L_088AFC30;
    }
}
}
L_088AFC30:
    hot_regs.g31 = (0x088AFC38u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 321u, 0x08809958u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFC38u) goto L_088AFC38;
    return;
L_088AFC38:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AFC9C;
      }
      goto L_088AFC40;
    }
L_088AFC40:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x088AFC60u);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFC60u) goto L_088AFC60;
    return;
L_088AFC60:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(ctx.fpr[26])) && f12 == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (15692u << 16u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AFC88;
      }
      goto L_088AFC74;
    }
}
L_088AFC74:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f20; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_088AFC88;
}
}
L_088AFC88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(130))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AFCA8;
      }
      goto L_088AFC9C;
    }
}
L_088AFC9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(130))))));
    g4 = (g4 | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_088AFCA8;
}
L_088AFCA8:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AFCC0;
      }
      goto L_088AFCB8;
    }
L_088AFCB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_088AFCC8;
      }
      goto L_088AFCC0;
    }
L_088AFCC0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088AFCC8;
L_088AFCC8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x088AFCDCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFCDCu) goto L_088AFCDC;
    return;
L_088AFCDC:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088AFD10;
      }
      goto L_088AFCE4;
    }
L_088AFCE4:
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x088AFCF8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 924u, 0x0885FB5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFCF8u) goto L_088AFCF8;
    return;
L_088AFCF8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g22 = ctx.gpr[22];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088AFD10;
}
}
L_088AFD10:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    hot_regs.g4 = (0u | 2u);
      if (branch_taken) {
          goto L_088AFD30;
      }
      goto L_088AFD18;
    }
L_088AFD18:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    hot_regs.g4 = (0u | 3u);
      if (branch_taken) {
          goto L_088AFD30;
      }
      goto L_088AFD20;
    }
L_088AFD20:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088AFD30;
      }
      goto L_088AFD28;
    }
L_088AFD28:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 9u, 0x088B00C8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088AFD30;
    }
L_088AFD30:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088AFDC4;
      }
      goto L_088AFD38;
    }
L_088AFD38:
    hot_regs.g4 = (16840u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((ctx.fpr[30] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AFDA0;
      }
      goto L_088AFD50;
    }
L_088AFD50:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16025u << 16u);
    g4 = (g4 | 39322u);
    f13 = std::bit_cast<float>(g4);
    g4 = (16544u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((ctx.fpr[30] <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = hot_regs.f20; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088AFD94;
      }
      goto L_088AFD74;
    }
}
}
L_088AFD74:
{
    float f12 = hot_regs.f12;
    f12 = f12 - ctx.fpr[30];
    hot_regs.g4 = (16800u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / hot_regs.f14;
    f12 = hot_regs.f20 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AFDA4;
      }
      goto L_088AFD94;
    }
}
L_088AFD94:
    hot_regs.f12 = hot_regs.f20 - hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088AFDA4;
      }
      goto L_088AFDA0;
    }
L_088AFDA0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_088AFDA4;
L_088AFDA4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (16000u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f14 + f12;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088AFDC4;
}
L_088AFDC4:
    ctx.gpr[30] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(736)));
    if (ctx.gpr[30] == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 7u, 0x088B0098u>(ctx, &aot_mem, &hot_regs); return;
    }
    goto L_088AFDD0;
L_088AFDD0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (16256u << 16u);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(368));
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(384));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[23];
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(400));
      if (branch_taken) {
          goto L_088AFE0C;
      }
      goto L_088AFDE8;
    }
}
L_088AFDE8:
    hot_regs.g4 = (48818u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 47299u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x088AFDFCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFDFCu) goto L_088AFDFC;
    return;
L_088AFDFC:
{
    float f26 = ctx.fpr[26];
{
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_088AFE0C;
}
}
L_088AFE0C:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088AFF20;
      }
      goto L_088AFE14;
    }
L_088AFE14:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088AFE68u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AFE68u) goto L_088AFE68;
    return;
L_088AFE68:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AFE90;
      }
      goto L_088AFE70;
    }
L_088AFE70:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AFEA8;
      }
      goto L_088AFE90;
    }
}
L_088AFE90:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(528));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088AFEA8;
}
L_088AFEA8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(488)));
      if (branch_taken) {
          goto L_088AFFE0;
      }
      goto L_088AFF20;
    }
L_088AFF20:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(544));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (14545u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 46871u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AFF70;
      }
      goto L_088AFF6C;
    }
L_088AFF6C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_088AFF70;
L_088AFF70:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(488)));
    goto L_088AFFE0;
L_088AFFE0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(480), 0u);
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(488), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(400)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(408)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    ctx.pc = 0x088B0000u; return;}
}

}

void recomp_unit_0042(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0042_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_42(Runtime &runtime) {
    runtime.register_generated_unit(42u, 0x088AC000u, 16384u, &recomp_unit_0042, &recomp_unit_0042_entry);
    runtime.register_function(0x088AC000u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC04Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC054u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC060u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC074u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC07Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC08Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC094u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC098u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC0E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC1F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC208u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC210u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC214u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC234u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC240u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC250u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC25Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC264u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC344u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC35Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC388u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC3CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC420u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC434u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC45Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC47Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC4C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC518u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC520u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC560u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC568u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC570u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC5F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC608u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC614u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC628u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC630u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC64Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC658u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC660u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC670u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC684u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6F4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC6FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC710u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC718u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC72Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC750u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC780u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7ECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC7FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC808u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC81Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC828u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC844u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC850u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC860u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC868u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC874u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC888u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC894u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC8F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC904u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC90Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AC958u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACA94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACAD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACADCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACB9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBD4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBECu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACBF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACC20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACCFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACD54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACE8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACEF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACF8Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ACFE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD008u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD240u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD248u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD258u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD260u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD264u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD3DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD4FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD508u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD514u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD55Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD5D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD614u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD6F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD700u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD708u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD720u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD728u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD73Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD758u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD760u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD768u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD780u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AD78Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB1Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADB58u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADD94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADDFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADE40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADF98u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFCCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088ADFFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE014u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE02Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE03Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE054u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE064u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE074u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE07Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE0FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE10Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE134u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE140u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE1FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE21Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE23Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE248u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE258u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE340u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE360u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE380u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE38Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE39Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE484u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE4E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE5E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE608u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE614u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE624u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE70Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE72Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE74Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE758u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE764u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE820u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE840u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE860u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE86Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE870u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE888u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE890u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE89Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8A0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE8E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE920u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE92Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE938u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE944u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE950u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE970u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE994u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AE9F8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA24u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEA28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEC9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECB4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AECC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF54u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF78u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF84u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEF90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AEFC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF06Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0C0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0D8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0E0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF0E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF104u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF114u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF120u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF128u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF138u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF140u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF14Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF158u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF160u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF170u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF178u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF184u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF18Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF194u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF19Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1A4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1C4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1E8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF1F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF208u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF20Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF21Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF224u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF22Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF234u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF264u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF270u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF2E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF304u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF328u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF348u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF354u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF35Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF368u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF38Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3ACu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF3E4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF404u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF408u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF410u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF41Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF430u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF440u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF448u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF450u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF458u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF460u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF484u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF48Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4D4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF4F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF518u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF53Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF548u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF590u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF5A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF5B0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF5B8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF5CCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF628u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF62Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF718u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF724u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF734u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF740u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF748u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF74Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF760u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF768u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF770u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF778u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF780u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF788u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7A8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7B4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7C8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7D0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7DCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF7F0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF844u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF84Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF86Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF884u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF8FCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF948u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF94Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF990u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AF9BCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA4Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA5Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFA90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFAA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFAB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFAF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB00u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB08u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB3Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB64u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFB9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFBA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFBD8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFBE0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFBE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFBF0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFBF4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC40u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC60u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC88u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFC9Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFCA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFCB8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFCC0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFCC8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFCDCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFCE4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFCF8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD10u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD18u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD28u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD30u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD38u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD50u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD74u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFD94u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDA0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDA4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDC4u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDD0u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDE8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFDFCu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE0Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE14u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE68u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFE90u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFEA8u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF20u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF6Cu, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFF70u, &recomp_unit_0042, "recomp_unit_0042");
    runtime.register_function(0x088AFFE0u, &recomp_unit_0042, "recomp_unit_0042");
}
} // namespace psprecomp
