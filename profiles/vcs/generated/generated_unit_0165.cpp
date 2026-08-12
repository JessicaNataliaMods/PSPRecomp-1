#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0165[4061] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 7, 0, 8, 9, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98,
    0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161,
    0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0,
    171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0,
    0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224,
    0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 232, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 262, 0,
    0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0,
    0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0,
    0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 305, 306, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0,
    0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 324, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 328, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 333, 0, 334, 335,
    0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 359, 0,
    0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0,
    0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 377, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 383,
    0, 384, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 0, 391, 0,
    0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0,
    0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 418, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444,
    0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450,
    0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0,
    0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 475, 476, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 479, 0, 480, 481, 0, 0, 0, 0, 0, 0, 0, 482,
    0, 483, 0, 484, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0,
    0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 503, 0, 504,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508,
};
void recomp_unit_0165_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A98004u;
        entry_id = (entry_delta < 16244u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0165[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A98004;
    case 2u: goto L_08A98018;
    case 3u: goto L_08A98020;
    case 4u: goto L_08A9803C;
    case 5u: goto L_08A98050;
    case 6u: goto L_08A98058;
    case 7u: goto L_08A9805C;
    case 8u: goto L_08A98064;
    case 9u: goto L_08A98068;
    case 10u: goto L_08A98070;
    case 11u: goto L_08A98090;
    case 12u: goto L_08A980A4;
    case 13u: goto L_08A980AC;
    case 14u: goto L_08A980B4;
    case 15u: goto L_08A980B8;
    case 16u: goto L_08A980C0;
    case 17u: goto L_08A9812C;
    case 18u: goto L_08A98144;
    case 19u: goto L_08A98178;
    case 20u: goto L_08A98190;
    case 21u: goto L_08A9819C;
    case 22u: goto L_08A981A8;
    case 23u: goto L_08A981B0;
    case 24u: goto L_08A981B8;
    case 25u: goto L_08A981C4;
    case 26u: goto L_08A981CC;
    case 27u: goto L_08A981D4;
    case 28u: goto L_08A981E0;
    case 29u: goto L_08A981E8;
    case 30u: goto L_08A981F0;
    case 31u: goto L_08A9820C;
    case 32u: goto L_08A98280;
    case 33u: goto L_08A98288;
    case 34u: goto L_08A98300;
    case 35u: goto L_08A98334;
    case 36u: goto L_08A98380;
    case 37u: goto L_08A98388;
    case 38u: goto L_08A9839C;
    case 39u: goto L_08A983A4;
    case 40u: goto L_08A983C0;
    case 41u: goto L_08A983D0;
    case 42u: goto L_08A983F0;
    case 43u: goto L_08A98404;
    case 44u: goto L_08A9840C;
    case 45u: goto L_08A9841C;
    case 46u: goto L_08A98430;
    case 47u: goto L_08A9843C;
    case 48u: goto L_08A98450;
    case 49u: goto L_08A98460;
    case 50u: goto L_08A984D0;
    case 51u: goto L_08A984DC;
    case 52u: goto L_08A984F0;
    case 53u: goto L_08A98510;
    case 54u: goto L_08A9851C;
    case 55u: goto L_08A98530;
    case 56u: goto L_08A98550;
    case 57u: goto L_08A9855C;
    case 58u: goto L_08A9856C;
    case 59u: goto L_08A9858C;
    case 60u: goto L_08A98598;
    case 61u: goto L_08A985AC;
    case 62u: goto L_08A985BC;
    case 63u: goto L_08A985C4;
    case 64u: goto L_08A985CC;
    case 65u: goto L_08A985D4;
    case 66u: goto L_08A985DC;
    case 67u: goto L_08A985F0;
    case 68u: goto L_08A98604;
    case 69u: goto L_08A98618;
    case 70u: goto L_08A9862C;
    case 71u: goto L_08A9865C;
    case 72u: goto L_08A9868C;
    case 73u: goto L_08A986C0;
    case 74u: goto L_08A986C8;
    case 75u: goto L_08A986F8;
    case 76u: goto L_08A9872C;
    case 77u: goto L_08A9873C;
    case 78u: goto L_08A98750;
    case 79u: goto L_08A9879C;
    case 80u: goto L_08A987A4;
    case 81u: goto L_08A987B8;
    case 82u: goto L_08A987BC;
    case 83u: goto L_08A987D8;
    case 84u: goto L_08A987E0;
    case 85u: goto L_08A9882C;
    case 86u: goto L_08A98914;
    case 87u: goto L_08A98920;
    case 88u: goto L_08A98934;
    case 89u: goto L_08A98954;
    case 90u: goto L_08A98960;
    case 91u: goto L_08A98974;
    case 92u: goto L_08A98994;
    case 93u: goto L_08A989A0;
    case 94u: goto L_08A989B0;
    case 95u: goto L_08A989D0;
    case 96u: goto L_08A989DC;
    case 97u: goto L_08A989EC;
    case 98u: goto L_08A98A00;
    case 99u: goto L_08A98A10;
    case 100u: goto L_08A98A18;
    case 101u: goto L_08A98A20;
    case 102u: goto L_08A98A28;
    case 103u: goto L_08A98A38;
    case 104u: goto L_08A98A44;
    case 105u: goto L_08A98A54;
    case 106u: goto L_08A98A60;
    case 107u: goto L_08A98AA0;
    case 108u: goto L_08A98AD4;
    case 109u: goto L_08A98AE8;
    case 110u: goto L_08A98AF8;
    case 111u: goto L_08A98B00;
    case 112u: goto L_08A98B40;
    case 113u: goto L_08A98C90;
    case 114u: goto L_08A98CA8;
    case 115u: goto L_08A98CBC;
    case 116u: goto L_08A98CD8;
    case 117u: goto L_08A98CF0;
    case 118u: goto L_08A98D00;
    case 119u: goto L_08A98D18;
    case 120u: goto L_08A98D30;
    case 121u: goto L_08A98D40;
    case 122u: goto L_08A98D58;
    case 123u: goto L_08A98D74;
    case 124u: goto L_08A98D84;
    case 125u: goto L_08A98D90;
    case 126u: goto L_08A98DAC;
    case 127u: goto L_08A98DE0;
    case 128u: goto L_08A98E2C;
    case 129u: goto L_08A98E40;
    case 130u: goto L_08A98E54;
    case 131u: goto L_08A98E68;
    case 132u: goto L_08A98E80;
    case 133u: goto L_08A98E8C;
    case 134u: goto L_08A98EB8;
    case 135u: goto L_08A98F44;
    case 136u: goto L_08A98F4C;
    case 137u: goto L_08A98F64;
    case 138u: goto L_08A98F78;
    case 139u: goto L_08A98F8C;
    case 140u: goto L_08A98FA0;
    case 141u: goto L_08A98FB4;
    case 142u: goto L_08A98FC8;
    case 143u: goto L_08A98FDC;
    case 144u: goto L_08A98FF0;
    case 145u: goto L_08A99004;
    case 146u: goto L_08A99018;
    case 147u: goto L_08A9902C;
    case 148u: goto L_08A99040;
    case 149u: goto L_08A99058;
    case 150u: goto L_08A9906C;
    case 151u: goto L_08A99080;
    case 152u: goto L_08A99094;
    case 153u: goto L_08A990A8;
    case 154u: goto L_08A990BC;
    case 155u: goto L_08A990C0;
    case 156u: goto L_08A9915C;
    case 157u: goto L_08A991A0;
    case 158u: goto L_08A991A8;
    case 159u: goto L_08A991B0;
    case 160u: goto L_08A991F8;
    case 161u: goto L_08A99200;
    case 162u: goto L_08A99208;
    case 163u: goto L_08A99210;
    case 164u: goto L_08A99258;
    case 165u: goto L_08A99354;
    case 166u: goto L_08A9935C;
    case 167u: goto L_08A99364;
    case 168u: goto L_08A9936C;
    case 169u: goto L_08A99374;
    case 170u: goto L_08A9937C;
    case 171u: goto L_08A99384;
    case 172u: goto L_08A9938C;
    case 173u: goto L_08A99450;
    case 174u: goto L_08A99454;
    case 175u: goto L_08A99468;
    case 176u: goto L_08A9949C;
    case 177u: goto L_08A994A4;
    case 178u: goto L_08A994B4;
    case 179u: goto L_08A994BC;
    case 180u: goto L_08A99580;
    case 181u: goto L_08A995C0;
    case 182u: goto L_08A995C8;
    case 183u: goto L_08A9960C;
    case 184u: goto L_08A99614;
    case 185u: goto L_08A9961C;
    case 186u: goto L_08A99664;
    case 187u: goto L_08A9966C;
    case 188u: goto L_08A99674;
    case 189u: goto L_08A9967C;
    case 190u: goto L_08A996C4;
    case 191u: goto L_08A997C0;
    case 192u: goto L_08A997C8;
    case 193u: goto L_08A997D0;
    case 194u: goto L_08A997D8;
    case 195u: goto L_08A997E0;
    case 196u: goto L_08A997E8;
    case 197u: goto L_08A997F0;
    case 198u: goto L_08A997F8;
    case 199u: goto L_08A998BC;
    case 200u: goto L_08A998C0;
    case 201u: goto L_08A998D4;
    case 202u: goto L_08A99908;
    case 203u: goto L_08A99910;
    case 204u: goto L_08A99920;
    case 205u: goto L_08A99928;
    case 206u: goto L_08A999F0;
    case 207u: goto L_08A999F8;
    case 208u: goto L_08A99A08;
    case 209u: goto L_08A99A10;
    case 210u: goto L_08A99A30;
    case 211u: goto L_08A99A40;
    case 212u: goto L_08A99A48;
    case 213u: goto L_08A99A7C;
    case 214u: goto L_08A99A80;
    case 215u: goto L_08A99AC4;
    case 216u: goto L_08A99ACC;
    case 217u: goto L_08A99AD4;
    case 218u: goto L_08A99B1C;
    case 219u: goto L_08A99B24;
    case 220u: goto L_08A99B2C;
    case 221u: goto L_08A99B34;
    case 222u: goto L_08A99B7C;
    case 223u: goto L_08A99C78;
    case 224u: goto L_08A99C80;
    case 225u: goto L_08A99C88;
    case 226u: goto L_08A99C90;
    case 227u: goto L_08A99C98;
    case 228u: goto L_08A99CA0;
    case 229u: goto L_08A99CA8;
    case 230u: goto L_08A99CB0;
    case 231u: goto L_08A99D74;
    case 232u: goto L_08A99D78;
    case 233u: goto L_08A99D8C;
    case 234u: goto L_08A99DC0;
    case 235u: goto L_08A99DC8;
    case 236u: goto L_08A99DD8;
    case 237u: goto L_08A99DE0;
    case 238u: goto L_08A99EA8;
    case 239u: goto L_08A99EB4;
    case 240u: goto L_08A99EDC;
    case 241u: goto L_08A99EE0;
    case 242u: goto L_08A99F1C;
    case 243u: goto L_08A99F2C;
    case 244u: goto L_08A99F98;
    case 245u: goto L_08A99FB0;
    case 246u: goto L_08A9A000;
    case 247u: goto L_08A9A00C;
    case 248u: goto L_08A9A014;
    case 249u: goto L_08A9A064;
    case 250u: goto L_08A9A074;
    case 251u: goto L_08A9A08C;
    case 252u: goto L_08A9A098;
    case 253u: goto L_08A9A0F4;
    case 254u: goto L_08A9A100;
    case 255u: goto L_08A9A104;
    case 256u: goto L_08A9A128;
    case 257u: goto L_08A9A12C;
    case 258u: goto L_08A9A14C;
    case 259u: goto L_08A9A194;
    case 260u: goto L_08A9A1E8;
    case 261u: goto L_08A9A1F0;
    case 262u: goto L_08A9A1FC;
    case 263u: goto L_08A9A20C;
    case 264u: goto L_08A9A214;
    case 265u: goto L_08A9A220;
    case 266u: goto L_08A9A230;
    case 267u: goto L_08A9A240;
    case 268u: goto L_08A9A250;
    case 269u: goto L_08A9A25C;
    case 270u: goto L_08A9A26C;
    case 271u: goto L_08A9A274;
    case 272u: goto L_08A9A288;
    case 273u: goto L_08A9A29C;
    case 274u: goto L_08A9A2E4;
    case 275u: goto L_08A9A2F0;
    case 276u: goto L_08A9A2FC;
    case 277u: goto L_08A9A310;
    case 278u: goto L_08A9A324;
    case 279u: goto L_08A9A338;
    case 280u: goto L_08A9A340;
    case 281u: goto L_08A9A378;
    case 282u: goto L_08A9A390;
    case 283u: goto L_08A9A3BC;
    case 284u: goto L_08A9A40C;
    case 285u: goto L_08A9A42C;
    case 286u: goto L_08A9A524;
    case 287u: goto L_08A9A584;
    case 288u: goto L_08A9A58C;
    case 289u: goto L_08A9A5F4;
    case 290u: goto L_08A9A608;
    case 291u: goto L_08A9A650;
    case 292u: goto L_08A9A67C;
    case 293u: goto L_08A9A6AC;
    case 294u: goto L_08A9A6B8;
    case 295u: goto L_08A9A6CC;
    case 296u: goto L_08A9A6D8;
    case 297u: goto L_08A9A6E8;
    case 298u: goto L_08A9A6F4;
    case 299u: goto L_08A9A708;
    case 300u: goto L_08A9A720;
    case 301u: goto L_08A9A7E0;
    case 302u: goto L_08A9A818;
    case 303u: goto L_08A9A838;
    case 304u: goto L_08A9A850;
    case 305u: goto L_08A9A854;
    case 306u: goto L_08A9A858;
    case 307u: goto L_08A9A860;
    case 308u: goto L_08A9A86C;
    case 309u: goto L_08A9A87C;
    case 310u: goto L_08A9A8A4;
    case 311u: goto L_08A9A8C4;
    case 312u: goto L_08A9A8D4;
    case 313u: goto L_08A9A8F4;
    case 314u: goto L_08A9A8FC;
    case 315u: goto L_08A9A908;
    case 316u: goto L_08A9A910;
    case 317u: goto L_08A9A91C;
    case 318u: goto L_08A9A938;
    case 319u: goto L_08A9A940;
    case 320u: goto L_08A9AA34;
    case 321u: goto L_08A9AA38;
    case 322u: goto L_08A9AA4C;
    case 323u: goto L_08A9AA70;
    case 324u: goto L_08A9AA8C;
    case 325u: goto L_08A9AA90;
    case 326u: goto L_08A9AA98;
    case 327u: goto L_08A9AAA0;
    case 328u: goto L_08A9AB98;
    case 329u: goto L_08A9AB9C;
    case 330u: goto L_08A9ABB0;
    case 331u: goto L_08A9ABD4;
    case 332u: goto L_08A9ABF0;
    case 333u: goto L_08A9ABF4;
    case 334u: goto L_08A9ABFC;
    case 335u: goto L_08A9AC00;
    case 336u: goto L_08A9AC08;
    case 337u: goto L_08A9AC10;
    case 338u: goto L_08A9AC30;
    case 339u: goto L_08A9AC78;
    case 340u: goto L_08A9AC80;
    case 341u: goto L_08A9ACCC;
    case 342u: goto L_08A9ACE8;
    case 343u: goto L_08A9ACFC;
    case 344u: goto L_08A9AD18;
    case 345u: goto L_08A9AD20;
    case 346u: goto L_08A9AD34;
    case 347u: goto L_08A9AD3C;
    case 348u: goto L_08A9AD4C;
    case 349u: goto L_08A9AD70;
    case 350u: goto L_08A9ADB4;
    case 351u: goto L_08A9ADC4;
    case 352u: goto L_08A9ADD4;
    case 353u: goto L_08A9ADF0;
    case 354u: goto L_08A9AE34;
    case 355u: goto L_08A9AE40;
    case 356u: goto L_08A9AE48;
    case 357u: goto L_08A9AE68;
    case 358u: goto L_08A9AE74;
    case 359u: goto L_08A9AE7C;
    case 360u: goto L_08A9AEA0;
    case 361u: goto L_08A9AEEC;
    case 362u: goto L_08A9AEF4;
    case 363u: goto L_08A9AEFC;
    case 364u: goto L_08A9AF1C;
    case 365u: goto L_08A9AF54;
    case 366u: goto L_08A9AF60;
    case 367u: goto L_08A9AFB0;
    case 368u: goto L_08A9AFBC;
    case 369u: goto L_08A9AFCC;
    case 370u: goto L_08A9AFD4;
    case 371u: goto L_08A9AFF4;
    case 372u: goto L_08A9B01C;
    case 373u: goto L_08A9B040;
    case 374u: goto L_08A9B048;
    case 375u: goto L_08A9B050;
    case 376u: goto L_08A9B084;
    case 377u: goto L_08A9B094;
    case 378u: goto L_08A9B098;
    case 379u: goto L_08A9B0B4;
    case 380u: goto L_08A9B0C8;
    case 381u: goto L_08A9B0E4;
    case 382u: goto L_08A9B0EC;
    case 383u: goto L_08A9B100;
    case 384u: goto L_08A9B108;
    case 385u: goto L_08A9B10C;
    case 386u: goto L_08A9B124;
    case 387u: goto L_08A9B14C;
    case 388u: goto L_08A9B154;
    case 389u: goto L_08A9B160;
    case 390u: goto L_08A9B168;
    case 391u: goto L_08A9B17C;
    case 392u: goto L_08A9B19C;
    case 393u: goto L_08A9B1D4;
    case 394u: goto L_08A9B1DC;
    case 395u: goto L_08A9B20C;
    case 396u: goto L_08A9B238;
    case 397u: goto L_08A9B264;
    case 398u: goto L_08A9B280;
    case 399u: goto L_08A9B2D8;
    case 400u: goto L_08A9B300;
    case 401u: goto L_08A9B358;
    case 402u: goto L_08A9B36C;
    case 403u: goto L_08A9B38C;
    case 404u: goto L_08A9B398;
    case 405u: goto L_08A9B3BC;
    case 406u: goto L_08A9B404;
    case 407u: goto L_08A9B40C;
    case 408u: goto L_08A9B424;
    case 409u: goto L_08A9B42C;
    case 410u: goto L_08A9B440;
    case 411u: goto L_08A9B470;
    case 412u: goto L_08A9B4B4;
    case 413u: goto L_08A9B4C0;
    case 414u: goto L_08A9B530;
    case 415u: goto L_08A9B538;
    case 416u: goto L_08A9B564;
    case 417u: goto L_08A9B574;
    case 418u: goto L_08A9B578;
    case 419u: goto L_08A9B594;
    case 420u: goto L_08A9B5A8;
    case 421u: goto L_08A9B614;
    case 422u: goto L_08A9B61C;
    case 423u: goto L_08A9B684;
    case 424u: goto L_08A9B68C;
    case 425u: goto L_08A9B6A8;
    case 426u: goto L_08A9B6E8;
    case 427u: goto L_08A9B70C;
    case 428u: goto L_08A9B728;
    case 429u: goto L_08A9B74C;
    case 430u: goto L_08A9B770;
    case 431u: goto L_08A9B778;
    case 432u: goto L_08A9B7A8;
    case 433u: goto L_08A9B7CC;
    case 434u: goto L_08A9B7EC;
    case 435u: goto L_08A9B810;
    case 436u: goto L_08A9B834;
    case 437u: goto L_08A9B83C;
    case 438u: goto L_08A9B844;
    case 439u: goto L_08A9B84C;
    case 440u: goto L_08A9B864;
    case 441u: goto L_08A9B8C0;
    case 442u: goto L_08A9B8C8;
    case 443u: goto L_08A9B8F0;
    case 444u: goto L_08A9B900;
    case 445u: goto L_08A9B924;
    case 446u: goto L_08A9B938;
    case 447u: goto L_08A9B948;
    case 448u: goto L_08A9B950;
    case 449u: goto L_08A9B974;
    case 450u: goto L_08A9B980;
    case 451u: goto L_08A9B998;
    case 452u: goto L_08A9B9A4;
    case 453u: goto L_08A9B9BC;
    case 454u: goto L_08A9B9C8;
    case 455u: goto L_08A9B9E8;
    case 456u: goto L_08A9B9F4;
    case 457u: goto L_08A9BA28;
    case 458u: goto L_08A9BA5C;
    case 459u: goto L_08A9BA78;
    case 460u: goto L_08A9BA94;
    case 461u: goto L_08A9BA9C;
    case 462u: goto L_08A9BAB8;
    case 463u: goto L_08A9BAC0;
    case 464u: goto L_08A9BACC;
    case 465u: goto L_08A9BAE0;
    case 466u: goto L_08A9BAEC;
    case 467u: goto L_08A9BAF4;
    case 468u: goto L_08A9BB08;
    case 469u: goto L_08A9BB3C;
    case 470u: goto L_08A9BB44;
    case 471u: goto L_08A9BB4C;
    case 472u: goto L_08A9BB54;
    case 473u: goto L_08A9BB64;
    case 474u: goto L_08A9BB78;
    case 475u: goto L_08A9BBA4;
    case 476u: goto L_08A9BBA8;
    case 477u: goto L_08A9BBC0;
    case 478u: goto L_08A9BBCC;
    case 479u: goto L_08A9BBD4;
    case 480u: goto L_08A9BBDC;
    case 481u: goto L_08A9BBE0;
    case 482u: goto L_08A9BC00;
    case 483u: goto L_08A9BC08;
    case 484u: goto L_08A9BC10;
    case 485u: goto L_08A9BC14;
    case 486u: goto L_08A9BC3C;
    case 487u: goto L_08A9BCC0;
    case 488u: goto L_08A9BD2C;
    case 489u: goto L_08A9BD4C;
    case 490u: goto L_08A9BD70;
    case 491u: goto L_08A9BDA0;
    case 492u: goto L_08A9BDA8;
    case 493u: goto L_08A9BDCC;
    case 494u: goto L_08A9BDD8;
    case 495u: goto L_08A9BDDC;
    case 496u: goto L_08A9BE58;
    case 497u: goto L_08A9BE78;
    case 498u: goto L_08A9BE9C;
    case 499u: goto L_08A9BEAC;
    case 500u: goto L_08A9BEB4;
    case 501u: goto L_08A9BEE0;
    case 502u: goto L_08A9BEE8;
    case 503u: goto L_08A9BEF8;
    case 504u: goto L_08A9BF00;
    case 505u: goto L_08A9BF14;
    case 506u: goto L_08A9BF34;
    case 507u: goto L_08A9BF6C;
    case 508u: goto L_08A9BF74;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A98004:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A98018;
}
}
L_08A98018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98190;
      }
      goto L_08A98020;
    }
L_08A98020:
{
    float f13 = hot_regs.f13;
    float f26 = ctx.fpr[26];
    f26 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    f26 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f26) ^ 0x80000000u);
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f26) || std::isnan(f13)) && f26 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.f13 = f13;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08A98058;
      }
      goto L_08A9803C;
    }
}
L_08A9803C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = f13;
        goto L_08A9805C;
    }
    goto L_08A98050;
}
L_08A98050:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A98068;
      }
      goto L_08A98058;
    }
L_08A98058:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A9805C;
L_08A9805C:
    hot_regs.g31 = (0x08A98064u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98064u) goto L_08A98064;
    return;
L_08A98064:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A98068;
L_08A98068:
    hot_regs.g31 = (0x08A98070u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 300u, 0x08A95FFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98070u) goto L_08A98070;
    return;
L_08A98070:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f14)) && f12 == f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A980AC;
      }
      goto L_08A98090;
    }
}
L_08A98090:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(f14)) && hot_regs.f13 == f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A980AC;
      }
      goto L_08A980A4;
    }
}
L_08A980A4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A980B8;
      }
      goto L_08A980AC;
    }
L_08A980AC:
    hot_regs.g31 = (0x08A980B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A980B4u) goto L_08A980B4;
    return;
L_08A980B4:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A980B8;
L_08A980B8:
    hot_regs.g31 = (0x08A980C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 301u, 0x08A96020u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A980C0u) goto L_08A980C0;
    return;
L_08A980C0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[26] = ctx.fpr[24] / hot_regs.f20;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A98144;
      }
      goto L_08A9812C;
    }
L_08A9812C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A98144;
}
}
L_08A98144:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    ctx.fpr[24] = ctx.fpr[24] / hot_regs.f22;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    f12 = std::sqrt(f12);
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A98190;
      }
      goto L_08A98178;
    }
}
L_08A98178:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A98190;
}
}
L_08A98190:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < -972 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < -943 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A981B0;
      }
      goto L_08A9819C;
    }
}
L_08A9819C:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[20] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A981D4;
      }
      goto L_08A981A8;
    }
L_08A981A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A981E0;
      }
      goto L_08A981B0;
    }
L_08A981B0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < -942 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A981CC;
      }
      goto L_08A981B8;
    }
L_08A981B8:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < -970 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A981D4;
      }
      goto L_08A981C4;
    }
L_08A981C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A981E0;
      }
      goto L_08A981CC;
    }
L_08A981CC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A981E0;
      }
      goto L_08A981D4;
    }
L_08A981D4:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A981F0;
      }
      goto L_08A981E0;
    }
L_08A981E0:
    hot_regs.g31 = (0x08A981E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A981E8u) goto L_08A981E8;
    return;
L_08A981E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] ^ hot_regs.g2);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g4 = g4;
    goto L_08A981F0;
}
L_08A981F0:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g2 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08A98288;
      }
      goto L_08A9820C;
    }
L_08A9820C:
    hot_regs.g2 = (hot_regs.g4 | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    { const float fs = hot_regs.f22; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    { const float fs = hot_regs.f15; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[19] & 255u);
    hot_regs.g4 = (16528u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08A98280u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 335u, 0x08A9628Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98280u) goto L_08A98280;
    return;
L_08A98280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98300;
      }
      goto L_08A98288;
    }
L_08A98288:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    { const float fs = hot_regs.f22; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14) ^ 0x80000000u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15) ^ 0x80000000u);
    ctx.gpr[8] = (ctx.gpr[19] & 255u);
    hot_regs.g4 = (16528u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08A98300u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 335u, 0x08A9628Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98300u) goto L_08A98300;
    return;
L_08A98300:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A98334:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), hot_regs.g31);
    hot_regs.g31 = (0x08A98380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 275u, 0x08A957D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98380u) goto L_08A98380;
    return;
L_08A98380:
    hot_regs.g31 = (0x08A98388u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 286u, 0x08A95ACCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98388u) goto L_08A98388;
    return;
L_08A98388:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10176)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (2280u << 16u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A983C0;
      }
      goto L_08A9839C;
    }
}
L_08A9839C:
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-12112));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-3));
    goto L_08A983A4;
L_08A983A4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(54))))));
    g8 = (g8 & hot_regs.g7);
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(g8));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g8 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A983A4;
      }
      goto L_08A983C0;
    }
}
L_08A983C0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A987D8;
      }
      goto L_08A983D0;
    }
}
L_08A983D0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (2280u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-12112));
    g6 = (17056u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), g5);
    g6 = (16840u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A983F0;
}
L_08A983F0:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54))))));
    g5 = (g5 & 2u);
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g5 = g5;
        goto L_08A987BC;
    }
    goto L_08A98404;
}
L_08A98404:
    hot_regs.g31 = (0x08A9840Cu);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 393u, 0x08A96A64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9840Cu) goto L_08A9840C;
    return;
L_08A9840C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A9841Cu);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9841Cu) goto L_08A9841C;
    return;
L_08A9841C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10176)));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A987B8;
      }
      goto L_08A98430;
    }
}
L_08A98430:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g30 = ctx.gpr[30];
    g30 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    g5 = (g5 << 6u);
    g30 = (g5 + g30);
    hot_regs.g5 = g5;
    ctx.gpr[30] = g30;
    goto L_08A9843C;
}
L_08A9843C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(50)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(50)));
    if (hot_regs.g6 != hot_regs.g7) {
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = g5;
        goto L_08A987A4;
    }
    goto L_08A98450;
}
L_08A98450:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(44)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(44)));
    if (g5 != hot_regs.g6) {
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = g5;
        goto L_08A987A4;
    }
    goto L_08A98460;
}
L_08A98460:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g30 = ctx.gpr[30];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(24)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    f24 = f12 + f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(20)));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(28)));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f20 = f14 + f15;
    g20 = (g30 | 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(0)));
    ctx.fpr[26] = f12 - f24;
    f24 = f12 + f24;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = f13 - f20;
    f20 = f13 + f20;
    g5 = (0u | 49u);
    g4 = (16880u << 16u);
    f12 = std::bit_cast<float>(g4);
    f14 = ctx.fpr[26] / ctx.fpr[28];
    f14 = f14 + f12;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    if (hot_regs.g6 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f20 = f20;
    ctx.fpr[24] = f24;
        goto L_08A984D0;
    }
    goto L_08A984D0;
}
}
L_08A984D0:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A984DC;
    }
    goto L_08A984DC;
L_08A984DC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g6 = g6;
        goto L_08A984F0;
    }
    goto L_08A984F0;
}
L_08A984F0:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f13 = hot_regs.f22 / ctx.fpr[28];
    f13 = f13 + ctx.fpr[30];
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g6 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f13 = f13;
        goto L_08A98510;
    }
    goto L_08A98510;
}
}
L_08A98510:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A9851C;
    }
    goto L_08A9851C;
L_08A9851C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[22] = (hot_regs.g4 | 0u);
    hot_regs.g6 = g6;
        goto L_08A98530;
    }
    goto L_08A98530;
}
L_08A98530:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    hot_regs.f13 = ctx.fpr[24] / ctx.fpr[28];
    f12 = hot_regs.f13 + f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g6 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_08A98550;
    }
    goto L_08A98550;
}
}
L_08A98550:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A9855C;
    }
    goto L_08A9855C;
L_08A9855C:
    ctx.gpr[21] = (0u | 49u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[21] = (hot_regs.g4 | 0u);
        goto L_08A9856C;
    }
    goto L_08A9856C;
L_08A9856C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f12 = hot_regs.f20 / ctx.fpr[28];
    f12 = f12 + ctx.fpr[30];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g6 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_08A9858C;
    }
    goto L_08A9858C;
}
}
L_08A9858C:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A98598;
    }
    goto L_08A98598;
L_08A98598:
    hot_regs.g6 = (0u | 49u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g6);
    if (hot_regs.g7 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g4);
        goto L_08A985AC;
    }
    goto L_08A985AC;
L_08A985AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 65535u);
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A985C4;
      }
      goto L_08A985BC;
    }
}
L_08A985BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A985D4;
      }
      goto L_08A985C4;
    }
L_08A985C4:
    hot_regs.g31 = (0x08A985CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A985CCu) goto L_08A985CC;
    return;
L_08A985CC:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08A985D4;
L_08A985D4:
    hot_regs.g31 = (0x08A985DCu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 263u, 0x08A95500u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A985DCu) goto L_08A985DC;
    return;
L_08A985DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A98750;
      }
      goto L_08A985F0;
    }
}
L_08A985F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    g4 = (g22 << 4u);
    g22 = (g22 + g4);
    g4 = (g4 + g22);
    g22 = (g4 + g22);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    goto L_08A98604;
}
L_08A98604:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9873C;
      }
      goto L_08A98618;
    }
L_08A98618:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    g4 = (ctx.gpr[16] + ctx.gpr[22]);
    g18 = (g4 << 6u);
    g4 = (g4 << 3u);
    g18 = (g18 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    goto L_08A9862C;
}
L_08A9862C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g4 = (g4 + ctx.gpr[18]);
    g16 = (ctx.gpr[30] | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(54))))));
    g5 = (g5 & 4u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[17] = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A986C8;
      }
      goto L_08A9865C;
    }
}
L_08A9865C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A9868Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 446u, 0x08A96F08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9868Cu) goto L_08A9868C;
    return;
L_08A9868C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A986C0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 446u, 0x08A96F08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A986C0u) goto L_08A986C0;
    return;
L_08A986C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9872C;
      }
      goto L_08A986C8;
    }
L_08A986C8:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A986F8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 429u, 0x08A96C98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A986F8u) goto L_08A986F8;
    return;
L_08A986F8:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A9872Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 429u, 0x08A96C98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9872Cu) goto L_08A9872C;
    return;
L_08A9872C:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A9862C;
      }
      goto L_08A9873C;
    }
}
L_08A9873C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(50));
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08A98604;
      }
      goto L_08A98750;
    }
}
L_08A98750:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(54))))));
    hot_regs.g4 = (hot_regs.g4 | 2u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (hot_regs.g4 << 8u);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(51)));
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(48))))));
    hot_regs.g5 = (hot_regs.g5 << 24u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(53)));
    hot_regs.g5 = (hot_regs.g5 << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(55)));
    hot_regs.g5 = (0u < hot_regs.g5 ? 1u : 0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g31 = (0x08A9879Cu);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 271u, 0x08A956D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9879Cu) goto L_08A9879C;
    return;
L_08A9879C:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(10176)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    goto L_08A987A4;
L_08A987A4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9843C;
      }
      goto L_08A987B8;
    }
}
L_08A987B8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    goto L_08A987BC;
L_08A987BC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (g6 + static_cast<std::uint32_t>(64));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g5);
    { const bool branch_taken = hot_regs.g7 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A983F0;
      }
      goto L_08A987D8;
    }
}
L_08A987D8:
    hot_regs.g31 = (0x08A987E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 281u, 0x08A959F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A987E0u) goto L_08A987E0;
    return;
L_08A987E0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10176), static_cast<std::uint16_t>(0u));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9882C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), hot_regs.g31);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g5 = (g4 << 7u);
    g4 = (g4 << 4u);
    g4 = (g5 - g4);
    g5 = (2280u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-9040));
    g16 = (g4 + g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(64)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    f22 = f12 + f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(68)));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f26 = f14 + f15;
    g5 = (g5 + static_cast<std::uint32_t>(48));
    g4 = (g4 + g5);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g17 = (g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    f20 = f12 - f22;
    f22 = f12 + f22;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = f13 - f26;
    f26 = f13 + f26;
    g5 = (0u | 49u);
    g4 = (17056u << 16u);
    f12 = std::bit_cast<float>(g4);
    f14 = f20 / f12;
    g4 = (16880u << 16u);
    f13 = std::bit_cast<float>(g4);
    f14 = f14 + f13;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f14));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    hot_regs.g6 = (16840u << 16u);
    f14 = std::bit_cast<float>(hot_regs.g6);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
    ctx.fpr[26] = f26;
        goto L_08A98914;
    }
    goto L_08A98914;
}
}
L_08A98914:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A98920;
    }
    goto L_08A98920;
L_08A98920:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
        goto L_08A98934;
    }
    goto L_08A98934;
}
L_08A98934:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 49u);
    f15 = ctx.fpr[24] / hot_regs.f12;
    f15 = f15 + hot_regs.f14;
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g4 = (std::bit_cast<std::uint32_t>(f15));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f15 = f15;
        goto L_08A98954;
    }
    goto L_08A98954;
}
}
L_08A98954:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A98960;
    }
    goto L_08A98960;
L_08A98960:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    ctx.gpr[23] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
        goto L_08A98974;
    }
    goto L_08A98974;
}
L_08A98974:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 49u);
    hot_regs.f15 = hot_regs.f22 / hot_regs.f12;
    f13 = hot_regs.f15 + f13;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
        goto L_08A98994;
    }
    goto L_08A98994;
}
}
L_08A98994:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A989A0;
    }
    goto L_08A989A0;
L_08A989A0:
    ctx.gpr[19] = (0u | 49u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[19] = (hot_regs.g4 | 0u);
        goto L_08A989B0;
    }
    goto L_08A989B0;
L_08A989B0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 49u);
    f12 = ctx.fpr[26] / f12;
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08A989D0;
    }
    goto L_08A989D0;
}
}
L_08A989D0:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08A989DC;
    }
    goto L_08A989DC;
L_08A989DC:
    ctx.gpr[20] = (0u | 49u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[20] = (hot_regs.g4 | 0u);
        goto L_08A989EC;
    }
    goto L_08A989EC;
L_08A989EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    hot_regs.g5 = (0u | 65535u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A98A10;
      }
      goto L_08A98A00;
    }
}
L_08A98A00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A98A20;
      }
      goto L_08A98A10;
    }
}
L_08A98A10:
    hot_regs.g31 = (0x08A98A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98A18u) goto L_08A98A18;
    return;
L_08A98A18:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08A98A20;
L_08A98A20:
    hot_regs.g31 = (0x08A98A28u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 263u, 0x08A95500u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98A28u) goto L_08A98A28;
    return;
L_08A98A28:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[23] << 4u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A98AF8;
      }
      goto L_08A98A38;
    }
}
L_08A98A38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 + g4);
    g4 = (g4 + g23);
    g23 = (g4 + g23);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    goto L_08A98A44;
}
L_08A98A44:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[18] + ctx.gpr[23]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A98AE8;
      }
      goto L_08A98A54;
    }
}
L_08A98A54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    g30 = (g4 << 6u);
    g4 = (g4 << 3u);
    g30 = (g30 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
    goto L_08A98A60;
}
L_08A98A60:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[23] = (hot_regs.g4 + ctx.gpr[30]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A98AA0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 429u, 0x08A96C98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98AA0u) goto L_08A98AA0;
    return;
L_08A98AA0:
    hot_regs.g4 = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A98AD4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 429u, 0x08A96C98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98AD4u) goto L_08A98AD4;
    return;
L_08A98AD4:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (g22 + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(56));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g22) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08A98A60;
      }
      goto L_08A98AE8;
    }
}
L_08A98AE8:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g21) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(50));
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08A98A44;
      }
      goto L_08A98AF8;
    }
}
L_08A98AF8:
    hot_regs.g31 = (0x08A98B00u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 266u, 0x08A95618u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98B00u) goto L_08A98B00;
    return;
L_08A98B00:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A98B40:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
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
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), g21);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), g23);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), hot_regs.g31);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g6 = (g6 << 2u);
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g6 = (g7 + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f17; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = f13 + f15;
    g23 = (g4 + static_cast<std::uint32_t>(16));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(0)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(4)));
    { const float fs = f17; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f16 = f16 + f17;
    { const float fs = f18; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f19; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f1 = std::bit_cast<float>(0x7FC00000u); else f1 = fs * ft; }
    f1 = f13 + f1;
    { const float fs = f18; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = f19; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f18 = f18 + f19;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g21 = (g4 + static_cast<std::uint32_t>(48));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(0)));
    f13 = f17 - ctx.fpr[3];
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(4)));
    f19 = ctx.fpr[4] - f19;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f19; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = f12 + f14;
    { const float fs = f13; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f19; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f17 = f13 + f17;
    f12 = f14 + f15;
    f13 = f12 - f1;
    g6 = (2236u << 16u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(-8800), std::bit_cast<std::uint32_t>(f13));
    f0 = f17 + f16;
    f19 = f0 - f18;
    g6 = (g6 + static_cast<std::uint32_t>(-8800));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f19));
    f12 = f12 + f1;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f19 = f0 + f18;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f19));
    f14 = f14 - f15;
    f19 = f14 + f1;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f19));
    f16 = f17 - f16;
    f19 = f16 + f18;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f19));
    f14 = f14 - f1;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f14));
    f14 = f16 - f18;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f14));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(8)));
    f15 = f15 - f14;
    ctx.gpr[22] = (g4 | 0u);
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[21] = g21;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    ctx.fpr[2] = f2;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
        goto L_08A98C90;
    }
    goto L_08A98C90;
}
}
L_08A98C90:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(32)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((f14 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14));
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_08A98CA8;
    }
    goto L_08A98CA8;
}
L_08A98CA8:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((hot_regs.f12 < f14));
    // nop
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = f14;
        goto L_08A98CBC;
    }
    goto L_08A98CBC;
}
L_08A98CBC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.g4 = (2236u << 16u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(-8800)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08A98CD8;
    }
    goto L_08A98CD8;
}
L_08A98CD8:
{
    float f13 = hot_regs.f13;
    float f30 = ctx.fpr[30];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(32)));
    f30 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((f13 <= f30));
    // nop
    if (!ctx.fpu_condition()) {
    f30 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    ctx.fpr[30] = f30;
        goto L_08A98CF0;
    }
    goto L_08A98CF0;
}
L_08A98CF0:
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08A98D00;
    }
    goto L_08A98D00;
L_08A98D00:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08A98D18;
    }
    goto L_08A98D18;
}
L_08A98D18:
{
    float f13 = hot_regs.f13;
    float f28 = ctx.fpr[28];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(36)));
    f28 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((f13 < f28));
    // nop
    if (ctx.fpu_condition()) {
    f28 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    ctx.fpr[28] = f28;
        goto L_08A98D30;
    }
    goto L_08A98D30;
}
L_08A98D30:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08A98D40;
    }
    goto L_08A98D40;
L_08A98D40:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08A98D58;
    }
    goto L_08A98D58;
}
L_08A98D58:
{
    float f13 = hot_regs.f13;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(36)));
    f24 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((f13 <= f24));
    // nop
    if (!ctx.fpu_condition()) {
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    ctx.fpr[24] = f24;
        goto L_08A98D74;
    }
    goto L_08A98D74;
}
}
L_08A98D74:
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08A98D84;
    }
    goto L_08A98D84;
L_08A98D84:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A14C;
      }
      goto L_08A98D90;
    }
L_08A98D90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), hot_regs.g7);
    g4 = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(54)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), g4);
    g5 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9A14C;
      }
      goto L_08A98DAC;
    }
}
L_08A98DAC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f22 = std::bit_cast<float>(0u);
    g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.fpr[26] = hot_regs.f15 - ctx.fpr[26];
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-9440));
    g30 = (2236u << 16u);
    g30 = (g30 + static_cast<std::uint32_t>(-9120));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), g4);
    g4 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), g4);
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
    goto L_08A98DE0;
}
L_08A98DE0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(220)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), hot_regs.g4);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vx2i(0u, 2u, 2u, 3u);
    ctx.execute_vfpu_vx2i(1u, 66u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<0u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
        goto L_08A9A12C;
    }
    goto L_08A98E2C;
L_08A98E2C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
        goto L_08A9A12C;
    }
    goto L_08A98E40;
L_08A98E40:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
        goto L_08A9A12C;
    }
    goto L_08A98E54;
L_08A98E54:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
        goto L_08A9A12C;
    }
    goto L_08A98E68;
L_08A98E68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(6))))));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(14))))));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9A128;
      }
      goto L_08A98E80;
    }
}
L_08A98E80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(204)));
    g4 = (g4 << 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), g4);
    hot_regs.g4 = g4;
    goto L_08A98E8C;
}
L_08A98E8C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(220)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A98EB8u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 44u, 0x08A9061Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A98EB8u) goto L_08A98EB8;
    return;
L_08A98EB8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[25] = (0u | 1u);
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g31 = (0u | 2u);
      if (branch_taken) {
          goto L_08A98F4C;
      }
      goto L_08A98F44;
    }
L_08A98F44:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_08A9A104;
      }
      goto L_08A98F4C;
    }
L_08A98F4C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A98F8C;
      }
      goto L_08A98F64;
    }
L_08A98F64:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A98F8C;
      }
      goto L_08A98F78;
    }
L_08A98F78:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9A100;
      }
      goto L_08A98F8C;
    }
L_08A98F8C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A98FC8;
      }
      goto L_08A98FA0;
    }
L_08A98FA0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A98FC8;
      }
      goto L_08A98FB4;
    }
L_08A98FB4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9A100;
      }
      goto L_08A98FC8;
    }
L_08A98FC8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A99004;
      }
      goto L_08A98FDC;
    }
L_08A98FDC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A99004;
      }
      goto L_08A98FF0;
    }
L_08A98FF0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9A100;
      }
      goto L_08A99004;
    }
L_08A99004:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A99040;
      }
      goto L_08A99018;
    }
L_08A99018:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A99040;
      }
      goto L_08A9902C;
    }
L_08A9902C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9A100;
      }
      goto L_08A99040;
    }
L_08A99040:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A99080;
      }
      goto L_08A99058;
    }
L_08A99058:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A99080;
      }
      goto L_08A9906C;
    }
L_08A9906C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9A100;
      }
      goto L_08A99080;
    }
L_08A99080:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A990C0;
      }
      goto L_08A99094;
    }
L_08A99094:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A990C0;
      }
      goto L_08A990A8;
    }
L_08A990A8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9A100;
      }
      goto L_08A990BC;
    }
L_08A990BC:
    hot_regs.g4 = (2236u << 16u);
    goto L_08A990C0;
L_08A990C0:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g30 = ctx.gpr[30];
    g5 = (2236u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-8800)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(-9440), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    g12 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    g4 = (2236u << 16u);
    aot_mem.aot_store32(g12 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(-9120), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g30 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g30 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g30 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g30 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g30 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g30 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g30 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f20));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    g2 = (0u | 160u);
    ctx.gpr[11] = (g2 + g12);
    g13 = (0u | 0u);
    g12 = (g13 + g12);
    g2 = (g2 + g30);
    g13 = (g13 + g30);
    ctx.gpr[9] = (0u | 0u);
    g4 = (g12 | 0u);
    g5 = (g13 | 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
    hot_regs.f12 = f12;
    goto L_08A9915C;
}
}
L_08A9915C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f12 = f12 - f14;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    f13 = f13 - f15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    f14 = ctx.fpr[16] - f14;
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    f15 = ctx.fpr[17] - f15;
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = f14 - f15;
    ctx.set_fpu_condition((f14 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A9935C;
      }
      goto L_08A991A0;
    }
}
}
L_08A991A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A991F8;
      }
      goto L_08A991A8;
    }
L_08A991A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A99354;
      }
      goto L_08A991B0;
    }
L_08A991B0:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g6 = (g3 << 4u);
    g7 = (hot_regs.g2 + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g6 = (ctx.gpr[11] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (ctx.gpr[11] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A99354;
      }
      goto L_08A991F8;
    }
}
}
L_08A991F8:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A99210;
      }
      goto L_08A99200;
    }
L_08A99200:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99258;
      }
      goto L_08A99208;
    }
L_08A99208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99354;
      }
      goto L_08A99210;
    }
L_08A99210:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g6 = (g3 << 4u);
    g7 = (hot_regs.g2 + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g6 = (ctx.gpr[11] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (ctx.gpr[11] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A99354;
      }
      goto L_08A99258;
    }
}
}
L_08A99258:
{
    float f0 = ctx.fpr[0];
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g11 = ctx.gpr[11];
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    f15 = f15 - f16;
    { const float fs = f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    f17 = f17 - f18;
    { const float fs = f17; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 - f17;
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f14 = f15 + f14;
    f14 = f16 / f14;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f18; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    f0 = hot_regs.f20 - f14;
    { const float fs = f19; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f15 = f17 + f19;
    g6 = (g3 << 4u);
    g7 = (hot_regs.g2 + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    { const float fs = f17; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 + f17;
    g6 = (g11 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 + f16;
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g7 = (g7 << 16u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 16u));
    g6 = (g11 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g7 << 4u);
    g8 = (hot_regs.g2 + g6);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g11 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g6 = (g7 << 4u);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (g11 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.fpr[0] = f0;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
    goto L_08A99354;
}
}
L_08A99354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[25] | 0u);
      if (branch_taken) {
          goto L_08A99454;
      }
      goto L_08A9935C;
    }
L_08A9935C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A99374;
      }
      goto L_08A99364;
    }
L_08A99364:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A99450;
      }
      goto L_08A9936C;
    }
L_08A9936C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99450;
      }
      goto L_08A99374;
    }
L_08A99374:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9938C;
      }
      goto L_08A9937C;
    }
L_08A9937C:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99450;
      }
      goto L_08A99384;
    }
L_08A99384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99450;
      }
      goto L_08A9938C;
    }
L_08A9938C:
{
    float f0 = ctx.fpr[0];
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    f15 = f15 - f16;
    { const float fs = f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    f17 = f17 - f18;
    { const float fs = f17; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 - f17;
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f14 = f15 + f14;
    f14 = f16 / f14;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f18; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    f0 = hot_regs.f20 - f14;
    { const float fs = f19; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f15 = f17 + f19;
    g6 = (g3 << 4u);
    g7 = (hot_regs.g2 + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    { const float fs = f17; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 + f17;
    g6 = (ctx.gpr[11] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 + f16;
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (ctx.gpr[11] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.fpr[0] = f0;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08A99450;
      }
      goto L_08A99450;
    }
}
}
L_08A99450:
    ctx.gpr[8] = (hot_regs.g31 | 0u);
    goto L_08A99454;
L_08A99454:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (static_cast<std::int32_t>(g9) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A9915C;
      }
      goto L_08A99468;
    }
}
L_08A99468:
{
    float f14 = hot_regs.f14;
    float f16 = ctx.fpr[16];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    f16 = f16 - ctx.fpr[17];
    { const float fs = f16; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 - f16;
    ctx.set_fpu_condition((f14 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08A994A4;
      }
      goto L_08A9949C;
    }
}
L_08A9949C:
    { const bool branch_taken = ctx.gpr[8] == hot_regs.g31;
    // nop
      if (branch_taken) {
          goto L_08A994BC;
      }
      goto L_08A994A4;
    }
L_08A994A4:
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A99580;
      }
      goto L_08A994B4;
    }
L_08A994B4:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[25];
    // nop
      if (branch_taken) {
          goto L_08A99580;
      }
      goto L_08A994BC;
    }
L_08A994BC:
{
    float f0 = ctx.fpr[0];
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    g4 = (g12 + static_cast<std::uint32_t>(64));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    f15 = f15 - f16;
    { const float fs = f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    f17 = f17 - f18;
    { const float fs = f17; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 - f17;
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f14 = f15 + f14;
    f14 = f16 / f14;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(0)));
    { const float fs = f18; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g5 = (g13 + static_cast<std::uint32_t>(64));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    f0 = hot_regs.f20 - f14;
    { const float fs = ctx.fpr[19]; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = f17 + f15;
    g6 = (g3 << 4u);
    g7 = (hot_regs.g2 + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    { const float fs = f17; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 + f17;
    g5 = (ctx.gpr[11] + g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 + f16;
    g4 = (g3 << 4u);
    g5 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g5 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g4 = (ctx.gpr[11] + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.fpr[0] = f0;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    goto L_08A99580;
}
}
L_08A99580:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g13 = ctx.gpr[13];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    g13 = (0u | 160u);
    ctx.gpr[14] = (g13 + g4);
    g13 = (g13 + ctx.gpr[30]);
    ctx.gpr[15] = (hot_regs.g31 | 0u);
    hot_regs.g2 = (ctx.gpr[3] | 0u);
    ctx.gpr[3] = (0u | 0u);
    g10 = (0u | 0u);
    ctx.gpr[9] = (g10 + g4);
    ctx.gpr[12] = (ctx.gpr[14] | 0u);
    g10 = (g10 + ctx.gpr[30]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(hot_regs.g2) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[24] = (ctx.gpr[25] | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[10] = g10;
    ctx.gpr[13] = g13;
      if (branch_taken) {
          goto L_08A998D4;
      }
      goto L_08A995C0;
    }
}
L_08A995C0:
    hot_regs.g4 = (ctx.gpr[14] | 0u);
    hot_regs.g5 = (ctx.gpr[13] | 0u);
    goto L_08A995C8;
L_08A995C8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f12 = f12 - f14;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f13 = f13 - f15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    f14 = ctx.fpr[16] - f14;
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    f15 = ctx.fpr[17] - f15;
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = f14 - f15;
    ctx.set_fpu_condition((f14 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A997C8;
      }
      goto L_08A9960C;
    }
}
}
L_08A9960C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A99664;
      }
      goto L_08A99614;
    }
L_08A99614:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A997C0;
      }
      goto L_08A9961C;
    }
L_08A9961C:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g6 = (g3 << 4u);
    g7 = (ctx.gpr[10] + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g6 = (ctx.gpr[9] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (ctx.gpr[9] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A997C0;
      }
      goto L_08A99664;
    }
}
}
L_08A99664:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9967C;
      }
      goto L_08A9966C;
    }
L_08A9966C:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A996C4;
      }
      goto L_08A99674;
    }
L_08A99674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A997C0;
      }
      goto L_08A9967C;
    }
L_08A9967C:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g6 = (g3 << 4u);
    g7 = (ctx.gpr[10] + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g6 = (ctx.gpr[9] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (ctx.gpr[9] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A997C0;
      }
      goto L_08A996C4;
    }
}
}
L_08A996C4:
{
    float f0 = ctx.fpr[0];
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f15 = f15 - f16;
    { const float fs = f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    f17 = f17 - f18;
    { const float fs = f17; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 - f17;
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f14 = f15 + f14;
    f14 = f16 / f14;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f18; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    f0 = hot_regs.f20 - f14;
    { const float fs = f19; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f15 = f17 + f19;
    g6 = (g3 << 4u);
    g7 = (ctx.gpr[10] + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    { const float fs = f17; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 + f17;
    g6 = (g9 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 + f16;
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g7 = (g7 << 16u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 16u));
    g6 = (g9 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g7 << 4u);
    g8 = (ctx.gpr[10] + g6);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g9 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g6 = (g7 << 4u);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (g9 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.fpr[0] = f0;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
    goto L_08A997C0;
}
}
L_08A997C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[25] | 0u);
      if (branch_taken) {
          goto L_08A998C0;
      }
      goto L_08A997C8;
    }
L_08A997C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A997E0;
      }
      goto L_08A997D0;
    }
L_08A997D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A998BC;
      }
      goto L_08A997D8;
    }
L_08A997D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A998BC;
      }
      goto L_08A997E0;
    }
L_08A997E0:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A997F8;
      }
      goto L_08A997E8;
    }
L_08A997E8:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A998BC;
      }
      goto L_08A997F0;
    }
L_08A997F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A998BC;
      }
      goto L_08A997F8;
    }
L_08A997F8:
{
    float f0 = ctx.fpr[0];
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f15 = f15 - f16;
    { const float fs = f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    f17 = f17 - f18;
    { const float fs = f17; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 - f17;
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f14 = f15 + f14;
    f14 = f16 / f14;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f18; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    f0 = hot_regs.f20 - f14;
    { const float fs = f19; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f15 = f17 + f19;
    g6 = (g3 << 4u);
    g7 = (ctx.gpr[10] + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    { const float fs = f17; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 + f17;
    g6 = (ctx.gpr[9] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 + f16;
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (ctx.gpr[9] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.fpr[0] = f0;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08A998BC;
      }
      goto L_08A998BC;
    }
}
}
L_08A998BC:
    ctx.gpr[8] = (hot_regs.g31 | 0u);
    goto L_08A998C0;
L_08A998C0:
{
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (g11 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (static_cast<std::int32_t>(g11) < static_cast<std::int32_t>(hot_regs.g2) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08A995C8;
      }
      goto L_08A998D4;
    }
}
L_08A998D4:
{
    float f14 = hot_regs.f14;
    float f16 = ctx.fpr[16];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    f16 = f16 - ctx.fpr[17];
    { const float fs = f16; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 - f16;
    ctx.set_fpu_condition((f14 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08A99910;
      }
      goto L_08A99908;
    }
}
L_08A99908:
    { const bool branch_taken = ctx.gpr[8] == hot_regs.g31;
    // nop
      if (branch_taken) {
          goto L_08A99928;
      }
      goto L_08A99910;
    }
L_08A99910:
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A999F0;
      }
      goto L_08A99920;
    }
L_08A99920:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[25];
    // nop
      if (branch_taken) {
          goto L_08A999F0;
      }
      goto L_08A99928;
    }
L_08A99928:
{
    float f0 = ctx.fpr[0];
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g13 = ctx.gpr[13];
    g4 = (hot_regs.g2 << 4u);
    g5 = (ctx.gpr[14] + g4);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f15 = f15 - f16;
    { const float fs = f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    f17 = f17 - f18;
    { const float fs = f17; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 - f17;
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f14 = f15 + f14;
    f14 = f16 / f14;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(0)));
    { const float fs = f18; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g4 = (g13 + g4);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    f0 = hot_regs.f20 - f14;
    { const float fs = ctx.fpr[19]; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = f17 + f15;
    g6 = (g3 << 4u);
    g7 = (ctx.gpr[10] + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    { const float fs = f17; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 + f17;
    g4 = (ctx.gpr[9] + g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 + f16;
    g4 = (g3 << 4u);
    g5 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g5 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g4 = (ctx.gpr[9] + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.fpr[0] = f0;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    goto L_08A999F0;
}
}
L_08A999F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[15]) >= 0;
    ctx.gpr[8] = (ctx.gpr[15] & 1u);
      if (branch_taken) {
          goto L_08A99A08;
      }
      goto L_08A999F8;
    }
L_08A999F8:
{
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.g4 = (0u - g8);
    g8 = (hot_regs.g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 16u));
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A99A10;
      }
      goto L_08A99A08;
    }
}
L_08A99A08:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 << 16u);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 16u));
    ctx.gpr[8] = g8;
    goto L_08A99A10;
}
L_08A99A10:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    hot_regs.g5 = (g8 << 7u);
    hot_regs.g6 = (g8 << 5u);
    g2 = (hot_regs.g5 + hot_regs.g6);
    ctx.gpr[12] = (g2 + hot_regs.g4);
    g2 = (g2 + ctx.gpr[30]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[24]) >= 0;
    g8 = (ctx.gpr[24] & 1u);
    hot_regs.g2 = g2;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A99A40;
      }
      goto L_08A99A30;
    }
}
L_08A99A30:
{
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.g5 = (0u - g8);
    g8 = (hot_regs.g5 << 16u);
    { const bool branch_taken = 0u == 0u;
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 16u));
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A99A48;
      }
      goto L_08A99A40;
    }
}
L_08A99A40:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 << 16u);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 16u));
    ctx.gpr[8] = g8;
    goto L_08A99A48;
}
L_08A99A48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[10] = (ctx.gpr[3] | 0u);
    ctx.gpr[3] = (0u | 0u);
    hot_regs.g5 = (g8 << 7u);
    hot_regs.g6 = (g8 << 5u);
    g18 = (hot_regs.g5 + hot_regs.g6);
    ctx.gpr[17] = (g18 + g4);
    ctx.gpr[11] = (ctx.gpr[12] | 0u);
    g18 = (g18 + ctx.gpr[30]);
    g8 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[12] | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A99D8C;
      }
      goto L_08A99A7C;
    }
}
L_08A99A7C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    goto L_08A99A80;
L_08A99A80:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f12 = f12 - f14;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f13 = f13 - f15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    f14 = ctx.fpr[16] - f14;
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    f15 = ctx.fpr[17] - f15;
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = f14 - f15;
    ctx.set_fpu_condition((f14 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A99C80;
      }
      goto L_08A99AC4;
    }
}
}
L_08A99AC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A99B1C;
      }
      goto L_08A99ACC;
    }
L_08A99ACC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A99C78;
      }
      goto L_08A99AD4;
    }
L_08A99AD4:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g6 = (g3 << 4u);
    g7 = (ctx.gpr[18] + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g6 = (ctx.gpr[17] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (ctx.gpr[17] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A99C78;
      }
      goto L_08A99B1C;
    }
}
}
L_08A99B1C:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A99B34;
      }
      goto L_08A99B24;
    }
L_08A99B24:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99B7C;
      }
      goto L_08A99B2C;
    }
L_08A99B2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99C78;
      }
      goto L_08A99B34;
    }
L_08A99B34:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g6 = (g3 << 4u);
    g7 = (ctx.gpr[18] + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g6 = (ctx.gpr[17] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (ctx.gpr[17] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A99C78;
      }
      goto L_08A99B7C;
    }
}
}
L_08A99B7C:
{
    float f0 = ctx.fpr[0];
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g17 = ctx.gpr[17];
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    f15 = f15 - f16;
    { const float fs = f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    f17 = f17 - f18;
    { const float fs = f17; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 - f17;
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f14 = f15 + f14;
    f14 = f16 / f14;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f18; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    f0 = hot_regs.f20 - f14;
    { const float fs = f19; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f15 = f17 + f19;
    g6 = (g3 << 4u);
    g7 = (ctx.gpr[18] + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    { const float fs = f17; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 + f17;
    g6 = (g17 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 + f16;
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g7 = (g7 << 16u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 16u));
    g6 = (g17 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g7 << 4u);
    g8 = (ctx.gpr[18] + g6);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g17 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g6 = (g7 << 4u);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (g17 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.fpr[0] = f0;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
    goto L_08A99C78;
}
}
L_08A99C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[25] | 0u);
      if (branch_taken) {
          goto L_08A99D78;
      }
      goto L_08A99C80;
    }
L_08A99C80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A99C98;
      }
      goto L_08A99C88;
    }
L_08A99C88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A99D74;
      }
      goto L_08A99C90;
    }
L_08A99C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99D74;
      }
      goto L_08A99C98;
    }
L_08A99C98:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A99CB0;
      }
      goto L_08A99CA0;
    }
L_08A99CA0:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99D74;
      }
      goto L_08A99CA8;
    }
L_08A99CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99D74;
      }
      goto L_08A99CB0;
    }
L_08A99CB0:
{
    float f0 = ctx.fpr[0];
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    f15 = f15 - f16;
    { const float fs = f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    f17 = f17 - f18;
    { const float fs = f17; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 - f17;
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f14 = f15 + f14;
    f14 = f16 / f14;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f18; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    f0 = hot_regs.f20 - f14;
    { const float fs = f19; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f15 = f17 + f19;
    g6 = (g3 << 4u);
    g7 = (ctx.gpr[18] + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    { const float fs = f17; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 + f17;
    g6 = (ctx.gpr[17] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 + f16;
    g6 = (g3 << 4u);
    g7 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g7 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g6 = (ctx.gpr[17] + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.gpr[3] = g3;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.fpr[0] = f0;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08A99D74;
      }
      goto L_08A99D74;
    }
}
}
L_08A99D74:
    ctx.gpr[8] = (hot_regs.g31 | 0u);
    goto L_08A99D78;
L_08A99D78:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (static_cast<std::int32_t>(g9) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A99A80;
      }
      goto L_08A99D8C;
    }
}
L_08A99D8C:
{
    float f14 = hot_regs.f14;
    float f16 = ctx.fpr[16];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    f16 = f16 - ctx.fpr[17];
    { const float fs = f16; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 - f16;
    ctx.set_fpu_condition((f14 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08A99DC8;
      }
      goto L_08A99DC0;
    }
}
L_08A99DC0:
    { const bool branch_taken = ctx.gpr[8] == hot_regs.g31;
    // nop
      if (branch_taken) {
          goto L_08A99DE0;
      }
      goto L_08A99DC8;
    }
L_08A99DC8:
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A99EA8;
      }
      goto L_08A99DD8;
    }
L_08A99DD8:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[25];
    // nop
      if (branch_taken) {
          goto L_08A99EA8;
      }
      goto L_08A99DE0;
    }
L_08A99DE0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (ctx.gpr[10] << 4u);
    g5 = (ctx.gpr[12] + g4);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    f15 = f15 - f16;
    { const float fs = f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    f17 = f17 - f18;
    { const float fs = f17; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f13 - f12;
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f12 = f12 + f14;
    f12 = f16 / f12;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (g2 + g4);
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-16)));
    f18 = hot_regs.f20 - f12;
    { const float fs = f17; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = f13 + f14;
    g6 = (g3 << 4u);
    g7 = (ctx.gpr[18] + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(4)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    { const float fs = f15; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f13 = f13 + f15;
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    { const float fs = f14; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = f13 + f14;
    g4 = (ctx.gpr[17] + g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-12)));
    { const float fs = f15; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f12 = f12 + f15;
    g4 = (g3 << 4u);
    g5 = (g3 + static_cast<std::uint32_t>(1));
    g3 = (g5 << 16u);
    g3 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g3) >> 16u));
    g4 = (ctx.gpr[17] + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    goto L_08A99EA8;
}
}
L_08A99EA8:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A100;
      }
      goto L_08A99EB4;
    }
L_08A99EB4:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
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
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[20] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A99F1C;
      }
      goto L_08A99EDC;
    }
L_08A99EDC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08A99EE0;
L_08A99EE0:
{
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    { const float fs = f15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f13 = f13 + f15;
    f13 = hot_regs.f12 - f13;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    f13 = f13 / ctx.fpr[17];
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A99EE0;
      }
      goto L_08A99F1C;
    }
}
}
L_08A99F1C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A99F98;
      }
      goto L_08A99F2C;
    }
}
L_08A99F2C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const float fs = f14; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = f13 + f14;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(0)));
    f13 = f13 + f16;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(4)));
    f12 = f12 + f16;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(8)));
    f12 = f12 + f13;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08A99F2C;
      }
      goto L_08A99F98;
    }
}
}
L_08A99F98:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10148)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10144)));
    g16 = (hot_regs.g4 ^ hot_regs.g5);
    g16 = (0u < g16 ? 1u : 0u);
    { const bool branch_taken = g16 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A9A000;
      }
      goto L_08A99FB0;
    }
}
L_08A99FB0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    g5 = (g4 + static_cast<std::uint32_t>(-20));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    g6 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(16)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g5);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    g4 = (g4 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10148), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_08A9A000;
}
}
L_08A9A000:
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A9A00Cu);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 264u, 0x08A95544u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A00Cu) goto L_08A9A00C;
    return;
L_08A9A00C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A064;
      }
      goto L_08A9A014;
    }
L_08A9A014:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    g5 = (g4 + static_cast<std::uint32_t>(-20));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    g6 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(16)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g5);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10148)));
    g4 = (g4 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(10148), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_08A9A064;
}
}
L_08A9A064:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10148)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A9A074u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 264u, 0x08A95544u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A074u) goto L_08A9A074;
    return;
L_08A9A074:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[16] = (0u | 2u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    g5 = (0u | 32u);
    ctx.gpr[18] = (ctx.gpr[18] + g5);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9A0F4;
      }
      goto L_08A9A08C;
    }
}
L_08A9A08C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A9A098u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 264u, 0x08A95544u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A098u) goto L_08A9A098;
    return;
L_08A9A098:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10148)));
    g5 = (g4 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10148), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(12)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(16)));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g6);
    g16 = (g16 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A9A08C;
      }
      goto L_08A9A0F4;
    }
}
}
L_08A9A0F4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A9A100u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 264u, 0x08A95544u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A100u) goto L_08A9A100;
    return;
L_08A9A100:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(204)));
    goto L_08A9A104;
L_08A9A104:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    g5 = (g5 + static_cast<std::uint32_t>(8));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), g4);
    g4 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A98E8C;
      }
      goto L_08A9A128;
    }
}
L_08A9A128:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
    goto L_08A9A12C;
L_08A9A12C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    g5 = (g5 + static_cast<std::uint32_t>(16));
    g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), g4);
    { const bool branch_taken = g6 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A98DE0;
      }
      goto L_08A9A14C;
    }
}
L_08A9A14C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9A194:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), hot_regs.g31);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(11142))))));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A9A608;
      }
      goto L_08A9A1E8;
    }
}
L_08A9A1E8:
    hot_regs.g31 = (0x08A9A1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A1F0u) goto L_08A9A1F0;
    return;
L_08A9A1F0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A608;
      }
      goto L_08A9A1FC;
    }
L_08A9A1FC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A9A608;
      }
      goto L_08A9A20C;
    }
L_08A9A20C:
    hot_regs.g31 = (0x08A9A214u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A214u) goto L_08A9A214;
    return;
L_08A9A214:
    hot_regs.g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A9A608;
      }
      goto L_08A9A220;
    }
L_08A9A220:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g6 = (0u | 6u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A9A608;
      }
      goto L_08A9A230;
    }
L_08A9A230:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g6 = (0u | 5u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A9A608;
      }
      goto L_08A9A240;
    }
L_08A9A240:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g6 = (0u | 1u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A9A608;
      }
      goto L_08A9A250;
    }
L_08A9A250:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A9A608;
      }
      goto L_08A9A25C;
    }
L_08A9A25C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A9A288;
      }
      goto L_08A9A26C;
    }
L_08A9A26C:
    hot_regs.g31 = (0x08A9A274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A274u) goto L_08A9A274;
    return;
L_08A9A274:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 58u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9A608;
      }
      goto L_08A9A288;
    }
}
L_08A9A288:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (2280u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9A608;
      }
      goto L_08A9A29C;
    }
}
L_08A9A29C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-592));
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(32));
    g4 = (16128u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    g4 = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(48));
    g4 = (16281u << 16u);
    g4 = (g4 | 39322u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    g4 = (16528u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08A9A2E4;
}
L_08A9A2E4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A5F4;
      }
      goto L_08A9A2F0;
    }
L_08A9A2F0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A5F4;
      }
      goto L_08A9A2FC;
    }
L_08A9A2FC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A9A338;
      }
      goto L_08A9A310;
    }
}
L_08A9A310:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A9A338;
      }
      goto L_08A9A324;
    }
}
L_08A9A324:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A9A5F4;
      }
      goto L_08A9A338;
    }
}
L_08A9A338:
    hot_regs.g31 = (0x08A9A340u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A340u) goto L_08A9A340;
    return;
L_08A9A340:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9A5F4;
      }
      goto L_08A9A378;
    }
L_08A9A378:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const float fs = f13; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A9A3BC;
      }
      goto L_08A9A390;
    }
}
L_08A9A390:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(11142))))));
    g5 = (g4 << 2u);
    g4 = (g4 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g5 = (g5 >> 29u);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g21 = (g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g21 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g21) >> 16u));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08A9A40C;
      }
      goto L_08A9A3BC;
    }
}
L_08A9A3BC:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    f13 = f13 - f14;
    f13 = f13 / f14;
    f13 = ctx.fpr[26] - f13;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(11142))))));
    g5 = (g4 << 2u);
    g4 = (g4 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g5 = (g5 >> 29u);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g21 = (g4 << 16u);
    g21 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g21) >> 16u));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A9A40C;
}
}
L_08A9A40C:
    hot_regs.f12 = ctx.fpr[26] / hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    hot_regs.g31 = (0x08A9A42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A42Cu) goto L_08A9A42C;
    return;
L_08A9A42C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = f13 - f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    { const float fs = f15; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = f14 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f14));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (g4 << 2u);
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g5 = (g4 << 2u);
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + static_cast<std::uint32_t>(16));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f12 = f12 - f15;
    g5 = (g4 << 2u);
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g4 << 2u);
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + static_cast<std::uint32_t>(16));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f15 = f16 - f15;
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (g4 << 2u);
    g4 = (g6 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f16 = f12 - f16;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const float fs = f17; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f13 = f13 - f17;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const float fs = f13; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f14 - f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f13));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[18] <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = f15; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08A9A58C;
      }
      goto L_08A9A524;
    }
}
}
L_08A9A524:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5068)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.g4 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08A9A584u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 335u, 0x08A9628Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A584u) goto L_08A9A584;
    return;
L_08A9A584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A5F4;
      }
      goto L_08A9A58C;
    }
L_08A9A58C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5068)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14) ^ 0x80000000u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15) ^ 0x80000000u);
    hot_regs.g4 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08A9A5F4u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 335u, 0x08A9628Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A5F4u) goto L_08A9A5F4;
    return;
L_08A9A5F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7908)));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A9A2E4;
      }
      goto L_08A9A608;
    }
}
L_08A9A608:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9A650:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15) ^ 0x80000000u);
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08A9A67C;
    }
    goto L_08A9A67C;
}
}
L_08A9A67C:
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-5072)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-5071)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-5070)));
    hot_regs.g5 = (15948u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (0u | 6u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[11] = (0u | 2048u);
    hot_regs.g31 = (0x08A9A6ACu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 572u, 0x088ABA2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A6ACu) goto L_08A9A6AC;
    return;
L_08A9A6AC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9A6B8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0))))));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9A6CC:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (2218u << 16u);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(-22836));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9A6D8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A9A6E8u);
    // nop
    hot_regs.g29 = g29;
    goto L_08A9A6CC;
}
L_08A9A6E8:
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
L_08A9A6F4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A9A708u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_08A9A6CC;
}
L_08A9A708:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (g2 ^ ctx.gpr[16]);
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9A720:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2234u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(31168));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(108), hot_regs.g4);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (2237u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = (0u | 65535u);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(hot_regs.g6));
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(14));
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(48), 0u);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x08A9A7E0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 680u, 0x08B6F014u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A7E0u) goto L_08A9A7E0;
    return;
L_08A9A7E0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(88), 0u);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(92), 0u);
    hot_regs.g31 = (0x08A9A818u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 680u, 0x08B6F014u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A818u) goto L_08A9A818;
    return;
L_08A9A818:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(104), 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08A9A854;
      }
      goto L_08A9A838;
    }
}
L_08A9A838:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    g7 = (static_cast<std::int32_t>(g7) < 0 ? 1u : 0u);
    g7 = (g7 ^ 1u);
    g7 = (g7 & 255u);
    { const bool branch_taken = g7 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A9A858;
      }
      goto L_08A9A850;
    }
}
L_08A9A850:
    hot_regs.g4 = (0u | 1u);
    goto L_08A9A854;
L_08A9A854:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A9A858;
L_08A9A858:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A86C;
      }
      goto L_08A9A860;
    }
L_08A9A860:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g6 + static_cast<std::uint32_t>(96));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A9A86C;
}
L_08A9A86C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9A87C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A9AC10;
      }
      goto L_08A9A8A4;
    }
}
L_08A9A8A4:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(31168));
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), hot_regs.g4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A9A8C4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 710u, 0x08ADEDA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A8C4u) goto L_08A9A8C4;
    return;
L_08A9A8C4:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (g16 + static_cast<std::uint32_t>(56));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[20] = (g16 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A9A8FC;
      }
      goto L_08A9A8D4;
    }
}
L_08A9A8D4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(52)));
    g5 = (hot_regs.g6 ^ g5);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9A8FC;
      }
      goto L_08A9A8F4;
    }
}
L_08A9A8F4:
    hot_regs.g31 = (0x08A9A8FCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 679u, 0x088BB360u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A8FCu) goto L_08A9A8FC;
    return;
L_08A9A8FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A938;
      }
      goto L_08A9A908;
    }
L_08A9A908:
    hot_regs.g31 = (0x08A9A910u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A910u) goto L_08A9A910;
    return;
L_08A9A910:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A938;
      }
      goto L_08A9A91C;
    }
L_08A9A91C:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(24));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A9A938u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9A938u) goto L_08A9A938;
    return;
L_08A9A938:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AA98;
      }
      goto L_08A9A940;
    }
L_08A9A940:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g5);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    g5 = (g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g6);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g6 = (g29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g7 = (g29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g4);
    g4 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g4);
    g5 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    g4 = (g29 + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g5);
    g6 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    g5 = (g29 + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g6);
    g6 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g6);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g6 ^ g7);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    if (g6 == 0u) {
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
        goto L_08A9AA90;
    }
    goto L_08A9AA34;
}
L_08A9AA34:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    goto L_08A9AA38;
L_08A9AA38:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    g7 = (g7 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = g7 != ctx.gpr[8];
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A9AA70;
      }
      goto L_08A9AA4C;
    }
}
L_08A9AA4C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    g7 = (g7 + static_cast<std::uint32_t>(4));
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g8);
    g7 = (g8 + static_cast<std::uint32_t>(128));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A9AA70;
}
L_08A9AA70:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g6 = (g6 ^ hot_regs.g7);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    g6 = (hot_regs.g4 | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A9AA38;
      }
      goto L_08A9AA8C;
    }
}
L_08A9AA8C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    goto L_08A9AA90;
L_08A9AA90:
    hot_regs.g31 = (0x08A9AA98u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 671u, 0x08B6EF9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9AA98u) goto L_08A9AA98;
    return;
L_08A9AA98:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    hot_regs.g4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08A9AC00;
      }
      goto L_08A9AAA0;
    }
L_08A9AAA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g5);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g6);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), g4);
    g5 = (g29 + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), g6);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g6 = (g29 + static_cast<std::uint32_t>(116));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g5 = (g29 + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g6 = (g29 + static_cast<std::uint32_t>(148));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), g4);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g4 = (g29 + static_cast<std::uint32_t>(164));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), g5);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    g5 = (g29 + static_cast<std::uint32_t>(180));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), g7);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), g6);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g6 ^ g7);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    if (g6 == 0u) {
    g4 = (ctx.gpr[20] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
        goto L_08A9ABF4;
    }
    goto L_08A9AB98;
}
L_08A9AB98:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    goto L_08A9AB9C;
L_08A9AB9C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    g7 = (g7 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = g7 != ctx.gpr[8];
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A9ABD4;
      }
      goto L_08A9ABB0;
    }
}
L_08A9ABB0:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    g7 = (g7 + static_cast<std::uint32_t>(4));
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g8);
    g7 = (g8 + static_cast<std::uint32_t>(128));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A9ABD4;
}
L_08A9ABD4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g6 = (g6 ^ hot_regs.g7);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    g6 = (hot_regs.g4 | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A9AB9C;
      }
      goto L_08A9ABF0;
    }
}
L_08A9ABF0:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    goto L_08A9ABF4;
L_08A9ABF4:
    hot_regs.g31 = (0x08A9ABFCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 671u, 0x08B6EF9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9ABFCu) goto L_08A9ABFC;
    return;
L_08A9ABFC:
    hot_regs.g4 = (ctx.gpr[17] & 1u);
    goto L_08A9AC00;
L_08A9AC00:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AC10;
      }
      goto L_08A9AC08;
    }
L_08A9AC08:
    hot_regs.g31 = (0x08A9AC10u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9AC10u) goto L_08A9AC10;
    return;
L_08A9AC10:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9AC30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    g16 = (g4 | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(48))))));
    g5 = (g16 + static_cast<std::uint32_t>(10));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g18);
    g4 = (g4 ^ g5);
    g18 = (2237u << 16u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (g16 + static_cast<std::uint32_t>(56));
    g4 = (g4 & 255u);
    g18 = (g18 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    goto L_08A9AC78;
}
L_08A9AC78:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AD3C;
      }
      goto L_08A9AC80;
    }
L_08A9AC80:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g4 = (g6 - g4);
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(22))))));
    g4 = (g4 - g6);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g4 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A9AD3C;
      }
      goto L_08A9ACCC;
    }
}
L_08A9ACCC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(40));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A9ACE8u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9ACE8u) goto L_08A9ACE8;
    return;
L_08A9ACE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    g4 = (g4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = hot_regs.g5 == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9AD18;
      }
      goto L_08A9ACFC;
    }
}
L_08A9ACFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 + static_cast<std::uint32_t>(8));
    g4 = (g4 ^ g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9AD34;
      }
      goto L_08A9AD18;
    }
}
L_08A9AD18:
    hot_regs.g31 = (0x08A9AD20u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 773u, 0x08B6FBE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9AD20u) goto L_08A9AD20;
    return;
L_08A9AD20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    g4 = (g4 ^ hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A9AD34;
}
L_08A9AD34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AC78;
      }
      goto L_08A9AD3C;
    }
L_08A9AD3C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(48))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A9AD4Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9AD4Cu) goto L_08A9AD4C;
    return;
L_08A9AD4C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9AD70:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(48))))));
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x08A9ADB4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9ADB4u) goto L_08A9ADB4;
    return;
L_08A9ADB4:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A9ADC4u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9ADC4u) goto L_08A9ADC4;
    return;
L_08A9ADC4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A9ADD4u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    goto L_08A9B9F4;
L_08A9ADD4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9ADF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g6));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(16))))));
    g6 = (g4 + static_cast<std::uint32_t>(10));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(16))))));
    g6 = (g4 + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A9AE34u);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    goto L_08A9B6A8;
}
L_08A9AE34:
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
L_08A9AE40:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AE48:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A9AE68u);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9AE68u) goto L_08A9AE68;
    return;
L_08A9AE68:
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
L_08A9AE74:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AE7C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g7 = (hot_regs.g5 ^ hot_regs.g6);
    g7 = (g7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g7 = (g7 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A9AEF4;
      }
      goto L_08A9AEA0;
    }
}
L_08A9AEA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g7);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g8);
    g9 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g6);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    g5 = (g4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g9);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    g9 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g4 = (g29 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = g9 == g7;
    g6 = (g8 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A9AEFC;
      }
      goto L_08A9AEEC;
    }
}
L_08A9AEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08A9AF1C;
      }
      goto L_08A9AEF4;
    }
L_08A9AEF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AF54;
      }
      goto L_08A9AEFC;
    }
L_08A9AEFC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g6 = (g6 + static_cast<std::uint32_t>(-4));
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g6);
    g8 = (g7 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g8);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g8);
    g8 = (hot_regs.g4 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A9AF1C;
}
L_08A9AF1C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g6);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08A9AF54u);
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 703u, 0x08B6F238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9AF54u) goto L_08A9AF54;
    return;
L_08A9AF54:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9AF60:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(52))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(16))))));
    g5 = (g6 - g5);
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g5 = (static_cast<std::int32_t>(g5) < 0 ? 1u : 0u);
    g5 = (g5 & 255u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A9AFBC;
      }
      goto L_08A9AFB0;
    }
}
L_08A9AFB0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(52))))));
    hot_regs.g31 = (0x08A9AFBCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A9B470;
L_08A9AFBC:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    hot_regs.g31 = (0x08A9AFCCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 20u, 0x08ADC150u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9AFCCu) goto L_08A9AFCC;
    return;
L_08A9AFCC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B040;
      }
      goto L_08A9AFD4;
    }
L_08A9AFD4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(48))))));
    g5 = (g5 ^ g6);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g5 & 255u);
    { const bool branch_taken = g6 != 0u;
    g5 = (g16 + static_cast<std::uint32_t>(12));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A9B01C;
      }
      goto L_08A9AFF4;
    }
}
L_08A9AFF4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(18))))));
    g6 = (hot_regs.g4 - g6);
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    g6 = (static_cast<std::int32_t>(g6) < 0 ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A9B040;
      }
      goto L_08A9B01C;
    }
}
L_08A9B01C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (g16 + static_cast<std::uint32_t>(56));
    g4 = (g4 ^ g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9B048;
      }
      goto L_08A9B040;
    }
}
L_08A9B040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B10C;
      }
      goto L_08A9B048;
    }
L_08A9B048:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B108;
      }
      goto L_08A9B050;
    }
L_08A9B050:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    g18 = (g4 << 16u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    g4 = (hot_regs.g6 - g18);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g4 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A9B108;
      }
      goto L_08A9B084;
    }
}
L_08A9B084:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A9B098;
      }
      goto L_08A9B094;
    }
L_08A9B094:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    goto L_08A9B098;
L_08A9B098:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(40));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A9B0B4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B0B4u) goto L_08A9B0B4;
    return;
L_08A9B0B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    g4 = (g4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = hot_regs.g5 == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9B0E4;
      }
      goto L_08A9B0C8;
    }
}
L_08A9B0C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 + static_cast<std::uint32_t>(8));
    g4 = (g4 ^ g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9B100;
      }
      goto L_08A9B0E4;
    }
}
L_08A9B0E4:
    hot_regs.g31 = (0x08A9B0ECu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 773u, 0x08B6FBE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B0ECu) goto L_08A9B0EC;
    return;
L_08A9B0EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    g4 = (g4 ^ hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A9B100;
}
L_08A9B100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B048;
      }
      goto L_08A9B108;
    }
L_08A9B108:
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[18]));
    goto L_08A9B10C;
L_08A9B10C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9B124:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g6 = (hot_regs.g7 - g6);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g8 = (g8 >> 29u);
    g6 = (g6 + g8);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g6 = (hot_regs.g5 + g6);
    { const bool branch_taken = static_cast<std::int32_t>(g6) < 0;
    g8 = (static_cast<std::int32_t>(g6) < 16 ? 1u : 0u);
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A9B160;
      }
      goto L_08A9B14C;
    }
}
L_08A9B14C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    hot_regs.g5 = (hot_regs.g5 << 3u);
      if (branch_taken) {
          goto L_08A9B160;
      }
      goto L_08A9B154;
    }
L_08A9B154:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g7 + g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9B1D4;
      }
      goto L_08A9B160;
    }
}
L_08A9B160:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) <= 0;
    hot_regs.g5 = (0u - hot_regs.g6);
      if (branch_taken) {
          goto L_08A9B17C;
      }
      goto L_08A9B168;
    }
L_08A9B168:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 4u));
    g5 = (g5 >> 28u);
    g5 = (hot_regs.g6 + g5);
    { const bool branch_taken = 0u == 0u;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 4u));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9B19C;
      }
      goto L_08A9B17C;
    }
}
L_08A9B17C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 4u));
    g5 = (g5 >> 28u);
    g5 = (g5 - hot_regs.g6);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 4u));
    g5 = (0u - g5);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = g5;
    goto L_08A9B19C;
}
L_08A9B19C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g8 = (g5 << 2u);
    g7 = (g7 + g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g8);
    g5 = (g5 << 4u);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (hot_regs.g6 - g5);
    g8 = (g8 + static_cast<std::uint32_t>(128));
    g5 = (g5 << 3u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g8);
    g5 = (g7 + g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A9B1D4;
}
L_08A9B1D4:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B1DC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(160))))));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), hot_regs.g31);
    hot_regs.g31 = (0x08A9B20Cu);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(164))))));
    hot_regs.g29 = g29;
    goto L_08A9AF60;
}
L_08A9B20C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(160))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(164))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(76))))));
    g4 = (hot_regs.g5 - g4);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g4 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9B40C;
      }
      goto L_08A9B238;
    }
}
L_08A9B238:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), hot_regs.g5);
    hot_regs.g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), hot_regs.g7);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(128))))));
    goto L_08A9B264;
}
L_08A9B264:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), hot_regs.g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A9B280u);
    hot_regs.g5 = (0u | 1u);
    goto L_08A9B124;
}
L_08A9B280:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g4);
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(8)));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g4);
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g6);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g4);
    g4 = (hot_regs.g7 ^ g5);
    g4 = (0u < g4 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g6);
    g5 = (g4 & 255u);
    { const bool branch_taken = g5 == 0u;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A9B398;
      }
      goto L_08A9B2D8;
    }
}
L_08A9B2D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), g5);
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A9B300u);
    g5 = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A9B124;
}
L_08A9B300:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g4);
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g4);
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(8)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g4);
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(164))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g19 = (g4 << 16u);
    g19 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g19) >> 16u));
    g4 = (hot_regs.g6 - g19);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g4 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g4 & 255u);
    { const bool branch_taken = g5 == 0u;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A9B398;
      }
      goto L_08A9B358;
    }
}
L_08A9B358:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 + static_cast<std::uint32_t>(8));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g4);
    { const bool branch_taken = g4 != hot_regs.g6;
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9B38C;
      }
      goto L_08A9B36C;
    }
}
L_08A9B36C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g7 = (g7 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g6);
    g6 = (g6 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), hot_regs.g4);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08A9B38C;
}
L_08A9B38C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08A9B264;
      }
      goto L_08A9B398;
    }
L_08A9B398:
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A9B3BCu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B3BCu) goto L_08A9B3BC;
    return;
L_08A9B3BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(160))))));
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(132), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(130))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(132))))));
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (hot_regs.g5 - hot_regs.g6);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (hot_regs.g5 << 16u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 16u));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A9B404u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B404u) goto L_08A9B404;
    return;
L_08A9B404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(160))))));
      if (branch_taken) {
          goto L_08A9B42C;
      }
      goto L_08A9B40C;
    }
L_08A9B40C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A9B424u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B424u) goto L_08A9B424;
    return;
L_08A9B424:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(160))))));
    goto L_08A9B42C;
L_08A9B42C:
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[19]));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A9B440u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 16u, 0x08A9C3BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B440u) goto L_08A9B440;
    return;
L_08A9B440:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9B470:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(32))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(0))))));
    g5 = (hot_regs.g6 - g5);
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g5 = (static_cast<std::int32_t>(g5) < 0 ? 1u : 0u);
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A9B4C0;
      }
      goto L_08A9B4B4;
    }
}
L_08A9B4B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A9B4C0;
}
L_08A9B4C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(44)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    g4 = (g4 - g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 2u));
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    g5 = (g5 >> 30u);
    g4 = (g4 + g5);
    g6 = (g6 - g7);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(2))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    g8 = (g5 >> 29u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 2u));
    g6 = (g6 + g8);
    g4 = (g4 << 4u);
    g7 = (g7 - g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 3u));
    g4 = (g4 + g6);
    g6 = (g8 >> 29u);
    g6 = (g7 + g6);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g4 = (g4 + g6);
    g4 = (g4 + static_cast<std::uint32_t>(-16));
    ctx.gpr[17] = (g16 + static_cast<std::uint32_t>(16));
    g4 = (g4 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A9B530;
}
L_08A9B530:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B68C;
      }
      goto L_08A9B538;
    }
L_08A9B538:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(32))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    g18 = (g4 << 16u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    g4 = (hot_regs.g6 - g18);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g4 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A9B68C;
      }
      goto L_08A9B564;
    }
}
L_08A9B564:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A9B578;
      }
      goto L_08A9B574;
    }
L_08A9B574:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    goto L_08A9B578;
L_08A9B578:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(40));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A9B594u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B594u) goto L_08A9B594;
    return;
L_08A9B594:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A9B614;
      }
      goto L_08A9B5A8;
    }
L_08A9B5A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(44)));
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    g8 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    g6 = (g6 - g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 2u));
    g7 = (g7 >> 30u);
    ctx.gpr[9] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    g6 = (g6 + g7);
    g7 = (g8 - ctx.gpr[9]);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 3u));
    g8 = (g8 >> 29u);
    g5 = (g5 + static_cast<std::uint32_t>(8));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 2u));
    g7 = (g7 + g8);
    g6 = (g6 << 4u);
    g4 = (g4 - g5);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 3u));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g6 = (g6 + g7);
    g7 = (g8 >> 29u);
    g4 = (g4 + g7);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g4 = (g6 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A9B684;
      }
      goto L_08A9B614;
    }
}
L_08A9B614:
    hot_regs.g31 = (0x08A9B61Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 773u, 0x08B6FBE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B61Cu) goto L_08A9B61C;
    return;
L_08A9B61C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(44)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    g4 = (g4 - g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 2u));
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    g5 = (g5 >> 30u);
    g4 = (g4 + g5);
    g6 = (g6 - g7);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    g8 = (g5 >> 29u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 2u));
    g6 = (g6 + g8);
    g4 = (g4 << 4u);
    g7 = (g7 - g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 3u));
    g4 = (g4 + g6);
    g6 = (g8 >> 29u);
    g6 = (g7 + g6);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g4 = (g4 + g6);
    g4 = (g4 + static_cast<std::uint32_t>(-16));
    g4 = (g4 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A9B684;
}
L_08A9B684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B530;
      }
      goto L_08A9B68C;
    }
L_08A9B68C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9B6A8:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g16);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    hot_regs.g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), hot_regs.g31);
    ctx.gpr[8] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g9 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g9);
    g9 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g9);
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08A9B6E8;
}
L_08A9B6E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g5);
    g4 = (ctx.gpr[8] ^ g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g6);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g7);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9B778;
      }
      goto L_08A9B70C;
    }
}
L_08A9B70C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(40));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A9B728u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B728u) goto L_08A9B728;
    return;
L_08A9B728:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    g9 = (g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g9);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = g9 != ctx.gpr[8];
    hot_regs.g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A9B770;
      }
      goto L_08A9B74C;
    }
}
L_08A9B74C:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    g9 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g8);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g9);
    g8 = (g9 + static_cast<std::uint32_t>(128));
    g9 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g8);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g9);
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_08A9B770;
}
L_08A9B770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A9B6E8;
      }
      goto L_08A9B778;
    }
L_08A9B778:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g4);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    hot_regs.g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A9B7A8;
}
L_08A9B7A8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g6);
    g5 = (hot_regs.g4 ^ g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g7);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9B83C;
      }
      goto L_08A9B7CC;
    }
}
L_08A9B7CC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(40));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A9B7ECu);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B7ECu) goto L_08A9B7EC;
    return;
L_08A9B7EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[9] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g4 = (g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    hot_regs.g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = g4 != ctx.gpr[9];
    ctx.gpr[8] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9B834;
      }
      goto L_08A9B810;
    }
}
L_08A9B810:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g9 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g9);
    g4 = (g9 + static_cast<std::uint32_t>(128));
    g9 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g9);
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    goto L_08A9B834;
}
L_08A9B834:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A9B7A8;
      }
      goto L_08A9B83C;
    }
L_08A9B83C:
    hot_regs.g31 = (0x08A9B844u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 730u, 0x08B6F90Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B844u) goto L_08A9B844;
    return;
L_08A9B844:
    hot_regs.g31 = (0x08A9B84Cu);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 730u, 0x08B6F90Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B84Cu) goto L_08A9B84C;
    return;
L_08A9B84C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9B864:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g8);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g5);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(44)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    g6 = (g8 ^ g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    g6 = (0u < g6 ? 1u : 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(32))))));
    g6 = (g6 & 255u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
    goto L_08A9B8C0;
}
L_08A9B8C0:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B938;
      }
      goto L_08A9B8C8;
    }
L_08A9B8C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    g4 = (hot_regs.g5 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g6 = (g6 ^ g4);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A9B938;
      }
      goto L_08A9B8F0;
    }
}
L_08A9B8F0:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (g8 + static_cast<std::uint32_t>(8));
    g8 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = g6 != g8;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), g6);
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A9B924;
      }
      goto L_08A9B900;
    }
}
L_08A9B900:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g8);
    g6 = (g8 + static_cast<std::uint32_t>(128));
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g8);
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    goto L_08A9B924;
}
L_08A9B924:
{
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g6 = (ctx.gpr[8] ^ hot_regs.g7);
    g6 = (0u < g6 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g6 = (g6 & 255u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A9B8C0;
      }
      goto L_08A9B938;
    }
}
L_08A9B938:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(hot_regs.g4));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9B948:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B950:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (2237u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A9B974u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 765u, 0x08ADF130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B974u) goto L_08A9B974;
    return;
L_08A9B974:
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
L_08A9B980:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(3))))));
    hot_regs.g4 = (2237u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A9B998u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B998u) goto L_08A9B998;
    return;
L_08A9B998:
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
L_08A9B9A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2237u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A9B9BCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 650u, 0x08ADE91Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B9BCu) goto L_08A9B9BC;
    return;
L_08A9B9BC:
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
L_08A9B9C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(hot_regs.g6));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2237u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A9B9E8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 650u, 0x08ADE91Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9B9E8u) goto L_08A9B9E8;
    return;
L_08A9B9E8:
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
L_08A9B9F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    g5 = (g5 ^ hot_regs.g7);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A9BA5C;
      }
      goto L_08A9BA28;
    }
}
L_08A9BA28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(48))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(28))))));
    g4 = (hot_regs.g5 - g4);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g4 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9BA9C;
      }
      goto L_08A9BA5C;
    }
}
L_08A9BA5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(48))))));
    g4 = (0u | 1u);
    g4 = (hot_regs.g5 + g4);
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(g4));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(30))))));
    hot_regs.g31 = (0x08A9BA78u);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    goto L_08A9AF60;
}
L_08A9BA78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(48))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g5 = (g5 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = g4 != g5;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9BAC0;
      }
      goto L_08A9BA94;
    }
}
L_08A9BA94:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A9BAEC;
      }
      goto L_08A9BA9C;
    }
L_08A9BA9C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(40));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A9BAB8u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9BAB8u) goto L_08A9BAB8;
    return;
L_08A9BAB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BAF4;
      }
      goto L_08A9BAC0;
    }
L_08A9BAC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = g4;
        goto L_08A9BAE0;
    }
    goto L_08A9BACC;
}
L_08A9BACC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A9BAE0;
}
L_08A9BAE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A9BAF4;
      }
      goto L_08A9BAEC;
    }
}
L_08A9BAEC:
    hot_regs.g31 = (0x08A9BAF4u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 753u, 0x08B6FA30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9BAF4u) goto L_08A9BAF4;
    return;
L_08A9BAF4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9BB08:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == g19;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A9BB4C;
      }
      goto L_08A9BB3C;
    }
}
L_08A9BB3C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9BB54;
      }
      goto L_08A9BB44;
    }
L_08A9BB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BC00;
      }
      goto L_08A9BB4C;
    }
L_08A9BB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BC14;
      }
      goto L_08A9BB54;
    }
L_08A9BB54:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A9BB64u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 679u, 0x088BB360u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9BB64u) goto L_08A9BB64;
    return;
L_08A9BB64:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    g5 = (g5 - hot_regs.g4);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9BBA8;
      }
      goto L_08A9BB78;
    }
}
L_08A9BB78:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g6 = (g6 - g7);
    g7 = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(g6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g6 = (ctx.lo);
    { const bool branch_taken = g7 != g6;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A9BBA8;
      }
      goto L_08A9BBA4;
    }
}
L_08A9BBA4:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A9BBA8;
L_08A9BBA8:
{
    std::uint32_t g5 = hot_regs.g5;
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (0u | 0u);
    g5 = (ctx.lo);
    g5 = (ctx.gpr[21] < g5 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[22] = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9BC00;
      }
      goto L_08A9BBC0;
    }
}
L_08A9BBC0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 + ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9BBDC;
      }
      goto L_08A9BBCC;
    }
}
L_08A9BBCC:
    hot_regs.g31 = (0x08A9BBD4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 620u, 0x088BAF70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A9BBD4u) goto L_08A9BBD4;
    return;
L_08A9BBD4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A9BBE0;
      }
      goto L_08A9BBDC;
    }
L_08A9BBDC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A9BBE0;
L_08A9BBE0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    g5 = (g5 - hot_regs.g4);
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g21 = (g21 + static_cast<std::uint32_t>(1));
    g5 = (ctx.lo);
    g5 = (g21 < g5 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(56));
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08A9BBC0;
      }
      goto L_08A9BC00;
    }
}
L_08A9BC00:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BC10;
      }
      goto L_08A9BC08;
    }
L_08A9BC08:
    hot_regs.g31 = (0x08A9BC10u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A9AE7C;
L_08A9BC10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    goto L_08A9BC14;
L_08A9BC14:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A9BC3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g6);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g6);
    g5 = (g29 + static_cast<std::uint32_t>(32));
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g6);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g6);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g6);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g5);
    ctx.gpr[11] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(192))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g2);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[10]);
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(48));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    goto L_08A9BCC0;
}
L_08A9BCC0:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g29 = hot_regs.g29;
    g12 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g12);
    g12 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g12);
    g12 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g12);
    g12 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g12);
    g12 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), hot_regs.g4);
    g13 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g12);
    ctx.gpr[15] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g12 = (ctx.gpr[14] ^ g12);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g13);
    g12 = (g12 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g13 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g12 = (g12 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[15]);
    g12 = (g12 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g12 = (g12 & 255u);
    { const bool branch_taken = g12 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g13);
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
      if (branch_taken) {
          goto L_08A9BDD8;
      }
      goto L_08A9BD2C;
    }
}
L_08A9BD2C:
{
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), hot_regs.g5);
    g12 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), hot_regs.g4);
    ctx.gpr[13] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    if (g12 != ctx.gpr[13]) {
    g12 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[12] = g12;
        goto L_08A9BD70;
    }
    goto L_08A9BD4C;
}
L_08A9BD4C:
{
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g29 = hot_regs.g29;
    g12 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    g12 = (g12 + static_cast<std::uint32_t>(-4));
    g13 = (aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g12);
    g12 = (g13 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g13);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g12);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g12);
    g12 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
    goto L_08A9BD70;
}
L_08A9BD70:
{
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(ctx.gpr[8]));
    g12 = (g12 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g12);
    g12 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g12 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(112))))));
    g12 = (g12 ^ ctx.gpr[13]);
    g12 = (g12 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g12 = (g12 & 255u);
    g12 = (g12 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g12 = (g12 & 255u);
    if (g12 == 0u) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    ctx.gpr[12] = g12;
        goto L_08A9BDDC;
    }
    goto L_08A9BDA0;
}
L_08A9BDA0:
    { const bool branch_taken = hot_regs.g7 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A9BDCC;
      }
      goto L_08A9BDA8;
    }
L_08A9BDA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 + static_cast<std::uint32_t>(-4));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g5);
    g5 = (g5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g5);
    hot_regs.g7 = (g5 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A9BDCC;
}
L_08A9BDCC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), g7);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A9BCC0;
      }
      goto L_08A9BDD8;
    }
}
L_08A9BDD8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    goto L_08A9BDDC;
L_08A9BDDC:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), hot_regs.g2);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), g11);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), g10);
    g8 = (g29 + static_cast<std::uint32_t>(116));
    g9 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g9);
    g9 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g9);
    g9 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g9);
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g8);
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), hot_regs.g4);
    g9 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g10 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), g8);
    g11 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g8 = (g10 ^ g8);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g9);
    g8 = (g8 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g9 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g8 = (g8 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), g11);
    g8 = (g8 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g8 = (g8 & 255u);
    { const bool branch_taken = g8 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g9);
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08A9BEAC;
      }
      goto L_08A9BE58;
    }
}
L_08A9BE58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), hot_regs.g5);
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = g7 != g4;
    g4 = (g7 + static_cast<std::uint32_t>(-8));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A9BE9C;
      }
      goto L_08A9BE78;
    }
}
L_08A9BE78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    g4 = (g4 + static_cast<std::uint32_t>(-4));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), g4);
    g7 = (g5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), g7);
    g4 = (g7 + static_cast<std::uint32_t>(-8));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    goto L_08A9BE9C;
}
L_08A9BE9C:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = g4;
    goto L_08A9BEAC;
}
L_08A9BEAC:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9BEB4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (0u - g5);
    g5 = (hot_regs.g6 - g8);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 3u));
    g8 = (g8 >> 29u);
    g5 = (g5 + g8);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 3u));
    g5 = (hot_regs.g7 + g5);
    { const bool branch_taken = static_cast<std::int32_t>(g5) < 0;
    g8 = (static_cast<std::int32_t>(g5) < 16 ? 1u : 0u);
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A9BEF8;
      }
      goto L_08A9BEE0;
    }
}
L_08A9BEE0:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BEF8;
      }
      goto L_08A9BEE8;
    }
L_08A9BEE8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g7 << 3u);
    g5 = (hot_regs.g6 + g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A9BF6C;
      }
      goto L_08A9BEF8;
    }
}
L_08A9BEF8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    hot_regs.g6 = (0u - hot_regs.g5);
      if (branch_taken) {
          goto L_08A9BF14;
      }
      goto L_08A9BF00;
    }
L_08A9BF00:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 4u));
    g6 = (g6 >> 28u);
    g6 = (hot_regs.g5 + g6);
    { const bool branch_taken = 0u == 0u;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 4u));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A9BF34;
      }
      goto L_08A9BF14;
    }
}
L_08A9BF14:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 4u));
    g6 = (g6 >> 28u);
    g6 = (g6 - hot_regs.g5);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 4u));
    g6 = (0u - g6);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = g6;
    goto L_08A9BF34;
}
L_08A9BF34:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g8 = (g6 << 2u);
    g7 = (g7 + g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g8);
    g6 = (g6 << 4u);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (g5 - g6);
    g8 = (g8 + static_cast<std::uint32_t>(128));
    g5 = (g5 << 3u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g8);
    g5 = (g7 + g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A9BF6C;
}
L_08A9BF6C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9BF74:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    g8 = (g7 | 0u);
    g7 = (g5 | 0u);
    g5 = (g8 | 0u);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g8);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g7);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g7);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g7);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g7);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g6);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g6);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g7 = (g29 + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g6);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g6);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g5);
    g5 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g5);
    g5 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    g6 = (g29 + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
    ctx.pc = 0x08A9C000u; return;}

}

void recomp_unit_0165(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0165_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_165(Runtime &runtime) {
    runtime.register_generated_unit(165u, 0x08A98000u, 16384u, &recomp_unit_0165, &recomp_unit_0165_entry);
    runtime.register_function(0x08A98004u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98018u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98020u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9803Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98050u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98058u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9805Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98064u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98068u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98070u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98090u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9812Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98144u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98178u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98190u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9819Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9820Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98280u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98288u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98300u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98334u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98380u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98388u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9839Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98404u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9840Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9841Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98430u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9843Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98450u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98460u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A984F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98510u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9851Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98530u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98550u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9855Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9856Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9858Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98598u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A985F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98604u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98618u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9862Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9865Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9868Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9872Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9873Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98750u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9879Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A987E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9882Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98914u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98920u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98934u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98954u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98960u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98974u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98994u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98AF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98B40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98C90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98D90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98DE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E68u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98E8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98EB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99004u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99018u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9902Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99040u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99058u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9906Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99080u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99094u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9915Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99200u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99208u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99210u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99258u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99354u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9935Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99364u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9936Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99374u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9937Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99384u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9938Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99450u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99454u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99468u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9949Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99580u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9960Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99614u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9961Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99664u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9966Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99674u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9967Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99908u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99910u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99920u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99928u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A999F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99ACCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A000u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A00Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A014u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A064u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A074u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A08Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A098u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A0F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A100u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A104u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A128u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A12Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A14Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A194u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A1E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A1F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A1FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A20Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A214u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A220u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A230u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A240u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A250u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A25Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A26Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A274u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A288u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A29Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A310u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A324u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A338u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A340u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A378u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A390u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A40Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A42Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A524u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A584u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A58Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A608u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A650u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A67Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A708u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A720u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A818u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A838u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A850u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A854u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A858u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A860u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A86Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A87Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A908u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A910u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A91Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A938u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A940u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AA98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE68u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B01Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B040u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B048u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B050u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B084u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B094u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B098u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B100u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B108u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B10Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B124u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B14Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B154u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B160u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B168u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B17Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B19Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B20Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B238u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B264u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B280u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B300u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B358u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B36Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B38Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B398u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B404u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B40Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B424u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B42Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B440u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B470u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B530u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B538u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B564u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B574u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B578u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B594u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B614u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B61Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B684u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B68Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B70Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B728u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B74Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B770u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B778u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B810u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B834u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B83Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B844u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B84Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B864u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B900u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B924u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B938u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B948u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B950u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B974u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B980u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B998u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BACCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BEACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BEB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BEE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BEE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BEF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF74u, &recomp_unit_0165, "recomp_unit_0165");
}
} // namespace psprecomp
